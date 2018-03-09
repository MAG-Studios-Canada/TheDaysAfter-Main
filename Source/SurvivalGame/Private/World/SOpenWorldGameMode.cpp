//Copyright 1998 - 2018 MAG Studios Canada, Inc.All Rights Reserved.


#include "SOpenWorldGameMode.h"
#include "SurvivalGame.h"




ASOpenWorldGameMode::ASOpenWorldGameMode(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	/* Open world content is free-for-all */
	bAllowFriendlyFireDamage = true;
}


bool ASOpenWorldGameMode::CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget)
{
	return false;
}
