// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EGoblinState:uint8
{
	Idle         UMETA(DisplayName = "Idle"),           // Standing idle near glider
   Walking      UMETA(DisplayName = "Walking"),        // Normal on-ground movement
   Mounting     UMETA(DisplayName = "Mounting"),       // Approaching and mounting glider
   Gliding      UMETA(DisplayName = "Gliding"),        // Flying with glider
   Dismounting  UMETA(DisplayName = "Dismounting")    
	
};
