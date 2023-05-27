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
	 * Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.UserConstructionScript
	 */
	struct ABP_TrophyAward_TennisBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ReceiveEndPlay
	 */
	struct ABP_TrophyAward_TennisBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnTennisEvent
	 */
	struct ABP_TrophyAward_TennisBase_C_OnTennisEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.Initialize
	 */
	struct ABP_TrophyAward_TennisBase_C_Initialize_Params
	{	};

	/**
	 * Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnScorePoint
	 */
	struct ABP_TrophyAward_TennisBase_C_OnScorePoint_Params
	{	};

	/**
	 * Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnMatchComplete
	 */
	struct ABP_TrophyAward_TennisBase_C_OnMatchComplete_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnAceEvent
	 */
	struct ABP_TrophyAward_TennisBase_C_OnAceEvent_Params
	{	};

	/**
	 * Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.BallInPlay
	 */
	struct ABP_TrophyAward_TennisBase_C_BallInPlay_Params
	{	};

	/**
	 * Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ExecuteUbergraph_BP_TrophyAward_TennisBase
	 */
	struct ABP_TrophyAward_TennisBase_C_ExecuteUbergraph_BP_TrophyAward_TennisBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
