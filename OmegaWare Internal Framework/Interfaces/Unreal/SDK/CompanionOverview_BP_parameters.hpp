#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompanionOverview_BP

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace CG::Params
{

// Function CompanionOverview_BP.CompanionOverview_BP_C.ExecuteUbergraph_CompanionOverview_BP
// 0x0068 (0x0068 - 0x0000)
struct CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP) == 0x000008, "Wrong alignment on CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP");
static_assert(sizeof(CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP) == 0x000068, "Wrong size on CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP");
static_assert(offsetof(CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP, EntryPoint) == 0x000000, "Member 'CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP, K2Node_Event_MyGeometry) == 0x000014, "Member 'CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP, CallFunc_PlayAnimation_ReturnValue_2) == 0x000060, "Member 'CompanionOverview_BP_C_ExecuteUbergraph_CompanionOverview_BP::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

// Function CompanionOverview_BP.CompanionOverview_BP_C.Tick
// 0x003C (0x003C - 0x0000)
struct CompanionOverview_BP_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompanionOverview_BP_C_Tick) == 0x000004, "Wrong alignment on CompanionOverview_BP_C_Tick");
static_assert(sizeof(CompanionOverview_BP_C_Tick) == 0x00003C, "Wrong size on CompanionOverview_BP_C_Tick");
static_assert(offsetof(CompanionOverview_BP_C_Tick, MyGeometry) == 0x000000, "Member 'CompanionOverview_BP_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CompanionOverview_BP_C_Tick, InDeltaTime) == 0x000038, "Member 'CompanionOverview_BP_C_Tick::InDeltaTime' has a wrong offset!");

}

