#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryItem_BP

#include "Basic.hpp"

#include "Indiana_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace CG
{

// WidgetBlueprintGeneratedClass InventoryItem_BP.InventoryItem_BP_C
// 0x0120 (0x0490 - 0x0370)
class UInventoryItem_BP_C final : public UInventoryItemWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       MakeImageBigAgain;                                 // 0x0378(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ModCategoryImage;                                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class UClass*, class UTexture2D*>        DamageClassTextures;                               // 0x0390(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, class UTexture2D*>        DamageClassHighlightedTextures;                    // 0x03E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	EUMGSequencePlayMode                          PlayDirectionToUse;                                // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29BF[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ElementToUse;                                      // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UTexture2D*>        MapToUse;                                          // 0x0440(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_InventoryItem_BP(int32 EntryPoint);
	void OnButtonHovered();
	void OnButtonFocused();
	void OnButtonUnhovered();
	void OnButtonFocusLost();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryItem_BP_C">();
	}
	static class UInventoryItem_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryItem_BP_C>();
	}
};
static_assert(alignof(UInventoryItem_BP_C) == 0x000008, "Wrong alignment on UInventoryItem_BP_C");
static_assert(sizeof(UInventoryItem_BP_C) == 0x000490, "Wrong size on UInventoryItem_BP_C");
static_assert(offsetof(UInventoryItem_BP_C, UberGraphFrame) == 0x000370, "Member 'UInventoryItem_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInventoryItem_BP_C, MakeImageBigAgain) == 0x000378, "Member 'UInventoryItem_BP_C::MakeImageBigAgain' has a wrong offset!");
static_assert(offsetof(UInventoryItem_BP_C, Image_0) == 0x000380, "Member 'UInventoryItem_BP_C::Image_0' has a wrong offset!");
static_assert(offsetof(UInventoryItem_BP_C, ModCategoryImage) == 0x000388, "Member 'UInventoryItem_BP_C::ModCategoryImage' has a wrong offset!");
static_assert(offsetof(UInventoryItem_BP_C, DamageClassTextures) == 0x000390, "Member 'UInventoryItem_BP_C::DamageClassTextures' has a wrong offset!");
static_assert(offsetof(UInventoryItem_BP_C, DamageClassHighlightedTextures) == 0x0003E0, "Member 'UInventoryItem_BP_C::DamageClassHighlightedTextures' has a wrong offset!");
static_assert(offsetof(UInventoryItem_BP_C, PlayDirectionToUse) == 0x000430, "Member 'UInventoryItem_BP_C::PlayDirectionToUse' has a wrong offset!");
static_assert(offsetof(UInventoryItem_BP_C, ElementToUse) == 0x000438, "Member 'UInventoryItem_BP_C::ElementToUse' has a wrong offset!");
static_assert(offsetof(UInventoryItem_BP_C, MapToUse) == 0x000440, "Member 'UInventoryItem_BP_C::MapToUse' has a wrong offset!");

}

