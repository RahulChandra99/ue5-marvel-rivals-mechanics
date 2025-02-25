// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RivalsPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RIVALSMECHANICS_API ARivalsPlayerController : public APlayerController
{
	GENERATED_BODY()

	

protected:

	virtual void BeginPlay() override;

	// Widget class reference (set in the Editor or Blueprint)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> WidgetClass; // Reference to the Widget Blueprint class

	// Widget instance
	UPROPERTY(BlueprintReadOnly, Category = "UI")
	UUserWidget* WidgetInstance;
	
};
