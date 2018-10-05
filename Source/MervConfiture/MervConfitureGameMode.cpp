// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MervConfitureGameMode.h"
#include "MervConfiturePlayerController.h"
#include "MervConfitureCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMervConfitureGameMode::AMervConfitureGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMervConfiturePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}