#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tartarus_Military

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass Tartarus_Military.Tartarus_Military_C
// 0x0000 (0x0200 - 0x0200)
class UTartarus_Military_C final : public UFactionData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tartarus_Military_C">();
	}
	static class UTartarus_Military_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTartarus_Military_C>();
	}
};
static_assert(alignof(UTartarus_Military_C) == 0x000008, "Wrong alignment on UTartarus_Military_C");
static_assert(sizeof(UTartarus_Military_C) == 0x000200, "Wrong size on UTartarus_Military_C");

}
