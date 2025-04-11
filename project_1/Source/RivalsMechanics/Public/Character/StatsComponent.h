// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/EStats.h"
#include "Components/ActorComponent.h"
#include "StatsComponent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RIVALSMECHANICS_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	double StaminaRegeneRate = 10.0f;
	
	UPROPERTY(VisibleAnywhere)
	bool bCanRegen = true;

	UPROPERTY(EditAnywhere)
	float StaminaDelayDuration = 2.0f;

	

public:	
	// Sets default values for this component's properties
	UStatsComponent();

	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EStat>,float> Stats;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void ReduceStamina(float Amount);
	
	UFUNCTION(BlueprintCallable)
	void ReduceHealth(float DamageValue);

	UFUNCTION(BlueprintCallable)
	void RegenrateStamina();

	UFUNCTION()
	void EnableRegeneration();
	
		
};
