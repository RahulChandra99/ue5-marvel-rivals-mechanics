// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PlayerCharacterBase.h"
#include "ThorPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MARVELMECHANICS_API AThorPlayerCharacter : public APlayerCharacterBase
{
	GENERATED_BODY()

	AThorPlayerCharacter();
	

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="RC | Attachments")
	UStaticMeshComponent* HammerMesh;
	
};
