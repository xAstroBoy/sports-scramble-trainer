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
	 * Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.GetSkill
	 */
	struct ABP_TrophyAward_ProTour_C_GetSkill_Params
	{
	public:
		EScramSkill                                                Skill;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7VLW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.UserConstructionScript
	 */
	struct ABP_TrophyAward_ProTour_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.DebugEarn
	 */
	struct ABP_TrophyAward_ProTour_C_DebugEarn_Params
	{	};

	/**
	 * Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.OnScorePoint
	 */
	struct ABP_TrophyAward_ProTour_C_OnScorePoint_Params
	{	};

	/**
	 * Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.ReceiveBeginPlay
	 */
	struct ABP_TrophyAward_ProTour_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.BallInPlay
	 */
	struct ABP_TrophyAward_ProTour_C_BallInPlay_Params
	{	};

	/**
	 * Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.OnMatchComplete
	 */
	struct ABP_TrophyAward_ProTour_C_OnMatchComplete_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.ExecuteUbergraph_BP_TrophyAward_ProTour
	 */
	struct ABP_TrophyAward_ProTour_C_ExecuteUbergraph_BP_TrophyAward_ProTour_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z690[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
