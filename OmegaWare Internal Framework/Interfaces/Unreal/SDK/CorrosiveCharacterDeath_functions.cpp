#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CorrosiveCharacterDeath

#include "Basic.hpp"

#include "CorrosiveCharacterDeath_classes.hpp"
#include "CorrosiveCharacterDeath_parameters.hpp"


namespace CG
{

// Function CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.ExecuteUbergraph_CorrosiveCharacterDeath
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrosiveCharacterDeath_C::ExecuteUbergraph_CorrosiveCharacterDeath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrosiveCharacterDeath_C", "ExecuteUbergraph_CorrosiveCharacterDeath");

	Params::CorrosiveCharacterDeath_C_ExecuteUbergraph_CorrosiveCharacterDeath Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.ExecuteOnReload
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCharacterDeathComponent*         InDeathComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrosiveCharacterDeath_C::ExecuteOnReload(class UCharacterDeathComponent* InDeathComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrosiveCharacterDeath_C", "ExecuteOnReload");

	Params::CorrosiveCharacterDeath_C_ExecuteOnReload Parms{};

	Parms.InDeathComponent = InDeathComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrosiveCharacterDeath_C::Tick(float Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrosiveCharacterDeath_C", "Tick");

	Params::CorrosiveCharacterDeath_C_Tick Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CorrosiveCharacterDeath.CorrosiveCharacterDeath_C.Execute
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCharacterDeathComponent*         InDeathComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrosiveCharacterDeath_C::Execute(class UCharacterDeathComponent* InDeathComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrosiveCharacterDeath_C", "Execute");

	Params::CorrosiveCharacterDeath_C_Execute Parms{};

	Parms.InDeathComponent = InDeathComponent;

	UObject::ProcessEvent(Func, &Parms);
}

}
