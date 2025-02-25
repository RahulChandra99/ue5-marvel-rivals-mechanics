// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "RobotAI.generated.h"

/**
 * 
 */
UCLASS()
class RIVALSMECHANICS_API ARobotAI : public AAIController
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;

protected:

	virtual void BeginPlay() override;
virtual void Tick(float DeltaSeconds) override;
	UPROPERTY()
	APawn* PlayerPawn;
};
