#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreditsWidget_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass CreditsWidget_BP.CreditsWidget_BP_C
// 0x0008 (0x0388 - 0x0380)
class UCreditsWidget_BP_C final : public UCreditsWidget
{
public:
	class UImage*                                 BackgroundImage;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreditsWidget_BP_C">();
	}
	static class UCreditsWidget_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreditsWidget_BP_C>();
	}
};
static_assert(alignof(UCreditsWidget_BP_C) == 0x000008, "Wrong alignment on UCreditsWidget_BP_C");
static_assert(sizeof(UCreditsWidget_BP_C) == 0x000388, "Wrong size on UCreditsWidget_BP_C");
static_assert(offsetof(UCreditsWidget_BP_C, BackgroundImage) == 0x000380, "Member 'UCreditsWidget_BP_C::BackgroundImage' has a wrong offset!");

}

