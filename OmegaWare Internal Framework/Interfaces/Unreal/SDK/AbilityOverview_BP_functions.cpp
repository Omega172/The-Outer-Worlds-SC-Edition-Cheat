#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilityOverview_BP

#include "Basic.hpp"

#include "AbilityOverview_BP_classes.hpp"
#include "AbilityOverview_BP_parameters.hpp"


namespace CG
{

// Function AbilityOverview_BP.AbilityOverview_BP_C.ExecuteUbergraph_AbilityOverview_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityOverview_BP_C::ExecuteUbergraph_AbilityOverview_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityOverview_BP_C", "ExecuteUbergraph_AbilityOverview_BP");

	Params::AbilityOverview_BP_C_ExecuteUbergraph_AbilityOverview_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityOverview_BP.AbilityOverview_BP_C.OnAbilityCooldownFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// EAbilityPosition                        AbillityPosition                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityOverview_BP_C::OnAbilityCooldownFinished(EAbilityPosition AbillityPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityOverview_BP_C", "OnAbilityCooldownFinished");

	Params::AbilityOverview_BP_C_OnAbilityCooldownFinished Parms{};

	Parms.AbillityPosition = AbillityPosition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityOverview_BP.AbilityOverview_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbilityOverview_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityOverview_BP_C", "Tick");

	Params::AbilityOverview_BP_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AbilityOverview_BP.AbilityOverview_BP_C.OnPlayerCombatStateChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsPlayerInCombat                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bRestoring                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbilityOverview_BP_C::OnPlayerCombatStateChange(bool IsPlayerInCombat, bool bRestoring)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AbilityOverview_BP_C", "OnPlayerCombatStateChange");

	Params::AbilityOverview_BP_C_OnPlayerCombatStateChange Parms{};

	Parms.IsPlayerInCombat = IsPlayerInCombat;
	Parms.bRestoring = bRestoring;

	UObject::ProcessEvent(Func, &Parms);
}

}
