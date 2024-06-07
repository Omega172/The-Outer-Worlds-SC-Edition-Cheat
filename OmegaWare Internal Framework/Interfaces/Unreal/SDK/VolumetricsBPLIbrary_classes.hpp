#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VolumetricsBPLIbrary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EVolumeTextureDimensions_structs.hpp"


namespace CG
{

// BlueprintGeneratedClass VolumetricsBPLIbrary.VolumetricsBPLIbrary_C
// 0x0000 (0x0030 - 0x0030)
class UVolumetricsBPLIbrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Create_and_Assign_RT(class UTextureRenderTarget2D*& RT, const struct FIntPoint& Size, ETextureRenderTargetFormat Format, class UObject* __WorldContext);
	static void Create_and_Assign_MID(class UMaterialInstanceDynamic*& Mid, class UMaterialInterface* Parent, class UObject* __WorldContext);
	static void PseudoVolume_Dimensions(EVolumeTextureDimensions Dimensions, class UObject* __WorldContext, struct FIntPoint* RT_Size, struct FIntPoint* XY_Frames, int32* Volume_Size);
	static void RT_Size_Compare(class UTextureRenderTarget2D*& A, class UTextureRenderTarget2D*& B, class UObject* __WorldContext, bool* Match);
	static void Get_Texture_Size(class UTexture* Texture, class UObject* __WorldContext, struct FIntPoint* Size);
	static void GetFirstActorOfClass(class UObject* WorldContent, class UClass* Param_Class, class UObject* __WorldContext, class AActor** Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VolumetricsBPLIbrary_C">();
	}
	static class UVolumetricsBPLIbrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVolumetricsBPLIbrary_C>();
	}
};
static_assert(alignof(UVolumetricsBPLIbrary_C) == 0x000008, "Wrong alignment on UVolumetricsBPLIbrary_C");
static_assert(sizeof(UVolumetricsBPLIbrary_C) == 0x000030, "Wrong size on UVolumetricsBPLIbrary_C");

}

