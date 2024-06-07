#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weapons_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass Weapons_BP.Weapons_BP_C
// 0x0028 (0x0578 - 0x0550)
class UWeapons_BP_C final : public UInventoryWeaponsPageWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInventoryItem_BP_C*                    Item0;                                             // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItem_BP_C*                    Item1;                                             // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItem_BP_C*                    Item2;                                             // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryItem_BP_C*                    Item3;                                             // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Weapons_BP(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Weapons_BP_C">();
	}
	static class UWeapons_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeapons_BP_C>();
	}
};
static_assert(alignof(UWeapons_BP_C) == 0x000008, "Wrong alignment on UWeapons_BP_C");
static_assert(sizeof(UWeapons_BP_C) == 0x000578, "Wrong size on UWeapons_BP_C");
static_assert(offsetof(UWeapons_BP_C, UberGraphFrame) == 0x000550, "Member 'UWeapons_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeapons_BP_C, Item0) == 0x000558, "Member 'UWeapons_BP_C::Item0' has a wrong offset!");
static_assert(offsetof(UWeapons_BP_C, Item1) == 0x000560, "Member 'UWeapons_BP_C::Item1' has a wrong offset!");
static_assert(offsetof(UWeapons_BP_C, Item2) == 0x000568, "Member 'UWeapons_BP_C::Item2' has a wrong offset!");
static_assert(offsetof(UWeapons_BP_C, Item3) == 0x000570, "Member 'UWeapons_BP_C::Item3' has a wrong offset!");

}
