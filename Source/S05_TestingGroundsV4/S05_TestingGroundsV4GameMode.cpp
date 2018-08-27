// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "S05_TestingGroundsV4GameMode.h"
#include "S05_TestingGroundsV4HUD.h"
#include "S05_TestingGroundsV4Character.h"
#include "UObject/ConstructorHelpers.h"

AS05_TestingGroundsV4GameMode::AS05_TestingGroundsV4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_TestingGroundsV4HUD::StaticClass();
}
