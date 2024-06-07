#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CE_HackRobot_Visuals

#include "Basic.hpp"

#include "CE_HackRobot_Visuals_classes.hpp"
#include "CE_HackRobot_Visuals_parameters.hpp"


namespace CG
{

// Function CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ExecuteUbergraph_CE_HackRobot_Visuals
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_HackRobot_Visuals_C::ExecuteUbergraph_CE_HackRobot_Visuals(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CE_HackRobot_Visuals_C", "ExecuteUbergraph_CE_HackRobot_Visuals");

	Params::CE_HackRobot_Visuals_C_ExecuteUbergraph_CE_HackRobot_Visuals Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ReceiveApplyEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bRestoredFromSave                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCE_HackRobot_Visuals_C::ReceiveApplyEffect(class AActor* Target, float Ratio, bool bRestoredFromSave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CE_HackRobot_Visuals_C", "ReceiveApplyEffect");

	Params::CE_HackRobot_Visuals_C_ReceiveApplyEffect Parms{};

	Parms.Target = Target;
	Parms.Ratio = Ratio;
	Parms.bRestoredFromSave = bRestoredFromSave;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CE_HackRobot_Visuals.CE_HackRobot_Visuals_C.ReceiveClearEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCE_HackRobot_Visuals_C::ReceiveClearEffect(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CE_HackRobot_Visuals_C", "ReceiveClearEffect");

	Params::CE_HackRobot_Visuals_C_ReceiveClearEffect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}

