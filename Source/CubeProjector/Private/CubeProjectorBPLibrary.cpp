// Copyright Epic Games, Inc. All Rights Reserved.

#include "CubeProjectorBPLibrary.h"
#include "CubeProjector.h"
#include "Engine/TextureRenderTargetCube.h"
#include "Engine/Engine.h"

UCubeProjectorBPLibrary::UCubeProjectorBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UTextureRenderTargetCube* UCubeProjectorBPLibrary::CreateRenderTargetCube(UObject* WorldContextObject, int32 Width)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (Width > 0 && World)
	{
		UTextureRenderTargetCube* NewRenderTarget = NewObject<UTextureRenderTargetCube>(WorldContextObject);
		check(NewRenderTarget);
		NewRenderTarget->InitAutoFormat(Width);
		NewRenderTarget->UpdateResourceImmediate(true);
		return NewRenderTarget;
	}
	return nullptr;
}
