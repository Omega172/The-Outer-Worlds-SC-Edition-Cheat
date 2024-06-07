#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FloorLevel_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass FloorLevel_BP.FloorLevel_BP_C
// 0x0000 (0x0288 - 0x0288)
class UFloorLevel_BP_C final : public UFloorLevelWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FloorLevel_BP_C">();
	}
	static class UFloorLevel_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFloorLevel_BP_C>();
	}
};
static_assert(alignof(UFloorLevel_BP_C) == 0x000008, "Wrong alignment on UFloorLevel_BP_C");
static_assert(sizeof(UFloorLevel_BP_C) == 0x000288, "Wrong size on UFloorLevel_BP_C");

}
