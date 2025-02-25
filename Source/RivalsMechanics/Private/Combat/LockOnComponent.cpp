// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/LockOnComponent.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Interfaces/Enemy.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
ULockOnComponent::ULockOnComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void ULockOnComponent::BeginPlay()
{
	Super::BeginPlay();

	//initi the references
	OwnerRef = GetOwner<ACharacter>();
	Controller = GetWorld()->GetFirstPlayerController();
	MovementComp = OwnerRef->GetCharacterMovement();
	SpringArmComp = OwnerRef->FindComponentByClass<USpringArmComponent>();
}



void ULockOnComponent::StartLockOn(float DetectRadius)
{
	FHitResult OutResult;
	FVector CurrentLocation = OwnerRef->GetActorLocation();
	FCollisionShape Sphere = FCollisionShape::MakeSphere(DetectRadius);
	FCollisionQueryParams IgnoreParams {
		FName { TEXT("Ignore Collision Parameters") },
		false,
		OwnerRef
	};
	
	//if multiple enemies than multi
	bool bHasFoundTarget = GetWorld()->SweepSingleByChannel(
		OutResult,
		CurrentLocation,
		CurrentLocation,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel1,
		Sphere,
		IgnoreParams
	);

	if(!bHasFoundTarget) return;

	CurrentTargetActor = OutResult.GetActor();

	if(!OutResult.GetActor()->Implements<UEnemy>()) return;

	//stop the looking input
	Controller->SetIgnoreLookInput(true);
	//stop rotation  of movement
	MovementComp->bOrientRotationToMovement = false;
	MovementComp->bUseControllerDesiredRotation = true;

	SpringArmComp->TargetOffset = FVector {0.f,0.f,100.f};

	//accessing interface methods
	IEnemy::Execute_OnSelect(CurrentTargetActor);

	//eventy call/broadcast
	OnUpdatedTargetDelegate.Broadcast(CurrentTargetActor);
}

void ULockOnComponent::EndLockOn()
{
	//accessing interface methods
	IEnemy::Execute_OnDeSelect(CurrentTargetActor);
	
	CurrentTargetActor = nullptr;

	//reset values
	Controller->ResetIgnoreLookInput();
	MovementComp->bOrientRotationToMovement = true;
	MovementComp->bUseControllerDesiredRotation = false;

	SpringArmComp->TargetOffset = FVector::ZeroVector;

	//eventy call/broadcast
	OnUpdatedTargetDelegate.Broadcast(CurrentTargetActor);
}

void ULockOnComponent::ToggleLockOn(float Radius)
{
	if (IsValid(CurrentTargetActor))
	{
		EndLockOn();
	}
	else
	{
		StartLockOn(Radius);
	}
	
}


// Called every frame
void ULockOnComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//to make player always look at the enemy(target)
	if(!IsValid(CurrentTargetActor)) return;
	FVector PlayerLocation = OwnerRef->GetActorLocation();
	FVector TargetLocation = CurrentTargetActor->GetActorLocation();

	//end lockon if distance is more than a certain value
	float DistancePlayerTarget = FVector::Distance(PlayerLocation, TargetLocation);
	if(DistancePlayerTarget >=BreakDistance)
	{
		EndLockOn();
		return;
	}
		
	
	TargetLocation.Z -= 125;
	FRotator NewRotationForActor = UKismetMathLibrary::FindLookAtRotation(PlayerLocation,TargetLocation);
	Controller->SetControlRotation(NewRotationForActor);

	
	
}

