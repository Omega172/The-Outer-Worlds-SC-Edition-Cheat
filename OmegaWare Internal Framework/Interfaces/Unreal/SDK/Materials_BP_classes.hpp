#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Materials_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass Materials_BP.Materials_BP_C
// 0x0000 (0x0430 - 0x0430)
class UMaterials_BP_C final : public UInventoryMaterialsPageWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Materials_BP_C">();
	}
	static class UMaterials_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterials_BP_C>();
	}
};
static_assert(alignof(UMaterials_BP_C) == 0x000008, "Wrong alignment on UMaterials_BP_C");
static_assert(sizeof(UMaterials_BP_C) == 0x000430, "Wrong size on UMaterials_BP_C");

}

