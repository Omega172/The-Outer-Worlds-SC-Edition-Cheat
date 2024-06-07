#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseCharacterDeath

#include "Basic.hpp"

#include "BaseCharacterDeath_classes.hpp"
#include "BaseCharacterDeath_parameters.hpp"


namespace CG
{

// Function BaseCharacterDeath.BaseCharacterDeath_C.ApplyDeathMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBaseCharacterDeath_C::ApplyDeathMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseCharacterDeath_C", "ApplyDeathMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.TriggerParticlesOnBreakSockets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TriggerImpactSpray                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             AttachedSocket                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             DetachedSocket                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCharacterDeath_C::TriggerParticlesOnBreakSockets(bool TriggerImpactSpray, class FName AttachedSocket, class FName DetachedSocket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseCharacterDeath_C", "TriggerParticlesOnBreakSockets");

	Params::BaseCharacterDeath_C_TriggerParticlesOnBreakSockets Parms{};

	Parms.TriggerImpactSpray = TriggerImpactSpray;
	Parms.AttachedSocket = AttachedSocket;
	Parms.DetachedSocket = DetachedSocket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.FindAndPostAudioEvents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBaseCharacterDeath_C::FindAndPostAudioEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseCharacterDeath_C", "FindAndPostAudioEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.CalcBodyTypeImpact
// (Public, BlueprintCallable, BlueprintEvent)

void UBaseCharacterDeath_C::CalcBodyTypeImpact()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseCharacterDeath_C", "CalcBodyTypeImpact");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.TriggerParticlesOnSpine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*                  EmitterTemplate                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCharacterDeath_C::TriggerParticlesOnSpine(class UParticleSystem* EmitterTemplate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseCharacterDeath_C", "TriggerParticlesOnSpine");

	Params::BaseCharacterDeath_C_TriggerParticlesOnSpine Parms{};

	Parms.EmitterTemplate = EmitterTemplate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.CreateAshPile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      LootablePile                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               LootablePileMaterial                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Ash_MID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCharacterDeath_C::CreateAshPile(class UStaticMesh* LootablePile, class UMaterialInterface* LootablePileMaterial, class UMaterialInstanceDynamic** Ash_MID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseCharacterDeath_C", "CreateAshPile");

	Params::BaseCharacterDeath_C_CreateAshPile Parms{};

	Parms.LootablePile = LootablePile;
	Parms.LootablePileMaterial = LootablePileMaterial;

	UObject::ProcessEvent(Func, &Parms);

	if (Ash_MID != nullptr)
		*Ash_MID = Parms.Ash_MID;
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.UpdateTransitionCompletionDelay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCharacterDeath_C::UpdateTransitionCompletionDelay(float Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseCharacterDeath_C", "UpdateTransitionCompletionDelay");

	Params::BaseCharacterDeath_C_UpdateTransitionCompletionDelay Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.UpdatePileDissolve
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DissolveDuration                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCharacterDeath_C::UpdatePileDissolve(float& CurrentTime, float DissolveDuration, class UMaterialInstanceDynamic* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseCharacterDeath_C", "UpdatePileDissolve");

	Params::BaseCharacterDeath_C_UpdatePileDissolve Parms{};

	Parms.CurrentTime = CurrentTime;
	Parms.DissolveDuration = DissolveDuration;
	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

	CurrentTime = Parms.CurrentTime;
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.TriggerNiagaraDeathParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*                   SystemTemplate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCharacterDeath_C::TriggerNiagaraDeathParticles(class UNiagaraSystem* SystemTemplate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseCharacterDeath_C", "TriggerNiagaraDeathParticles");

	Params::BaseCharacterDeath_C_TriggerNiagaraDeathParticles Parms{};

	Parms.SystemTemplate = SystemTemplate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BaseCharacterDeath.BaseCharacterDeath_C.TriggerNiagaraDeathAOE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*                   SystemTemplate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCharacterDeath_C::TriggerNiagaraDeathAOE(class UNiagaraSystem* SystemTemplate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BaseCharacterDeath_C", "TriggerNiagaraDeathAOE");

	Params::BaseCharacterDeath_C_TriggerNiagaraDeathAOE Parms{};

	Parms.SystemTemplate = SystemTemplate;

	UObject::ProcessEvent(Func, &Parms);
}

}

