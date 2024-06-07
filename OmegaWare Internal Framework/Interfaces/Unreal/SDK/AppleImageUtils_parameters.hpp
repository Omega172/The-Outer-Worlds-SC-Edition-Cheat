#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AppleImageUtils

#include "Basic.hpp"

#include "AppleImageUtils_structs.hpp"


namespace CG::Params
{

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
// 0x0020 (0x0020 - 0x0000)
struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF final
{
public:
	class UTexture*                               SourceImage;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Quality;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWantColor;                                        // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGpu;                                           // 0x000D(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16BE[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scale;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureRotationDirection                     Rotate;                                            // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16BF[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF) == 0x000008, "Wrong alignment on AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF");
static_assert(sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF) == 0x000020, "Wrong size on AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF, SourceImage) == 0x000000, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF::SourceImage' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF, Quality) == 0x000008, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF::Quality' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF, bWantColor) == 0x00000C, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF::bWantColor' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF, bUseGpu) == 0x00000D, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF::bUseGpu' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF, Scale) == 0x000010, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF::Scale' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF, Rotate) == 0x000014, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF::Rotate' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF, ReturnValue) == 0x000018, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF::ReturnValue' has a wrong offset!");

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
// 0x0020 (0x0020 - 0x0000)
struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG final
{
public:
	class UTexture*                               SourceImage;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Quality;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWantColor;                                        // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGpu;                                           // 0x000D(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16C0[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scale;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureRotationDirection                     Rotate;                                            // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16C1[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG) == 0x000008, "Wrong alignment on AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG");
static_assert(sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG) == 0x000020, "Wrong size on AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG, SourceImage) == 0x000000, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG::SourceImage' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG, Quality) == 0x000008, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG::Quality' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG, bWantColor) == 0x00000C, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG::bWantColor' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG, bUseGpu) == 0x00000D, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG::bUseGpu' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG, Scale) == 0x000010, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG::Scale' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG, Rotate) == 0x000014, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG::Rotate' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG, ReturnValue) == 0x000018, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG::ReturnValue' has a wrong offset!");

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
// 0x0020 (0x0020 - 0x0000)
struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG final
{
public:
	class UTexture*                               SourceImage;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWantColor;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGpu;                                           // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16C2[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scale;                                             // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureRotationDirection                     Rotate;                                            // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16C3[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG) == 0x000008, "Wrong alignment on AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG");
static_assert(sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG) == 0x000020, "Wrong size on AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG, SourceImage) == 0x000000, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG::SourceImage' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG, bWantColor) == 0x000008, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG::bWantColor' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG, bUseGpu) == 0x000009, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG::bUseGpu' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG, Scale) == 0x00000C, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG::Scale' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG, Rotate) == 0x000010, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG::Rotate' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG, ReturnValue) == 0x000018, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG::ReturnValue' has a wrong offset!");

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
// 0x0020 (0x0020 - 0x0000)
struct AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF final
{
public:
	class UTexture*                               SourceImage;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWantColor;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseGpu;                                           // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16C4[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scale;                                             // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureRotationDirection                     Rotate;                                            // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16C5[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF) == 0x000008, "Wrong alignment on AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF");
static_assert(sizeof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF) == 0x000020, "Wrong size on AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF, SourceImage) == 0x000000, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF::SourceImage' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF, bWantColor) == 0x000008, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF::bWantColor' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF, bUseGpu) == 0x000009, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF::bUseGpu' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF, Scale) == 0x00000C, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF::Scale' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF, Rotate) == 0x000010, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF::Rotate' has a wrong offset!");
static_assert(offsetof(AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF, ReturnValue) == 0x000018, "Member 'AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF::ReturnValue' has a wrong offset!");

}

