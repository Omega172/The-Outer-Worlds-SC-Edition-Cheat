#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmmoReadout_BP

#include "Basic.hpp"

#include "AmmoReadout_BP_classes.hpp"
#include "AmmoReadout_BP_parameters.hpp"


namespace CG
{

// Function AmmoReadout_BP.AmmoReadout_BP_C.ExecuteUbergraph_AmmoReadout_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmmoReadout_BP_C::ExecuteUbergraph_AmmoReadout_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmmoReadout_BP_C", "ExecuteUbergraph_AmmoReadout_BP");

	Params::AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmmoReadout_BP.AmmoReadout_BP_C.EvaluateLowAmmoWarning
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   MaxClipSize                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentClipSize                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RemainingAmmo                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmmoReadout_BP_C::EvaluateLowAmmoWarning(int32 MaxClipSize, int32 CurrentClipSize, int32 RemainingAmmo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmmoReadout_BP_C", "EvaluateLowAmmoWarning");

	Params::AmmoReadout_BP_C_EvaluateLowAmmoWarning Parms{};

	Parms.MaxClipSize = MaxClipSize;
	Parms.CurrentClipSize = CurrentClipSize;
	Parms.RemainingAmmo = RemainingAmmo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AmmoReadout_BP.AmmoReadout_BP_C.ColorTextBlock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlockBase*                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAmmoReadout_BP_C::ColorTextBlock(bool Param_Index, class UTextBlockBase* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmmoReadout_BP_C", "ColorTextBlock");

	Params::AmmoReadout_BP_C_ColorTextBlock Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}

