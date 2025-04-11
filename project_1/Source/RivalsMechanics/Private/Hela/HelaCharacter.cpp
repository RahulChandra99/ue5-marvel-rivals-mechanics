#include "Hela/HelaCharacter.h"

#include "Components/CapsuleComponent.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Hela/HelaPrimaryProjectile.h"
#include "Kismet/GameplayStatics.h"

AHelaCharacter::AHelaCharacter()
{
	BirdMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bird Mesh"));
	BirdMesh->SetupAttachment(GetCapsuleComponent());
	
	bIsReloading = false;
	bIsAttackOnCooldown = false;

	Ammunition = 8;
	FireRate = 0.2f; 
	DamageDone = 30.f;
	MaxRange = 5000.f;
	MaxHealth = 250.f;
	CurrentMontageIndex = 0;

	
}

void AHelaCharacter::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth;
	bIsTraveling = false;

	PlayerController = GetWorld()->GetFirstPlayerController();
	BirdMesh->SetVisibility(false);
}

void AHelaCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Handle travel movement
	TravelMovement(DeltaTime);
}

#pragma region ShiftTeleportAbility

void AHelaCharacter::TeleportBird()
{
	if (bIsTraveling) return;
	UE_LOG(LogTemp, Warning, TEXT("Working"));
	bIsTraveling = true;
	// Enable flying movement mode
	GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	GetCharacterMovement()->MaxFlySpeed = TravelSpeed;
	
	//disable inputs
	PlayerController->DisableInput(PlayerController);
	//stop the looking input
	PlayerController->SetIgnoreLookInput(true);
	//stop rotation  of movement
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	
	//reduce capsule collider size
	GetCapsuleComponent()->SetCapsuleSize(37.f,37.f);
	//hide mesh
	GetMesh()->SetVisibility(false);
	//bird fx
	BirdMesh->SetVisibility(true);
	
	

	GetWorld()->GetTimerManager().SetTimer(ActionTimerHandleEnd, this, &AHelaCharacter::TeleportBirdEnd,3.f,false);
}


void AHelaCharacter::TeleportBirdEnd()
{
	if (!bIsTraveling) return;

	bIsTraveling = false;

	//disable inputs
	PlayerController->EnableInput(PlayerController);
	//stop the looking input
	PlayerController->SetIgnoreLookInput(false);
	//stop rotation  of movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	
	// Revert to normal movement mode
	GetCharacterMovement()->SetMovementMode(MOVE_Walking);
	//normal capsule collider size
	GetCapsuleComponent()->SetCapsuleSize(42.f, 96.0f);
	//show mesh
	GetMesh()->SetVisibility(true);
	//hide bird
	BirdMesh->SetVisibility(false);	
	
}

void AHelaCharacter::TravelMovement(float DeltaTime)
{
	if (bIsTraveling && PlayerController)
	{
		// Get the camera's forward direction
		FVector CameraForward = PlayerController->PlayerCameraManager->GetActorForwardVector();

		// Normalize and apply movement in the forward direction
		FVector MovementDirection = CameraForward.GetSafeNormal();
		AddMovementInput(MovementDirection, 1.0f);
	}
}

#pragma endregion

#pragma region LMBAbility

void AHelaCharacter::PrimaryPullTrigger()
{
	if (bIsAttackOnCooldown || bIsReloading)
		return;

	if (Ammunition > 0)
	{
		UAnimMontage* SelectedMontage = nullptr;
		USoundBase* SoundToPlay = nullptr;
		// Select the appropriate montage based on the index
		switch (CurrentMontageIndex)
		{
		case 0:
			SelectedMontage = PrimaryAttackMontageOne;
			SoundToPlay = SFXOne;
			FireRate = 0.3f;
			break;
		case 1:
			SelectedMontage = PrimaryAttackMontageTwo;
			SoundToPlay = SFXTwo;
			FireRate = 0.07f;
			break;
		case 2:
			SelectedMontage = PrimaryAttackMontageOne;
			SoundToPlay = SFXOne;
			FireRate = 0.3f;
			break;
		case 3:
			SelectedMontage = PrimaryAttackMontageThree;
			SoundToPlay = SFXThree;
			FireRate = 0.1f;
			break;
		default:
			SelectedMontage = PrimaryAttackMontageOne;
			break;
		}

		UGameplayStatics::SpawnSound2D(GetWorld(), SoundToPlay);
		PlayAnimMontage(SelectedMontage);

		// Cycle through the montages
		CurrentMontageIndex = (CurrentMontageIndex + 1) % 4;

		GetWorldTimerManager().SetTimer(TimerHandle_PrimaryAttack, this, &AHelaCharacter::PrimaryAttack_TimeElapsed, FireRate);
		GetWorldTimerManager().SetTimer(TimerHandle_AttackCooldown, this, &AHelaCharacter::MiniCooldown, FireRate);
		bIsAttackOnCooldown = true;
	}
	else
	{
		ReloadPrimary();
	}
}

void AHelaCharacter::PrimaryAttack_TimeElapsed()
{
	if (Ammunition > 0 && ProjectileClass)
	{

		FVector HandLocation = GetMesh()->GetSocketLocation(PrimaryAttackSocket);
		FVector CameraLocation;
		FRotator CameraRotation;
		GetController()->GetPlayerViewPoint(CameraLocation, CameraRotation);

		FVector CrosshairWorldLocation = CameraLocation + (CameraRotation.Vector() * 10000.0f);
		FVector Direction = (CrosshairWorldLocation - HandLocation).GetSafeNormal();
		FTransform SpawnTM = FTransform(GetControlRotation(), HandLocation);

		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParameters.Instigator = this;

		AActor* SpawnedProjectile = GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParameters);
		if (!IsValid(SpawnedProjectile))
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to spawn projectile. Check ProjectileClass."));
			return;
		}

		Ammunition--;

		// Perform line trace from the spawned projectile's position
		FVector ProjectileLocation = SpawnedProjectile->GetActorLocation();
		FRotator ProjectileRotation = SpawnedProjectile->GetActorRotation();

		FVector EndPoint = ProjectileLocation + ProjectileRotation.Vector() * MaxRange;
		FVector ShotDirection = -ProjectileRotation.Vector();
		

		/*AActor* HitActor = PrimaryHitResult.GetActor();
		if (IsValid(HitActor) && HitActor->ActorHasTag("Enemy"))
		{
			ACharacter* OwnerCharacterRef = Cast<ACharacter>(GetOwner());
			AController* OwnerControllerRef = OwnerCharacterRef->GetController();
			
			UE_LOG(LogTemp, Warning, TEXT("Enemy Health: %f"), Health);
			HitActor = nullptr;
			
			/*FPointDamageEvent DamageEvent(40, PrimaryHitResult, ShotDirection, nullptr);
			HitActor->TakeDamage(DamageDone, DamageEvent, OwnerControllerRef, this);#1#

			
		}*/
	}
}

void AHelaCharacter::MiniCooldown()
{
	bIsAttackOnCooldown = false;
}

void AHelaCharacter::BigCooldown()
{
	bIsAttackOnCooldown = false;
	if (Ammunition < 8)
	{
		bIsReloading = false;
		Ammunition = 8;
	}
}

void AHelaCharacter::ReloadPrimary()
{
	if(Ammunition < 8)
	{
		bIsAttackOnCooldown = true;
		PlayAnimMontage(ReloadMontage);
		UGameplayStatics::SpawnSound2D(GetWorld(), SFXReload);
		GetWorldTimerManager().SetTimer(TimerHandle_AttackCooldown, this, &AHelaCharacter::BigCooldown, 2.f);
		bIsReloading = true;
	}
	
}

int32 AHelaCharacter::GetPrimaryAmmunition() const
{
	return Ammunition;
}

#pragma endregion 

#pragma region EAbility

void AHelaCharacter::EAbility()
{
	//play montage
	PlayAnimMontage(EAbilityMontage);
	GetWorldTimerManager().SetTimer(TimerHandle_EAbility,
		this,
		&AHelaCharacter::EAbility_TimeElapsed, 0.23f);
	
}


void AHelaCharacter::EAbility_TimeElapsed()
{
	//spawn projectile
	FVector HandLocation = GetMesh()->GetSocketLocation(PrimaryAttackSocket);
	FVector CameraLocation;
	FRotator CameraRotation;
	GetController()->GetPlayerViewPoint(CameraLocation, CameraRotation);

	FVector CrosshairWorldLocation = CameraLocation + (CameraRotation.Vector() * 10000.0f);
	FVector Direction = (CrosshairWorldLocation - HandLocation).GetSafeNormal();
	FTransform SpawnTM = FTransform(GetControlRotation(), HandLocation);

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParameters.Instigator = this;

	AActor* SpawnedProjectile = GetWorld()->SpawnActor<AActor>(EAbilityProjectileClass, SpawnTM, SpawnParameters);
	if (!IsValid(SpawnedProjectile))
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to spawn projectile. Check ProjectileClass."));
		return;
	}
	//spawn impact effect - in blueprints
	
	//stun enemy
	
}

#pragma endregion 

#pragma region RMBAbility

void AHelaCharacter::RMBAbility()
{
	//play montage
	PlayAnimMontage(RMBAbilityMontage);
	GetWorldTimerManager().SetTimer(TimerHandle_RMBAbility,
		this,
		&AHelaCharacter::RMBAbility_TimeElapsed, 0.4f);
	
}

void AHelaCharacter::RMBAbility_TimeElapsed()
{
	//with delay run projectile system on centre of screen from centre of player mesh
	FVector HandLocation = GetMesh()->GetSocketLocation("spine_01");
	FVector CameraLocation;
	FRotator CameraRotation;
	GetController()->GetPlayerViewPoint(CameraLocation, CameraRotation);

	FVector CrosshairWorldLocation = CameraLocation + (CameraRotation.Vector() * 10000.0f);
	FVector Direction = (CrosshairWorldLocation - HandLocation).GetSafeNormal();
	FTransform SpawnTM = FTransform(Direction.Rotation(), HandLocation);

	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParameters.Instigator = this;

	AActor* SpawnedProjectile = GetWorld()->SpawnActor<AActor>(RMBAbilityProjectileClass, SpawnTM, SpawnParameters);
	if (!IsValid(SpawnedProjectile))
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to spawn projectile. Check ProjectileClass."));
		return;
	}
	//cause some damage
	
	//show impact effect - blueprints
	
	//after some time double the damage if hit
	
	//spawn impact effect -blueprints
	
}

#pragma endregion 


#pragma region Health

bool AHelaCharacter::IsDead() const
{
	return Health <= 0;
}

float AHelaCharacter::GetHealthPercent() const
{
	return Health / MaxHealth;
}

float AHelaCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{
	Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	Health -= DamageAmount;
	UE_LOG(LogTemp, Warning, TEXT("Enemy Health: %f"), Health);

	if (IsDead())
	{
		// Destroy or handle death logic
		//Destroy();
	}

	return DamageAmount;
}


#pragma endregion 


