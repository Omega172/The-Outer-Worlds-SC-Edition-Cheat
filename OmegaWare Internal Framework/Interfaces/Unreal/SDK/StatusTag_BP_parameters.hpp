#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusTag_BP

#include "Basic.hpp"


namespace CG::Params
{

// Function StatusTag_BP.StatusTag_BP_C.ExecuteUbergraph_StatusTag_BP
// 0x0040 (0x0040 - 0x0000)
struct StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1; // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28CE[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationTimeRemaining_ReturnValue;    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationTimeUpperBound_ReturnValue;   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28CF[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28D0[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsTarget;                            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP) == 0x000008, "Wrong alignment on StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP");
static_assert(sizeof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP) == 0x000040, "Wrong size on StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, EntryPoint) == 0x000000, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000004, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1) == 0x000006, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, Temp_bool_Has_Been_Initd_Variable) == 0x000007, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, Temp_bool_Has_Been_Initd_Variable_1) == 0x000008, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, Temp_bool_IsClosed_Variable_1) == 0x000009, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, CallFunc_GetAnimationTimeRemaining_ReturnValue) == 0x000018, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::CallFunc_GetAnimationTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, CallFunc_GetAnimationTimeUpperBound_ReturnValue) == 0x00001C, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::CallFunc_GetAnimationTimeUpperBound_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000024, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, CallFunc_SelectFloat_ReturnValue) == 0x000028, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP, K2Node_Event_bIsTarget) == 0x000038, "Member 'StatusTag_BP_C_ExecuteUbergraph_StatusTag_BP::K2Node_Event_bIsTarget' has a wrong offset!");

// Function StatusTag_BP.StatusTag_BP_C.OnSetPlayerTargeted
// 0x0001 (0x0001 - 0x0000)
struct StatusTag_BP_C_OnSetPlayerTargeted final
{
public:
	bool                                          bIsTarget;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatusTag_BP_C_OnSetPlayerTargeted) == 0x000001, "Wrong alignment on StatusTag_BP_C_OnSetPlayerTargeted");
static_assert(sizeof(StatusTag_BP_C_OnSetPlayerTargeted) == 0x000001, "Wrong size on StatusTag_BP_C_OnSetPlayerTargeted");
static_assert(offsetof(StatusTag_BP_C_OnSetPlayerTargeted, bIsTarget) == 0x000000, "Member 'StatusTag_BP_C_OnSetPlayerTargeted::bIsTarget' has a wrong offset!");

}

