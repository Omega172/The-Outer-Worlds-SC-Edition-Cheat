#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_FallCripple

#include "Basic.hpp"

#include "CE_FallCripple_classes.hpp"
#include "CE_FallCripple_parameters.hpp"


namespace CG
{

// Function CE_FallCripple.CE_FallCripple_C.ExecuteUbergraph_CE_FallCripple
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_FallCripple_C::ExecuteUbergraph_CE_FallCripple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CE_FallCripple_C", "ExecuteUbergraph_CE_FallCripple");

	Params::CE_FallCripple_C_ExecuteUbergraph_CE_FallCripple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CE_FallCripple.CE_FallCripple_C.ReceiveClearEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_FallCripple_C::ReceiveClearEffect(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CE_FallCripple_C", "ReceiveClearEffect");

	Params::CE_FallCripple_C_ReceiveClearEffect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CE_FallCripple.CE_FallCripple_C.ReceiveApplyEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRestoredFromSave                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCE_FallCripple_C::ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CE_FallCripple_C", "ReceiveApplyEffect");

	Params::CE_FallCripple_C_ReceiveApplyEffect Parms{};

	Parms.Target = Target;
	Parms.Ratio = Ratio;
	Parms.bRestoredFromSave = bRestoredFromSave;

	UObject::ProcessEvent(Func, &Parms);
}

}

