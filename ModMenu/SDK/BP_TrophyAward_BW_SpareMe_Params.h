﻿#pragma once

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
	 * Function BP_TrophyAward_BW_SpareMe.BP_TrophyAward_BW_SpareMe_C.UserConstructionScript
	 */
	struct ABP_TrophyAward_BW_SpareMe_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAward_BW_SpareMe.BP_TrophyAward_BW_SpareMe_C.OnSpare
	 */
	struct ABP_TrophyAward_BW_SpareMe_C_OnSpare_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BW_SpareMe.BP_TrophyAward_BW_SpareMe_C.ExecuteUbergraph_BP_TrophyAward_BW_SpareMe
	 */
	struct ABP_TrophyAward_BW_SpareMe_C_ExecuteUbergraph_BP_TrophyAward_BW_SpareMe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3NG2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
