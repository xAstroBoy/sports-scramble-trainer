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
	 * Function BP_Trophy_BB_Guesser.BP_Trophy_BB_Guesser_C.UserConstructionScript
	 */
	struct ABP_Trophy_BB_Guesser_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Trophy_BB_Guesser.BP_Trophy_BB_Guesser_C.OnHit
	 */
	struct ABP_Trophy_BB_Guesser_C_OnHit_Params
	{
	public:
		class ABaseballBall*                                       Baseball;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABB_Instrument_Base_C*                               Instrument;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBaseballBallType                                          BallType;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Trophy_BB_Guesser.BP_Trophy_BB_Guesser_C.DebugEarn
	 */
	struct ABP_Trophy_BB_Guesser_C_DebugEarn_Params
	{	};

	/**
	 * Function BP_Trophy_BB_Guesser.BP_Trophy_BB_Guesser_C.ExecuteUbergraph_BP_Trophy_BB_Guesser
	 */
	struct ABP_Trophy_BB_Guesser_C_ExecuteUbergraph_BP_Trophy_BB_Guesser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PI15[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
