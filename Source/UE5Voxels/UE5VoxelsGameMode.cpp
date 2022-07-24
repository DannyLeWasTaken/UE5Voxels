// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5VoxelsGameMode.h"
#include "UE5VoxelsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5VoxelsGameMode::AUE5VoxelsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
