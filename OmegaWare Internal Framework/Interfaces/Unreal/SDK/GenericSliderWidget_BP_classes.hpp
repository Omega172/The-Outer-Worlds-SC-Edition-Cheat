#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericSliderWidget_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass GenericSliderWidget_BP.GenericSliderWidget_BP_C
// 0x0010 (0x0348 - 0x0338)
class UGenericSliderWidget_BP_C final : public UWaitTimeSliderWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GenericSliderWidget_BP_C">();
	}
	static class UGenericSliderWidget_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenericSliderWidget_BP_C>();
	}
};
static_assert(alignof(UGenericSliderWidget_BP_C) == 0x000008, "Wrong alignment on UGenericSliderWidget_BP_C");
static_assert(sizeof(UGenericSliderWidget_BP_C) == 0x000348, "Wrong size on UGenericSliderWidget_BP_C");
static_assert(offsetof(UGenericSliderWidget_BP_C, Image_0) == 0x000338, "Member 'UGenericSliderWidget_BP_C::Image_0' has a wrong offset!");
static_assert(offsetof(UGenericSliderWidget_BP_C, Image_1) == 0x000340, "Member 'UGenericSliderWidget_BP_C::Image_1' has a wrong offset!");

}

