#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActorStage_BP_Base

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass ActorStage_BP_Base.ActorStage_BP_Base_C
// 0x0018 (0x0398 - 0x0380)
class AActorStage_BP_Base_C : public AActorStage
{
public:
	class UStaticMeshComponent*                   VisualizerCamera;                                  // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   VisualizerAttachPoint;                             // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Chroma;                                            // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActorStage_BP_Base_C">();
	}
	static class AActorStage_BP_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AActorStage_BP_Base_C>();
	}
};
static_assert(alignof(AActorStage_BP_Base_C) == 0x000008, "Wrong alignment on AActorStage_BP_Base_C");
static_assert(sizeof(AActorStage_BP_Base_C) == 0x000398, "Wrong size on AActorStage_BP_Base_C");
static_assert(offsetof(AActorStage_BP_Base_C, VisualizerCamera) == 0x000380, "Member 'AActorStage_BP_Base_C::VisualizerCamera' has a wrong offset!");
static_assert(offsetof(AActorStage_BP_Base_C, VisualizerAttachPoint) == 0x000388, "Member 'AActorStage_BP_Base_C::VisualizerAttachPoint' has a wrong offset!");
static_assert(offsetof(AActorStage_BP_Base_C, Chroma) == 0x000390, "Member 'AActorStage_BP_Base_C::Chroma' has a wrong offset!");

}

