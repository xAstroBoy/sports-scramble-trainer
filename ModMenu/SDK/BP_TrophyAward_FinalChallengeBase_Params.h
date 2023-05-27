#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Restore
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_Restore_Params
	{	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.IsNewCompletion
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_IsNewCompletion_Params
	{
	public:
		class FName                                                GameID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L2LO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.GetCompletionCount
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_GetCompletionCount_Params
	{
	public:
		int32_t                                                    CompletedCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.RefreshGameProgress
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_RefreshGameProgress_Params
	{	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnChallengeCompleted
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_OnChallengeCompleted_Params
	{
	public:
		class FName                                                ChallengeID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UpdateChallengeProgress
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_UpdateChallengeProgress_Params
	{	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UserConstructionScript
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.DebugEarn
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_DebugEarn_Params
	{	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnTrophyEarned
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_OnTrophyEarned_Params
	{	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ReceiveBeginPlay
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Initialize
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_Initialize_Params
	{	};

	/**
	 * Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase
	 */
	struct ABP_TrophyAward_FinalChallengeBase_C_ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
