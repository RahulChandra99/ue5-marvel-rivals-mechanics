// Fill out your copyright notice in the Description page of Project Settings.


#include "MarvelMechanics/Public/Character/PlayerCharacterBase.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
APlayerCharacterBase::APlayerCharacterBase():
	BaseTurnRate(45.f),
	BaseLookUpRate(45.f),
	bIsWalking(false),
	NormalSpeed(200),
	SprintSpeed(600)

{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->TargetArmLength = 200.f;
	SpringArmComp->SocketOffset = FVector(0.f,55.f,65.f);
	
	TpCameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("TPCamera"));
	TpCameraComp->SetupAttachment(SpringArmComp,USpringArmComponent::SocketName);
	TpCameraComp->bUsePawnControlRotation = false;

	GetCapsuleComponent()->InitCapsuleSize(42.f,96.f);
	
	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true;
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f,540.f,0.f);
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	
	
	TpCameraComp->SetActive(true);
}

// Called when the game starts or when spawned
void APlayerCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
}

void APlayerCharacterBase::MoveForward(float Value)
{
	if (Controller && Value != 0.0f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}


void APlayerCharacterBase::MoveRight(float Value)
{
	if(Controller != nullptr && (Value != 0.0f))
	{
		const FRotator Rotation{Controller->GetControlRotation()};
		const FRotator YawRotation{0,Rotation.Yaw,0};

		const FVector Direction {FRotationMatrix{YawRotation}.GetUnitAxis(EAxis::Y)};
		AddMovementInput(Direction, Value);
	}
}

void APlayerCharacterBase::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacterBase::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}



void APlayerCharacterBase::SprintStart()
{
	bIsSprinting = true;

	
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
}

void APlayerCharacterBase::SprintEnd()
{
	bIsSprinting = false;


	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
}

void APlayerCharacterBase::Walk()
{
	bIsWalking = !bIsWalking;

	if(bIsWalking)
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
	}
}



FVector APlayerCharacterBase::GetPawnViewLocation() const
{
	if(TpCameraComp)
	{
		return TpCameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

void APlayerCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


// Called to bind functionality to input
void APlayerCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward",this,&APlayerCharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",this,&APlayerCharacterBase::MoveRight);
	PlayerInputComponent->BindAxis("LookUp",this,&APlayerCharacterBase::LookUpAtRate);
	PlayerInputComponent->BindAxis("Turn",this,&APlayerCharacterBase::TurnAtRate);
	
	PlayerInputComponent->BindAction("Sprint",IE_Pressed,this,&APlayerCharacterBase::SprintStart);
	PlayerInputComponent->BindAction("Sprint",IE_Released,this,&APlayerCharacterBase::SprintEnd);
	PlayerInputComponent->BindAction("Walk",IE_Pressed,this,&APlayerCharacterBase::Walk);
	PlayerInputComponent->BindAction("Walk",IE_Released,this,&APlayerCharacterBase::Walk);
	PlayerInputComponent->BindAction("Jump",IE_Pressed,this,&ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump",IE_Released,this,&ACharacter::StopJumping);
	

}


