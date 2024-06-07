#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspector_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass ItemInspector_BP.ItemInspector_BP_C
// 0x0028 (0x03B0 - 0x0388)
class UItemInspector_BP_C final : public UItemInspectorWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackground1_BP_C*                      Background;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ButtonBorder;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NameVerticalBox;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemInspector_BP(int32 EntryPoint);
	void ZoomToggled(bool bFullZoom);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspector_BP_C">();
	}
	static class UItemInspector_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspector_BP_C>();
	}
};
static_assert(alignof(UItemInspector_BP_C) == 0x000008, "Wrong alignment on UItemInspector_BP_C");
static_assert(sizeof(UItemInspector_BP_C) == 0x0003B0, "Wrong size on UItemInspector_BP_C");
static_assert(offsetof(UItemInspector_BP_C, UberGraphFrame) == 0x000388, "Member 'UItemInspector_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemInspector_BP_C, FadeOut) == 0x000390, "Member 'UItemInspector_BP_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UItemInspector_BP_C, Background) == 0x000398, "Member 'UItemInspector_BP_C::Background' has a wrong offset!");
static_assert(offsetof(UItemInspector_BP_C, ButtonBorder) == 0x0003A0, "Member 'UItemInspector_BP_C::ButtonBorder' has a wrong offset!");
static_assert(offsetof(UItemInspector_BP_C, NameVerticalBox) == 0x0003A8, "Member 'UItemInspector_BP_C::NameVerticalBox' has a wrong offset!");

}
