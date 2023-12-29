// Copyright Epic Games, Inc. All Rights Reserved.

#include "PhoenixGameMode.h"
#include "PhoenixCharacter.h"
#include "UObject/ConstructorHelpers.h"

APhoenixGameMode::APhoenixGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
