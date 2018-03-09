//Copyright 1998 - 2018 MAG Studios Canada, Inc.All Rights Reserved.


#include "SUsableActor.h"
#include "SurvivalGame.h"

ASUsableActor::ASUsableActor(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	MeshComp = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Mesh"));
	RootComponent = MeshComp;
} 


void ASUsableActor::OnUsed(APawn* InstigatorPawn)
{
	// Nothing to do here...
}


void ASUsableActor::OnBeginFocus()
{
	// Used by custom PostProcess to render outlines
	MeshComp->SetRenderCustomDepth(true);
}


void ASUsableActor::OnEndFocus()
{
	// Used by custom PostProcess to render outlines
	MeshComp->SetRenderCustomDepth(false);
}

