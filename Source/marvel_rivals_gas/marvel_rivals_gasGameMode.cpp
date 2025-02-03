// Copyright Epic Games, Inc. All Rights Reserved.

#include "marvel_rivals_gasGameMode.h"
#include "marvel_rivals_gasCharacter.h"
#include "UObject/ConstructorHelpers.h"

Amarvel_rivals_gasGameMode::Amarvel_rivals_gasGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
