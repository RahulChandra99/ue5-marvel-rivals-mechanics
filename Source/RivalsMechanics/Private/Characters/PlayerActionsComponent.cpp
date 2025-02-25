// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PlayerActionsComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/Magix.h"

// Sets default values for this component's properties
UPlayerActionsComponent::UPlayerActionsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void UPlayerActionsComponent::BeginPlay()
{
	Super::BeginPlay();

	// Casts the owner of this component to ACharacter to access character-specific functionality if the owner is a character.
	CharacterRef = GetOwner<ACharacter>();
	CharacterMovementComp = CharacterRef->GetCharacterMovement();

	if(!CharacterRef->Implements<UMagix>()) return;
	
	IMagixRef = Cast<IMagix>(CharacterRef);
}


// Called every frame
void UPlayerActionsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerActionsComponent::Sprint()
{
	if(!IMagixRef->HasEnoughStamina(SprintCost))
	{
		Walk();
		return;
	}

	//if player isnt moving then sprint cant work
	if(CharacterMovementComp->Velocity.Equals(FVector::ZeroVector, 1)) return;

	CharacterMovementComp->MaxWalkSpeed = SprintSpeed;

	OnSprintDelegate.Broadcast(SprintCost);
}

void UPlayerActionsComponent::Walk()
{
	CharacterMovementComp->MaxWalkSpeed = WalkSpeed;
}

