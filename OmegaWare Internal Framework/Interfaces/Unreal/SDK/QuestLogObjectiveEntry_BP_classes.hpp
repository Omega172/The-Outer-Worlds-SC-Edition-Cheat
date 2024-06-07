#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestLogObjectiveEntry_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass QuestLogObjectiveEntry_BP.QuestLogObjectiveEntry_BP_C
// 0x0030 (0x0368 - 0x0338)
class UQuestLogObjectiveEntry_BP_C final : public UQuestObjectiveEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutroAnim;                                         // 0x0340(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       IntroAnim;                                         // 0x0348(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnObjectiveFailed;                                 // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnObjectiveCompleted;                              // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ObjectiveFailedImage;                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestLogObjectiveEntry_BP(int32 EntryPoint);
	void OnObjectiveMadeInactive();
	void OnObjectiveMadeActive();
	void OnCompletedAnim();
	void OnFailedAnim();
	void OnOutroAnim();
	void OnIntroAnim();
	void StartFailAnim();
	void StartCompleteAnim();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestLogObjectiveEntry_BP_C">();
	}
	static class UQuestLogObjectiveEntry_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestLogObjectiveEntry_BP_C>();
	}
};
static_assert(alignof(UQuestLogObjectiveEntry_BP_C) == 0x000008, "Wrong alignment on UQuestLogObjectiveEntry_BP_C");
static_assert(sizeof(UQuestLogObjectiveEntry_BP_C) == 0x000368, "Wrong size on UQuestLogObjectiveEntry_BP_C");
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, UberGraphFrame) == 0x000338, "Member 'UQuestLogObjectiveEntry_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, OutroAnim) == 0x000340, "Member 'UQuestLogObjectiveEntry_BP_C::OutroAnim' has a wrong offset!");
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, IntroAnim) == 0x000348, "Member 'UQuestLogObjectiveEntry_BP_C::IntroAnim' has a wrong offset!");
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, OnObjectiveFailed) == 0x000350, "Member 'UQuestLogObjectiveEntry_BP_C::OnObjectiveFailed' has a wrong offset!");
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, OnObjectiveCompleted) == 0x000358, "Member 'UQuestLogObjectiveEntry_BP_C::OnObjectiveCompleted' has a wrong offset!");
static_assert(offsetof(UQuestLogObjectiveEntry_BP_C, ObjectiveFailedImage) == 0x000360, "Member 'UQuestLogObjectiveEntry_BP_C::ObjectiveFailedImage' has a wrong offset!");

}

