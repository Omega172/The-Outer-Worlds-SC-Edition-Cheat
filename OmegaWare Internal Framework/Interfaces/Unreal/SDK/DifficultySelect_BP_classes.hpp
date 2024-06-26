#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DifficultySelect_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass DifficultySelect_BP.DifficultySelect_BP_C
// 0x0068 (0x04E8 - 0x0480)
class UDifficultySelect_BP_C final : public UDifficultySelectWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Transition;                                        // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundPanelWidget_C*               BackgroundPanelWidget;                             // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundPanelWidget_C*               BackgroundPanelWidget_C_0;                         // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlockBase*                         ConversationHeaderTextblock;                       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlockBase*                         DifficultyHeaderTextBlock;                         // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SelectDifficultyPanel_SizeBox;                     // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SubtitleSettingsPanel_SizeBox;                     // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlockBase*                         TextBlockBase_1;                                   // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlockBase*                         TextBlockBase_2;                                   // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlockBase*                         TextBlockBase_3;                                   // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlockBase*                         TextBlockBase_4;                                   // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DifficultySelect_BP(int32 EntryPoint);
	void StartTransitionToSubtitleFromDifficulty();
	void StartTransitionToDifficultyFromSubtitle();
	void OnTransitionToDifficultyComplete();
	void OnTransitionToSubtitleComplete();
	void BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_15_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_14_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_13_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__SuperNovaButton_K2Node_ComponentBoundEvent_12_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__HardButton_K2Node_ComponentBoundEvent_11_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__HardButton_K2Node_ComponentBoundEvent_10_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__HardButton_K2Node_ComponentBoundEvent_9_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__HardButton_K2Node_ComponentBoundEvent_8_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__NormalButton_K2Node_ComponentBoundEvent_7_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__NormalButton_K2Node_ComponentBoundEvent_6_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__NormalButton_K2Node_ComponentBoundEvent_5_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__NormalButton_K2Node_ComponentBoundEvent_4_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__EasyButton_K2Node_ComponentBoundEvent_3_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__EasyButton_K2Node_ComponentBoundEvent_2_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__EasyButton_K2Node_ComponentBoundEvent_1_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);
	void BndEvt__EasyButton_K2Node_ComponentBoundEvent_0_ComponentEventMCD__DelegateSignature(const struct FComponentEvent& Event);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DifficultySelect_BP_C">();
	}
	static class UDifficultySelect_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDifficultySelect_BP_C>();
	}
};
static_assert(alignof(UDifficultySelect_BP_C) == 0x000008, "Wrong alignment on UDifficultySelect_BP_C");
static_assert(sizeof(UDifficultySelect_BP_C) == 0x0004E8, "Wrong size on UDifficultySelect_BP_C");
static_assert(offsetof(UDifficultySelect_BP_C, UberGraphFrame) == 0x000480, "Member 'UDifficultySelect_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, Transition) == 0x000488, "Member 'UDifficultySelect_BP_C::Transition' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, BackgroundPanelWidget) == 0x000490, "Member 'UDifficultySelect_BP_C::BackgroundPanelWidget' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, BackgroundPanelWidget_C_0) == 0x000498, "Member 'UDifficultySelect_BP_C::BackgroundPanelWidget_C_0' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, ConversationHeaderTextblock) == 0x0004A0, "Member 'UDifficultySelect_BP_C::ConversationHeaderTextblock' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, DifficultyHeaderTextBlock) == 0x0004A8, "Member 'UDifficultySelect_BP_C::DifficultyHeaderTextBlock' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, Image_0) == 0x0004B0, "Member 'UDifficultySelect_BP_C::Image_0' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, SelectDifficultyPanel_SizeBox) == 0x0004B8, "Member 'UDifficultySelect_BP_C::SelectDifficultyPanel_SizeBox' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, SubtitleSettingsPanel_SizeBox) == 0x0004C0, "Member 'UDifficultySelect_BP_C::SubtitleSettingsPanel_SizeBox' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, TextBlockBase_1) == 0x0004C8, "Member 'UDifficultySelect_BP_C::TextBlockBase_1' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, TextBlockBase_2) == 0x0004D0, "Member 'UDifficultySelect_BP_C::TextBlockBase_2' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, TextBlockBase_3) == 0x0004D8, "Member 'UDifficultySelect_BP_C::TextBlockBase_3' has a wrong offset!");
static_assert(offsetof(UDifficultySelect_BP_C, TextBlockBase_4) == 0x0004E0, "Member 'UDifficultySelect_BP_C::TextBlockBase_4' has a wrong offset!");

}

