#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemViewerScrollSelectorEntry_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass ItemViewerScrollSelectorEntry_BP.ItemViewerScrollSelectorEntry_BP_C
// 0x0008 (0x0318 - 0x0310)
class UItemViewerScrollSelectorEntry_BP_C final : public UItemViewerScrollSelectorEntry
{
public:
	class UImage*                                 Image_0;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemViewerScrollSelectorEntry_BP_C">();
	}
	static class UItemViewerScrollSelectorEntry_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemViewerScrollSelectorEntry_BP_C>();
	}
};
static_assert(alignof(UItemViewerScrollSelectorEntry_BP_C) == 0x000008, "Wrong alignment on UItemViewerScrollSelectorEntry_BP_C");
static_assert(sizeof(UItemViewerScrollSelectorEntry_BP_C) == 0x000318, "Wrong size on UItemViewerScrollSelectorEntry_BP_C");
static_assert(offsetof(UItemViewerScrollSelectorEntry_BP_C, Image_0) == 0x000310, "Member 'UItemViewerScrollSelectorEntry_BP_C::Image_0' has a wrong offset!");

}
