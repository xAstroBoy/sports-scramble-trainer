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
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayCountdown
	 */
	struct AManagerBowling_LocalHelper_C_DisplayCountdown_Params
	{
	public:
		class ACountdown_C*                                        CountdownActor;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayInfo
	 */
	struct AManagerBowling_LocalHelper_C_DisplayInfo_Params
	{
	public:
		class FText                                                DisplayText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      DisplayTime;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R7RC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Cleanup
	 */
	struct AManagerBowling_LocalHelper_C_Cleanup_Params
	{	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Initialize
	 */
	struct AManagerBowling_LocalHelper_C_Initialize_Params
	{	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.UserConstructionScript
	 */
	struct AManagerBowling_LocalHelper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_906AE94D4F152913F520DB9BC9980BB7
	 */
	struct AManagerBowling_LocalHelper_C_OnLoaded_906AE94D4F152913F520DB9BC9980BB7_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7
	 */
	struct AManagerBowling_LocalHelper_C_OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAudienceDisappointed
	 */
	struct AManagerBowling_LocalHelper_C_PlayAudienceDisappointed_Params
	{	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.CrowdApplause
	 */
	struct AManagerBowling_LocalHelper_C_CrowdApplause_Params
	{	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveEndPlay
	 */
	struct AManagerBowling_LocalHelper_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfMatchInfo
	 */
	struct AManagerBowling_LocalHelper_C_DisplayStartOfMatchInfo_Params
	{
	public:
		int32_t                                                    GamesToWin;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayNextGame
	 */
	struct AManagerBowling_LocalHelper_C_DisplayNextGame_Params
	{
	public:
		int32_t                                                    PreviousGameWinner;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Game;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayMatchOver
	 */
	struct AManagerBowling_LocalHelper_C_DisplayMatchOver_Params
	{
	public:
		EGameResult                                                GameResult;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerBallChange
	 */
	struct AManagerBowling_LocalHelper_C_PlayAnnouncerBallChange_Params
	{	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerVO
	 */
	struct AManagerBowling_LocalHelper_C_PlayAnnouncerVO_Params
	{	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveBeginPlay
	 */
	struct AManagerBowling_LocalHelper_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlinkoLaunchSFX
	 */
	struct AManagerBowling_LocalHelper_C_PlinkoLaunchSFX_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayAlternateMatchInfo
	 */
	struct AManagerBowling_LocalHelper_C_DisplayAlternateMatchInfo_Params
	{
	public:
		int32_t                                                    GamesToWin;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnStart
	 */
	struct AManagerBowling_LocalHelper_C_DisplayPlayerTurnStart_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnEnd
	 */
	struct AManagerBowling_LocalHelper_C_DisplayPlayerTurnEnd_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfTraditionalMatchInfo
	 */
	struct AManagerBowling_LocalHelper_C_DisplayStartOfTraditionalMatchInfo_Params
	{
	public:
		int32_t                                                    Frames;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ExecuteUbergraph_ManagerBowling_LocalHelper
	 */
	struct AManagerBowling_LocalHelper_C_ExecuteUbergraph_ManagerBowling_LocalHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_13C2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
