#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioLogWidget_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass AudioLogWidget_BP.AudioLogWidget_BP_C
// 0x0018 (0x03B0 - 0x0398)
class UAudioLogWidget_BP_C final : public UAudioLogWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AudioLogWidget_BP(int32 EntryPoint);
	void ShowAudioLog(bool bShow, float CurrentRenderOpacity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AudioLogWidget_BP_C">();
	}
	static class UAudioLogWidget_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioLogWidget_BP_C>();
	}
};
static_assert(alignof(UAudioLogWidget_BP_C) == 0x000008, "Wrong alignment on UAudioLogWidget_BP_C");
static_assert(sizeof(UAudioLogWidget_BP_C) == 0x0003B0, "Wrong size on UAudioLogWidget_BP_C");
static_assert(offsetof(UAudioLogWidget_BP_C, UberGraphFrame) == 0x000398, "Member 'UAudioLogWidget_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAudioLogWidget_BP_C, FadeOut) == 0x0003A0, "Member 'UAudioLogWidget_BP_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UAudioLogWidget_BP_C, FadeIn) == 0x0003A8, "Member 'UAudioLogWidget_BP_C::FadeIn' has a wrong offset!");

}

