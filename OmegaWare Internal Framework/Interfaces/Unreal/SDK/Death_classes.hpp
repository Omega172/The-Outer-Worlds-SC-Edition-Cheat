#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Death

#include "Basic.hpp"

#include "Indiana_structs.hpp"
#include "Indiana_classes.hpp"


namespace CG
{

// BlueprintGeneratedClass Death.Death_C
// 0x0000 (0x0030 - 0x0030)
class UDeath_C final : public UDecisionTree
{
public:
	TArray<class UDecisionTreeRequestData*> RunDecisionTree(class AIndianaAiCharacter* Owner, class FName EventType, class UAIEventInfo* EventInfo, EDecisionTreeRequestPriority* OutPriority);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Death_C">();
	}
	static class UDeath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeath_C>();
	}
};
static_assert(alignof(UDeath_C) == 0x000008, "Wrong alignment on UDeath_C");
static_assert(sizeof(UDeath_C) == 0x000030, "Wrong size on UDeath_C");

}

