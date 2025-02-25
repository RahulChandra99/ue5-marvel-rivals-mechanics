// Fill out your copyright notice in the Description page of Project Settings.


#include "RivalsPlayerController.h"

#include "Blueprint/UserWidget.h"

void ARivalsPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Check if the Widget class is assigned
	if (WidgetClass) 
	{
		// Create and store the widget instance
		WidgetInstance = CreateWidget<UUserWidget>(this, WidgetClass);
		if (WidgetInstance)
		{
			WidgetInstance->AddToViewport();
		}
	}
	
}
