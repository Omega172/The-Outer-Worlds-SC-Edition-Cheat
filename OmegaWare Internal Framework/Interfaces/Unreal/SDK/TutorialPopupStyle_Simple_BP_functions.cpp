#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialPopupStyle_Simple_BP

#include "Basic.hpp"

#include "TutorialPopupStyle_Simple_BP_classes.hpp"
#include "TutorialPopupStyle_Simple_BP_parameters.hpp"


namespace CG
{

// Function TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C.ExecuteUbergraph_TutorialPopupStyle_Simple_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialPopupStyle_Simple_BP_C::ExecuteUbergraph_TutorialPopupStyle_Simple_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialPopupStyle_Simple_BP_C", "ExecuteUbergraph_TutorialPopupStyle_Simple_BP");

	Params::TutorialPopupStyle_Simple_BP_C_ExecuteUbergraph_TutorialPopupStyle_Simple_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C.FadeInMascotImage
// (Event, Protected, BlueprintEvent)

void UTutorialPopupStyle_Simple_BP_C::FadeInMascotImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialPopupStyle_Simple_BP_C", "FadeInMascotImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C.SetNewBackingMaterialHeight
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   NewHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialPopupStyle_Simple_BP_C::SetNewBackingMaterialHeight(float NewHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialPopupStyle_Simple_BP_C", "SetNewBackingMaterialHeight");

	Params::TutorialPopupStyle_Simple_BP_C_SetNewBackingMaterialHeight Parms{};

	Parms.NewHeight = NewHeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TutorialPopupStyle_Simple_BP.TutorialPopupStyle_Simple_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorialPopupStyle_Simple_BP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialPopupStyle_Simple_BP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
