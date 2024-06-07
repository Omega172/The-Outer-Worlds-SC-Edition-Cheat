#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EngineSettings

#include "Basic.hpp"

#include "EngineSettings_classes.hpp"
#include "EngineSettings_parameters.hpp"


namespace CG
{

// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameMapsSettings*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameMapsSettings* UGameMapsSettings::GetGameMapsSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameMapsSettings", "GetGameMapsSettings");

	Params::GameMapsSettings_GetGameMapsSettings Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bSkipFirstPlayer                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameMapsSettings", "SetSkipAssigningGamepadToPlayer1");

	Params::GameMapsSettings_SetSkipAssigningGamepadToPlayer1 Parms{};

	Parms.bSkipFirstPlayer = bSkipFirstPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameMapsSettings", "GetSkipAssigningGamepadToPlayer1");

	Params::GameMapsSettings_GetSkipAssigningGamepadToPlayer1 Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

