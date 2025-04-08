// Copyright Epic Games, Inc. All Rights Reserved.

#include "MP_ShooterGameMode.h"
#include "MP_ShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMP_ShooterGameMode::AMP_ShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
