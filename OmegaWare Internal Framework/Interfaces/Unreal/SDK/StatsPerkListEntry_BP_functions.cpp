#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsPerkListEntry_BP

#include "Basic.hpp"

#include "StatsPerkListEntry_BP_classes.hpp"
#include "StatsPerkListEntry_BP_parameters.hpp"


namespace CG
{

// Function StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.ExecuteUbergraph_StatsPerkListEntry_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatsPerkListEntry_BP_C::ExecuteUbergraph_StatsPerkListEntry_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatsPerkListEntry_BP_C", "ExecuteUbergraph_StatsPerkListEntry_BP");

	Params::StatsPerkListEntry_BP_C_ExecuteUbergraph_StatsPerkListEntry_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatsPerkListEntry_BP.StatsPerkListEntry_BP_C.UpdateButtonBrush
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bPendingPurchase                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bActuallyPurchased                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSuppressed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatsPerkListEntry_BP_C::UpdateButtonBrush(bool bPendingPurchase, bool bActuallyPurchased, bool bSuppressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatsPerkListEntry_BP_C", "UpdateButtonBrush");

	Params::StatsPerkListEntry_BP_C_UpdateButtonBrush Parms{};

	Parms.bPendingPurchase = bPendingPurchase;
	Parms.bActuallyPurchased = bActuallyPurchased;
	Parms.bSuppressed = bSuppressed;

	UObject::ProcessEvent(Func, &Parms);
}

}

