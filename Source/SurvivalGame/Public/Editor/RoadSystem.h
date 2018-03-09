/*********************************************************************/
/* Copyright 1998-2018 MAG Studios Canada, Inc. All Rights Reserved. */
/*********************************************************************/

#pragma once


#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "SurvivalGame.h"
#include "RoadSystem.generated.h"


/****************************************************************/
/*              Create Road System Variables                    */
/*such as - Left and Right Optional meshes - gutter and sidewalk*/
/*          allow access to bank width and thickness            */
/****************************************************************/

USTRUCT(BlueprintType)
struct FRoadData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RoadMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool LftOptMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RhtOptMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool LftOptMesh1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RhtOptMesh1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RoadBank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RoadWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RoadThickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Loops;
	
	 FRoadData()
		{
			RoadMesh = true;

			LftOptMesh = false;
			LftOptMesh1 = false;

			RhtOptMesh = false;
			RhtOptMesh1 = false;

			RoadBank =  0.0f;
			RoadWidth = 1.0f;
			RoadThickness = 1.0f;

			Loops = false;
		}
};

UCLASS()
class SURVIVALGAME_API ARoadSystem : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USplineComponent* SplineComponent;

	// Sets default values for this actor's properties
	ARoadSystem();

	// overridden from AActor class to use our custom construction script
	virtual void OnConstruction(const FTransform& Transform) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RoadSystem | DATA")
	TArray<FRoadData> RoadDataArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RoadSystem | Settings")
	bool Loops = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RoadSystem | Meshes")
	UStaticMesh* RoadMesh = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RoadSystem | Meshes")
	UStaticMesh* LftOptMesh = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RoadSystem | Meshes")
	UStaticMesh* LftOptMesh1 = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RoadSystem | Meshes")
	UStaticMesh* RhtOptMesh = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RoadSystem | Meshes")
	UStaticMesh* RhtOptMesh1 = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RoadSystem | Debug")
	bool CollisionOn = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RoadSystem | Debug")
	bool DrawPointNumbers = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RoadSystem | Debug")
	UMaterialInterface* PointNumberMaterial;

protected:
	virtual void BuildRoadElement(int32 LoopIndex, UStaticMesh* RoadMesh);

private:
	UPROPERTY(EditDefaultsOnly)
	int32 NumberOfPoints = 0;
};
