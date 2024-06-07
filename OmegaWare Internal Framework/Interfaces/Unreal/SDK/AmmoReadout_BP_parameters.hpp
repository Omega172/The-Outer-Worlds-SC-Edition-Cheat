#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmmoReadout_BP

#include "Basic.hpp"

#include "Indiana_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace CG::Params
{

// Function AmmoReadout_BP.AmmoReadout_BP_C.ExecuteUbergraph_AmmoReadout_BP
// 0x0024 (0x0024 - 0x0000)
struct AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_MaxClipSize;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_CurrentClipSize;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_RemainingAmmo;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29A0[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29A1[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP) == 0x000004, "Wrong alignment on AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP");
static_assert(sizeof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP) == 0x000024, "Wrong size on AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, EntryPoint) == 0x000000, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, K2Node_Event_MaxClipSize) == 0x000004, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::K2Node_Event_MaxClipSize' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, K2Node_Event_CurrentClipSize) == 0x000008, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::K2Node_Event_CurrentClipSize' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, K2Node_Event_RemainingAmmo) == 0x00000C, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::K2Node_Event_RemainingAmmo' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000014, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000018, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00001C, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x000023, "Member 'AmmoReadout_BP_C_ExecuteUbergraph_AmmoReadout_BP::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");

// Function AmmoReadout_BP.AmmoReadout_BP_C.EvaluateLowAmmoWarning
// 0x000C (0x000C - 0x0000)
struct AmmoReadout_BP_C_EvaluateLowAmmoWarning final
{
public:
	int32                                         MaxClipSize;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentClipSize;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RemainingAmmo;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmmoReadout_BP_C_EvaluateLowAmmoWarning) == 0x000004, "Wrong alignment on AmmoReadout_BP_C_EvaluateLowAmmoWarning");
static_assert(sizeof(AmmoReadout_BP_C_EvaluateLowAmmoWarning) == 0x00000C, "Wrong size on AmmoReadout_BP_C_EvaluateLowAmmoWarning");
static_assert(offsetof(AmmoReadout_BP_C_EvaluateLowAmmoWarning, MaxClipSize) == 0x000000, "Member 'AmmoReadout_BP_C_EvaluateLowAmmoWarning::MaxClipSize' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_EvaluateLowAmmoWarning, CurrentClipSize) == 0x000004, "Member 'AmmoReadout_BP_C_EvaluateLowAmmoWarning::CurrentClipSize' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_EvaluateLowAmmoWarning, RemainingAmmo) == 0x000008, "Member 'AmmoReadout_BP_C_EvaluateLowAmmoWarning::RemainingAmmo' has a wrong offset!");

// Function AmmoReadout_BP.AmmoReadout_BP_C.ColorTextBlock
// 0x0050 (0x0050 - 0x0000)
struct AmmoReadout_BP_C_ColorTextBlock final
{
public:
	bool                                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29A2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlockBase*                         Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EIndianaUIColorType                           Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EIndianaUIColorType                           Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EIndianaUIColorType                           K2Node_Select_Default;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetColorByType_ReturnValue;               // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29A3[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
};
static_assert(alignof(AmmoReadout_BP_C_ColorTextBlock) == 0x000008, "Wrong alignment on AmmoReadout_BP_C_ColorTextBlock");
static_assert(sizeof(AmmoReadout_BP_C_ColorTextBlock) == 0x000050, "Wrong size on AmmoReadout_BP_C_ColorTextBlock");
static_assert(offsetof(AmmoReadout_BP_C_ColorTextBlock, Param_Index) == 0x000000, "Member 'AmmoReadout_BP_C_ColorTextBlock::Param_Index' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ColorTextBlock, Target) == 0x000008, "Member 'AmmoReadout_BP_C_ColorTextBlock::Target' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ColorTextBlock, Temp_bool_Variable) == 0x000010, "Member 'AmmoReadout_BP_C_ColorTextBlock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ColorTextBlock, Temp_byte_Variable) == 0x000011, "Member 'AmmoReadout_BP_C_ColorTextBlock::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ColorTextBlock, Temp_byte_Variable_1) == 0x000012, "Member 'AmmoReadout_BP_C_ColorTextBlock::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ColorTextBlock, K2Node_Select_Default) == 0x000013, "Member 'AmmoReadout_BP_C_ColorTextBlock::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ColorTextBlock, CallFunc_GetColorByType_ReturnValue) == 0x000014, "Member 'AmmoReadout_BP_C_ColorTextBlock::CallFunc_GetColorByType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmmoReadout_BP_C_ColorTextBlock, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'AmmoReadout_BP_C_ColorTextBlock::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

