#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.SystemsCheck
struct ABP_TrophyAward_TN_MatchCompleteBase_C_SystemsCheck_Params
{
	class UObject*                                     WorldObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGood;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.UserConstructionScript
struct ABP_TrophyAward_TN_MatchCompleteBase_C_UserConstructionScript_Params
{
};

// Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.OnMatchComplete
struct ABP_TrophyAward_TN_MatchCompleteBase_C_OnMatchComplete_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.DebugEarn
struct ABP_TrophyAward_TN_MatchCompleteBase_C_DebugEarn_Params
{
};

// Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase
struct ABP_TrophyAward_TN_MatchCompleteBase_C_ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
