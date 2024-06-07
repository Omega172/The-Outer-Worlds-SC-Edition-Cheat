#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsMenuKeyRebind_BP

#include "Basic.hpp"

#include "SettingsMenuKeyRebind_BP_classes.hpp"
#include "SettingsMenuKeyRebind_BP_parameters.hpp"


namespace CG
{

// Function SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C.ExecuteUbergraph_SettingsMenuKeyRebind_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsMenuKeyRebind_BP_C::ExecuteUbergraph_SettingsMenuKeyRebind_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsMenuKeyRebind_BP_C", "ExecuteUbergraph_SettingsMenuKeyRebind_BP");

	Params::SettingsMenuKeyRebind_BP_C_ExecuteUbergraph_SettingsMenuKeyRebind_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsMenuKeyRebind_BP.SettingsMenuKeyRebind_BP_C.BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FComponentEvent                  Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void USettingsMenuKeyRebind_BP_C::BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsMenuKeyRebind_BP_C", "BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature");

	Params::SettingsMenuKeyRebind_BP_C_BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature Parms{};

	Parms.Event = std::move(Event);

	UObject::ProcessEvent(Func, &Parms);
}

}

