#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponRadialBackgroundSection_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass WeaponRadialBackgroundSection_BP.WeaponRadialBackgroundSection_BP_C
// 0x0010 (0x0330 - 0x0320)
class UWeaponRadialBackgroundSection_BP_C final : public URadialBackgroundSectionWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOutHighlight;                                  // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponRadialBackgroundSection_BP(int32 EntryPoint);
	void Select();
	void Deselect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponRadialBackgroundSection_BP_C">();
	}
	static class UWeaponRadialBackgroundSection_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponRadialBackgroundSection_BP_C>();
	}
};
static_assert(alignof(UWeaponRadialBackgroundSection_BP_C) == 0x000008, "Wrong alignment on UWeaponRadialBackgroundSection_BP_C");
static_assert(sizeof(UWeaponRadialBackgroundSection_BP_C) == 0x000330, "Wrong size on UWeaponRadialBackgroundSection_BP_C");
static_assert(offsetof(UWeaponRadialBackgroundSection_BP_C, UberGraphFrame) == 0x000320, "Member 'UWeaponRadialBackgroundSection_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponRadialBackgroundSection_BP_C, FadeOutHighlight) == 0x000328, "Member 'UWeaponRadialBackgroundSection_BP_C::FadeOutHighlight' has a wrong offset!");

}

