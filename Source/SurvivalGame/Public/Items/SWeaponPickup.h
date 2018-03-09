//Copyright 1998 - 2018 MAG Studios Canada, Inc.All Rights Reserved.
#pragma once

#include "SPickupActor.h"
#include "SWeaponPickup.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class SURVIVALGAME_API ASWeaponPickup : public ASPickupActor
{
	GENERATED_BODY()

	ASWeaponPickup(const FObjectInitializer& ObjectInitializer);

public:

	/* Class to add to inventory when picked up */
	UPROPERTY(EditDefaultsOnly, Category = "WeaponClass")
	TSubclassOf<ASWeapon> WeaponClass;

	virtual void OnUsed(APawn* InstigatorPawn) override;
};
