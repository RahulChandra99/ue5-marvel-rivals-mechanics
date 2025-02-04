// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSetBase.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FOnHealthChangeDelegate, float , Health, float, MaxHealth
);
UCLASS()
class MARVELRIVALSGAS_API UAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()

public:

	UAttributeSetBase();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GAS|AttributeSetBase")
	FGameplayAttributeData Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GAS|AttributeSetBase")
	FGameplayAttributeData MaxHealth;

	void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	FOnHealthChangeDelegate OnHealthChange;
};
