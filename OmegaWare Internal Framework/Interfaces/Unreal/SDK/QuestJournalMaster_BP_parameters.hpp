#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestJournalMaster_BP

#include "Basic.hpp"


namespace CG::Params
{

// Function QuestJournalMaster_BP.QuestJournalMaster_BP_C.ExecuteUbergraph_QuestJournalMaster_BP
// 0x0010 (0x0010 - 0x0000)
struct QuestJournalMaster_BP_C_ExecuteUbergraph_QuestJournalMaster_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2990[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestJournalMaster_BP_C_ExecuteUbergraph_QuestJournalMaster_BP) == 0x000008, "Wrong alignment on QuestJournalMaster_BP_C_ExecuteUbergraph_QuestJournalMaster_BP");
static_assert(sizeof(QuestJournalMaster_BP_C_ExecuteUbergraph_QuestJournalMaster_BP) == 0x000010, "Wrong size on QuestJournalMaster_BP_C_ExecuteUbergraph_QuestJournalMaster_BP");
static_assert(offsetof(QuestJournalMaster_BP_C_ExecuteUbergraph_QuestJournalMaster_BP, EntryPoint) == 0x000000, "Member 'QuestJournalMaster_BP_C_ExecuteUbergraph_QuestJournalMaster_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestJournalMaster_BP_C_ExecuteUbergraph_QuestJournalMaster_BP, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'QuestJournalMaster_BP_C_ExecuteUbergraph_QuestJournalMaster_BP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
