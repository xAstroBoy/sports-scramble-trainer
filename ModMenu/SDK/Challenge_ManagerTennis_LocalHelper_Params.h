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
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateAdvantage
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_UpdateAdvantage_Params
	{
	public:
		bool                                                       ShowAdvantage;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2YP8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateArenaScoreboardsServe
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_UpdateArenaScoreboardsServe_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Player2Serve;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_809Q[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayDebugInfo
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_DisplayDebugInfo_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayServeInfo
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_DisplayServeInfo_Params
	{
	public:
		bool                                                       IsLocalPlayerServe;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9ZPB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GameCount;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OC5Demo;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E1MU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayInfo
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_DisplayInfo_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      DisplayTime;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_53ZQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.GetArenaScoreboards
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_GetArenaScoreboards_Params
	{	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateArenaScoreboards
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_UpdateArenaScoreboards_Params
	{
	public:
		int32_t                                                    Player1Score;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Score;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player1Games;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Games;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Player2Serve;                                            // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdateScoreOnly;                                         // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G0CZ[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.Cleanup
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_Cleanup_Params
	{	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.Initialize
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_Initialize_Params
	{	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UserConstructionScript
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.OnLoaded_63A9BB3F41B233AA34B75781E6359008
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_OnLoaded_63A9BB3F41B233AA34B75781E6359008_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.OnLoaded_E86737B344F9B9A0CD9174A6DABCCAF8
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_OnLoaded_E86737B344F9B9A0CD9174A6DABCCAF8_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.OnLoaded_FE19C6B44A7684430914DDB436E76BB3
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_OnLoaded_FE19C6B44A7684430914DDB436E76BB3_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.OnLoaded_6E7ED6D943EA6E0D3176389AF4D6BA37
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_OnLoaded_6E7ED6D943EA6E0D3176389AF4D6BA37_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ReceiveBeginPlay
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ReceiveEndPlay
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayPointResults
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_DisplayPointResults_Params
	{
	public:
		class FText                                                PointType;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    NewScoreP1;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewScoreP2;                                              // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1WonPoint;                                         // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TextOnly;                                                // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayLet
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_DisplayLet_Params
	{	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayFault
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_DisplayFault_Params
	{	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayStartOfMatchInfo
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_DisplayStartOfMatchInfo_Params
	{
	public:
		int32_t                                                    GamesToWin;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OC5Demo;                                                 // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ShowNetPreServeInfo
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_ShowNetPreServeInfo_Params
	{
	public:
		class FText                                                GameStatusText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Player1Serve;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.HideNetScoreboard
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_HideNetScoreboard_Params
	{	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.GameComplete
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_GameComplete_Params
	{
	public:
		int32_t                                                    GameCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player1GamesWon;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2GamesWon;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.MatchCompleted
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_MatchCompleted_Params
	{
	public:
		int32_t                                                    Player1GamesWon;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2GamesWon;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OC5Demo;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.SwitchServeMessage
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_SwitchServeMessage_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ExecuteUbergraph_Challenge_ManagerTennis_LocalHelper
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_ExecuteUbergraph_Challenge_ManagerTennis_LocalHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1285[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ServeMessageComplete__DelegateSignature
	 */
	struct AChallenge_ManagerTennis_LocalHelper_C_ServeMessageComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
