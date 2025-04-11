// Fill out your copyright notice in the Description page of Project Settings.


#include "Punisher/PunisherAnimInstance.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Punisher/Characters/PunisherCharacter.h"



void UPunisherAnimInstance::NativeInitializeAnimation()
{

	PunisherCharacter = Cast<APunisherCharacter>(TryGetPawnOwner());

	
}

void UPunisherAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	//if ever we lose the reference it will check again 
	if(PunisherCharacter == nullptr)
	{
		PunisherCharacter = Cast<APunisherCharacter>(TryGetPawnOwner());
	}

	if(PunisherCharacter)
	{
		//get speed of character from the velocity of the character
		FVector Velocity = PunisherCharacter->GetVelocity();
		Velocity.Z = 0;
		//can also use velocity.size
		Speed = Velocity.Length();

		bIsInAir = PunisherCharacter->GetCharacterMovement()->IsFalling();


		//check if moving or not
		bIsAccelerating = PunisherCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0;

		FRotator AimRotation = PunisherCharacter->GetBaseAimRotation();
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(PunisherCharacter->GetVelocity());
		MovementOffsetYaw = UKismetMathLibrary::NormalizedDeltaRotator(
			MovementRotation,
			AimRotation).Yaw;

		if(PunisherCharacter->GetVelocity().Size() > 0.f)
			LastMovementOffsetYaw = MovementOffsetYaw;
		
	}
	

	
}
