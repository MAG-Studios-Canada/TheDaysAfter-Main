// Copyright 1998-2018 MAG Studios Canada, Inc. All Rights Reserved.

#include "Base_AnimInstance.h"


void UBase_AnimInstance::UpdateAnimProperties()
{

	APawn* Pawn = TryGetPawnOwner();

	if (Pawn)
	{
		MovementSpeed = Pawn->GetVelocity().Size();
	}

}

