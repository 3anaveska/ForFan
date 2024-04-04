// Copyright Epic Games, Inc. All Rights Reserved.

#include "ForfanGameMode.h"
#include "ForfanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AForfanGameMode::AForfanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
