#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompanionCommandReturn

#include "Basic.hpp"

#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass CompanionCommandReturn.CompanionCommandReturn_C
// 0x0000 (0x0048 - 0x0048)
class UCompanionCommandReturn_C final : public UDecisionTree_CombinedRequests
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CompanionCommandReturn_C">();
	}
	static class UCompanionCommandReturn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompanionCommandReturn_C>();
	}
};
static_assert(alignof(UCompanionCommandReturn_C) == 0x000008, "Wrong alignment on UCompanionCommandReturn_C");
static_assert(sizeof(UCompanionCommandReturn_C) == 0x000048, "Wrong size on UCompanionCommandReturn_C");

}

