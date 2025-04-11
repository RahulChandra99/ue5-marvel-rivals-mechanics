// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

/**
 * 
 */
UCLASS()
class RIVALSMECHANICS_API AShooterAIController : public AAIController
{
	GENERATED_BODY()

	AShooterAIController();
	

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;

protected:

	virtual void BeginPlay() override;

	UPROPERTY()
	APawn* PlayerPawn;

public:

	virtual void Tick(float DeltaSeconds) override;
	
};
