// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/CharacterBase.h"

#include "Character/Abilities/AttributeSetBase.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AttributeSetBaseComponent = CreateDefaultSubobject<UAttributeSetBase>(TEXT("AttributeSetBaseComponent"));

}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* ACharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void ACharacterBase::AquireAbility(TSubclassOf<UGameplayAbility> AbilityToAquire)
{
	if(AbilitySystemComponent)
	{
		if(HasAuthority() && AbilityToAquire)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(AbilityToAquire,1,0));
		}
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}


