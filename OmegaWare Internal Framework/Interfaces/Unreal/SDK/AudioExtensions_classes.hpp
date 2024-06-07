#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioExtensions

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace CG
{

// Class AudioExtensions.SoundModulatorBase
// 0x0000 (0x0030 - 0x0030)
class USoundModulatorBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulatorBase">();
	}
	static class USoundModulatorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulatorBase>();
	}
};
static_assert(alignof(USoundModulatorBase) == 0x000008, "Wrong alignment on USoundModulatorBase");
static_assert(sizeof(USoundModulatorBase) == 0x000030, "Wrong size on USoundModulatorBase");

// Class AudioExtensions.SoundfieldEncodingSettingsBase
// 0x0000 (0x0030 - 0x0030)
class USoundfieldEncodingSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEncodingSettingsBase">();
	}
	static class USoundfieldEncodingSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEncodingSettingsBase>();
	}
};
static_assert(alignof(USoundfieldEncodingSettingsBase) == 0x000008, "Wrong alignment on USoundfieldEncodingSettingsBase");
static_assert(sizeof(USoundfieldEncodingSettingsBase) == 0x000030, "Wrong size on USoundfieldEncodingSettingsBase");

// Class AudioExtensions.AudioEndpointSettingsBase
// 0x0000 (0x0030 - 0x0030)
class UAudioEndpointSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioEndpointSettingsBase">();
	}
	static class UAudioEndpointSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioEndpointSettingsBase>();
	}
};
static_assert(alignof(UAudioEndpointSettingsBase) == 0x000008, "Wrong alignment on UAudioEndpointSettingsBase");
static_assert(sizeof(UAudioEndpointSettingsBase) == 0x000030, "Wrong size on UAudioEndpointSettingsBase");

// Class AudioExtensions.DummyEndpointSettings
// 0x0000 (0x0030 - 0x0030)
class UDummyEndpointSettings final : public UAudioEndpointSettingsBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DummyEndpointSettings">();
	}
	static class UDummyEndpointSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDummyEndpointSettings>();
	}
};
static_assert(alignof(UDummyEndpointSettings) == 0x000008, "Wrong alignment on UDummyEndpointSettings");
static_assert(sizeof(UDummyEndpointSettings) == 0x000030, "Wrong size on UDummyEndpointSettings");

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// 0x0000 (0x0030 - 0x0030)
class USpatializationPluginSourceSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpatializationPluginSourceSettingsBase">();
	}
	static class USpatializationPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatializationPluginSourceSettingsBase>();
	}
};
static_assert(alignof(USpatializationPluginSourceSettingsBase) == 0x000008, "Wrong alignment on USpatializationPluginSourceSettingsBase");
static_assert(sizeof(USpatializationPluginSourceSettingsBase) == 0x000030, "Wrong size on USpatializationPluginSourceSettingsBase");

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// 0x0000 (0x0030 - 0x0030)
class UOcclusionPluginSourceSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OcclusionPluginSourceSettingsBase">();
	}
	static class UOcclusionPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOcclusionPluginSourceSettingsBase>();
	}
};
static_assert(alignof(UOcclusionPluginSourceSettingsBase) == 0x000008, "Wrong alignment on UOcclusionPluginSourceSettingsBase");
static_assert(sizeof(UOcclusionPluginSourceSettingsBase) == 0x000030, "Wrong size on UOcclusionPluginSourceSettingsBase");

// Class AudioExtensions.ReverbPluginSourceSettingsBase
// 0x0000 (0x0030 - 0x0030)
class UReverbPluginSourceSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReverbPluginSourceSettingsBase">();
	}
	static class UReverbPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReverbPluginSourceSettingsBase>();
	}
};
static_assert(alignof(UReverbPluginSourceSettingsBase) == 0x000008, "Wrong alignment on UReverbPluginSourceSettingsBase");
static_assert(sizeof(UReverbPluginSourceSettingsBase) == 0x000030, "Wrong size on UReverbPluginSourceSettingsBase");

// Class AudioExtensions.SoundfieldEndpointSettingsBase
// 0x0000 (0x0030 - 0x0030)
class USoundfieldEndpointSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEndpointSettingsBase">();
	}
	static class USoundfieldEndpointSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEndpointSettingsBase>();
	}
};
static_assert(alignof(USoundfieldEndpointSettingsBase) == 0x000008, "Wrong alignment on USoundfieldEndpointSettingsBase");
static_assert(sizeof(USoundfieldEndpointSettingsBase) == 0x000030, "Wrong size on USoundfieldEndpointSettingsBase");

// Class AudioExtensions.SoundfieldEffectSettingsBase
// 0x0000 (0x0030 - 0x0030)
class USoundfieldEffectSettingsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEffectSettingsBase">();
	}
	static class USoundfieldEffectSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEffectSettingsBase>();
	}
};
static_assert(alignof(USoundfieldEffectSettingsBase) == 0x000008, "Wrong alignment on USoundfieldEffectSettingsBase");
static_assert(sizeof(USoundfieldEffectSettingsBase) == 0x000030, "Wrong size on USoundfieldEffectSettingsBase");

// Class AudioExtensions.SoundfieldEffectBase
// 0x0008 (0x0038 - 0x0030)
class USoundfieldEffectBase final : public UObject
{
public:
	class USoundfieldEffectSettingsBase*          Settings;                                          // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEffectBase">();
	}
	static class USoundfieldEffectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEffectBase>();
	}
};
static_assert(alignof(USoundfieldEffectBase) == 0x000008, "Wrong alignment on USoundfieldEffectBase");
static_assert(sizeof(USoundfieldEffectBase) == 0x000038, "Wrong size on USoundfieldEffectBase");
static_assert(offsetof(USoundfieldEffectBase, Settings) == 0x000030, "Member 'USoundfieldEffectBase::Settings' has a wrong offset!");

}
