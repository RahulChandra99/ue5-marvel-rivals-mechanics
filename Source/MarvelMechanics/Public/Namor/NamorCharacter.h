// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PlayerCharacterBase.h"
#include "NamorCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MARVELMECHANICS_API ANamorCharacter : public APlayerCharacterBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	TSubclassOf<class ASpearProjectile> SpearClass;

	UFUNCTION()
	void ThrowSpear() ;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
};
