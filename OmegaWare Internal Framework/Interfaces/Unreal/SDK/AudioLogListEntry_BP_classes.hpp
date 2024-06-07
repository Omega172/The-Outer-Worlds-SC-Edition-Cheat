#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioLogListEntry_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass AudioLogListEntry_BP.AudioLogListEntry_BP_C
// 0x0000 (0x02A0 - 0x02A0)
class UAudioLogListEntry_BP_C final : public UAudioLogListEntryWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AudioLogListEntry_BP_C">();
	}
	static class UAudioLogListEntry_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioLogListEntry_BP_C>();
	}
};
static_assert(alignof(UAudioLogListEntry_BP_C) == 0x000008, "Wrong alignment on UAudioLogListEntry_BP_C");
static_assert(sizeof(UAudioLogListEntry_BP_C) == 0x0002A0, "Wrong size on UAudioLogListEntry_BP_C");

}
