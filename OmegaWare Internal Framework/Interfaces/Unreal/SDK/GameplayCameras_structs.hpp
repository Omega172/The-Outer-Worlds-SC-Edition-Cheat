#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayCameras

#include "Basic.hpp"


namespace CG
{

// Enum GameplayCameras.EInitialOscillatorOffset
// NumValues: 0x0003
enum class EInitialOscillatorOffset : uint8
{
	EOO_OffsetRandom                         = 0,
	EOO_OffsetZero                           = 1,
	EOO_MAX                                  = 2,
};

// Enum GameplayCameras.EOscillatorWaveform
// NumValues: 0x0003
enum class EOscillatorWaveform : uint8
{
	SineWave                                 = 0,
	PerlinNoise                              = 1,
	EOscillatorWaveform_MAX                  = 2,
};

// Enum GameplayCameras.EInitialWaveOscillatorOffsetType
// NumValues: 0x0003
enum class EInitialWaveOscillatorOffsetType : uint8
{
	Random                                   = 0,
	Zero                                     = 1,
	EInitialWaveOscillatorOffsetType_MAX     = 2,
};

// ScriptStruct GameplayCameras.FOscillator
// 0x000C (0x000C - 0x0000)
struct FFOscillator final
{
public:
	float                                         Amplitude;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Frequency;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInitialOscillatorOffset                      InitialOffset;                                     // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOscillatorWaveform                           Waveform;                                          // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1584[0x2];                                     // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFOscillator) == 0x000004, "Wrong alignment on FFOscillator");
static_assert(sizeof(FFOscillator) == 0x00000C, "Wrong size on FFOscillator");
static_assert(offsetof(FFOscillator, Amplitude) == 0x000000, "Member 'FFOscillator::Amplitude' has a wrong offset!");
static_assert(offsetof(FFOscillator, Frequency) == 0x000004, "Member 'FFOscillator::Frequency' has a wrong offset!");
static_assert(offsetof(FFOscillator, InitialOffset) == 0x000008, "Member 'FFOscillator::InitialOffset' has a wrong offset!");
static_assert(offsetof(FFOscillator, Waveform) == 0x000009, "Member 'FFOscillator::Waveform' has a wrong offset!");

// ScriptStruct GameplayCameras.VOscillator
// 0x0024 (0x0024 - 0x0000)
struct FVOscillator final
{
public:
	struct FFOscillator                           X;                                                 // 0x0000(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Y;                                                 // 0x000C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Z;                                                 // 0x0018(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FVOscillator) == 0x000004, "Wrong alignment on FVOscillator");
static_assert(sizeof(FVOscillator) == 0x000024, "Wrong size on FVOscillator");
static_assert(offsetof(FVOscillator, X) == 0x000000, "Member 'FVOscillator::X' has a wrong offset!");
static_assert(offsetof(FVOscillator, Y) == 0x00000C, "Member 'FVOscillator::Y' has a wrong offset!");
static_assert(offsetof(FVOscillator, Z) == 0x000018, "Member 'FVOscillator::Z' has a wrong offset!");

// ScriptStruct GameplayCameras.ROscillator
// 0x0024 (0x0024 - 0x0000)
struct FROscillator final
{
public:
	struct FFOscillator                           Pitch;                                             // 0x0000(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Yaw;                                               // 0x000C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                           Roll;                                              // 0x0018(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FROscillator) == 0x000004, "Wrong alignment on FROscillator");
static_assert(sizeof(FROscillator) == 0x000024, "Wrong size on FROscillator");
static_assert(offsetof(FROscillator, Pitch) == 0x000000, "Member 'FROscillator::Pitch' has a wrong offset!");
static_assert(offsetof(FROscillator, Yaw) == 0x00000C, "Member 'FROscillator::Yaw' has a wrong offset!");
static_assert(offsetof(FROscillator, Roll) == 0x000018, "Member 'FROscillator::Roll' has a wrong offset!");

// ScriptStruct GameplayCameras.PerlinNoiseShaker
// 0x0008 (0x0008 - 0x0000)
struct FPerlinNoiseShaker final
{
public:
	float                                         Amplitude;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Frequency;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPerlinNoiseShaker) == 0x000004, "Wrong alignment on FPerlinNoiseShaker");
static_assert(sizeof(FPerlinNoiseShaker) == 0x000008, "Wrong size on FPerlinNoiseShaker");
static_assert(offsetof(FPerlinNoiseShaker, Amplitude) == 0x000000, "Member 'FPerlinNoiseShaker::Amplitude' has a wrong offset!");
static_assert(offsetof(FPerlinNoiseShaker, Frequency) == 0x000004, "Member 'FPerlinNoiseShaker::Frequency' has a wrong offset!");

// ScriptStruct GameplayCameras.WaveOscillator
// 0x000C (0x000C - 0x0000)
struct FWaveOscillator final
{
public:
	float                                         Amplitude;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Frequency;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInitialWaveOscillatorOffsetType              InitialOffsetType;                                 // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1585[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FWaveOscillator) == 0x000004, "Wrong alignment on FWaveOscillator");
static_assert(sizeof(FWaveOscillator) == 0x00000C, "Wrong size on FWaveOscillator");
static_assert(offsetof(FWaveOscillator, Amplitude) == 0x000000, "Member 'FWaveOscillator::Amplitude' has a wrong offset!");
static_assert(offsetof(FWaveOscillator, Frequency) == 0x000004, "Member 'FWaveOscillator::Frequency' has a wrong offset!");
static_assert(offsetof(FWaveOscillator, InitialOffsetType) == 0x000008, "Member 'FWaveOscillator::InitialOffsetType' has a wrong offset!");

}

