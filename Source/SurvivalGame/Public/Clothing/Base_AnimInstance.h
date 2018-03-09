// Copyright 1998-2018 MAG Studios Canada, Inc. All Rights Reserved.

#pragma once

#include "SurvivalGame.h"
#include "Animation/AnimInstance.h"
#include "Base_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALGAME_API UBase_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	
		protected:
			UPROPERTY(EditAnywhere, BlueprintReadOnly)
				float MovementSpeed;
			UFUNCTION(BlueprintCallable, Category = "Clothing | Anims")
			virtual void UpdateAnimProperties();

	
};
