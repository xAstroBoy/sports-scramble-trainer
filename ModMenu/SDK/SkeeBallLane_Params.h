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
	 * Function SkeeBallLane.SkeeBallLane_C.CallClearPatternAndResolve
	 */
	struct USkeeBallLane_C_CallClearPatternAndResolve_Params
	{
	public:
		bool                                                       PatternCleared;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkeeBallLane.SkeeBallLane_C.UpdateGoodHoleCount
	 */
	struct USkeeBallLane_C_UpdateGoodHoleCount_Params
	{
	public:
		int32_t                                                    NewGoodHoleCount;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HoleCountUpdated;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkeeBallLane.SkeeBallLane_C.ShowScoreboard
	 */
	struct USkeeBallLane_C_ShowScoreboard_Params
	{
	public:
		bool                                                       ScoreboardRaised;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
