// Copyright Epic Games, Inc. All Rights Reserved.

#include "Palworld_UITestGameMode.h"
#include "Palworld_UITestCharacter.h"
#include "UObject/ConstructorHelpers.h"

APalworld_UITestGameMode::APalworld_UITestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
