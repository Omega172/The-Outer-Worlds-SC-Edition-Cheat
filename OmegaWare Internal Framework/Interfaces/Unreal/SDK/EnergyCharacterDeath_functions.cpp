#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnergyCharacterDeath

#include "Basic.hpp"

#include "EnergyCharacterDeath_classes.hpp"
#include "EnergyCharacterDeath_parameters.hpp"


namespace CG
{

// Function EnergyCharacterDeath.EnergyCharacterDeath_C.ExecuteUbergraph_EnergyCharacterDeath
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnergyCharacterDeath_C::ExecuteUbergraph_EnergyCharacterDeath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnergyCharacterDeath_C", "ExecuteUbergraph_EnergyCharacterDeath");

	Params::EnergyCharacterDeath_C_ExecuteUbergraph_EnergyCharacterDeath Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnergyCharacterDeath.EnergyCharacterDeath_C.ExecuteOnReload
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCharacterDeathComponent*         InDeathComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnergyCharacterDeath_C::ExecuteOnReload(class UCharacterDeathComponent* InDeathComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnergyCharacterDeath_C", "ExecuteOnReload");

	Params::EnergyCharacterDeath_C_ExecuteOnReload Parms{};

	Parms.InDeathComponent = InDeathComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnergyCharacterDeath.EnergyCharacterDeath_C.Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnergyCharacterDeath_C::Tick(float Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnergyCharacterDeath_C", "Tick");

	Params::EnergyCharacterDeath_C_Tick Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnergyCharacterDeath.EnergyCharacterDeath_C.Execute
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCharacterDeathComponent*         InDeathComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnergyCharacterDeath_C::Execute(class UCharacterDeathComponent* InDeathComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnergyCharacterDeath_C", "Execute");

	Params::EnergyCharacterDeath_C_Execute Parms{};

	Parms.InDeathComponent = InDeathComponent;

	UObject::ProcessEvent(Func, &Parms);
}

}

