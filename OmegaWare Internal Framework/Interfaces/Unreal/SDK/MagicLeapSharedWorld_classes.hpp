#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapSharedWorld

#include "Basic.hpp"

#include "MagicLeapSharedWorld_structs.hpp"
#include "Engine_classes.hpp"


namespace CG
{

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// 0x00D0 (0x0478 - 0x03A8)
class AMagicLeapSharedWorldGameMode final : public AGameMode
{
public:
	struct FMagicLeapSharedWorldSharedData        SharedWorldData;                                   // 0x03A8(0x0010)(BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnNewLocalDataFromClients;                         // 0x03B8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                         PinSelectionConfidenceThreshold;                   // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16AE[0xA4];                                    // 0x03CC(0x00A4)(Fixing Size After Last Property [ Dumper-7 ])
	class AMagicLeapSharedWorldPlayerController*  ChosenOne;                                         // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData);
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	void SelectChosenOne();
	bool SendSharedWorldDataToClients();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapSharedWorldGameMode">();
	}
	static class AMagicLeapSharedWorldGameMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMagicLeapSharedWorldGameMode>();
	}
};
static_assert(alignof(AMagicLeapSharedWorldGameMode) == 0x000008, "Wrong alignment on AMagicLeapSharedWorldGameMode");
static_assert(sizeof(AMagicLeapSharedWorldGameMode) == 0x000478, "Wrong size on AMagicLeapSharedWorldGameMode");
static_assert(offsetof(AMagicLeapSharedWorldGameMode, SharedWorldData) == 0x0003A8, "Member 'AMagicLeapSharedWorldGameMode::SharedWorldData' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameMode, OnNewLocalDataFromClients) == 0x0003B8, "Member 'AMagicLeapSharedWorldGameMode::OnNewLocalDataFromClients' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameMode, PinSelectionConfidenceThreshold) == 0x0003C8, "Member 'AMagicLeapSharedWorldGameMode::PinSelectionConfidenceThreshold' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameMode, ChosenOne) == 0x000470, "Member 'AMagicLeapSharedWorldGameMode::ChosenOne' has a wrong offset!");

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// 0x0040 (0x0368 - 0x0328)
class AMagicLeapSharedWorldGameState final : public AGameState
{
public:
	struct FMagicLeapSharedWorldSharedData        SharedWorldData;                                   // 0x0328(0x0010)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms;                               // 0x0338(0x0010)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSharedWorldDataUpdated;                          // 0x0348(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnAlignmentTransformsUpdated;                      // 0x0358(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	void MagicLeapSharedWorldEvent__DelegateSignature();
	void OnReplicate_AlignmentTransforms();
	void OnReplicate_SharedWorldData();

	struct FTransform CalculateXRCameraRootTransform() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapSharedWorldGameState">();
	}
	static class AMagicLeapSharedWorldGameState* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMagicLeapSharedWorldGameState>();
	}
};
static_assert(alignof(AMagicLeapSharedWorldGameState) == 0x000008, "Wrong alignment on AMagicLeapSharedWorldGameState");
static_assert(sizeof(AMagicLeapSharedWorldGameState) == 0x000368, "Wrong size on AMagicLeapSharedWorldGameState");
static_assert(offsetof(AMagicLeapSharedWorldGameState, SharedWorldData) == 0x000328, "Member 'AMagicLeapSharedWorldGameState::SharedWorldData' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameState, AlignmentTransforms) == 0x000338, "Member 'AMagicLeapSharedWorldGameState::AlignmentTransforms' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameState, OnSharedWorldDataUpdated) == 0x000348, "Member 'AMagicLeapSharedWorldGameState::OnSharedWorldDataUpdated' has a wrong offset!");
static_assert(offsetof(AMagicLeapSharedWorldGameState, OnAlignmentTransformsUpdated) == 0x000358, "Member 'AMagicLeapSharedWorldGameState::OnAlignmentTransformsUpdated' has a wrong offset!");

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// 0x0018 (0x0640 - 0x0628)
class AMagicLeapSharedWorldPlayerController final : public APlayerController
{
public:
	uint8                                         Pad_16AF[0x18];                                    // 0x0628(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClientMarkReadyForSendingLocalData();
	void ClientSetChosenOne(bool bChosenOne);
	void ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
	void ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);

	bool CanSendLocalDataToServer() const;
	bool IsChosenOne() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapSharedWorldPlayerController">();
	}
	static class AMagicLeapSharedWorldPlayerController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMagicLeapSharedWorldPlayerController>();
	}
};
static_assert(alignof(AMagicLeapSharedWorldPlayerController) == 0x000008, "Wrong alignment on AMagicLeapSharedWorldPlayerController");
static_assert(sizeof(AMagicLeapSharedWorldPlayerController) == 0x000640, "Wrong size on AMagicLeapSharedWorldPlayerController");

}

