// Copyright Epic Games, Inc. All Rights Reserved.

#include "MarvelRivalsGASGameMode.h"
#include "MarvelRivalsGASCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMarvelRivalsGASGameMode::AMarvelRivalsGASGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
