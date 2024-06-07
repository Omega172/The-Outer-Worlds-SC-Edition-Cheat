#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CauseDamageReticle_BP

#include "Basic.hpp"

#include "CauseDamageReticle_BP_classes.hpp"
#include "CauseDamageReticle_BP_parameters.hpp"


namespace CG
{

// Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ExecuteUbergraph_CauseDamageReticle_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCauseDamageReticle_BP_C::ExecuteUbergraph_CauseDamageReticle_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauseDamageReticle_BP_C", "ExecuteUbergraph_CauseDamageReticle_BP");

	Params::CauseDamageReticle_BP_C_ExecuteUbergraph_CauseDamageReticle_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowKillAnim
// (Event, Protected, BlueprintEvent)

void UCauseDamageReticle_BP_C::ShowKillAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauseDamageReticle_BP_C", "ShowKillAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowWeakAnim
// (Event, Protected, BlueprintEvent)

void UCauseDamageReticle_BP_C::ShowWeakAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauseDamageReticle_BP_C", "ShowWeakAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CauseDamageReticle_BP.CauseDamageReticle_BP_C.ShowHitAnim
// (Event, Protected, BlueprintEvent)

void UCauseDamageReticle_BP_C::ShowHitAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CauseDamageReticle_BP_C", "ShowHitAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

