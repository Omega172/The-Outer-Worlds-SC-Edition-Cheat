#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ammo_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass Ammo_BP.Ammo_BP_C
// 0x0008 (0x0320 - 0x0318)
class UAmmo_BP_C final : public UInventoryWeaponAmmoWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ammo_BP(int32 EntryPoint);
	void BndEvt__Button_K2Node_ComponentBoundEvent_264_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_240_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_216_NoParamMCD__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_189_NoParamMCD__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ammo_BP_C">();
	}
	static class UAmmo_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAmmo_BP_C>();
	}
};
static_assert(alignof(UAmmo_BP_C) == 0x000008, "Wrong alignment on UAmmo_BP_C");
static_assert(sizeof(UAmmo_BP_C) == 0x000320, "Wrong size on UAmmo_BP_C");
static_assert(offsetof(UAmmo_BP_C, UberGraphFrame) == 0x000318, "Member 'UAmmo_BP_C::UberGraphFrame' has a wrong offset!");

}

