#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaitTime_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass WaitTime_BP.WaitTime_BP_C
// 0x0010 (0x03B0 - 0x03A0)
class UWaitTime_BP_C final : public UWaitTimeWidget
{
public:
	class UBackground1_BP_C*                      Background1_BP;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WaitTime_BP_C">();
	}
	static class UWaitTime_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaitTime_BP_C>();
	}
};
static_assert(alignof(UWaitTime_BP_C) == 0x000008, "Wrong alignment on UWaitTime_BP_C");
static_assert(sizeof(UWaitTime_BP_C) == 0x0003B0, "Wrong size on UWaitTime_BP_C");
static_assert(offsetof(UWaitTime_BP_C, Background1_BP) == 0x0003A0, "Member 'UWaitTime_BP_C::Background1_BP' has a wrong offset!");
static_assert(offsetof(UWaitTime_BP_C, InvalidationBox_0) == 0x0003A8, "Member 'UWaitTime_BP_C::InvalidationBox_0' has a wrong offset!");

}
