#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemContainerEntry_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass ItemContainerEntry_BP.ItemContainerEntry_BP_C
// 0x0000 (0x0368 - 0x0368)
class UItemContainerEntry_BP_C final : public UItemContainerEntryWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemContainerEntry_BP_C">();
	}
	static class UItemContainerEntry_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemContainerEntry_BP_C>();
	}
};
static_assert(alignof(UItemContainerEntry_BP_C) == 0x000008, "Wrong alignment on UItemContainerEntry_BP_C");
static_assert(sizeof(UItemContainerEntry_BP_C) == 0x000368, "Wrong size on UItemContainerEntry_BP_C");

}

