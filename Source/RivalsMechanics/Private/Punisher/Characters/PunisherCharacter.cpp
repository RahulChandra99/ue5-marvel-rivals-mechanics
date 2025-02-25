// Fill out your copyright notice in the Description page of Project Settings.


#include "Punisher/Characters/PunisherCharacter.h"

#include "Engine/SkeletalMeshSocket.h"
#include "Engine/StaticMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Sound/SoundCue.h"
#include "CableComponent.h"
#include "AI/RobotCharacter.h"


APunisherCharacter::APunisherCharacter()
{
	bDebugMode = false;
	bCanUseRMB = true;
	bCanUseE = true;
	bCanGrapple = true;
	
	

	MachineGunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MachineGunMesh"));
	MachineGunMesh->SetupAttachment(GetRootComponent());

	GrappleCableMesh = CreateDefaultSubobject<UCableComponent>(TEXT("GrappleWire"));
	GrappleCableMesh->SetupAttachment(RootComponent);
	GrappleCableMesh->SetVisibility(false);
	GrappleCableMesh->CableWidth = 2.0f;   // Adjust for desired thickness
	GrappleCableMesh->NumSegments = 20;   // Increase for smoother appearance
}

void APunisherCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	//initialize variables
	SMGMaxAmmo = 30;
	ShotgunMaxAmmo = 8;
	SMGAmmo = SMGMaxAmmo;
	ShotgunAmmo = ShotgunMaxAmmo;
	TurretMaxAmmo = 200;
	TurretAmmo = TurretMaxAmmo;
	
	AutomaticFireRate = 0.1f;
	bShouldFireLMB = true;
	bIsLMBPressed = false;

	ActiveWeapon = 1;
	
	Health = MaxHealth;

	MachineGunMesh->SetVisibility(false);
}

void APunisherCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	UpdateGrapplePull(DeltaSeconds);
}

#pragma region PrimaryAttack

void APunisherCharacter::LMBFireBtnPressed()
{
	if(bIsGrappling) return;
	
	bIsLMBPressed = true;
	StartFireTimer();
}

void APunisherCharacter::LMBFireBtnReleased()
{
	bIsLMBPressed = false;
}

void APunisherCharacter::StartFireTimer()
{
	if(bShouldFireLMB)
	{
		LMBPrimaryAttack();
		bShouldFireLMB = false;
		GetWorldTimerManager().SetTimer(AutoFireTimer,this,&APunisherCharacter::AutoFireResetTimer,AutomaticFireRate);
	}
}

void APunisherCharacter::AutoFireResetTimer()
{
	bShouldFireLMB = true;
	if(bIsLMBPressed)
	{
		StartFireTimer();
	}
}


void APunisherCharacter::LMBPrimaryAttack()
{
	if(bIsTurretActive)
	{
		//Turret Shooting Sound
		if(TurretLMBFireSound)
		{
			UGameplayStatics::PlaySound2D(this,LMBFireSound);
		}

		//play turret shooting emitter at socket location
		const UStaticMeshSocket* BarrelSocket = MachineGunMesh->GetSocketByName(TEXT("Muzzle"));
		const UStaticMeshSocket* BarrelSocket2 = MachineGunMesh->GetSocketByName(TEXT("Muzzle_2"));
		if(BarrelSocket && BarrelSocket2)
		{
			FTransform SocketTransform;
			if (BarrelSocket->GetSocketTransform(SocketTransform, MachineGunMesh))
			{
				if(TurretMuzzleFlash)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),TurretMuzzleFlash,SocketTransform);
				}
			}

			FTransform SocketTransform2;
			if (BarrelSocket2->GetSocketTransform(SocketTransform2, MachineGunMesh))
			{
				if(TurretMuzzleFlash)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),TurretMuzzleFlash,SocketTransform2);
				}
			}
			

			FVector BeamEnd;
			bool bBeamEnd = GetBeamEndLocation(SocketTransform.GetLocation(),BeamEnd, 50000.f);
			if(bBeamEnd)
			{
				//spawn impact particles after updating beam end point
				if(PrimaryImpactParticles)
				{
					UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						PrimaryImpactParticles,
						BeamEnd
					);
				}
			
				//beam particles spawn
				if(BeamParticles)
				{
					UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						BeamParticles,
						SocketTransform);
					if(Beam)
					{
						Beam->SetVectorParameter(FName("Target"), BeamEnd);
					}
				}

				FVector BeamEnd2;
				bool bBeamEnd2 = GetBeamEndLocation(SocketTransform2.GetLocation(),BeamEnd2, 50000.f);
				if(bBeamEnd2)
				{
					//spawn impact particles after updating beam end point
					if(PrimaryImpactParticles)
					{
						UGameplayStatics::SpawnEmitterAtLocation(
							GetWorld(),
							PrimaryImpactParticles,
							BeamEnd2
						);
					}
			
					//beam particles spawn
					if(BeamParticles)
					{
						UParticleSystemComponent* Beam2 = UGameplayStatics::SpawnEmitterAtLocation(
							GetWorld(),
							BeamParticles,
							SocketTransform2);
						if(2)
						{
							Beam2->SetVectorParameter(FName("Target"), BeamEnd2);
						}
					}
				}

				TurretAmmo--;
				//if ammo 200 is over
				if(TurretAmmo <= 0)
				{
					//run transition screen animation
					DebugMessage(FString::Printf(TEXT("Deactivating Turret")));
					bCanUseE = true;
					bIsTurretActive = false;
					bIsLMBPressed = false;
					GetWorldTimerManager().SetTimer(TurretTransitionTimer,this,&APunisherCharacter::EndTurretAction,0.5f,false);
				}
			}
		
	
		}
		
	
		
		}
	
	else if(ActiveWeapon == 1)
	{
		if (SMGAmmo <= 0) return;
		if (bIsReloading) return;

		AutomaticFireRate = 0.1f;

		//Gun Shooting Sound
		if (LMBFireSound)
		{
			UGameplayStatics::PlaySound2D(this, LMBFireSound);
		}

		//play gun shooting emitter at socket location
		const USkeletalMeshSocket* SMGSocket = GetMesh()->GetSocketByName(TEXT("BarrelSocket"));
		if (SMGSocket)
		{
			const FTransform SocketTransform = SMGSocket->GetSocketTransform(GetMesh());
			if (MuzzleFlash)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleFlash, SocketTransform);
			}

			FVector BeamEnd;
			bool bBeamEnd = GetBeamEndLocation(SocketTransform.GetLocation(), BeamEnd, 50000.f);
			if (bBeamEnd)
			{
				//spawn impact particles after updating beam end point
				if (PrimaryImpactParticles)
				{
					UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						PrimaryImpactParticles,
						BeamEnd
					);
				}

				//beam particles spawn
				if (BeamParticles)
				{
					UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						BeamParticles,
						SocketTransform);
					if (Beam)
					{
						Beam->SetVectorParameter(FName("Target"), BeamEnd);
					}
				}
				
			}

			//Play hip fire montage using the slot method in abp
			UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
			if (AnimInstance && HipFireMontage)
			{
				AnimInstance->Montage_Play(HipFireMontage);
				//play montage section that is set in the animation montage
				AnimInstance->Montage_JumpToSection(FName("StartFire"));
			}

			SMGAmmo--;
			if (SMGAmmo <= 0) ReloadGunWrapper();
		}
	}
	
		
	
}

void APunisherCharacter::LMBShotGunAttack()
{
	if(ActiveWeapon == 2)
	{
		if (ShotgunAmmo <= 0) return;
		if (bIsReloading) return;
		
		
		if(bCanUseShotgun)
		{
			bCanUseShotgun = false;
			//Gun Shooting Sound
			if (LMBShotgunFireSound)
			{
				UGameplayStatics::PlaySound2D(this, LMBShotgunFireSound);
			}

			//play gun shooting emitter at socket location
			const USkeletalMeshSocket* ShotgunSocket = GetMesh()->GetSocketByName(TEXT("BarrelSocket"));
			if (ShotgunSocket)
			{
				const FTransform SocketTransform = ShotgunSocket->GetSocketTransform(GetMesh());
				if (ShotgunMuzzleFlash)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShotgunMuzzleFlash, SocketTransform);
				}

				FVector BeamEnd;
				bool bBeamEnd = GetBeamEndLocation(SocketTransform.GetLocation(), BeamEnd, 1000.f);
				if (bBeamEnd)
				{
					//spawn impact particles after updating beam end point
					if (ShotgunImpactParticles)
					{
						UGameplayStatics::SpawnEmitterAtLocation(
							GetWorld(),
							ShotgunImpactParticles,
							BeamEnd
						);
					}

					//beam particles spawn
					if (BeamParticles)
					{
						UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(
							GetWorld(),
							BeamParticles,
							SocketTransform);
						if (Beam)
						{
							Beam->SetVectorParameter(FName("Target"), BeamEnd);
						}
					}
				}

				//Play hip fire montage using the slot method in abp
				UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
				if (AnimInstance && HipFireMontage)
				{
					AnimInstance->Montage_Play(HipFireMontage);
					//play montage section that is set in the animation montage
					AnimInstance->Montage_JumpToSection(FName("StartFire"));
				}

				GetWorldTimerManager().SetTimer(
					ShotgunTimerHandle,
					[this]() // Lambda function to execute directly
					{
						bCanUseShotgun = true;
					}, 0.7f, false);

				if (LMBPreShotgunFireSound)
				{
					UGameplayStatics::PlaySound2D(this, LMBPreShotgunFireSound);
				}

				ShotgunAmmo--;
				if (ShotgunAmmo <= 0)
				{
					ReloadGunWrapper();
				}
			}
		}
		
	}
}



#pragma endregion 

#pragma region SmokeAbility

void APunisherCharacter::RMBSmokeImpact()
{
	if(bIsTurretActive) return;
	if(bIsGrappling) return;
	
	if(bCanUseRMB)
	{
		// Play sound
		if (RMBFireSound)
		{
			UGameplayStatics::PlaySound2D(GetWorld(), RMBFireSound);
		}

		// Gun socket show emitter
		const USkeletalMeshSocket* BarrelSocket = GetMesh()->GetSocketByName(TEXT("BarrelSocket"));
		if (BarrelSocket)
		{
			FTransform SocketTransform = BarrelSocket->GetSocketTransform(GetMesh());

			UGameplayStatics::SpawnEmitterAtLocation(
				GetWorld(),
				RMBMuzzleFlash,
				SocketTransform
			);

			// Impact point show smoke emitter if point is hit
			FVector BeamEnd;
			bool bBeamEnd = GetBeamEndLocation(SocketTransform.GetLocation(), BeamEnd, 1000.f);
			if (bBeamEnd)
			{
				// Spawn impact particles after updating beam end point
				if (PrimaryImpactParticles)
				{
					UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						RMBImpactParticles,
						BeamEnd,
						FRotator::ZeroRotator,
						FVector::OneVector * 5
					);
				}

				// Check if the impact is close to the character
				const float ImpactRadius = 700.f; // Adjust the radius as needed
				float DistanceToImpact = FVector::Dist(BeamEnd, GetActorLocation());
				if (DistanceToImpact <= ImpactRadius)
				{
					// Calculate the direction opposite to the projectile
					FVector ImpactDirection = (GetActorLocation() - BeamEnd).GetSafeNormal();
					FVector ImpactForce = ImpactDirection * 1500.f; // Adjust the force magnitude

					// Apply the force to the character
					if (GetCharacterMovement())
					{
						// Add an impulse to simulate the impact
						GetCharacterMovement()->AddImpulse(ImpactForce, true);

						// Optionally launch the character for more dramatic effect
						const FVector LaunchForce = ImpactDirection * SmokeGrenadeImpactForce + FVector(0.f, 0.f, 600.f); // Adjust vertical force
						LaunchCharacter(LaunchForce, true, true);

						/*const FVector ForwardVector = SocketTransform.GetRotation().GetForwardVector();
						const FVector RecoilForce = (-ForwardVector * SmokeGrenadeImpactForce) + FVector(0.f, 0.f, 200.f); // Adjust values
						LaunchCharacter(RecoilForce, true, true);*/
					}
				}
			}

			bCanUseRMB = false;
			if (!bCanUseRMB)
			{
				GetWorld()->GetTimerManager().SetTimer(
					ResetSmokeTimer, // Timer handle
					[this]()  // Lambda function
					{
						bCanUseRMB = true;  // Reset the flag directly
					},
					5.f, // Delay in seconds
					false // Looping flag (false means it will run only once)
				);
			}
		}
	}
		
}


float APunisherCharacter::GetRMBTimerValue()
{
	if(bCanUseRMB)
		return 1;
	else
		return GetWorldTimerManager().GetTimerRemaining(ResetSmokeTimer)/5.f;
}

float APunisherCharacter::GetTurretTimerValue()
{
	if(bCanUseE)
		return 1;
	else
		return GetWorldTimerManager().GetTimerRemaining(ResetTurretTimer)/10.f;
}

float APunisherCharacter::GetGrappleTimerValue()
{
	if(bCanGrapple)
		return 1;
	else
		return GetWorldTimerManager().GetTimerRemaining(ResetGrappleTimer)/8.f;
}


#pragma endregion 

#pragma region TurretAbility

void APunisherCharacter::ETurretButton()
{
	if(bIsGrappling) return;
	if(GetCharacterMovement()->IsFalling()) return;
	
	if(bCanUseE)
	{

		if(ActiveWeapon == 2)
			ActiveWeapon = 1;
		
		//run transition screen animation
		bCanPlayAnimationForTurret = true;
		
		TurretAmmo = TurretMaxAmmo;

		//disable movement
		GetCharacterMovement()->DisableMovement();
		
		DebugMessage(FString::Printf(TEXT("Activating Turret")));
		
		GetWorldTimerManager().SetTimer(TurretTransitionTimer,this,&APunisherCharacter::StartTurretAction,1.5f,false);
	}
	
}

void APunisherCharacter::StartTurretAction()
{
	if(!bIsTurretActive)
	{
		//stop normal shooting if shooting
		bIsLMBPressed = false;
		bCanPlayAnimationForTurret = false;
		bIsTurretActive = true;
		DebugMessage(FString::Printf(TEXT("Turret Active : %s"),bIsTurretActive?TEXT("true"):TEXT("false")));
	
		//camera change
		USpringArmComponent* TempCameraBoom = GetCameraBoom();
		TempCameraBoom->TargetArmLength = -10.f; // The camera follows at this distance behind the character
		TempCameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
		TempCameraBoom->SocketOffset = FVector(0.f,0.f,50.0f);
		
		//look clamp the values
		
		//replaces meshes
		if(GetMesh())
		{
			GetMesh()->SetVisibility(false);
			MachineGunMesh->SetVisibility(true);
		}
	}
	
	
}

void APunisherCharacter::PreEndTurretAction()
{
	if(bIsTurretActive)
	{
		DebugMessage(FString::Printf(TEXT("Deactivating Turret")));
		bCanUseE = true;
		bIsTurretActive = false;
		bIsLMBPressed = false;
		GetWorldTimerManager().SetTimer(TurretTransitionTimer,this,&APunisherCharacter::EndTurretAction,0.5f,false);
	}
	
}

void APunisherCharacter::EndTurretAction()
{
	
	//camera change
	USpringArmComponent* TempCameraBoom = GetCameraBoom();
	TempCameraBoom->TargetArmLength = 200.0f; // The camera follows at this distance behind the character
	TempCameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	TempCameraBoom->SocketOffset = FVector(0.f,55.f,65.0f);
		
	//disable movement
	GetCharacterMovement()->MovementMode = MOVE_Walking;
	
	//replaces meshes
	if(GetMesh())
	{
		GetMesh()->SetVisibility(true);
		MachineGunMesh->SetVisibility(false);
	}
	
	bCanUseE = false;
	if (!bCanUseE)
	{
		GetWorld()->GetTimerManager().SetTimer(
			ResetTurretTimer, // Timer handle
			[this]()  // Lambda function
			{
				bCanUseE = true;  // Reset the flag directly
			},
			10.f, // Delay in seconds
			false // Looping flag (false means it will run only once)
		);
	}
	DebugMessage(FString::Printf(TEXT("Turret Active : %s"),bIsTurretActive?TEXT("true"):TEXT("false")));
}

#pragma endregion 

#pragma region GrappleHook

void APunisherCharacter::ShiftGrappleHook()
{
    if (bIsGrappling) return;

	if(bCanGrapple)
	{
		// Play animation montage
    UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
    if (AnimInstance && GrappleAnimMontage)
    {
        AnimInstance->Montage_Play(GrappleAnimMontage);
    }

	// Play grapple shooting sound
	if (GrappleHookSound)
	{
		UGameplayStatics::PlaySound2D(this, GrappleHookSound);
	}
    // Play muzzle flash effect
    const USkeletalMeshSocket* GrappleHookSocket = GetMesh()->GetSocketByName(TEXT("BarrelSocket"));
    if (GrappleHookSocket)
    {
        const FTransform SocketTransform = GrappleHookSocket->GetSocketTransform(GetMesh());

        // Get viewport size and deproject crosshair to world space
        FVector2D ViewportSize;
        if (GEngine && GEngine->GameViewport)
        {
            GEngine->GameViewport->GetViewportSize(ViewportSize);
        }
        FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
        FVector CrosshairWorldPosition;
        FVector CrosshairWorldDirection;

        if (UGameplayStatics::DeprojectScreenToWorld(
                UGameplayStatics::GetPlayerController(this, 0),
                CrosshairLocation,
                CrosshairWorldPosition,
                CrosshairWorldDirection))
        {
            FVector OutBeamLocation = CrosshairWorldPosition + CrosshairWorldDirection * GrappleHookDistance;

            // Perform line trace
            FHitResult ScreenTraceHit;
            GetWorld()->LineTraceSingleByChannel(
                ScreenTraceHit,
                CrosshairWorldPosition,
                OutBeamLocation,
                ECC_Visibility);

            if (ScreenTraceHit.bBlockingHit)
            {
                OutBeamLocation = ScreenTraceHit.Location;

                // Perform second trace from the weapon barrel
                FHitResult WeaponTraceHit;
                GetWorld()->LineTraceSingleByChannel(
                    WeaponTraceHit,
                    SocketTransform.GetLocation(),
                    OutBeamLocation,
                    ECC_Visibility);

                if (WeaponTraceHit.bBlockingHit)
                {
                    OutBeamLocation = WeaponTraceHit.Location;

                    // Spawn impact particles
                    if (GrappleImpactParticles)
                    {
                        UGameplayStatics::SpawnEmitterAtLocation(
                            GetWorld(),
                            GrappleImpactParticles,
                            OutBeamLocation);
                    }

                    // Spawn beam particles
                    if (BeamParticles)
                    {
                        UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(
                            GetWorld(),
                            BeamParticles,
                            SocketTransform);
                        if (Beam)
                        {
                            Beam->SetVectorParameter(FName("Target"), OutBeamLocation);
                        }
                    }

                    if (WeaponTraceHit.GetActor() && WeaponTraceHit.GetActor()->ActorHasTag("Wall"))
                    {
                        DebugMessage(FString::Printf(TEXT("I hit Wall !!")));
                    	// Play grapple shooting sound
                    	if (GrappleHookRappelSound)
                    	{
                    		UGameplayStatics::PlaySound2D(this, GrappleHookRappelSound);
                    	}
                        bIsGrappling = true;

                        // Configure the cable
                        GrappleCableMesh->SetVisibility(true);
                        GrappleCableMesh->SetAttachEndToComponent(WeaponTraceHit.GetActor()->GetRootComponent());
                        GrappleCableMesh->SetWorldLocation(SocketTransform.GetLocation());

                        // Enter fly mode
                        GetCharacterMovement()->SetMovementMode(MOVE_Flying);

                        // Initialize pulling variables
                        GrappleStartPosition = GetActorLocation();
                        GrappleTargetPosition = OutBeamLocation;
                        GrappleElapsedTime = 0.0f;
                        GrapplePullDuration = 1.0f; // Adjust the duration for the desired speed
                        bIsPullingToTarget = true;

                        // Disable inputs
                        GetWorld()->GetFirstPlayerController()->DisableInput(GetWorld()->GetFirstPlayerController());
                        GetWorld()->GetFirstPlayerController()->SetIgnoreLookInput(true);
                        GetCharacterMovement()->bOrientRotationToMovement = false;
                        GetCharacterMovement()->bUseControllerDesiredRotation = true;
                        
                    	bCanGrapple = false;
                    	if (!bCanGrapple)
                    	{
                    		GetWorld()->GetTimerManager().SetTimer(
								ResetGrappleTimer, // Timer handle
								[this]()  // Lambda function
								{
									bCanGrapple = true;  // Reset the flag directly
								},
								7.f, // Delay in seconds
								false // Looping flag (false means it will run only once)
							);
                    	}
                    }
                }
            }
        }

    	
	}

    
    }
}

void APunisherCharacter::UpdateGrapplePull(float DeltaTime)
{
	if (!bIsPullingToTarget) return;

	// Update elapsed time and calculate alpha
	GrappleElapsedTime += DeltaTime;
	float Alpha = FMath::Clamp(GrappleElapsedTime / GrapplePullDuration, 0.0f, 1.0f);

	// Interpolate character position
	FVector NewPosition = FMath::Lerp(GrappleStartPosition, GrappleTargetPosition, Alpha);
	SetActorLocation(NewPosition);

	// Check if grapple is complete
	if (Alpha >= 1.0f)
	{
		bIsPullingToTarget = false;

		// Apply upward impact force
		FVector UpwardForce = FVector(0.f, 0.f, 1000.f); // Adjust Z value for desired strength
		GetCharacterMovement()->Launch(UpwardForce);

		// Restore normal movement
		GetCharacterMovement()->SetMovementMode(MOVE_Walking);
		bIsGrappling = false;

		// Re-enable inputs
		GetWorld()->GetFirstPlayerController()->EnableInput(GetWorld()->GetFirstPlayerController());
		GetWorld()->GetFirstPlayerController()->SetIgnoreLookInput(false);
		GetCharacterMovement()->bOrientRotationToMovement = true;

		DebugMessage(FString::Printf(TEXT("Upward force applied!")));
		GrappleCableMesh->SetVisibility(false);
	}
}


#pragma endregion 




bool APunisherCharacter::GetBeamEndLocation(const FVector& MuzzleSocketLocation, FVector& OutBeamLocation, float ImpactDistance)
{
	//getting current size of viewport
	FVector2D ViewportSize;
	if(GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	//get screen space location of crosshairs
	FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y/ 2.f);
	//CrosshairLocation.Y -= 50.f;
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;

	//get world position and direction of crosshairs
	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(
		UGameplayStatics::GetPlayerController(this,0),
		CrosshairLocation,
		CrosshairWorldPosition,
		CrosshairWorldDirection);

	if(bScreenToWorld)
	{
		//was the projection successfull
		FHitResult ScreenTraceHit;
		const FVector StartLocation = CrosshairWorldPosition;
		const FVector EndLocation = CrosshairWorldPosition + CrosshairWorldDirection * ImpactDistance;

		//set beam point to line trace end point
		OutBeamLocation = EndLocation;

		//trace outward from crosshair world location
		GetWorld()->LineTraceSingleByChannel(
			ScreenTraceHit,
			StartLocation,
			EndLocation,
			ECC_Visibility
		);

		if(ScreenTraceHit.bBlockingHit)
		{
			OutBeamLocation = ScreenTraceHit.Location;

			SmokeHitVector = ScreenTraceHit.Location;

			//perform second trace which is from gun barell
			FHitResult WeaponTraceHit;
			const FVector WeaponTraceStartPostion = MuzzleSocketLocation;
			const FVector WeaponTraceEndPosition = OutBeamLocation;
			GetWorld()->LineTraceSingleByChannel(
					WeaponTraceHit,
					WeaponTraceStartPostion,
					WeaponTraceEndPosition,
					ECC_Visibility);
			if(WeaponTraceHit.bBlockingHit)
			{
				OutBeamLocation = WeaponTraceHit.Location;

				if(ActiveWeapon == 1 && !bIsTurretActive)
				{
					DebugMessage(FString::Printf(TEXT("smg")));
					AttackAI(WeaponTraceHit.GetActor(),45);
				}
					
				if(ActiveWeapon == 2)
				{
					DebugMessage(FString::Printf(TEXT("shotty")));
					AttackAI(WeaponTraceHit.GetActor(),100);
				}
				if(bIsTurretActive)
				{
					AttackAI(WeaponTraceHit.GetActor(),30);
					DebugMessage(FString::Printf(TEXT("turret")));
				}
					
			}

			
		}
		return true;
			
	}
	return false;
}

void APunisherCharacter::SwitchWeapon(int KeyPressed)
{
	if(bIsTurretActive) return;
	
	if(KeyPressed == 1)
	{
		if(ActiveWeapon == 2)
		{
			ActiveWeapon = 1;
		}
	}
	else if(KeyPressed == 2)
	{
		if(ActiveWeapon == 1)
		{
			ActiveWeapon = 2;
		}
	}

	DebugMessage(FString::Printf(TEXT("Active Weapon: %d"),ActiveWeapon));
}

void APunisherCharacter::ReloadGunWrapper()
{
	if(bIsReloading) return;
	
	bIsReloading = true;

	if(ActiveWeapon == 1)
	{
		if(SMGReloadingSound)
			UGameplayStatics::SpawnSound2D(GetWorld(), SMGReloadingSound);

		//reload timer function
		GetWorldTimerManager().SetTimer(
		ReloadTimer,
		this, // The object that owns the function
		&APunisherCharacter::ReloadingGun, // A wrapper function to handle parameters
		SMGReloadTime,
		false
		);
	}
		

	if(ActiveWeapon == 2)
	{
		if(ShotgunReloadingSound)
			UGameplayStatics::SpawnSound2D(GetWorld(), ShotgunReloadingSound);
		
		//reload timer function
		GetWorldTimerManager().SetTimer(
		ReloadTimer,
		this, // The object that owns the function
		&APunisherCharacter::ReloadingGun, // A wrapper function to handle parameters
		ShotgunReloadTime,
		false
		);
	}
		

	

	DebugMessage(FString::Printf(TEXT("Reloading %s"), ActiveWeapon==1?TEXT("SMG") : TEXT("Shotgun")));
}

void APunisherCharacter::ReloadingGun()
{
	if(ActiveWeapon == 1)
	{
		
		SMGAmmo = SMGMaxAmmo;
	}
	if(ActiveWeapon == 2)
	{
		
		ShotgunAmmo = ShotgunMaxAmmo;
	}
	
	
	bIsReloading = false;
}

bool APunisherCharacter::IsDead() const
{
	return Health <= 0;
}

float APunisherCharacter::GetHealthPercent() const
{
	return Health/MaxHealth;
}

float APunisherCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
                                     AActor* DamageCauser)
{
	
	float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	//so that it doesnt go below zero
	DamageToApply = FMath::Min(Health, DamageToApply);
	Health -= DamageToApply;

	//if health less than 50 percent of max health show set bool of showing ui thing and in event tick enable it
	if(Health <= MaxHealth/2)
	{
		bIsHealthLow = true;
		//UGameplayStatics::SpawnSound2D(GetWorld(), DeathSound);
	}

	
	return DamageToApply;

	
}

void APunisherCharacter::DebugMessage(FString Message) const
{
	if(GEngine && bDebugMode)
	{
		GEngine->AddOnScreenDebugMessage(1,1.f,FColor::Green,Message);
	}
}


void APunisherCharacter::AttackAI(AActor* Target, float DamageAmount)
{
	if (Target)
	{
		// Cast to MyAICharacter to ensure we're dealing with the correct type
		ARobotCharacter* AICharacter = Cast<ARobotCharacter>(Target);
		if (AICharacter && !AICharacter->IsDead())
		{
			// Deal damage to the AI
			AICharacter->TakeDamageFromPlayer(DamageAmount); // Example: Deal 25 damage
		}
	}
}



