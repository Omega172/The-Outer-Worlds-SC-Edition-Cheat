#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsAptitudeSummary_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass StatsAptitudeSummary_BP.StatsAptitudeSummary_BP_C
// 0x0008 (0x0298 - 0x0290)
class UStatsAptitudeSummary_BP_C final : public UAptitudeSummaryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_StatsAptitudeSummary_BP(int32 EntryPoint);
	void BndEvt__Button_K2Node_ComponentBoundEvent_144_NoParamMCD__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_124_NoParamMCD__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_102_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_78_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_52_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatsAptitudeSummary_BP_C">();
	}
	static class UStatsAptitudeSummary_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatsAptitudeSummary_BP_C>();
	}
};
static_assert(alignof(UStatsAptitudeSummary_BP_C) == 0x000008, "Wrong alignment on UStatsAptitudeSummary_BP_C");
static_assert(sizeof(UStatsAptitudeSummary_BP_C) == 0x000298, "Wrong size on UStatsAptitudeSummary_BP_C");
static_assert(offsetof(UStatsAptitudeSummary_BP_C, UberGraphFrame) == 0x000290, "Member 'UStatsAptitudeSummary_BP_C::UberGraphFrame' has a wrong offset!");

}
