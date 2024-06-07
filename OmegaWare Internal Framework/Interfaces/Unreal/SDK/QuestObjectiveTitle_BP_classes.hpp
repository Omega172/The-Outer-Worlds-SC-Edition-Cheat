#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestObjectiveTitle_BP

#include "Basic.hpp"

#include "Indiana_structs.hpp"
#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass QuestObjectiveTitle_BP.QuestObjectiveTitle_BP_C
// 0x0008 (0x02B0 - 0x02A8)
class UQuestObjectiveTitle_BP_C final : public UQuestObjectiveTitleWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_QuestObjectiveTitle_BP(int32 EntryPoint);
	void OnObjectiveStatusChange(ECompletionStatus ObjectiveStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestObjectiveTitle_BP_C">();
	}
	static class UQuestObjectiveTitle_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestObjectiveTitle_BP_C>();
	}
};
static_assert(alignof(UQuestObjectiveTitle_BP_C) == 0x000008, "Wrong alignment on UQuestObjectiveTitle_BP_C");
static_assert(sizeof(UQuestObjectiveTitle_BP_C) == 0x0002B0, "Wrong size on UQuestObjectiveTitle_BP_C");
static_assert(offsetof(UQuestObjectiveTitle_BP_C, UberGraphFrame) == 0x0002A8, "Member 'UQuestObjectiveTitle_BP_C::UberGraphFrame' has a wrong offset!");

}

