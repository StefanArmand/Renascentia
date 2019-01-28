// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "RenascentiaGameMode.h"
#include "RenascentiaHUD.h"
#include "RenascentiaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARenascentiaGameMode::ARenascentiaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARenascentiaHUD::StaticClass();
}
