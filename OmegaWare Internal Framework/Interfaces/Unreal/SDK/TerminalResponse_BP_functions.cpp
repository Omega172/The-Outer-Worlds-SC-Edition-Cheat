#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TerminalResponse_BP

#include "Basic.hpp"

#include "TerminalResponse_BP_classes.hpp"
#include "TerminalResponse_BP_parameters.hpp"


namespace CG
{

// Function TerminalResponse_BP.TerminalResponse_BP_C.ExecuteUbergraph_TerminalResponse_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTerminalResponse_BP_C::ExecuteUbergraph_TerminalResponse_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TerminalResponse_BP_C", "ExecuteUbergraph_TerminalResponse_BP");

	Params::TerminalResponse_BP_C_ExecuteUbergraph_TerminalResponse_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TerminalResponse_BP.TerminalResponse_BP_C.OnSetSkillCheckRequiredCompanion
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bSelectable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTerminalResponse_BP_C::OnSetSkillCheckRequiredCompanion(bool bSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TerminalResponse_BP_C", "OnSetSkillCheckRequiredCompanion");

	Params::TerminalResponse_BP_C_OnSetSkillCheckRequiredCompanion Parms{};

	Parms.bSelectable = bSelectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TerminalResponse_BP.TerminalResponse_BP_C.OnSetSelectableOption
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bSelectable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTerminalResponse_BP_C::OnSetSelectableOption(bool bSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TerminalResponse_BP_C", "OnSetSelectableOption");

	Params::TerminalResponse_BP_C_OnSetSelectableOption Parms{};

	Parms.bSelectable = bSelectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TerminalResponse_BP.TerminalResponse_BP_C.OnResponseSkillsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bContainsSkillCheck                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTerminalResponse_BP_C::OnResponseSkillsChanged(bool bContainsSkillCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TerminalResponse_BP_C", "OnResponseSkillsChanged");

	Params::TerminalResponse_BP_C_OnResponseSkillsChanged Parms{};

	Parms.bContainsSkillCheck = bContainsSkillCheck;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TerminalResponse_BP.TerminalResponse_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTerminalResponse_BP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TerminalResponse_BP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

