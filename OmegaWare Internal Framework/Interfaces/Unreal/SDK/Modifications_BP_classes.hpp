#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Modifications_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass Modifications_BP.Modifications_BP_C
// 0x0000 (0x0430 - 0x0430)
class UModifications_BP_C final : public UInventoryModificationsPageWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Modifications_BP_C">();
	}
	static class UModifications_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModifications_BP_C>();
	}
};
static_assert(alignof(UModifications_BP_C) == 0x000008, "Wrong alignment on UModifications_BP_C");
static_assert(sizeof(UModifications_BP_C) == 0x000430, "Wrong size on UModifications_BP_C");

}

