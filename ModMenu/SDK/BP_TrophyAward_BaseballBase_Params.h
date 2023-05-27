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
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.DidLocalPlayerWinGame
	 */
	struct ABP_TrophyAward_BaseballBase_C_DidLocalPlayerWinGame_Params
	{
	public:
		bool                                                       won;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.NewFunction_1_1
	 */
	struct ABP_TrophyAward_BaseballBase_C_NewFunction_1_1_Params
	{	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CheckBBPlayer
	 */
	struct ABP_TrophyAward_BaseballBase_C_CheckBBPlayer_Params
	{
	public:
		bool                                                       IsPlayerBatting;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isThisPlayer;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CheckPlayer
	 */
	struct ABP_TrophyAward_BaseballBase_C_CheckPlayer_Params
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLocalPlayer;                                           // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.GetLocalPlayer
	 */
	struct ABP_TrophyAward_BaseballBase_C_GetLocalPlayer_Params
	{	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.UserConstructionScript
	 */
	struct ABP_TrophyAward_BaseballBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Initialize
	 */
	struct ABP_TrophyAward_BaseballBase_C_Initialize_Params
	{	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.DebugEarn
	 */
	struct ABP_TrophyAward_BaseballBase_C_DebugEarn_Params
	{	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.ReceiveEndPlay
	 */
	struct ABP_TrophyAward_BaseballBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Baseball
	 */
	struct ABP_TrophyAward_BaseballBase_C_Baseball_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Strike
	 */
	struct ABP_TrophyAward_BaseballBase_C_Strike_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.HomeRun
	 */
	struct ABP_TrophyAward_BaseballBase_C_HomeRun_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.RunnerHome
	 */
	struct ABP_TrophyAward_BaseballBase_C_RunnerHome_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.AirCatchEvent
	 */
	struct ABP_TrophyAward_BaseballBase_C_AirCatchEvent_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.TakeBase
	 */
	struct ABP_TrophyAward_BaseballBase_C_TakeBase_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.SwingAndMiss
	 */
	struct ABP_TrophyAward_BaseballBase_C_SwingAndMiss_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Freebee
	 */
	struct ABP_TrophyAward_BaseballBase_C_Freebee_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CatchEvent
	 */
	struct ABP_TrophyAward_BaseballBase_C_CatchEvent_Params
	{
	public:
		struct FVector                                             FielderPosition;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D5UU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AScramPlayer*                                        Player;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.GameEnd
	 */
	struct ABP_TrophyAward_BaseballBase_C_GameEnd_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.PitchEvent
	 */
	struct ABP_TrophyAward_BaseballBase_C_PitchEvent_Params
	{	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.WalkEvent
	 */
	struct ABP_TrophyAward_BaseballBase_C_WalkEvent_Params
	{	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.BadPitch
	 */
	struct ABP_TrophyAward_BaseballBase_C_BadPitch_Params
	{	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.BallEvent
	 */
	struct ABP_TrophyAward_BaseballBase_C_BallEvent_Params
	{	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.OnHit
	 */
	struct ABP_TrophyAward_BaseballBase_C_OnHit_Params
	{	};

	/**
	 * Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.ExecuteUbergraph_BP_TrophyAward_BaseballBase
	 */
	struct ABP_TrophyAward_BaseballBase_C_ExecuteUbergraph_BP_TrophyAward_BaseballBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
