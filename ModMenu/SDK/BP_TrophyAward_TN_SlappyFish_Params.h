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
	 * Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.UserConstructionScript
	 */
	struct ABP_TrophyAward_TN_SlappyFish_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.DebugEarn
	 */
	struct ABP_TrophyAward_TN_SlappyFish_C_DebugEarn_Params
	{	};

	/**
	 * Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.OnHit
	 */
	struct ABP_TrophyAward_TN_SlappyFish_C_OnHit_Params
	{
	public:
		class ATennisBall*                                         TennisBall;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATN_Instrument_Base_C*                               Instrument;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETennisBallType                                            BallType;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.ExecuteUbergraph_BP_TrophyAward_TN_SlappyFish
	 */
	struct ABP_TrophyAward_TN_SlappyFish_C_ExecuteUbergraph_BP_TrophyAward_TN_SlappyFish_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_05X7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
