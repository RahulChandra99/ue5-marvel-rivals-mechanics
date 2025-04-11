// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/CombatComponent.h"
#include "GameFramework/Character.h"
#include "Interfaces/Magix.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	OwnerRef = GetOwner<ACharacter>();

	
	
}


void UCombatComponent::ComboAttack()
{
	if(OwnerRef->Implements<UMagix>())
	{
		IMagix* IMagixRef = Cast<IMagix>(OwnerRef);
		if(IMagixRef && !IMagixRef->HasEnoughStamina(AttackStaminaCost))
		{
			return;
		}
	}
	
	if(!bCanAttack) return ;

	bCanAttack = false;
	
	OwnerRef->PlayAnimMontage(AttackAnimations[ComboCounter]);
	ComboCounter++;

	//length of array
	int MaxCombo = AttackAnimations.Num();
	ComboCounter = UKismetMathLibrary::Wrap(ComboCounter,-1,MaxCombo-1);

	//event call/broadcast
	OnAttackPerformedDelegate.Broadcast(AttackStaminaCost);
}

// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCombatComponent::HandleResetAttack()
{
	bCanAttack = true;
}

