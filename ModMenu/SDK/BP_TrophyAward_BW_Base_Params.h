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
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.UserConstructionScript
	 */
	struct ABP_TrophyAward_BW_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.Initialize
	 */
	struct ABP_TrophyAward_BW_Base_C_Initialize_Params
	{	};

	/**
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.DebugEarn
	 */
	struct ABP_TrophyAward_BW_Base_C_DebugEarn_Params
	{	};

	/**
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.ReceiveEndPlay
	 */
	struct ABP_TrophyAward_BW_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.Bowl
	 */
	struct ABP_TrophyAward_BW_Base_C_Bowl_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnMatchComplete
	 */
	struct ABP_TrophyAward_BW_Base_C_OnMatchComplete_Params
	{
	public:
		class ABowlingBall*                                        BallActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnStrike
	 */
	struct ABP_TrophyAward_BW_Base_C_OnStrike_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnSpare
	 */
	struct ABP_TrophyAward_BW_Base_C_OnSpare_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnGutterBall
	 */
	struct ABP_TrophyAward_BW_Base_C_OnGutterBall_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.OnGameEnd
	 */
	struct ABP_TrophyAward_BW_Base_C_OnGameEnd_Params
	{	};

	/**
	 * Function BP_TrophyAward_BW_Base.BP_TrophyAward_BW_Base_C.ExecuteUbergraph_BP_TrophyAward_BW_Base
	 */
	struct ABP_TrophyAward_BW_Base_C_ExecuteUbergraph_BP_TrophyAward_BW_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5JD6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
