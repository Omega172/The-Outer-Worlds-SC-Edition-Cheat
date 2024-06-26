#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XFH_CE_Chilled

#include "Basic.hpp"

#include "XFH_CE_Chilled_classes.hpp"
#include "XFH_CE_Chilled_parameters.hpp"


namespace CG
{

// Function XFH_CE_Chilled.XFH_CE_Chilled_C.ExecuteUbergraph_XFH_CE_Chilled
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXFH_CE_Chilled_C::ExecuteUbergraph_XFH_CE_Chilled(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XFH_CE_Chilled_C", "ExecuteUbergraph_XFH_CE_Chilled");

	Params::XFH_CE_Chilled_C_ExecuteUbergraph_XFH_CE_Chilled Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XFH_CE_Chilled.XFH_CE_Chilled_C.ReceiveApplyEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Ratio                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRestoredFromSave                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UXFH_CE_Chilled_C::ReceiveApplyEffect(class AActor* Target, float Param_Ratio, bool bRestoredFromSave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XFH_CE_Chilled_C", "ReceiveApplyEffect");

	Params::XFH_CE_Chilled_C_ReceiveApplyEffect Parms{};

	Parms.Target = Target;
	Parms.Param_Ratio = Param_Ratio;
	Parms.bRestoredFromSave = bRestoredFromSave;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XFH_CE_Chilled.XFH_CE_Chilled_C.ReceiveClearEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXFH_CE_Chilled_C::ReceiveClearEffect(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XFH_CE_Chilled_C", "ReceiveClearEffect");

	Params::XFH_CE_Chilled_C_ReceiveClearEffect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}

