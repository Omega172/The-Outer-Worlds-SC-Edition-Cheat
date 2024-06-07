#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IndianaUI_BP

#include "Basic.hpp"

#include "IndianaUI_BP_classes.hpp"
#include "IndianaUI_BP_parameters.hpp"


namespace CG
{

// Function IndianaUI_BP.IndianaUI_BP_C.ExecuteUbergraph_IndianaUI_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIndianaUI_BP_C::ExecuteUbergraph_IndianaUI_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IndianaUI_BP_C", "ExecuteUbergraph_IndianaUI_BP");

	Params::IndianaUI_BP_C_ExecuteUbergraph_IndianaUI_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IndianaUI_BP.IndianaUI_BP_C.SetObjective
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ObjectiveName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AIndianaUI_BP_C::SetObjective(class AActor* Objective, const class FString& ObjectiveName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IndianaUI_BP_C", "SetObjective");

	Params::IndianaUI_BP_C_SetObjective Parms{};

	Parms.Objective = Objective;
	Parms.ObjectiveName = std::move(ObjectiveName);

	UObject::ProcessEvent(Func, &Parms);
}

}

