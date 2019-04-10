// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "HorizonsGameMode.h"
#include "HorizonsHUD.h"
#include "HorizonsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHorizonsGameMode::AHorizonsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHorizonsHUD::StaticClass();
}
