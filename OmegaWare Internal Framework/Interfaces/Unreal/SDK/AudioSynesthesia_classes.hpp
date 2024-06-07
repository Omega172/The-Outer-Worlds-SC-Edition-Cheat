#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioSynesthesia

#include "Basic.hpp"

#include "AudioAnalyzer_classes.hpp"
#include "AudioSynesthesia_structs.hpp"
#include "Engine_structs.hpp"


namespace CG
{

// Class AudioSynesthesia.AudioSynesthesiaNRT
// 0x0000 (0x0080 - 0x0080)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioSynesthesiaNRT">();
	}
	static class UAudioSynesthesiaNRT* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioSynesthesiaNRT>();
	}
};
static_assert(alignof(UAudioSynesthesiaNRT) == 0x000008, "Wrong alignment on UAudioSynesthesiaNRT");
static_assert(sizeof(UAudioSynesthesiaNRT) == 0x000080, "Wrong size on UAudioSynesthesiaNRT");

// Class AudioSynesthesia.OnsetNRT
// 0x0008 (0x0088 - 0x0080)
class UOnsetNRT final : public UAudioSynesthesiaNRT
{
public:
	class UOnsetNRTSettings*                      Settings;                                          // 0x0080(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void GetChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths) const;
	void GetNormalizedChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnsetNRT">();
	}
	static class UOnsetNRT* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnsetNRT>();
	}
};
static_assert(alignof(UOnsetNRT) == 0x000008, "Wrong alignment on UOnsetNRT");
static_assert(sizeof(UOnsetNRT) == 0x000088, "Wrong size on UOnsetNRT");
static_assert(offsetof(UOnsetNRT, Settings) == 0x000080, "Member 'UOnsetNRT::Settings' has a wrong offset!");

// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// 0x0000 (0x0030 - 0x0030)
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioSynesthesiaNRTSettings">();
	}
	static class UAudioSynesthesiaNRTSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioSynesthesiaNRTSettings>();
	}
};
static_assert(alignof(UAudioSynesthesiaNRTSettings) == 0x000008, "Wrong alignment on UAudioSynesthesiaNRTSettings");
static_assert(sizeof(UAudioSynesthesiaNRTSettings) == 0x000030, "Wrong size on UAudioSynesthesiaNRTSettings");

// Class AudioSynesthesia.ConstantQNRTSettings
// 0x0020 (0x0050 - 0x0030)
class UConstantQNRTSettings final : public UAudioSynesthesiaNRTSettings
{
public:
	float                                         StartingFrequency;                                 // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumBands;                                          // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NumBandsPerOctave;                                 // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnalysisPeriod;                                    // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDownmixToMono;                                    // 0x0040(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EConstantQFFTSizeEnum                         FFTSize;                                           // 0x0041(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFFTWindowType                                WindowType;                                        // 0x0042(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAudioSpectrumType                            SpectrumType;                                      // 0x0043(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BandWidthStretch;                                  // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EConstantQNormalizationEnum                   CQTNormalization;                                  // 0x0048(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17CF[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NoiseFloorDb;                                      // 0x004C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstantQNRTSettings">();
	}
	static class UConstantQNRTSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstantQNRTSettings>();
	}
};
static_assert(alignof(UConstantQNRTSettings) == 0x000008, "Wrong alignment on UConstantQNRTSettings");
static_assert(sizeof(UConstantQNRTSettings) == 0x000050, "Wrong size on UConstantQNRTSettings");
static_assert(offsetof(UConstantQNRTSettings, StartingFrequency) == 0x000030, "Member 'UConstantQNRTSettings::StartingFrequency' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, NumBands) == 0x000034, "Member 'UConstantQNRTSettings::NumBands' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, NumBandsPerOctave) == 0x000038, "Member 'UConstantQNRTSettings::NumBandsPerOctave' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, AnalysisPeriod) == 0x00003C, "Member 'UConstantQNRTSettings::AnalysisPeriod' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, bDownmixToMono) == 0x000040, "Member 'UConstantQNRTSettings::bDownmixToMono' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, FFTSize) == 0x000041, "Member 'UConstantQNRTSettings::FFTSize' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, WindowType) == 0x000042, "Member 'UConstantQNRTSettings::WindowType' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, SpectrumType) == 0x000043, "Member 'UConstantQNRTSettings::SpectrumType' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, BandWidthStretch) == 0x000044, "Member 'UConstantQNRTSettings::BandWidthStretch' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, CQTNormalization) == 0x000048, "Member 'UConstantQNRTSettings::CQTNormalization' has a wrong offset!");
static_assert(offsetof(UConstantQNRTSettings, NoiseFloorDb) == 0x00004C, "Member 'UConstantQNRTSettings::NoiseFloorDb' has a wrong offset!");

// Class AudioSynesthesia.ConstantQNRT
// 0x0008 (0x0088 - 0x0080)
class UConstantQNRT final : public UAudioSynesthesiaNRT
{
public:
	class UConstantQNRTSettings*                  Settings;                                          // 0x0080(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void GetChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>* OutConstantQ) const;
	void GetNormalizedChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>* OutConstantQ) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstantQNRT">();
	}
	static class UConstantQNRT* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstantQNRT>();
	}
};
static_assert(alignof(UConstantQNRT) == 0x000008, "Wrong alignment on UConstantQNRT");
static_assert(sizeof(UConstantQNRT) == 0x000088, "Wrong size on UConstantQNRT");
static_assert(offsetof(UConstantQNRT, Settings) == 0x000080, "Member 'UConstantQNRT::Settings' has a wrong offset!");

// Class AudioSynesthesia.LoudnessNRTSettings
// 0x0018 (0x0048 - 0x0030)
class ULoudnessNRTSettings final : public UAudioSynesthesiaNRTSettings
{
public:
	float                                         AnalysisPeriod;                                    // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumFrequency;                                  // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumFrequency;                                  // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELoudnessNRTCurveTypeEnum                     CurveType;                                         // 0x003C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17D0[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NoiseFloorDb;                                      // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17D1[0x4];                                     // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoudnessNRTSettings">();
	}
	static class ULoudnessNRTSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoudnessNRTSettings>();
	}
};
static_assert(alignof(ULoudnessNRTSettings) == 0x000008, "Wrong alignment on ULoudnessNRTSettings");
static_assert(sizeof(ULoudnessNRTSettings) == 0x000048, "Wrong size on ULoudnessNRTSettings");
static_assert(offsetof(ULoudnessNRTSettings, AnalysisPeriod) == 0x000030, "Member 'ULoudnessNRTSettings::AnalysisPeriod' has a wrong offset!");
static_assert(offsetof(ULoudnessNRTSettings, MinimumFrequency) == 0x000034, "Member 'ULoudnessNRTSettings::MinimumFrequency' has a wrong offset!");
static_assert(offsetof(ULoudnessNRTSettings, MaximumFrequency) == 0x000038, "Member 'ULoudnessNRTSettings::MaximumFrequency' has a wrong offset!");
static_assert(offsetof(ULoudnessNRTSettings, CurveType) == 0x00003C, "Member 'ULoudnessNRTSettings::CurveType' has a wrong offset!");
static_assert(offsetof(ULoudnessNRTSettings, NoiseFloorDb) == 0x000040, "Member 'ULoudnessNRTSettings::NoiseFloorDb' has a wrong offset!");

// Class AudioSynesthesia.LoudnessNRT
// 0x0008 (0x0088 - 0x0080)
class ULoudnessNRT final : public UAudioSynesthesiaNRT
{
public:
	class ULoudnessNRTSettings*                   Settings;                                          // 0x0080(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void GetChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float* OutLoudness) const;
	void GetLoudnessAtTime(const float InSeconds, float* OutLoudness) const;
	void GetNormalizedChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float* OutLoudness) const;
	void GetNormalizedLoudnessAtTime(const float InSeconds, float* OutLoudness) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoudnessNRT">();
	}
	static class ULoudnessNRT* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoudnessNRT>();
	}
};
static_assert(alignof(ULoudnessNRT) == 0x000008, "Wrong alignment on ULoudnessNRT");
static_assert(sizeof(ULoudnessNRT) == 0x000088, "Wrong size on ULoudnessNRT");
static_assert(offsetof(ULoudnessNRT, Settings) == 0x000080, "Member 'ULoudnessNRT::Settings' has a wrong offset!");

// Class AudioSynesthesia.OnsetNRTSettings
// 0x0018 (0x0048 - 0x0030)
class UOnsetNRTSettings final : public UAudioSynesthesiaNRTSettings
{
public:
	bool                                          bDownmixToMono;                                    // 0x0030(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17D2[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GranularityInSeconds;                              // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Sensitivity;                                       // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumFrequency;                                  // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumFrequency;                                  // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17D3[0x4];                                     // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnsetNRTSettings">();
	}
	static class UOnsetNRTSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnsetNRTSettings>();
	}
};
static_assert(alignof(UOnsetNRTSettings) == 0x000008, "Wrong alignment on UOnsetNRTSettings");
static_assert(sizeof(UOnsetNRTSettings) == 0x000048, "Wrong size on UOnsetNRTSettings");
static_assert(offsetof(UOnsetNRTSettings, bDownmixToMono) == 0x000030, "Member 'UOnsetNRTSettings::bDownmixToMono' has a wrong offset!");
static_assert(offsetof(UOnsetNRTSettings, GranularityInSeconds) == 0x000034, "Member 'UOnsetNRTSettings::GranularityInSeconds' has a wrong offset!");
static_assert(offsetof(UOnsetNRTSettings, Sensitivity) == 0x000038, "Member 'UOnsetNRTSettings::Sensitivity' has a wrong offset!");
static_assert(offsetof(UOnsetNRTSettings, MinimumFrequency) == 0x00003C, "Member 'UOnsetNRTSettings::MinimumFrequency' has a wrong offset!");
static_assert(offsetof(UOnsetNRTSettings, MaximumFrequency) == 0x000040, "Member 'UOnsetNRTSettings::MaximumFrequency' has a wrong offset!");

}

