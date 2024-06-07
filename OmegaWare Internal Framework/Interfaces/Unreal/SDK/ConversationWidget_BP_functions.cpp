#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConversationWidget_BP

#include "Basic.hpp"

#include "ConversationWidget_BP_classes.hpp"
#include "ConversationWidget_BP_parameters.hpp"


namespace CG
{

// Function ConversationWidget_BP.ConversationWidget_BP_C.ExecuteUbergraph_ConversationWidget_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConversationWidget_BP_C::ExecuteUbergraph_ConversationWidget_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationWidget_BP_C", "ExecuteUbergraph_ConversationWidget_BP");

	Params::ConversationWidget_BP_C_ExecuteUbergraph_ConversationWidget_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConversationWidget_BP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationWidget_BP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.SetHistoryBackingFillRatio
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DesiredHistoryHeight                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConversationWidget_BP_C::SetHistoryBackingFillRatio(float DesiredHistoryHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationWidget_BP_C", "SetHistoryBackingFillRatio");

	Params::ConversationWidget_BP_C_SetHistoryBackingFillRatio Parms{};

	Parms.DesiredHistoryHeight = DesiredHistoryHeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.SetConversationBackingFillRatio
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   DesiredOverlayHeight                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConversationWidget_BP_C::SetConversationBackingFillRatio(float DesiredOverlayHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationWidget_BP_C", "SetConversationBackingFillRatio");

	Params::ConversationWidget_BP_C_SetConversationBackingFillRatio Parms{};

	Parms.DesiredOverlayHeight = DesiredOverlayHeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.Get_Line1_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UConversationWidget_BP_C::Get_Line1_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationWidget_BP_C", "Get_Line1_Visibility_0");

	Params::ConversationWidget_BP_C_Get_Line1_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.Get_Line0_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UConversationWidget_BP_C::Get_Line0_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationWidget_BP_C", "Get_Line0_Visibility_0");

	Params::ConversationWidget_BP_C_Get_Line0_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ConversationWidget_BP.ConversationWidget_BP_C.OnIntro
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       AnimationCompleteCallback                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UConversationWidget_BP_C::OnIntro(const TDelegate<void()>& AnimationCompleteCallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ConversationWidget_BP_C", "OnIntro");

	Params::ConversationWidget_BP_C_OnIntro Parms{};

	Parms.AnimationCompleteCallback = AnimationCompleteCallback;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

