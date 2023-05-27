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
	 * Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.UserConstructionScript
	 */
	struct ABP_TrophyAward_BW_Kingpin_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.OnStrike
	 */
	struct ABP_TrophyAward_BW_Kingpin_C_OnStrike_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.ExecuteUbergraph_BP_TrophyAward_BW_Kingpin
	 */
	struct ABP_TrophyAward_BW_Kingpin_C_ExecuteUbergraph_BP_TrophyAward_BW_Kingpin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M3GW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
