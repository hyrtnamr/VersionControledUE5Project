// Copyright Epic Games, Inc. All Rights Reserved.

#include "VersionControledTGameMode.h"
#include "VersionControledTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVersionControledTGameMode::AVersionControledTGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
