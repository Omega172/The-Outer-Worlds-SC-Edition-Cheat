#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReputationEntry_BP1

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass ReputationEntry_BP1.ReputationEntry_BP1_C
// 0x0008 (0x0338 - 0x0330)
class UReputationEntry_BP1_C final : public UReputationEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ReputationEntry_BP1(int32 EntryPoint);
	void BndEvt__Button_K2Node_ComponentBoundEvent_228_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_206_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_182_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_153_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void SetFocusChanged(bool IsFocused);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReputationEntry_BP1_C">();
	}
	static class UReputationEntry_BP1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReputationEntry_BP1_C>();
	}
};
static_assert(alignof(UReputationEntry_BP1_C) == 0x000008, "Wrong alignment on UReputationEntry_BP1_C");
static_assert(sizeof(UReputationEntry_BP1_C) == 0x000338, "Wrong size on UReputationEntry_BP1_C");
static_assert(offsetof(UReputationEntry_BP1_C, UberGraphFrame) == 0x000330, "Member 'UReputationEntry_BP1_C::UberGraphFrame' has a wrong offset!");

}

