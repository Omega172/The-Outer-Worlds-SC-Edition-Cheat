#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemContainer_BP

#include "Basic.hpp"

#include "ItemContainer_BP_classes.hpp"
#include "ItemContainer_BP_parameters.hpp"


namespace CG
{

// Function ItemContainer_BP.ItemContainer_BP_C.ExecuteUbergraph_ItemContainer_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemContainer_BP_C::ExecuteUbergraph_ItemContainer_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemContainer_BP_C", "ExecuteUbergraph_ItemContainer_BP");

	Params::ItemContainer_BP_C_ExecuteUbergraph_ItemContainer_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemContainer_BP.ItemContainer_BP_C.OnOutroEnd
// (BlueprintCallable, BlueprintEvent)

void UItemContainer_BP_C::OnOutroEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemContainer_BP_C", "OnOutroEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemContainer_BP.ItemContainer_BP_C.OnIntroStart
// (BlueprintCallable, BlueprintEvent)

void UItemContainer_BP_C::OnIntroStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemContainer_BP_C", "OnIntroStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemContainer_BP.ItemContainer_BP_C.HideContainer
// (Event, Protected, BlueprintEvent)

void UItemContainer_BP_C::HideContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemContainer_BP_C", "HideContainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemContainer_BP.ItemContainer_BP_C.ShowContainer
// (Event, Protected, BlueprintEvent)

void UItemContainer_BP_C::ShowContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemContainer_BP_C", "ShowContainer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemContainer_BP.ItemContainer_BP_C.OnCancelShutdown
// (Event, Protected, BlueprintEvent)

void UItemContainer_BP_C::OnCancelShutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemContainer_BP_C", "OnCancelShutdown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemContainer_BP.ItemContainer_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemContainer_BP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemContainer_BP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemContainer_BP.ItemContainer_BP_C.OnIntro
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       AnimationCompleteCallback                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItemContainer_BP_C::OnIntro(const TDelegate<void()>& AnimationCompleteCallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemContainer_BP_C", "OnIntro");

	Params::ItemContainer_BP_C_OnIntro Parms{};

	Parms.AnimationCompleteCallback = AnimationCompleteCallback;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemContainer_BP.ItemContainer_BP_C.OnOutro
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       AnimationCompleteCallback                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItemContainer_BP_C::OnOutro(const TDelegate<void()>& AnimationCompleteCallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemContainer_BP_C", "OnOutro");

	Params::ItemContainer_BP_C_OnOutro Parms{};

	Parms.AnimationCompleteCallback = AnimationCompleteCallback;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

