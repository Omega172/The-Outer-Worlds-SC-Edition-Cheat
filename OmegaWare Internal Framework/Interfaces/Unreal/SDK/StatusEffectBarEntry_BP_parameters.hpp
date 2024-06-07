#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusEffectBarEntry_BP

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace CG::Params
{

// Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.ExecuteUbergraph_StatusEffectBarEntry_BP
// 0x0028 (0x0028 - 0x0000)
struct StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_298D[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DesiredRenderOpacity;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_298E[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP) == 0x000008, "Wrong alignment on StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP");
static_assert(sizeof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP) == 0x000028, "Wrong size on StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP");
static_assert(offsetof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP, EntryPoint) == 0x000000, "Member 'StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP, Temp_int_Variable) == 0x000004, "Member 'StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP, Temp_byte_Variable) == 0x000008, "Member 'StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP, Temp_byte_Variable_1) == 0x000009, "Member 'StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP, K2Node_Event_DesiredRenderOpacity) == 0x00000C, "Member 'StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP::K2Node_Event_DesiredRenderOpacity' has a wrong offset!");
static_assert(offsetof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP, CallFunc_FTrunc_ReturnValue) == 0x000018, "Member 'StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP, K2Node_Select_Default) == 0x00001C, "Member 'StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'StatusEffectBarEntry_BP_C_ExecuteUbergraph_StatusEffectBarEntry_BP::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function StatusEffectBarEntry_BP.StatusEffectBarEntry_BP_C.ResetWidgetState
// 0x0004 (0x0004 - 0x0000)
struct StatusEffectBarEntry_BP_C_ResetWidgetState final
{
public:
	float                                         DesiredRenderOpacity;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusEffectBarEntry_BP_C_ResetWidgetState) == 0x000004, "Wrong alignment on StatusEffectBarEntry_BP_C_ResetWidgetState");
static_assert(sizeof(StatusEffectBarEntry_BP_C_ResetWidgetState) == 0x000004, "Wrong size on StatusEffectBarEntry_BP_C_ResetWidgetState");
static_assert(offsetof(StatusEffectBarEntry_BP_C_ResetWidgetState, DesiredRenderOpacity) == 0x000000, "Member 'StatusEffectBarEntry_BP_C_ResetWidgetState::DesiredRenderOpacity' has a wrong offset!");

}

