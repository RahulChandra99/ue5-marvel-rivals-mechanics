// Copyright Epic Games, Inc. All Rights Reserved.

#include "RivalsMechanicsGameMode.h"
#include "RivalsMechanicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARivalsMechanicsGameMode::ARivalsMechanicsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
