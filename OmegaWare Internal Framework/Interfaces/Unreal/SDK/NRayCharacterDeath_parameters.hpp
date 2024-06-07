#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NRayCharacterDeath

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace CG::Params
{

// Function NRayCharacterDeath.NRayCharacterDeath_C.ExecuteUbergraph_NRayCharacterDeath
// 0x0128 (0x0128 - 0x0000)
struct NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27B9[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0018(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27BA[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterDeathComponent*               K2Node_Event_InDeathComponent_1;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27BB[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Delta;                                // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27BC[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       CallFunc_MID_Creation_Skeletal_MIDs;               // 0x0080(0x0010)(ReferenceParm)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27BD[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterDeathComponent*               K2Node_Event_InDeathComponent;                     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27BE[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x00C0(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27BF[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshComponent_ReturnValue;     // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCenterOfMass_ReturnValue;              // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_FindClosestBone_K2_BoneLocation;          // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_FindClosestBone_K2_ReturnValue;           // 0x0104(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27C0[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateAshPile_Ash_MID;                    // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath) == 0x000008, "Wrong alignment on NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath");
static_assert(sizeof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath) == 0x000128, "Wrong size on NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, EntryPoint) == 0x000000, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::EntryPoint' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, Temp_int_Variable) == 0x000004, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, Temp_int_Variable_1) == 0x000008, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, Temp_object_Variable) == 0x000018, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, Temp_int_Array_Index_Variable) == 0x000028, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Add_IntInt_ReturnValue_2) == 0x000030, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, K2Node_Event_InDeathComponent_1) == 0x000038, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::K2Node_Event_InDeathComponent_1' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Array_Get_Item) == 0x000048, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_RandomFloatInRange_ReturnValue) == 0x000060, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, K2Node_Event_Delta) == 0x000068, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::K2Node_Event_Delta' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00006C, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Less_IntInt_ReturnValue_1) == 0x00007C, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_MID_Creation_Skeletal_MIDs) == 0x000080, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_MID_Creation_Skeletal_MIDs' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Lerp_ReturnValue) == 0x000090, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Add_FloatFloat_ReturnValue) == 0x000094, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000098, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, K2Node_Event_InDeathComponent) == 0x0000A0, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::K2Node_Event_InDeathComponent' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000A8, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, K2Node_MakeArray_Array) == 0x0000B0, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_SphereOverlapActors_OutActors) == 0x0000C0, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_SphereOverlapActors_ReturnValue) == 0x0000D0, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Array_Get_Item_2) == 0x0000D8, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_GetSkeletalMeshComponent_ReturnValue) == 0x0000E0, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_GetSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_GetCenterOfMass_ReturnValue) == 0x0000E8, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_GetCenterOfMass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Array_Length_ReturnValue_2) == 0x0000F4, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_FindClosestBone_K2_BoneLocation) == 0x0000F8, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_FindClosestBone_K2_BoneLocation' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_FindClosestBone_K2_ReturnValue) == 0x000104, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_FindClosestBone_K2_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_Less_IntInt_ReturnValue_2) == 0x00010C, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000110, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000118, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath, CallFunc_CreateAshPile_Ash_MID) == 0x000120, "Member 'NRayCharacterDeath_C_ExecuteUbergraph_NRayCharacterDeath::CallFunc_CreateAshPile_Ash_MID' has a wrong offset!");

// Function NRayCharacterDeath.NRayCharacterDeath_C.ExecuteOnReload
// 0x0008 (0x0008 - 0x0000)
struct NRayCharacterDeath_C_ExecuteOnReload final
{
public:
	class UCharacterDeathComponent*               InDeathComponent;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NRayCharacterDeath_C_ExecuteOnReload) == 0x000008, "Wrong alignment on NRayCharacterDeath_C_ExecuteOnReload");
static_assert(sizeof(NRayCharacterDeath_C_ExecuteOnReload) == 0x000008, "Wrong size on NRayCharacterDeath_C_ExecuteOnReload");
static_assert(offsetof(NRayCharacterDeath_C_ExecuteOnReload, InDeathComponent) == 0x000000, "Member 'NRayCharacterDeath_C_ExecuteOnReload::InDeathComponent' has a wrong offset!");

// Function NRayCharacterDeath.NRayCharacterDeath_C.Tick
// 0x0004 (0x0004 - 0x0000)
struct NRayCharacterDeath_C_Tick final
{
public:
	float                                         Delta;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NRayCharacterDeath_C_Tick) == 0x000004, "Wrong alignment on NRayCharacterDeath_C_Tick");
static_assert(sizeof(NRayCharacterDeath_C_Tick) == 0x000004, "Wrong size on NRayCharacterDeath_C_Tick");
static_assert(offsetof(NRayCharacterDeath_C_Tick, Delta) == 0x000000, "Member 'NRayCharacterDeath_C_Tick::Delta' has a wrong offset!");

// Function NRayCharacterDeath.NRayCharacterDeath_C.Execute
// 0x0008 (0x0008 - 0x0000)
struct NRayCharacterDeath_C_Execute final
{
public:
	class UCharacterDeathComponent*               InDeathComponent;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NRayCharacterDeath_C_Execute) == 0x000008, "Wrong alignment on NRayCharacterDeath_C_Execute");
static_assert(sizeof(NRayCharacterDeath_C_Execute) == 0x000008, "Wrong size on NRayCharacterDeath_C_Execute");
static_assert(offsetof(NRayCharacterDeath_C_Execute, InDeathComponent) == 0x000000, "Member 'NRayCharacterDeath_C_Execute::InDeathComponent' has a wrong offset!");

}
