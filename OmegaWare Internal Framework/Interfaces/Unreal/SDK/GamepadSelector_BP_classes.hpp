#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadSelector_BP

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass GamepadSelector_BP.GamepadSelector_BP_C
// 0x0008 (0x0280 - 0x0278)
class UGamepadSelector_BP_C final : public UUserWidget
{
public:
	class UImage*                                 GamepadSelector;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GamepadSelector_BP_C">();
	}
	static class UGamepadSelector_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadSelector_BP_C>();
	}
};
static_assert(alignof(UGamepadSelector_BP_C) == 0x000008, "Wrong alignment on UGamepadSelector_BP_C");
static_assert(sizeof(UGamepadSelector_BP_C) == 0x000280, "Wrong size on UGamepadSelector_BP_C");
static_assert(offsetof(UGamepadSelector_BP_C, GamepadSelector) == 0x000278, "Member 'UGamepadSelector_BP_C::GamepadSelector' has a wrong offset!");

}
