//Copyright 1998 - 2018 MAG Studios Canada, Inc.All Rights Reserved.


#include "SMutator.h"
#include "SurvivalGame.h"




bool ASMutator::CheckRelevance_Implementation(AActor* Other)
{
	if (NextMutator)
	{
		return NextMutator->CheckRelevance(Other);
	}

	return true;
}


void ASMutator::InitGame_Implementation(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	if (NextMutator)
	{
		NextMutator->InitGame(MapName, Options, ErrorMessage);
	}
}
