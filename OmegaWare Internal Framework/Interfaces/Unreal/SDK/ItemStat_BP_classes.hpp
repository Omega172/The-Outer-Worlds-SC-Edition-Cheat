#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemStat_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass ItemStat_BP.ItemStat_BP_C
// 0x0000 (0x0348 - 0x0348)
class UItemStat_BP_C final : public UItemStatEntryWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemStat_BP_C">();
	}
	static class UItemStat_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemStat_BP_C>();
	}
};
static_assert(alignof(UItemStat_BP_C) == 0x000008, "Wrong alignment on UItemStat_BP_C");
static_assert(sizeof(UItemStat_BP_C) == 0x000348, "Wrong size on UItemStat_BP_C");

}

