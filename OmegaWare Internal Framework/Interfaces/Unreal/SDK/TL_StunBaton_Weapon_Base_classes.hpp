#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TL_StunBaton_Weapon_Base

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// BlueprintGeneratedClass TL_StunBaton_Weapon_Base.TL_StunBaton_Weapon_Base_C
// 0x0008 (0x05D8 - 0x05D0)
class UTL_StunBaton_Weapon_Base_C : public UWeapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_TL_StunBaton_Weapon_Base(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TL_StunBaton_Weapon_Base_C">();
	}
	static class UTL_StunBaton_Weapon_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTL_StunBaton_Weapon_Base_C>();
	}
};
static_assert(alignof(UTL_StunBaton_Weapon_Base_C) == 0x000008, "Wrong alignment on UTL_StunBaton_Weapon_Base_C");
static_assert(sizeof(UTL_StunBaton_Weapon_Base_C) == 0x0005D8, "Wrong size on UTL_StunBaton_Weapon_Base_C");
static_assert(offsetof(UTL_StunBaton_Weapon_Base_C, UberGraphFrame) == 0x0005D0, "Member 'UTL_StunBaton_Weapon_Base_C::UberGraphFrame' has a wrong offset!");

}

