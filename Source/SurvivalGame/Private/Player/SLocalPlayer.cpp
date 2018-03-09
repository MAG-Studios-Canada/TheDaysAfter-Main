//Copyright 1998 - 2018 MAG Studios Canada, Inc.All Rights Reserved.


#include "SLocalPlayer.h"
#include "SurvivalGame.h"





FString USLocalPlayer::GetNickname() const
{
	/* Try to fetch a nickname from the online subsystem (eg. Steam) if available */
	FString NickName = Super::GetNickname();

	// Fall back if no nickname was available through the online subsystem.
	if (NickName.IsEmpty())
	{
		const FString Suffix = FString::FromInt(FMath::RandRange(0, 999));
		NickName = FPlatformProcess::ComputerName() + Suffix;
	}

	return NickName;
}
