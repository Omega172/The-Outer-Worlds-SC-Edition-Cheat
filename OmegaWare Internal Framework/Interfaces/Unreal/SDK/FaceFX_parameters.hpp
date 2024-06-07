#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FaceFX

#include "Basic.hpp"

#include "FaceFX_structs.hpp"


namespace CG::Params
{

// Function FaceFX.FaceFXBlueprintLibrary.GetAnimationBounds
// 0x0018 (0x0018 - 0x0000)
struct FaceFXBlueprintLibrary_GetAnimationBounds final
{
public:
	const class UFaceFXAnim*                      Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Start;                                             // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         End;                                               // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Duration;                                          // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D35[0x3];                                      // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXBlueprintLibrary_GetAnimationBounds) == 0x000008, "Wrong alignment on FaceFXBlueprintLibrary_GetAnimationBounds");
static_assert(sizeof(FaceFXBlueprintLibrary_GetAnimationBounds) == 0x000018, "Wrong size on FaceFXBlueprintLibrary_GetAnimationBounds");
static_assert(offsetof(FaceFXBlueprintLibrary_GetAnimationBounds, Animation) == 0x000000, "Member 'FaceFXBlueprintLibrary_GetAnimationBounds::Animation' has a wrong offset!");
static_assert(offsetof(FaceFXBlueprintLibrary_GetAnimationBounds, Start) == 0x000008, "Member 'FaceFXBlueprintLibrary_GetAnimationBounds::Start' has a wrong offset!");
static_assert(offsetof(FaceFXBlueprintLibrary_GetAnimationBounds, End) == 0x00000C, "Member 'FaceFXBlueprintLibrary_GetAnimationBounds::End' has a wrong offset!");
static_assert(offsetof(FaceFXBlueprintLibrary_GetAnimationBounds, Duration) == 0x000010, "Member 'FaceFXBlueprintLibrary_GetAnimationBounds::Duration' has a wrong offset!");
static_assert(offsetof(FaceFXBlueprintLibrary_GetAnimationBounds, ReturnValue) == 0x000014, "Member 'FaceFXBlueprintLibrary_GetAnimationBounds::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.JumpTo
// 0x0030 (0x0030 - 0x0000)
struct FaceFXComponent_JumpTo final
{
public:
	float                                         Position;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Param_Pause;                                       // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3C[0x3];                                      // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFaceFXAnim*                            Animation;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          LoopAnimation;                                     // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3D[0x7];                                      // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0018(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          Caller;                                            // 0x0020(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3E[0x7];                                      // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_JumpTo) == 0x000008, "Wrong alignment on FaceFXComponent_JumpTo");
static_assert(sizeof(FaceFXComponent_JumpTo) == 0x000030, "Wrong size on FaceFXComponent_JumpTo");
static_assert(offsetof(FaceFXComponent_JumpTo, Position) == 0x000000, "Member 'FaceFXComponent_JumpTo::Position' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpTo, Param_Pause) == 0x000004, "Member 'FaceFXComponent_JumpTo::Param_Pause' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpTo, Animation) == 0x000008, "Member 'FaceFXComponent_JumpTo::Animation' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpTo, LoopAnimation) == 0x000010, "Member 'FaceFXComponent_JumpTo::LoopAnimation' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpTo, SkelMeshComp) == 0x000018, "Member 'FaceFXComponent_JumpTo::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpTo, Caller) == 0x000020, "Member 'FaceFXComponent_JumpTo::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpTo, ReturnValue) == 0x000028, "Member 'FaceFXComponent_JumpTo::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.JumpToById
// 0x0038 (0x0038 - 0x0000)
struct FaceFXComponent_JumpToById final
{
public:
	float                                         Position;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Param_Pause;                                       // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D3F[0x3];                                      // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Group;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AnimName;                                          // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          LoopAnimation;                                     // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D40[0x7];                                      // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0020(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          Caller;                                            // 0x0028(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D41[0x7];                                      // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_JumpToById) == 0x000008, "Wrong alignment on FaceFXComponent_JumpToById");
static_assert(sizeof(FaceFXComponent_JumpToById) == 0x000038, "Wrong size on FaceFXComponent_JumpToById");
static_assert(offsetof(FaceFXComponent_JumpToById, Position) == 0x000000, "Member 'FaceFXComponent_JumpToById::Position' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpToById, Param_Pause) == 0x000004, "Member 'FaceFXComponent_JumpToById::Param_Pause' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpToById, Group) == 0x000008, "Member 'FaceFXComponent_JumpToById::Group' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpToById, AnimName) == 0x000010, "Member 'FaceFXComponent_JumpToById::AnimName' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpToById, LoopAnimation) == 0x000018, "Member 'FaceFXComponent_JumpToById::LoopAnimation' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpToById, SkelMeshComp) == 0x000020, "Member 'FaceFXComponent_JumpToById::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpToById, Caller) == 0x000028, "Member 'FaceFXComponent_JumpToById::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_JumpToById, ReturnValue) == 0x000030, "Member 'FaceFXComponent_JumpToById::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.OnCharacterAnimationEvent
// 0x0038 (0x0038 - 0x0000)
struct FaceFXComponent_OnCharacterAnimationEvent final
{
public:
	class UFaceFXCharacter*                       Character;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceFXAnimId                          AnimId;                                            // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         ChannelIndex;                                      // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChannelTime;                                       // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EventTime;                                         // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D42[0x4];                                      // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Payload;                                           // 0x0028(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FaceFXComponent_OnCharacterAnimationEvent) == 0x000008, "Wrong alignment on FaceFXComponent_OnCharacterAnimationEvent");
static_assert(sizeof(FaceFXComponent_OnCharacterAnimationEvent) == 0x000038, "Wrong size on FaceFXComponent_OnCharacterAnimationEvent");
static_assert(offsetof(FaceFXComponent_OnCharacterAnimationEvent, Character) == 0x000000, "Member 'FaceFXComponent_OnCharacterAnimationEvent::Character' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_OnCharacterAnimationEvent, AnimId) == 0x000008, "Member 'FaceFXComponent_OnCharacterAnimationEvent::AnimId' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_OnCharacterAnimationEvent, ChannelIndex) == 0x000018, "Member 'FaceFXComponent_OnCharacterAnimationEvent::ChannelIndex' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_OnCharacterAnimationEvent, ChannelTime) == 0x00001C, "Member 'FaceFXComponent_OnCharacterAnimationEvent::ChannelTime' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_OnCharacterAnimationEvent, EventTime) == 0x000020, "Member 'FaceFXComponent_OnCharacterAnimationEvent::EventTime' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_OnCharacterAnimationEvent, Payload) == 0x000028, "Member 'FaceFXComponent_OnCharacterAnimationEvent::Payload' has a wrong offset!");

// Function FaceFX.FaceFXComponent.OnCharacterAudioStart
// 0x0028 (0x0028 - 0x0000)
struct FaceFXComponent_OnCharacterAudioStart final
{
public:
	class UFaceFXCharacter*                       Character;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceFXAnimId                          AnimId;                                            // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          IsAudioStarted;                                    // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D43[0x7];                                      // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UActorComponent*                        AudioComponentStartedOn;                           // 0x0020(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FaceFXComponent_OnCharacterAudioStart) == 0x000008, "Wrong alignment on FaceFXComponent_OnCharacterAudioStart");
static_assert(sizeof(FaceFXComponent_OnCharacterAudioStart) == 0x000028, "Wrong size on FaceFXComponent_OnCharacterAudioStart");
static_assert(offsetof(FaceFXComponent_OnCharacterAudioStart, Character) == 0x000000, "Member 'FaceFXComponent_OnCharacterAudioStart::Character' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_OnCharacterAudioStart, AnimId) == 0x000008, "Member 'FaceFXComponent_OnCharacterAudioStart::AnimId' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_OnCharacterAudioStart, IsAudioStarted) == 0x000018, "Member 'FaceFXComponent_OnCharacterAudioStart::IsAudioStarted' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_OnCharacterAudioStart, AudioComponentStartedOn) == 0x000020, "Member 'FaceFXComponent_OnCharacterAudioStart::AudioComponentStartedOn' has a wrong offset!");

// Function FaceFX.FaceFXComponent.OnCharacterPlaybackStopped
// 0x0018 (0x0018 - 0x0000)
struct FaceFXComponent_OnCharacterPlaybackStopped final
{
public:
	class UFaceFXCharacter*                       Character;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceFXAnimId                          AnimId;                                            // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FaceFXComponent_OnCharacterPlaybackStopped) == 0x000008, "Wrong alignment on FaceFXComponent_OnCharacterPlaybackStopped");
static_assert(sizeof(FaceFXComponent_OnCharacterPlaybackStopped) == 0x000018, "Wrong size on FaceFXComponent_OnCharacterPlaybackStopped");
static_assert(offsetof(FaceFXComponent_OnCharacterPlaybackStopped, Character) == 0x000000, "Member 'FaceFXComponent_OnCharacterPlaybackStopped::Character' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_OnCharacterPlaybackStopped, AnimId) == 0x000008, "Member 'FaceFXComponent_OnCharacterPlaybackStopped::AnimId' has a wrong offset!");

// Function FaceFX.FaceFXComponent.Pause
// 0x0018 (0x0018 - 0x0000)
struct FaceFXComponent_Pause final
{
public:
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          Caller;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D44[0x7];                                      // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_Pause) == 0x000008, "Wrong alignment on FaceFXComponent_Pause");
static_assert(sizeof(FaceFXComponent_Pause) == 0x000018, "Wrong size on FaceFXComponent_Pause");
static_assert(offsetof(FaceFXComponent_Pause, SkelMeshComp) == 0x000000, "Member 'FaceFXComponent_Pause::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Pause, Caller) == 0x000008, "Member 'FaceFXComponent_Pause::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Pause, ReturnValue) == 0x000010, "Member 'FaceFXComponent_Pause::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.Play
// 0x0028 (0x0028 - 0x0000)
struct FaceFXComponent_Play final
{
public:
	class UFaceFXAnim*                            Animation;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Loop;                                              // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D45[0x7];                                      // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UObject*                          Caller;                                            // 0x0018(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D46[0x7];                                      // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_Play) == 0x000008, "Wrong alignment on FaceFXComponent_Play");
static_assert(sizeof(FaceFXComponent_Play) == 0x000028, "Wrong size on FaceFXComponent_Play");
static_assert(offsetof(FaceFXComponent_Play, Animation) == 0x000000, "Member 'FaceFXComponent_Play::Animation' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Play, SkelMeshComp) == 0x000008, "Member 'FaceFXComponent_Play::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Play, Loop) == 0x000010, "Member 'FaceFXComponent_Play::Loop' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Play, Caller) == 0x000018, "Member 'FaceFXComponent_Play::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Play, ReturnValue) == 0x000020, "Member 'FaceFXComponent_Play::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.PlayById
// 0x0030 (0x0030 - 0x0000)
struct FaceFXComponent_PlayById final
{
public:
	class FName                                   Group;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AnimName;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Loop;                                              // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D47[0x7];                                      // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UObject*                          Caller;                                            // 0x0020(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D48[0x7];                                      // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_PlayById) == 0x000008, "Wrong alignment on FaceFXComponent_PlayById");
static_assert(sizeof(FaceFXComponent_PlayById) == 0x000030, "Wrong size on FaceFXComponent_PlayById");
static_assert(offsetof(FaceFXComponent_PlayById, Group) == 0x000000, "Member 'FaceFXComponent_PlayById::Group' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_PlayById, AnimName) == 0x000008, "Member 'FaceFXComponent_PlayById::AnimName' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_PlayById, SkelMeshComp) == 0x000010, "Member 'FaceFXComponent_PlayById::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_PlayById, Loop) == 0x000018, "Member 'FaceFXComponent_PlayById::Loop' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_PlayById, Caller) == 0x000020, "Member 'FaceFXComponent_PlayById::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_PlayById, ReturnValue) == 0x000028, "Member 'FaceFXComponent_PlayById::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.Resume
// 0x0018 (0x0018 - 0x0000)
struct FaceFXComponent_Resume final
{
public:
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          Caller;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D49[0x7];                                      // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_Resume) == 0x000008, "Wrong alignment on FaceFXComponent_Resume");
static_assert(sizeof(FaceFXComponent_Resume) == 0x000018, "Wrong size on FaceFXComponent_Resume");
static_assert(offsetof(FaceFXComponent_Resume, SkelMeshComp) == 0x000000, "Member 'FaceFXComponent_Resume::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Resume, Caller) == 0x000008, "Member 'FaceFXComponent_Resume::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Resume, ReturnValue) == 0x000010, "Member 'FaceFXComponent_Resume::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.Setup
// 0x0030 (0x0030 - 0x0000)
struct FaceFXComponent_Setup final
{
public:
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                        AudioComponent;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UFaceFXActor*                     Asset;                                             // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsCompensateForForceFrontXAxis;                    // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsAutoPlaySound;                                   // 0x0019(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsDisableMorphTargets;                             // 0x001A(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsDisableMaterialParameters;                       // 0x001B(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsIgnoreEvents;                                    // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4A[0x3];                                      // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	const class UObject*                          Caller;                                            // 0x0020(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4B[0x7];                                      // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_Setup) == 0x000008, "Wrong alignment on FaceFXComponent_Setup");
static_assert(sizeof(FaceFXComponent_Setup) == 0x000030, "Wrong size on FaceFXComponent_Setup");
static_assert(offsetof(FaceFXComponent_Setup, SkelMeshComp) == 0x000000, "Member 'FaceFXComponent_Setup::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Setup, AudioComponent) == 0x000008, "Member 'FaceFXComponent_Setup::AudioComponent' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Setup, Asset) == 0x000010, "Member 'FaceFXComponent_Setup::Asset' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Setup, IsCompensateForForceFrontXAxis) == 0x000018, "Member 'FaceFXComponent_Setup::IsCompensateForForceFrontXAxis' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Setup, IsAutoPlaySound) == 0x000019, "Member 'FaceFXComponent_Setup::IsAutoPlaySound' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Setup, IsDisableMorphTargets) == 0x00001A, "Member 'FaceFXComponent_Setup::IsDisableMorphTargets' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Setup, IsDisableMaterialParameters) == 0x00001B, "Member 'FaceFXComponent_Setup::IsDisableMaterialParameters' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Setup, IsIgnoreEvents) == 0x00001C, "Member 'FaceFXComponent_Setup::IsIgnoreEvents' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Setup, Caller) == 0x000020, "Member 'FaceFXComponent_Setup::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Setup, ReturnValue) == 0x000028, "Member 'FaceFXComponent_Setup::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.Stop
// 0x0018 (0x0018 - 0x0000)
struct FaceFXComponent_Stop final
{
public:
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          Caller;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4C[0x7];                                      // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_Stop) == 0x000008, "Wrong alignment on FaceFXComponent_Stop");
static_assert(sizeof(FaceFXComponent_Stop) == 0x000018, "Wrong size on FaceFXComponent_Stop");
static_assert(offsetof(FaceFXComponent_Stop, SkelMeshComp) == 0x000000, "Member 'FaceFXComponent_Stop::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Stop, Caller) == 0x000008, "Member 'FaceFXComponent_Stop::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_Stop, ReturnValue) == 0x000010, "Member 'FaceFXComponent_Stop::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.IsPaused
// 0x0018 (0x0018 - 0x0000)
struct FaceFXComponent_IsPaused final
{
public:
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          Caller;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4D[0x7];                                      // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_IsPaused) == 0x000008, "Wrong alignment on FaceFXComponent_IsPaused");
static_assert(sizeof(FaceFXComponent_IsPaused) == 0x000018, "Wrong size on FaceFXComponent_IsPaused");
static_assert(offsetof(FaceFXComponent_IsPaused, SkelMeshComp) == 0x000000, "Member 'FaceFXComponent_IsPaused::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_IsPaused, Caller) == 0x000008, "Member 'FaceFXComponent_IsPaused::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_IsPaused, ReturnValue) == 0x000010, "Member 'FaceFXComponent_IsPaused::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.IsPlaying
// 0x0018 (0x0018 - 0x0000)
struct FaceFXComponent_IsPlaying final
{
public:
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          Caller;                                            // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4E[0x7];                                      // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_IsPlaying) == 0x000008, "Wrong alignment on FaceFXComponent_IsPlaying");
static_assert(sizeof(FaceFXComponent_IsPlaying) == 0x000018, "Wrong size on FaceFXComponent_IsPlaying");
static_assert(offsetof(FaceFXComponent_IsPlaying, SkelMeshComp) == 0x000000, "Member 'FaceFXComponent_IsPlaying::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_IsPlaying, Caller) == 0x000008, "Member 'FaceFXComponent_IsPlaying::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_IsPlaying, ReturnValue) == 0x000010, "Member 'FaceFXComponent_IsPlaying::ReturnValue' has a wrong offset!");

// Function FaceFX.FaceFXComponent.IsPlayingAnimation
// 0x0028 (0x0028 - 0x0000)
struct FaceFXComponent_IsPlayingAnimation final
{
public:
	struct FFaceFXAnimId                          AnimId;                                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                 SkelMeshComp;                                      // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          Caller;                                            // 0x0018(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4F[0x7];                                      // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FaceFXComponent_IsPlayingAnimation) == 0x000008, "Wrong alignment on FaceFXComponent_IsPlayingAnimation");
static_assert(sizeof(FaceFXComponent_IsPlayingAnimation) == 0x000028, "Wrong size on FaceFXComponent_IsPlayingAnimation");
static_assert(offsetof(FaceFXComponent_IsPlayingAnimation, AnimId) == 0x000000, "Member 'FaceFXComponent_IsPlayingAnimation::AnimId' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_IsPlayingAnimation, SkelMeshComp) == 0x000010, "Member 'FaceFXComponent_IsPlayingAnimation::SkelMeshComp' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_IsPlayingAnimation, Caller) == 0x000018, "Member 'FaceFXComponent_IsPlayingAnimation::Caller' has a wrong offset!");
static_assert(offsetof(FaceFXComponent_IsPlayingAnimation, ReturnValue) == 0x000020, "Member 'FaceFXComponent_IsPlayingAnimation::ReturnValue' has a wrong offset!");

}

