#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SelectedNotificationWidget_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass SelectedNotificationWidget_BP.SelectedNotificationWidget_BP_C
// 0x0020 (0x0338 - 0x0318)
class USelectedNotificationWidget_BP_C final : public USelectedNotificationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InstantFadeIn;                                     // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeRight;                                         // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SelectedNotificationWidget_BP(int32 EntryPoint);
	void OnFadeOutAnimationFinished();
	void OnFadeRightAnimationFinished();
	void StopFadeOutAnimation();
	void PlayFadeOutAnimation();
	void PlayNotificationAnimation();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectedNotificationWidget_BP_C">();
	}
	static class USelectedNotificationWidget_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectedNotificationWidget_BP_C>();
	}
};
static_assert(alignof(USelectedNotificationWidget_BP_C) == 0x000008, "Wrong alignment on USelectedNotificationWidget_BP_C");
static_assert(sizeof(USelectedNotificationWidget_BP_C) == 0x000338, "Wrong size on USelectedNotificationWidget_BP_C");
static_assert(offsetof(USelectedNotificationWidget_BP_C, UberGraphFrame) == 0x000318, "Member 'USelectedNotificationWidget_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USelectedNotificationWidget_BP_C, InstantFadeIn) == 0x000320, "Member 'USelectedNotificationWidget_BP_C::InstantFadeIn' has a wrong offset!");
static_assert(offsetof(USelectedNotificationWidget_BP_C, FadeOut) == 0x000328, "Member 'USelectedNotificationWidget_BP_C::FadeOut' has a wrong offset!");
static_assert(offsetof(USelectedNotificationWidget_BP_C, FadeRight) == 0x000330, "Member 'USelectedNotificationWidget_BP_C::FadeRight' has a wrong offset!");

}
