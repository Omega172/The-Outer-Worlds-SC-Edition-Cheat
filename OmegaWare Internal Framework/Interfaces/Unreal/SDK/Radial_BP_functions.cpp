#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Radial_BP

#include "Basic.hpp"

#include "Radial_BP_classes.hpp"
#include "Radial_BP_parameters.hpp"


namespace CG
{

// Function Radial_BP.Radial_BP_C.ExecuteUbergraph_Radial_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadial_BP_C::ExecuteUbergraph_Radial_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Radial_BP_C", "ExecuteUbergraph_Radial_BP");

	Params::Radial_BP_C_ExecuteUbergraph_Radial_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Radial_BP.Radial_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URadial_BP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Radial_BP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
