#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CodexJournal_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass CodexJournal_BP.CodexJournal_BP_C
// 0x0018 (0x03E0 - 0x03C8)
class UCodexJournal_BP_C final : public UCodexJournal
{
public:
	class UBackgroundPanelWidget_C*               BackgroundPanelWidget;                             // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundPanelWidget_C*               BackgroundPanelWidget_0;                           // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlavorTextWidget_BP_C*                 FlavorTextWidget;                                  // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CodexJournal_BP_C">();
	}
	static class UCodexJournal_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCodexJournal_BP_C>();
	}
};
static_assert(alignof(UCodexJournal_BP_C) == 0x000008, "Wrong alignment on UCodexJournal_BP_C");
static_assert(sizeof(UCodexJournal_BP_C) == 0x0003E0, "Wrong size on UCodexJournal_BP_C");
static_assert(offsetof(UCodexJournal_BP_C, BackgroundPanelWidget) == 0x0003C8, "Member 'UCodexJournal_BP_C::BackgroundPanelWidget' has a wrong offset!");
static_assert(offsetof(UCodexJournal_BP_C, BackgroundPanelWidget_0) == 0x0003D0, "Member 'UCodexJournal_BP_C::BackgroundPanelWidget_0' has a wrong offset!");
static_assert(offsetof(UCodexJournal_BP_C, FlavorTextWidget) == 0x0003D8, "Member 'UCodexJournal_BP_C::FlavorTextWidget' has a wrong offset!");

}
