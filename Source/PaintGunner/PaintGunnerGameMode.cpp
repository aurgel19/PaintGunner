// Copyright Epic Games, Inc. All Rights Reserved.

#include "PaintGunnerGameMode.h"
#include "PaintGunnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

APaintGunnerGameMode::APaintGunnerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
