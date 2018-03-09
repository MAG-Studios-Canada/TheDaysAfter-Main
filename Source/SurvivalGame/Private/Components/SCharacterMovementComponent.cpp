//Copyright 1998 - 2018 MAG Studios Canada, Inc.All Rights Reserved.


#include "SCharacterMovementComponent.h"
#include "SurvivalGame.h"
#include "SBaseCharacter.h"



float USCharacterMovementComponent::GetMaxSpeed() const
{
	float MaxSpeed = Super::GetMaxSpeed();

	const ASBaseCharacter* CharOwner = Cast<ASBaseCharacter>(PawnOwner);
	if (CharOwner)
	{
		// Slow down during targeting or crouching
		if (CharOwner->IsTargeting() && !IsCrouching())
		{
			MaxSpeed *= CharOwner->GetTargetingSpeedModifier();
		}
		else if (CharOwner->IsSprinting())
		{
			MaxSpeed *= CharOwner->GetSprintingSpeedModifier();
		}
	}

	return MaxSpeed;
}