// Fill out your copyright notice in the Description page of Project Settings.


#include "MarvelMechanics/Public/Animations/PlayerAnimInstance.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "MarvelMechanics/Public/Character/PlayerCharacterBase.h"

void UPlayerAnimInstance::UpdateSpeed()
{
	APawn* PawnRef = TryGetPawnOwner();

	if(!IsValid(PawnRef)) return;

	FVector Velocity = PawnRef->GetVelocity();
	CurrentSpeed = static_cast<float>(Velocity.Length());
}

void UPlayerAnimInstance::HandleUpdatedTarget(AActor* NewTargetActorRef)
{
	bIsInCombat = IsValid(NewTargetActorRef);
}

void UPlayerAnimInstance::UpdateDirection()
{
	APawn* PawnRef = TryGetPawnOwner() ; 

	if (!IsValid(PawnRef)) { return; }

	if (!bIsInCombat) { return; }

	
}

void UPlayerAnimInstance::SetIsFalling()
{
	ACharacter* CharacterRef = Cast<ACharacter>(TryGetPawnOwner());

	if(!IsValid(CharacterRef)) return;

	bIsFalling = CharacterRef->GetCharacterMovement()->IsFalling();
	
}

void UPlayerAnimInstance::NativeInitializeAnimation()
{
	PCharacter = Cast<APlayerCharacterBase>(TryGetPawnOwner());
}

void UPlayerAnimInstance::UpdateAnimationProperties(float DeltaTtime)
{
	if(PCharacter == nullptr)
	{
		PCharacter = Cast<APlayerCharacterBase>(TryGetPawnOwner());
	}

	if(PCharacter)
	{
		//Set Speed
		FVector Velocity = PCharacter->GetVelocity();
		Velocity.Z = 0;
		Speed = Velocity.Size();

		CurrentDirection = CalculateDirection(
		PCharacter->GetVelocity(),
		PCharacter->GetActorRotation()
	);
		
		bIsInAir = PCharacter->GetCharacterMovement()->IsFalling();

		if(PCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f)
		{
			bIsAccelerating = true;
		}
		else
		{
			bIsAccelerating = false;
		}

		bIsCrouched = PCharacter->GetCharacterMovement()->IsCrouching();

		PlayerVelocity = PCharacter->GetCharacterMovement()->Velocity;

		bIsSprinting = PCharacter->GetSprinting();

		//bIsWalking = PCharacter->GetWalking();

		FRotator AimRotation = PCharacter->GetBaseAimRotation();
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(
			PCharacter->GetVelocity());
		MovementOffsetYaw = UKismetMathLibrary::NormalizedDeltaRotator(
			MovementRotation,
			AimRotation).Yaw;

		
	}
}
