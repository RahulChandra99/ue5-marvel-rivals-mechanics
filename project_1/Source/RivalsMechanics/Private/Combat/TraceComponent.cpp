// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/TraceComponent.h"

#include "Engine/DamageEvents.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Interfaces/Fighter.h"

// Sets default values for this component's properties
UTraceComponent::UTraceComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void UTraceComponent::BeginPlay()
{
	Super::BeginPlay();

	SkeletalComp = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
	
}


// Called every frame
void UTraceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(!bIsAttacking) return;
	
	FVector StartSocketLocation = SkeletalComp->GetSocketLocation(StartSocketName);
	FVector EndSocketLocation = SkeletalComp->GetSocketLocation(EndSocketName);
	FQuat ShapeRotation = SkeletalComp->GetSocketQuaternion(RotationName);

	TArray<FHitResult> OutResults;

	//Box dimensions
	float WeaponDistance = FVector::Distance(StartSocketLocation,EndSocketLocation);
	FVector BoxDimensions = FVector(BoxWidth,BoxHeight,WeaponDistance);
	BoxDimensions /= 2;
	FCollisionShape Box = FCollisionShape::MakeBox(BoxDimensions);

	FCollisionQueryParams IgnoreParams {
		FName {TEXT("Ignore Params")},
		false,
		GetOwner()
	};
	
	bool bHasFoundTargets = GetWorld()->SweepMultiByChannel(
		OutResults,
		StartSocketLocation,
		EndSocketLocation,
		ShapeRotation,
		ECC_GameTraceChannel1,
		Box,
		IgnoreParams
	);

	if(bDebugMode)
	{
		//calculate centre of the box using vlerp
		FVector CentreOfBox = UKismetMathLibrary::VLerp(StartSocketLocation,EndSocketLocation,0.5f);
		
		UKismetSystemLibrary::DrawDebugBox(
			GetWorld(),
			CentreOfBox,
			Box.GetExtent(),
			bHasFoundTargets ? FLinearColor::Green : FLinearColor::Red,
			ShapeRotation.Rotator(),
			1.0f,
			2.0f
		);
	}

	//if no detection
	if(OutResults.Num() == 0) return;

	float CharacterDamage = 0.0f;
	IFighter* FighterRef = Cast<IFighter>(GetOwner());

	if(FighterRef)
	{
		CharacterDamage = FighterRef->GetDamage();
	}

	FDamageEvent TargetAttackEvent;
	
	for (const FHitResult& Hit: OutResults)
	{
		AActor* TargetActor = Hit.GetActor();

		if(TargetsToIgnore.Contains(TargetActor)) continue;
		
		TargetActor->TakeDamage(
			CharacterDamage,
			TargetAttackEvent,
			GetOwner()->GetInstigatorController(),
			GetOwner()
		);

		TargetsToIgnore.AddUnique(TargetActor);
	}

	
}

void UTraceComponent::HandleResetAttack()
{
	TargetsToIgnore.Empty();
}

