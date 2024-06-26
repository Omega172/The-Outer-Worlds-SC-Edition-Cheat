#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_Weaken_PostProcess

#include "Basic.hpp"

#include "CE_Weaken_PostProcess_classes.hpp"
#include "CE_Weaken_PostProcess_parameters.hpp"


namespace CG
{

// Function CE_Weaken_PostProcess.CE_Weaken_PostProcess_C.ExecuteUbergraph_CE_Weaken_PostProcess
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_Weaken_PostProcess_C::ExecuteUbergraph_CE_Weaken_PostProcess(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CE_Weaken_PostProcess_C", "ExecuteUbergraph_CE_Weaken_PostProcess");

	Params::CE_Weaken_PostProcess_C_ExecuteUbergraph_CE_Weaken_PostProcess Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CE_Weaken_PostProcess.CE_Weaken_PostProcess_C.ReceiveClearEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_Weaken_PostProcess_C::ReceiveClearEffect(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CE_Weaken_PostProcess_C", "ReceiveClearEffect");

	Params::CE_Weaken_PostProcess_C_ReceiveClearEffect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CE_Weaken_PostProcess.CE_Weaken_PostProcess_C.ReceiveApplyEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Ratio                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRestoredFromSave                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCE_Weaken_PostProcess_C::ReceiveApplyEffect(class AActor* Target, float Param_Ratio, bool bRestoredFromSave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CE_Weaken_PostProcess_C", "ReceiveApplyEffect");

	Params::CE_Weaken_PostProcess_C_ReceiveApplyEffect Parms{};

	Parms.Target = Target;
	Parms.Param_Ratio = Param_Ratio;
	Parms.bRestoredFromSave = bRestoredFromSave;

	UObject::ProcessEvent(Func, &Parms);
}

}

