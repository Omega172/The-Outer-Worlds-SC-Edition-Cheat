#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Background1_BP

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass Background1_BP.Background1_BP_C
// 0x0010 (0x0288 - 0x0278)
class UBackground1_BP_C final : public UUserWidget
{
public:
	class UImage*                                 Grid;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Halftone;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Background1_BP_C">();
	}
	static class UBackground1_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBackground1_BP_C>();
	}
};
static_assert(alignof(UBackground1_BP_C) == 0x000008, "Wrong alignment on UBackground1_BP_C");
static_assert(sizeof(UBackground1_BP_C) == 0x000288, "Wrong size on UBackground1_BP_C");
static_assert(offsetof(UBackground1_BP_C, Grid) == 0x000278, "Member 'UBackground1_BP_C::Grid' has a wrong offset!");
static_assert(offsetof(UBackground1_BP_C, Halftone) == 0x000280, "Member 'UBackground1_BP_C::Halftone' has a wrong offset!");

}
