#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsMenuSlot_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass SettingsMenuSlot_BP.SettingsMenuSlot_BP_C
// 0x0008 (0x0358 - 0x0350)
class USettingsMenuSlot_BP_C final : public USettingsMenuSlotWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsMenuSlot_BP_C">();
	}
	static class USettingsMenuSlot_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsMenuSlot_BP_C>();
	}
};
static_assert(alignof(USettingsMenuSlot_BP_C) == 0x000008, "Wrong alignment on USettingsMenuSlot_BP_C");
static_assert(sizeof(USettingsMenuSlot_BP_C) == 0x000358, "Wrong size on USettingsMenuSlot_BP_C");
static_assert(offsetof(USettingsMenuSlot_BP_C, Image_0) == 0x000350, "Member 'USettingsMenuSlot_BP_C::Image_0' has a wrong offset!");

}

