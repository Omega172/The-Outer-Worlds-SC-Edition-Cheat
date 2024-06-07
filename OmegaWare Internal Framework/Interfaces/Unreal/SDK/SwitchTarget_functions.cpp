#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SwitchTarget

#include "Basic.hpp"

#include "SwitchTarget_classes.hpp"
#include "SwitchTarget_parameters.hpp"


namespace CG
{

// Function SwitchTarget.SwitchTarget_C.RunDecisionTree
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIndianaAiCharacter*              Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIEventInfo*                     EventInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EDecisionTreeRequestPriority            OutPriority                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDecisionTreeRequestData*> ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class UDecisionTreeRequestData*> USwitchTarget_C::RunDecisionTree(class AIndianaAiCharacter* Owner, class FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority* OutPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SwitchTarget_C", "RunDecisionTree");

	Params::SwitchTarget_C_RunDecisionTree Parms{};

	Parms.Owner = Owner;
	Parms.EventType = EventType;
	Parms.EventInfo = EventInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPriority != nullptr)
		*OutPriority = Parms.OutPriority;

	return Parms.ReturnValue;
}

}
