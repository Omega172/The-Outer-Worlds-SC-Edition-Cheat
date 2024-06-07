#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IndianaAiController_BP

#include "Basic.hpp"

#include "Indiana_structs.hpp"


namespace CG::Params
{

// Function IndianaAiController_BP.IndianaAiController_BP_C.GetSightAwarenessIncreaseRate
// 0x0068 (0x0068 - 0x0000)
struct IndianaAiController_BP_C_GetSightAwarenessIncreaseRate final
{
public:
	bool                                          bIsStealthed;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2743[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OwnerPerceptionSkill;                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetSneakSkill;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlertState                                   InAlertState;                                      // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2744[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Distance;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SightRadius;                                       // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAllowTargeting;                                   // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2745[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReturnValue;                                       // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AlertStateScalar;                                  // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StealthScalar;                                     // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SightAwarenessIncreaseRateScalar;                  // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SightAwarenessIncreaseRate;                        // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2746[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_5;        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate) == 0x000004, "Wrong alignment on IndianaAiController_BP_C_GetSightAwarenessIncreaseRate");
static_assert(sizeof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate) == 0x000068, "Wrong size on IndianaAiController_BP_C_GetSightAwarenessIncreaseRate");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, bIsStealthed) == 0x000000, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::bIsStealthed' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, OwnerPerceptionSkill) == 0x000004, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::OwnerPerceptionSkill' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, TargetSneakSkill) == 0x000008, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::TargetSneakSkill' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, InAlertState) == 0x00000C, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::InAlertState' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, Distance) == 0x000010, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::Distance' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, SightRadius) == 0x000014, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::SightRadius' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, bAllowTargeting) == 0x000018, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::bAllowTargeting' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, ReturnValue) == 0x00001C, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, AlertStateScalar) == 0x000020, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::AlertStateScalar' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, StealthScalar) == 0x000024, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::StealthScalar' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, SightAwarenessIncreaseRateScalar) == 0x000028, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::SightAwarenessIncreaseRateScalar' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, SightAwarenessIncreaseRate) == 0x00002C, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::SightAwarenessIncreaseRate' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000030, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000031, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000032, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_BooleanAND_ReturnValue) == 0x000033, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000034, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00003C, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000040, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000044, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000048, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Add_FloatFloat_ReturnValue) == 0x00004C, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000050, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000054, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000058, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x00005C, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x000060, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessIncreaseRate, CallFunc_Multiply_FloatFloat_ReturnValue_5) == 0x000064, "Member 'IndianaAiController_BP_C_GetSightAwarenessIncreaseRate::CallFunc_Multiply_FloatFloat_ReturnValue_5' has a wrong offset!");

// Function IndianaAiController_BP.IndianaAiController_BP_C.GetSightAwarenessDecreaseRate
// 0x0034 (0x0034 - 0x0000)
struct IndianaAiController_BP_C_GetSightAwarenessDecreaseRate final
{
public:
	bool                                          bIsStealthed;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2747[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OwnerPerceptionSkill;                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetSneakSkill;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlertState                                   InAlertState;                                      // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLost;                                             // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDeadBodyKiller;                                   // 0x000E(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2748[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LostScalar;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StealthScalar;                                     // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SightAwarenessDecreaseRateScalar;                  // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SightAwarenessDecreaseRate;                        // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2749[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate) == 0x000004, "Wrong alignment on IndianaAiController_BP_C_GetSightAwarenessDecreaseRate");
static_assert(sizeof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate) == 0x000034, "Wrong size on IndianaAiController_BP_C_GetSightAwarenessDecreaseRate");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, bIsStealthed) == 0x000000, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::bIsStealthed' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, OwnerPerceptionSkill) == 0x000004, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::OwnerPerceptionSkill' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, TargetSneakSkill) == 0x000008, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::TargetSneakSkill' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, InAlertState) == 0x00000C, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::InAlertState' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, bLost) == 0x00000D, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::bLost' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, bDeadBodyKiller) == 0x00000E, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::bDeadBodyKiller' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, ReturnValue) == 0x000010, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, LostScalar) == 0x000014, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::LostScalar' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, StealthScalar) == 0x000018, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::StealthScalar' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, SightAwarenessDecreaseRateScalar) == 0x00001C, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::SightAwarenessDecreaseRateScalar' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, SightAwarenessDecreaseRate) == 0x000020, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::SightAwarenessDecreaseRate' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, K2Node_SwitchEnum_CmpSuccess) == 0x000024, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000028, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00002C, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetSightAwarenessDecreaseRate, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000030, "Member 'IndianaAiController_BP_C_GetSightAwarenessDecreaseRate::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");

// Function IndianaAiController_BP.IndianaAiController_BP_C.GetFootstepAwarenessIncrease
// 0x0020 (0x0020 - 0x0000)
struct IndianaAiController_BP_C_GetFootstepAwarenessIncrease final
{
public:
	bool                                          bIsStealthed;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_274A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OwnerPerceptionSkill;                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetSneakSkill;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlertState                                   InAlertState;                                      // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274B[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseFootstepAwareness;                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance;                                          // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SoundRadius;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IndianaAiController_BP_C_GetFootstepAwarenessIncrease) == 0x000004, "Wrong alignment on IndianaAiController_BP_C_GetFootstepAwarenessIncrease");
static_assert(sizeof(IndianaAiController_BP_C_GetFootstepAwarenessIncrease) == 0x000020, "Wrong size on IndianaAiController_BP_C_GetFootstepAwarenessIncrease");
static_assert(offsetof(IndianaAiController_BP_C_GetFootstepAwarenessIncrease, bIsStealthed) == 0x000000, "Member 'IndianaAiController_BP_C_GetFootstepAwarenessIncrease::bIsStealthed' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetFootstepAwarenessIncrease, OwnerPerceptionSkill) == 0x000004, "Member 'IndianaAiController_BP_C_GetFootstepAwarenessIncrease::OwnerPerceptionSkill' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetFootstepAwarenessIncrease, TargetSneakSkill) == 0x000008, "Member 'IndianaAiController_BP_C_GetFootstepAwarenessIncrease::TargetSneakSkill' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetFootstepAwarenessIncrease, InAlertState) == 0x00000C, "Member 'IndianaAiController_BP_C_GetFootstepAwarenessIncrease::InAlertState' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetFootstepAwarenessIncrease, BaseFootstepAwareness) == 0x000010, "Member 'IndianaAiController_BP_C_GetFootstepAwarenessIncrease::BaseFootstepAwareness' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetFootstepAwarenessIncrease, Distance) == 0x000014, "Member 'IndianaAiController_BP_C_GetFootstepAwarenessIncrease::Distance' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetFootstepAwarenessIncrease, SoundRadius) == 0x000018, "Member 'IndianaAiController_BP_C_GetFootstepAwarenessIncrease::SoundRadius' has a wrong offset!");
static_assert(offsetof(IndianaAiController_BP_C_GetFootstepAwarenessIncrease, ReturnValue) == 0x00001C, "Member 'IndianaAiController_BP_C_GetFootstepAwarenessIncrease::ReturnValue' has a wrong offset!");

}
