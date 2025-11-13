// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CubeProjectorBPLibrary.generated.h"

UCLASS()
class UCubeProjectorBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "Projector", meta = (WorldContext = "WorldContextObject"))
	static class UTextureRenderTargetCube* CreateRenderTargetCube(UObject* WorldContextObject, int32 Width = 512);
};
