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
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.PlayTradScoreAudio
	 */
	struct AManagerTennis_LocalHelper_C_PlayTradScoreAudio_Params
	{
	public:
		int32_t                                                    ServerScore;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReceiverScore;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Advantage;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1KSL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateAdvantage
	 */
	struct AManagerTennis_LocalHelper_C_UpdateAdvantage_Params
	{
	public:
		bool                                                       ShowAdvantage;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FE3A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateArenaScoreboardsServe
	 */
	struct AManagerTennis_LocalHelper_C_UpdateArenaScoreboardsServe_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Player2Serve;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A70H[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayDebugInfo
	 */
	struct AManagerTennis_LocalHelper_C_DisplayDebugInfo_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayServeInfo
	 */
	struct AManagerTennis_LocalHelper_C_DisplayServeInfo_Params
	{
	public:
		bool                                                       IsLocalPlayerServe;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FQJ8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GameCount;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OC5Demo;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AA8A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayInfo
	 */
	struct AManagerTennis_LocalHelper_C_DisplayInfo_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      DisplayTime;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0L1O[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.GetArenaScoreboards
	 */
	struct AManagerTennis_LocalHelper_C_GetArenaScoreboards_Params
	{	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateArenaScoreboards
	 */
	struct AManagerTennis_LocalHelper_C_UpdateArenaScoreboards_Params
	{
	public:
		int32_t                                                    Player1Score;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Score;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player1Games;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Games;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Player2Serve;                                            // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdateScoreOnly;                                         // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9XBB[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.Cleanup
	 */
	struct AManagerTennis_LocalHelper_C_Cleanup_Params
	{	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.Initialize
	 */
	struct AManagerTennis_LocalHelper_C_Initialize_Params
	{	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UserConstructionScript
	 */
	struct AManagerTennis_LocalHelper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_8DC83B8546799256223C67B1B376E3D3
	 */
	struct AManagerTennis_LocalHelper_C_OnLoaded_8DC83B8546799256223C67B1B376E3D3_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_211B117B46368DDCD41D0D919D520B4C
	 */
	struct AManagerTennis_LocalHelper_C_OnLoaded_211B117B46368DDCD41D0D919D520B4C_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_C0EE7AB1401C402783205A821574D41D
	 */
	struct AManagerTennis_LocalHelper_C_OnLoaded_C0EE7AB1401C402783205A821574D41D_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_02ABBA7E4B958E6EFABDA593DEDA2DE4
	 */
	struct AManagerTennis_LocalHelper_C_OnLoaded_02ABBA7E4B958E6EFABDA593DEDA2DE4_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_3C9D51CF4604A9F9201EFE9147CC8940
	 */
	struct AManagerTennis_LocalHelper_C_OnLoaded_3C9D51CF4604A9F9201EFE9147CC8940_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_A772A71E43B570E3A370DCA564865ED7
	 */
	struct AManagerTennis_LocalHelper_C_OnLoaded_A772A71E43B570E3A370DCA564865ED7_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_E2EAB0BF4C538A76C7EB5A8DF4442684
	 */
	struct AManagerTennis_LocalHelper_C_OnLoaded_E2EAB0BF4C538A76C7EB5A8DF4442684_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ReceiveBeginPlay
	 */
	struct AManagerTennis_LocalHelper_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ReceiveEndPlay
	 */
	struct AManagerTennis_LocalHelper_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayPointResults
	 */
	struct AManagerTennis_LocalHelper_C_DisplayPointResults_Params
	{
	public:
		class FText                                                PointType;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    NewScoreP1;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewScoreP2;                                              // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1WonPoint;                                         // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TextOnly;                                                // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayLet
	 */
	struct AManagerTennis_LocalHelper_C_DisplayLet_Params
	{	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayFault
	 */
	struct AManagerTennis_LocalHelper_C_DisplayFault_Params
	{	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayStartOfMatchInfo
	 */
	struct AManagerTennis_LocalHelper_C_DisplayStartOfMatchInfo_Params
	{
	public:
		int32_t                                                    GamesToWin;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OC5Demo;                                                 // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ShowNetPreServeInfo
	 */
	struct AManagerTennis_LocalHelper_C_ShowNetPreServeInfo_Params
	{
	public:
		class FText                                                GameStatusText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Player1Serve;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.HideNetScoreboard
	 */
	struct AManagerTennis_LocalHelper_C_HideNetScoreboard_Params
	{	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.GameComplete
	 */
	struct AManagerTennis_LocalHelper_C_GameComplete_Params
	{
	public:
		int32_t                                                    GameCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player1GamesWon;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2GamesWon;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.MatchCompleted
	 */
	struct AManagerTennis_LocalHelper_C_MatchCompleted_Params
	{
	public:
		int32_t                                                    Player1GamesWon;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2GamesWon;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OC5Demo;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.SwitchServeMessage
	 */
	struct AManagerTennis_LocalHelper_C_SwitchServeMessage_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.RestoreResults
	 */
	struct AManagerTennis_LocalHelper_C_RestoreResults_Params
	{
	public:
		class FText                                                PointType;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    NewScoreP1;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewScoreP2;                                              // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player1Games;                                            // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Games;                                            // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Player2Serve;                                            // 0x0029(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.PlayAsync2D
	 */
	struct AManagerTennis_LocalHelper_C_PlayAsync2D_Params
	{	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ExecuteUbergraph_ManagerTennis_LocalHelper
	 */
	struct AManagerTennis_LocalHelper_C_ExecuteUbergraph_ManagerTennis_LocalHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2O5N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ServeMessageComplete__DelegateSignature
	 */
	struct AManagerTennis_LocalHelper_C_ServeMessageComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
