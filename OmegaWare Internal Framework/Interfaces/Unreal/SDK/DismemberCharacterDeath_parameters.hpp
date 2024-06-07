#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DismemberCharacterDeath

#include "Basic.hpp"

#include "Indiana_structs.hpp"


namespace CG::Params
{

// Function DismemberCharacterDeath.DismemberCharacterDeath_C.ExecuteUbergraph_DismemberCharacterDeath
// 0x0030 (0x0030 - 0x0000)
struct DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterDeathComponent*               K2Node_Event_InDeathComponent;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1; // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2; // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_3; // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27C5[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIndianaAiCharacter*                    K2Node_DynamicCast_AsIndiana_Ai_Character;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath) == 0x000008, "Wrong alignment on DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath");
static_assert(sizeof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath) == 0x000030, "Wrong size on DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath");
static_assert(offsetof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath, EntryPoint) == 0x000000, "Member 'DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath::EntryPoint' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath, K2Node_Event_InDeathComponent) == 0x000008, "Member 'DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath::K2Node_Event_InDeathComponent' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000010, "Member 'DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1) == 0x000011, "Member 'DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2) == 0x000012, "Member 'DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_3) == 0x000013, "Member 'DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath, K2Node_DynamicCast_AsIndiana_Ai_Character) == 0x000020, "Member 'DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath::K2Node_DynamicCast_AsIndiana_Ai_Character' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath, CallFunc_Less_FloatFloat_ReturnValue) == 0x000029, "Member 'DismemberCharacterDeath_C_ExecuteUbergraph_DismemberCharacterDeath::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function DismemberCharacterDeath.DismemberCharacterDeath_C.Execute
// 0x0008 (0x0008 - 0x0000)
struct DismemberCharacterDeath_C_Execute final
{
public:
	class UCharacterDeathComponent*               InDeathComponent;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DismemberCharacterDeath_C_Execute) == 0x000008, "Wrong alignment on DismemberCharacterDeath_C_Execute");
static_assert(sizeof(DismemberCharacterDeath_C_Execute) == 0x000008, "Wrong size on DismemberCharacterDeath_C_Execute");
static_assert(offsetof(DismemberCharacterDeath_C_Execute, InDeathComponent) == 0x000000, "Member 'DismemberCharacterDeath_C_Execute::InDeathComponent' has a wrong offset!");

// Function DismemberCharacterDeath.DismemberCharacterDeath_C.AddTorsoGibParticles
// 0x0088 (0x0088 - 0x0000)
struct DismemberCharacterDeath_C_AddTorsoGibParticles final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C6[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppearanceComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBodyPart>                      CallFunc_GetBodyPartsArray_ReturnValue;            // 0x0018(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C7[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBodyPart                              CallFunc_Array_Get_Item;                           // 0x0030(0x0050)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DismemberCharacterDeath_C_AddTorsoGibParticles) == 0x000008, "Wrong alignment on DismemberCharacterDeath_C_AddTorsoGibParticles");
static_assert(sizeof(DismemberCharacterDeath_C_AddTorsoGibParticles) == 0x000088, "Wrong size on DismemberCharacterDeath_C_AddTorsoGibParticles");
static_assert(offsetof(DismemberCharacterDeath_C_AddTorsoGibParticles, Temp_int_Array_Index_Variable) == 0x000000, "Member 'DismemberCharacterDeath_C_AddTorsoGibParticles::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_AddTorsoGibParticles, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'DismemberCharacterDeath_C_AddTorsoGibParticles::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_AddTorsoGibParticles, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'DismemberCharacterDeath_C_AddTorsoGibParticles::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_AddTorsoGibParticles, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'DismemberCharacterDeath_C_AddTorsoGibParticles::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_AddTorsoGibParticles, CallFunc_GetBodyPartsArray_ReturnValue) == 0x000018, "Member 'DismemberCharacterDeath_C_AddTorsoGibParticles::CallFunc_GetBodyPartsArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_AddTorsoGibParticles, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'DismemberCharacterDeath_C_AddTorsoGibParticles::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_AddTorsoGibParticles, CallFunc_Array_Get_Item) == 0x000030, "Member 'DismemberCharacterDeath_C_AddTorsoGibParticles::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_AddTorsoGibParticles, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'DismemberCharacterDeath_C_AddTorsoGibParticles::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DismemberCharacterDeath_C_AddTorsoGibParticles, CallFunc_MatchesTag_ReturnValue) == 0x000081, "Member 'DismemberCharacterDeath_C_AddTorsoGibParticles::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");

}
