#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemRepair_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass ItemRepair_BP.ItemRepair_BP_C
// 0x0008 (0x03B0 - 0x03A8)
class UItemRepair_BP_C final : public UItemRepairWidget
{
public:
	class UBackground1_BP_C*                      Background;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemRepair_BP_C">();
	}
	static class UItemRepair_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemRepair_BP_C>();
	}
};
static_assert(alignof(UItemRepair_BP_C) == 0x000008, "Wrong alignment on UItemRepair_BP_C");
static_assert(sizeof(UItemRepair_BP_C) == 0x0003B0, "Wrong size on UItemRepair_BP_C");
static_assert(offsetof(UItemRepair_BP_C, Background) == 0x0003A8, "Member 'UItemRepair_BP_C::Background' has a wrong offset!");

}

