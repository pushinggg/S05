// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "S05GameMode.h"
#include "S05HUD.h"
#include "S05Character.h"
#include "UObject/ConstructorHelpers.h"

AS05GameMode::AS05GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05HUD::StaticClass();
}
