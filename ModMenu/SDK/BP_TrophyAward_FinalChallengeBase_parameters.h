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

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Restore
struct ABP_TrophyAward_FinalChallengeBase_C_Restore_Params
{
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.IsNewCompletion
struct ABP_TrophyAward_FinalChallengeBase_C_IsNewCompletion_Params
{
	struct FName                                       GameID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.GetCompletionCount
struct ABP_TrophyAward_FinalChallengeBase_C_GetCompletionCount_Params
{
	int                                                CompletedCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.RefreshGameProgress
struct ABP_TrophyAward_FinalChallengeBase_C_RefreshGameProgress_Params
{
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnChallengeCompleted
struct ABP_TrophyAward_FinalChallengeBase_C_OnChallengeCompleted_Params
{
	struct FName                                       ChallengeID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UpdateChallengeProgress
struct ABP_TrophyAward_FinalChallengeBase_C_UpdateChallengeProgress_Params
{
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UserConstructionScript
struct ABP_TrophyAward_FinalChallengeBase_C_UserConstructionScript_Params
{
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.DebugEarn
struct ABP_TrophyAward_FinalChallengeBase_C_DebugEarn_Params
{
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnTrophyEarned
struct ABP_TrophyAward_FinalChallengeBase_C_OnTrophyEarned_Params
{
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ReceiveBeginPlay
struct ABP_TrophyAward_FinalChallengeBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Initialize
struct ABP_TrophyAward_FinalChallengeBase_C_Initialize_Params
{
};

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase
struct ABP_TrophyAward_FinalChallengeBase_C_ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
