#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsFlawSummaryEntry_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass StatsFlawSummaryEntry_BP.StatsFlawSummaryEntry_BP_C
// 0x0008 (0x0320 - 0x0318)
class UStatsFlawSummaryEntry_BP_C final : public UFlawSummaryEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_StatsFlawSummaryEntry_BP(int32 EntryPoint);
	void BndEvt__Button_K2Node_ComponentBoundEvent_20_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_86_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_62_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__Button_K2Node_ComponentBoundEvent_36_NoParamMCD__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_8_NoParamMCD__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatsFlawSummaryEntry_BP_C">();
	}
	static class UStatsFlawSummaryEntry_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatsFlawSummaryEntry_BP_C>();
	}
};
static_assert(alignof(UStatsFlawSummaryEntry_BP_C) == 0x000008, "Wrong alignment on UStatsFlawSummaryEntry_BP_C");
static_assert(sizeof(UStatsFlawSummaryEntry_BP_C) == 0x000320, "Wrong size on UStatsFlawSummaryEntry_BP_C");
static_assert(offsetof(UStatsFlawSummaryEntry_BP_C, UberGraphFrame) == 0x000318, "Member 'UStatsFlawSummaryEntry_BP_C::UberGraphFrame' has a wrong offset!");

}

