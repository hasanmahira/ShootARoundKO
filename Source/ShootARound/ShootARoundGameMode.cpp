// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootARoundGameMode.h"
#include "ShootARoundHUD.h"
#include "ShootARoundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootARoundGameMode::AShootARoundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShootARoundHUD::StaticClass();
}
