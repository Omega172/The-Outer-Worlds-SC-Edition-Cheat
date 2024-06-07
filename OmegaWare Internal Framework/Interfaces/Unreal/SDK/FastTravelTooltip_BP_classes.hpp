#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FastTravelTooltip_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass FastTravelTooltip_BP.FastTravelTooltip_BP_C
// 0x0008 (0x0318 - 0x0310)
class UFastTravelTooltip_BP_C final : public UFastTravelTooltipWidget
{
public:
	class UBorder*                                FrameBorder;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FastTravelTooltip_BP_C">();
	}
	static class UFastTravelTooltip_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFastTravelTooltip_BP_C>();
	}
};
static_assert(alignof(UFastTravelTooltip_BP_C) == 0x000008, "Wrong alignment on UFastTravelTooltip_BP_C");
static_assert(sizeof(UFastTravelTooltip_BP_C) == 0x000318, "Wrong size on UFastTravelTooltip_BP_C");
static_assert(offsetof(UFastTravelTooltip_BP_C, FrameBorder) == 0x000310, "Member 'UFastTravelTooltip_BP_C::FrameBorder' has a wrong offset!");

}

