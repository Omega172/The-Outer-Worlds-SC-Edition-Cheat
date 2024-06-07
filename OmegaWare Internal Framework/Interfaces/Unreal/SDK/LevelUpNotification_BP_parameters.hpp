#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelUpNotification_BP

#include "Basic.hpp"


namespace CG::Params
{

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.ExecuteUbergraph_LevelUpNotification_BP
// 0x0028 (0x0028 - 0x0000)
struct LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_280C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIndianaPlayerCharacter*                K2Node_DynamicCast_AsIndiana_Player_Character;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_280D[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialManager*                       CallFunc_GetTutorialManager_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP");
static_assert(sizeof(LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP) == 0x000028, "Wrong size on LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP");
static_assert(offsetof(LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP, EntryPoint) == 0x000000, "Member 'LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000008, "Member 'LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP, K2Node_DynamicCast_AsIndiana_Player_Character) == 0x000010, "Member 'LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP::K2Node_DynamicCast_AsIndiana_Player_Character' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP, CallFunc_GetLevel_ReturnValue) == 0x00001C, "Member 'LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP, CallFunc_GetTutorialManager_ReturnValue) == 0x000020, "Member 'LevelUpNotification_BP_C_ExecuteUbergraph_LevelUpNotification_BP::CallFunc_GetTutorialManager_ReturnValue' has a wrong offset!");

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.GetGlowballAnimation
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_BP_C_GetGlowballAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_GetGlowballAnimation) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_GetGlowballAnimation");
static_assert(sizeof(LevelUpNotification_BP_C_GetGlowballAnimation) == 0x000008, "Wrong size on LevelUpNotification_BP_C_GetGlowballAnimation");
static_assert(offsetof(LevelUpNotification_BP_C_GetGlowballAnimation, ReturnValue) == 0x000000, "Member 'LevelUpNotification_BP_C_GetGlowballAnimation::ReturnValue' has a wrong offset!");

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.GetTextAndSunFadeOutAnimation
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_BP_C_GetTextAndSunFadeOutAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_GetTextAndSunFadeOutAnimation) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_GetTextAndSunFadeOutAnimation");
static_assert(sizeof(LevelUpNotification_BP_C_GetTextAndSunFadeOutAnimation) == 0x000008, "Wrong size on LevelUpNotification_BP_C_GetTextAndSunFadeOutAnimation");
static_assert(offsetof(LevelUpNotification_BP_C_GetTextAndSunFadeOutAnimation, ReturnValue) == 0x000000, "Member 'LevelUpNotification_BP_C_GetTextAndSunFadeOutAnimation::ReturnValue' has a wrong offset!");

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.GetSunSpinAnimation
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_BP_C_GetSunSpinAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_GetSunSpinAnimation) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_GetSunSpinAnimation");
static_assert(sizeof(LevelUpNotification_BP_C_GetSunSpinAnimation) == 0x000008, "Wrong size on LevelUpNotification_BP_C_GetSunSpinAnimation");
static_assert(offsetof(LevelUpNotification_BP_C_GetSunSpinAnimation, ReturnValue) == 0x000000, "Member 'LevelUpNotification_BP_C_GetSunSpinAnimation::ReturnValue' has a wrong offset!");

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.GetSecondaryTextFadeInAnimation
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_BP_C_GetSecondaryTextFadeInAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_GetSecondaryTextFadeInAnimation) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_GetSecondaryTextFadeInAnimation");
static_assert(sizeof(LevelUpNotification_BP_C_GetSecondaryTextFadeInAnimation) == 0x000008, "Wrong size on LevelUpNotification_BP_C_GetSecondaryTextFadeInAnimation");
static_assert(offsetof(LevelUpNotification_BP_C_GetSecondaryTextFadeInAnimation, ReturnValue) == 0x000000, "Member 'LevelUpNotification_BP_C_GetSecondaryTextFadeInAnimation::ReturnValue' has a wrong offset!");

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.GetPrimaryTextGrowAnimation
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_BP_C_GetPrimaryTextGrowAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_GetPrimaryTextGrowAnimation) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_GetPrimaryTextGrowAnimation");
static_assert(sizeof(LevelUpNotification_BP_C_GetPrimaryTextGrowAnimation) == 0x000008, "Wrong size on LevelUpNotification_BP_C_GetPrimaryTextGrowAnimation");
static_assert(offsetof(LevelUpNotification_BP_C_GetPrimaryTextGrowAnimation, ReturnValue) == 0x000000, "Member 'LevelUpNotification_BP_C_GetPrimaryTextGrowAnimation::ReturnValue' has a wrong offset!");

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.GetPrimaryTextAndSunFadeInAnimation
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_BP_C_GetPrimaryTextAndSunFadeInAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_GetPrimaryTextAndSunFadeInAnimation) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_GetPrimaryTextAndSunFadeInAnimation");
static_assert(sizeof(LevelUpNotification_BP_C_GetPrimaryTextAndSunFadeInAnimation) == 0x000008, "Wrong size on LevelUpNotification_BP_C_GetPrimaryTextAndSunFadeInAnimation");
static_assert(offsetof(LevelUpNotification_BP_C_GetPrimaryTextAndSunFadeInAnimation, ReturnValue) == 0x000000, "Member 'LevelUpNotification_BP_C_GetPrimaryTextAndSunFadeInAnimation::ReturnValue' has a wrong offset!");

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.GetGlowShrinkAnimation
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_BP_C_GetGlowShrinkAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_GetGlowShrinkAnimation) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_GetGlowShrinkAnimation");
static_assert(sizeof(LevelUpNotification_BP_C_GetGlowShrinkAnimation) == 0x000008, "Wrong size on LevelUpNotification_BP_C_GetGlowShrinkAnimation");
static_assert(offsetof(LevelUpNotification_BP_C_GetGlowShrinkAnimation, ReturnValue) == 0x000000, "Member 'LevelUpNotification_BP_C_GetGlowShrinkAnimation::ReturnValue' has a wrong offset!");

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.GetGlowGrowAnimation
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_BP_C_GetGlowGrowAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_GetGlowGrowAnimation) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_GetGlowGrowAnimation");
static_assert(sizeof(LevelUpNotification_BP_C_GetGlowGrowAnimation) == 0x000008, "Wrong size on LevelUpNotification_BP_C_GetGlowGrowAnimation");
static_assert(offsetof(LevelUpNotification_BP_C_GetGlowGrowAnimation, ReturnValue) == 0x000000, "Member 'LevelUpNotification_BP_C_GetGlowGrowAnimation::ReturnValue' has a wrong offset!");

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.GetGlowFadeAnimation
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_BP_C_GetGlowFadeAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_GetGlowFadeAnimation) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_GetGlowFadeAnimation");
static_assert(sizeof(LevelUpNotification_BP_C_GetGlowFadeAnimation) == 0x000008, "Wrong size on LevelUpNotification_BP_C_GetGlowFadeAnimation");
static_assert(offsetof(LevelUpNotification_BP_C_GetGlowFadeAnimation, ReturnValue) == 0x000000, "Member 'LevelUpNotification_BP_C_GetGlowFadeAnimation::ReturnValue' has a wrong offset!");

// Function LevelUpNotification_BP.LevelUpNotification_BP_C.GetLevelUpReminderAnimation
// 0x0008 (0x0008 - 0x0000)
struct LevelUpNotification_BP_C_GetLevelUpReminderAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LevelUpNotification_BP_C_GetLevelUpReminderAnimation) == 0x000008, "Wrong alignment on LevelUpNotification_BP_C_GetLevelUpReminderAnimation");
static_assert(sizeof(LevelUpNotification_BP_C_GetLevelUpReminderAnimation) == 0x000008, "Wrong size on LevelUpNotification_BP_C_GetLevelUpReminderAnimation");
static_assert(offsetof(LevelUpNotification_BP_C_GetLevelUpReminderAnimation, ReturnValue) == 0x000000, "Member 'LevelUpNotification_BP_C_GetLevelUpReminderAnimation::ReturnValue' has a wrong offset!");

}

