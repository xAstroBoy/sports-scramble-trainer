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
	 * Function BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.ResetProgress
	 */
	struct ABP_TrophyAward_BB_Challenge07_C_ResetProgress_Params
	{	};

	/**
	 * Function BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.UserConstructionScript
	 */
	struct ABP_TrophyAward_BB_Challenge07_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.HomeRun
	 */
	struct ABP_TrophyAward_BB_Challenge07_C_HomeRun_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BB_Challenge07.BP_TrophyAward_BB_Challenge07_C.ExecuteUbergraph_BP_TrophyAward_BB_Challenge07
	 */
	struct ABP_TrophyAward_BB_Challenge07_C_ExecuteUbergraph_BP_TrophyAward_BB_Challenge07_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G832[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
