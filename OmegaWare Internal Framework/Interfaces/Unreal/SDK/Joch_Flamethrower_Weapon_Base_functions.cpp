#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Joch_Flamethrower_Weapon_Base

#include "Basic.hpp"

#include "Joch_Flamethrower_Weapon_Base_classes.hpp"
#include "Joch_Flamethrower_Weapon_Base_parameters.hpp"


namespace CG
{

// Function Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ExecuteUbergraph_Joch_Flamethrower_Weapon_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoch_Flamethrower_Weapon_Base_C::ExecuteUbergraph_Joch_Flamethrower_Weapon_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Joch_Flamethrower_Weapon_Base_C", "ExecuteUbergraph_Joch_Flamethrower_Weapon_Base");

	Params::Joch_Flamethrower_Weapon_Base_C_ExecuteUbergraph_Joch_Flamethrower_Weapon_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ReceiveTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoch_Flamethrower_Weapon_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Joch_Flamethrower_Weapon_Base_C", "ReceiveTick");

	Params::Joch_Flamethrower_Weapon_Base_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ReceiveActorBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoch_Flamethrower_Weapon_Base_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Joch_Flamethrower_Weapon_Base_C", "ReceiveActorBeginOverlap");

	Params::Joch_Flamethrower_Weapon_Base_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Joch_Flamethrower_Weapon_Base.Joch_Flamethrower_Weapon_Base_C.ReceiveBeginPlay
// (BlueprintCallable, BlueprintEvent)

void UJoch_Flamethrower_Weapon_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Joch_Flamethrower_Weapon_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
