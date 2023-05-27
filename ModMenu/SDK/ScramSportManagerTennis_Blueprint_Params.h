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
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SaveTennisState
	 */
	struct AScramSportManagerTennis_Blueprint_C_SaveTennisState_Params
	{
	public:
		class UClass*                                              Ball;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              player1Instrument;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              player2Instrument;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              activeArenaScramble;                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InitializeSpectator
	 */
	struct AScramSportManagerTennis_Blueprint_C_InitializeSpectator_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetActiveScrambles
	 */
	struct AScramSportManagerTennis_Blueprint_C_ResetActiveScrambles_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindExistingServeLocationIndicator
	 */
	struct AScramSportManagerTennis_Blueprint_C_BindExistingServeLocationIndicator_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnRep_ServeLocationIndicator
	 */
	struct AScramSportManagerTennis_Blueprint_C_OnRep_ServeLocationIndicator_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BindNewServeLocationIndicator
	 */
	struct AScramSportManagerTennis_Blueprint_C_BindNewServeLocationIndicator_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ShowDebugInfo
	 */
	struct AScramSportManagerTennis_Blueprint_C_ShowDebugInfo_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateServeLocation
	 */
	struct AScramSportManagerTennis_Blueprint_C_CreateServeLocation_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.AllowAIServe
	 */
	struct AScramSportManagerTennis_Blueprint_C_AllowAIServe_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.CreateReceiveLocation
	 */
	struct AScramSportManagerTennis_Blueprint_C_CreateReceiveLocation_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QRLC[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetGameStatus
	 */
	struct AScramSportManagerTennis_Blueprint_C_GetGameStatus_Params
	{
	public:
		class FText                                                StatusText;                                              // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GetPointType
	 */
	struct AScramSportManagerTennis_Blueprint_C_GetPointType_Params
	{
	public:
		class FName                                                PointType;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ResetResultBools
	 */
	struct AScramSportManagerTennis_Blueprint_C_ResetResultBools_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Cleanup
	 */
	struct AScramSportManagerTennis_Blueprint_C_Cleanup_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Initialize
	 */
	struct AScramSportManagerTennis_Blueprint_C_Initialize_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UserConstructionScript
	 */
	struct AScramSportManagerTennis_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__FinishedFunc
	 */
	struct AScramSportManagerTennis_Blueprint_C_Timeline_Fade__FinishedFunc_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Timeline_Fade__UpdateFunc
	 */
	struct AScramSportManagerTennis_Blueprint_C_Timeline_Fade__UpdateFunc_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_38F84231481C3446BB8F2BBBF214C4CE
	 */
	struct AScramSportManagerTennis_Blueprint_C_OnLoaded_38F84231481C3446BB8F2BBBF214C4CE_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_A90B74D8415A762510668AB9493CBDF6
	 */
	struct AScramSportManagerTennis_Blueprint_C_OnLoaded_A90B74D8415A762510668AB9493CBDF6_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnLoaded_0D0A114843992570557A2E82FF9BA28B
	 */
	struct AScramSportManagerTennis_Blueprint_C_OnLoaded_0D0A114843992570557A2E82FF9BA28B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveBeginPlay
	 */
	struct AScramSportManagerTennis_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.TennisEvent
	 */
	struct AScramSportManagerTennis_Blueprint_C_TennisEvent_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETennisEvent                                               TennisEvent;                                             // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ReceiveEndPlay
	 */
	struct AScramSportManagerTennis_Blueprint_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointMade
	 */
	struct AScramSportManagerTennis_Blueprint_C_PointMade_Params
	{
	public:
		int32_t                                                    P1Score;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P2Score;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LET
	 */
	struct AScramSportManagerTennis_Blueprint_C_LET_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.WaitForOpponentServe
	 */
	struct AScramSportManagerTennis_Blueprint_C_WaitForOpponentServe_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.InPlay
	 */
	struct AScramSportManagerTennis_Blueprint_C_InPlay_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Fault
	 */
	struct AScramSportManagerTennis_Blueprint_C_Fault_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PrePareServe
	 */
	struct AScramSportManagerTennis_Blueprint_C_PrePareServe_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StartOrgan
	 */
	struct AScramSportManagerTennis_Blueprint_C_StartOrgan_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.StopOrgan
	 */
	struct AScramSportManagerTennis_Blueprint_C_StopOrgan_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallGrabbed
	 */
	struct AScramSportManagerTennis_Blueprint_C_BallGrabbed_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallSpawned
	 */
	struct AScramSportManagerTennis_Blueprint_C_BallSpawned_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.SendDebugString
	 */
	struct AScramSportManagerTennis_Blueprint_C_SendDebugString_Params
	{
	public:
		class FString                                              S;                                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameIntroSequence
	 */
	struct AScramSportManagerTennis_Blueprint_C_GameIntroSequence_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayDoubleFaultSFX
	 */
	struct AScramSportManagerTennis_Blueprint_C_PlayDoubleFaultSFX_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayOutSFX
	 */
	struct AScramSportManagerTennis_Blueprint_C_PlayOutSFX_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeSwitch
	 */
	struct AScramSportManagerTennis_Blueprint_C_ServeSwitch_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoopOrgan
	 */
	struct AScramSportManagerTennis_Blueprint_C_LoopOrgan_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_DisplayPointResults
	 */
	struct AScramSportManagerTennis_Blueprint_C_MC_DisplayPointResults_Params
	{
	public:
		class FName                                                PointType;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P1Score;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P2Score;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Winner;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TextOnly;                                                // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_MatchComplete
	 */
	struct AScramSportManagerTennis_Blueprint_C_MC_MatchComplete_Params
	{
	public:
		bool                                                       OC5Demo;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LFZ7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    P1GamesWon;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P2GamesWon;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_GameComplete
	 */
	struct AScramSportManagerTennis_Blueprint_C_MC_GameComplete_Params
	{
	public:
		int32_t                                                    GameCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P1GamesWon;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P2GamesWon;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_ShowPreServeInfo
	 */
	struct AScramSportManagerTennis_Blueprint_C_MC_ShowPreServeInfo_Params
	{
	public:
		class FText                                                GameStatusText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Player1Serve;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MC_CreateStandLocations
	 */
	struct AScramSportManagerTennis_Blueprint_C_MC_CreateStandLocations_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeChangeCommunicated
	 */
	struct AScramSportManagerTennis_Blueprint_C_ServeChangeCommunicated_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseInfo
	 */
	struct AScramSportManagerTennis_Blueprint_C_UpdatePauseInfo_Params
	{
	public:
		bool                                                       IsPaused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasPausedByMe;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.UpdatePauseBubble
	 */
	struct AScramSportManagerTennis_Blueprint_C_UpdatePauseBubble_Params
	{
	public:
		bool                                                       IsPaused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameResume
	 */
	struct AScramSportManagerTennis_Blueprint_C_OnGameResume_Params
	{
	public:
		bool                                                       WasPausedByMe;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGamePause
	 */
	struct AScramSportManagerTennis_Blueprint_C_OnGamePause_Params
	{
	public:
		bool                                                       WasPausedByMe;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LoadTennisState
	 */
	struct AScramSportManagerTennis_Blueprint_C_LoadTennisState_Params
	{
	public:
		class UClass*                                              Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              player1Instrument;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              player2Instrument;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass*                                              activeArenaScramble;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.Multi_RestoreState
	 */
	struct AScramSportManagerTennis_Blueprint_C_Multi_RestoreState_Params
	{
	public:
		int32_t                                                    P1Score;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P2Score;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player1Games;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Games;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Player2Serve;                                            // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServerReady
	 */
	struct AScramSportManagerTennis_Blueprint_C_ServerReady_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.OnGameDone
	 */
	struct AScramSportManagerTennis_Blueprint_C_OnGameDone_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.NetDisablePause
	 */
	struct AScramSportManagerTennis_Blueprint_C_NetDisablePause_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PlayPoint
	 */
	struct AScramSportManagerTennis_Blueprint_C_PlayPoint_Params
	{
	public:
		bool                                                       UseUmpVox;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ExecuteUbergraph_ScramSportManagerTennis_Blueprint
	 */
	struct AScramSportManagerTennis_Blueprint_C_ExecuteUbergraph_ScramSportManagerTennis_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_48PT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.FaultServeResult__DelegateSignature
	 */
	struct AScramSportManagerTennis_Blueprint_C_FaultServeResult__DelegateSignature_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.LetServeResult__DelegateSignature
	 */
	struct AScramSportManagerTennis_Blueprint_C_LetServeResult__DelegateSignature_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PreServeStart__DelegateSignature
	 */
	struct AScramSportManagerTennis_Blueprint_C_PreServeStart__DelegateSignature_Params
	{
	public:
		int32_t                                                    Game;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Point;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.BallInPlay__DelegateSignature
	 */
	struct AScramSportManagerTennis_Blueprint_C_BallInPlay__DelegateSignature_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.PointComplete__DelegateSignature
	 */
	struct AScramSportManagerTennis_Blueprint_C_PointComplete__DelegateSignature_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.ServeReady__DelegateSignature
	 */
	struct AScramSportManagerTennis_Blueprint_C_ServeReady__DelegateSignature_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.GameComplete__DelegateSignature
	 */
	struct AScramSportManagerTennis_Blueprint_C_GameComplete__DelegateSignature_Params
	{	};

	/**
	 * Function ScramSportManagerTennis_Blueprint.ScramSportManagerTennis_Blueprint_C.MatchComplete__DelegateSignature
	 */
	struct AScramSportManagerTennis_Blueprint_C_MatchComplete__DelegateSignature_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
