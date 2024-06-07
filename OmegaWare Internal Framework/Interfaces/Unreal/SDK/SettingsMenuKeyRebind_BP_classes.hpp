#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsMenuKeyRebind_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C
// 0x0010 (0x0370 - 0x0360)
class USettingsMenuKeyRebind_BP_C final : public USettingsMenuKeyRebindWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SettingsMenuKeyRebind_BP(int32 EntryPoint);
	void BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsMenuKeyRebind_BP_C">();
	}
	static class USettingsMenuKeyRebind_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsMenuKeyRebind_BP_C>();
	}
};
static_assert(alignof(USettingsMenuKeyRebind_BP_C) == 0x000008, "Wrong alignment on USettingsMenuKeyRebind_BP_C");
static_assert(sizeof(USettingsMenuKeyRebind_BP_C) == 0x000370, "Wrong size on USettingsMenuKeyRebind_BP_C");
static_assert(offsetof(USettingsMenuKeyRebind_BP_C, UberGraphFrame) == 0x000360, "Member 'USettingsMenuKeyRebind_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USettingsMenuKeyRebind_BP_C, Image_0) == 0x000368, "Member 'USettingsMenuKeyRebind_BP_C::Image_0' has a wrong offset!");

}
