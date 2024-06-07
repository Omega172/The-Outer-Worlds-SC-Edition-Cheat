#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weapons_BP

#include "Basic.hpp"

#include "Weapons_BP_classes.hpp"
#include "Weapons_BP_parameters.hpp"


namespace CG
{

// Function Weapons_BP.Weapons_BP_C.ExecuteUbergraph_Weapons_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeapons_BP_C::ExecuteUbergraph_Weapons_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weapons_BP_C", "ExecuteUbergraph_Weapons_BP");

	Params::Weapons_BP_C_ExecuteUbergraph_Weapons_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Weapons_BP.Weapons_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeapons_BP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Weapons_BP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

