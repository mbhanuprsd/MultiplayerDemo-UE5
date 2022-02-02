// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerDemoGameMode.h"
#include "MultiplayerDemoPawn.h"
#include "MultiplayerDemoHud.h"

AMultiplayerDemoGameMode::AMultiplayerDemoGameMode()
{
	DefaultPawnClass = AMultiplayerDemoPawn::StaticClass();
	HUDClass = AMultiplayerDemoHud::StaticClass();
}
