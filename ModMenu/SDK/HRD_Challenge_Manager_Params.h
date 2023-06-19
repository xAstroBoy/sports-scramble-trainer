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
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.FinalizeChallengeScore
	 */
	struct AHRD_Challenge_Manager_C_FinalizeChallengeScore_Params
	{
	public:
		int32_t                                                    RunnersYetToScore;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TryLaunchBall
	 */
	struct AHRD_Challenge_Manager_C_TryLaunchBall_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateLauncherSpeed
	 */
	struct AHRD_Challenge_Manager_C_UpdateLauncherSpeed_Params
	{
	public:
		float                                                      MinSpeed;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxSpeed;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateScoreboardNames
	 */
	struct AHRD_Challenge_Manager_C_UpdateScoreboardNames_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLogoPopup
	 */
	struct AHRD_Challenge_Manager_C_SpawnLogoPopup_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayScoreboardVideo
	 */
	struct AHRD_Challenge_Manager_C_PlayScoreboardVideo_Params
	{
	public:
		EBB_ScoreboardVideos                                       Animation;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YZIJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetGameSettings
	 */
	struct AHRD_Challenge_Manager_C_SetGameSettings_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HideIndicators
	 */
	struct AHRD_Challenge_Manager_C_HideIndicators_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetBattingMaterial
	 */
	struct AHRD_Challenge_Manager_C_GetBattingMaterial_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetFieldingMaterial
	 */
	struct AHRD_Challenge_Manager_C_GetFieldingMaterial_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnerScores
	 */
	struct AHRD_Challenge_Manager_C_RunnerScores_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetWinningPlayer
	 */
	struct AHRD_Challenge_Manager_C_GetWinningPlayer_Params
	{
	public:
		int32_t                                                    WinnerInt;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGameCleanUp
	 */
	struct AHRD_Challenge_Manager_C_EndGameCleanUp_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLocalHelper
	 */
	struct AHRD_Challenge_Manager_C_SpawnLocalHelper_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ToggleTeamColors
	 */
	struct AHRD_Challenge_Manager_C_ToggleTeamColors_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnTeamActors
	 */
	struct AHRD_Challenge_Manager_C_SpawnTeamActors_Params
	{
	public:
		bool                                                       FieldersOnly;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_77D2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetupScoreboards
	 */
	struct AHRD_Challenge_Manager_C_SetupScoreboards_Params
	{
	public:
		int32_t                                                    BallsCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StrikesCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CleanUpGameElements
	 */
	struct AHRD_Challenge_Manager_C_CleanUpGameElements_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PitcherScoring
	 */
	struct AHRD_Challenge_Manager_C_PitcherScoring_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BatterScoring
	 */
	struct AHRD_Challenge_Manager_C_BatterScoring_Params
	{
	public:
		int32_t                                                    ScoreAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportPlayer
	 */
	struct AHRD_Challenge_Manager_C_TeleportPlayer_Params
	{
	public:
		class FScriptDelegate                                      TransitionReady;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      TransitionComplete;                                      // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       UseTransitionDuration;                                   // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Initialize
	 */
	struct AHRD_Challenge_Manager_C_Initialize_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAndSetEquipment
	 */
	struct AHRD_Challenge_Manager_C_SpawnAndSetEquipment_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InstrumentClass;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAiPitcher
	 */
	struct AHRD_Challenge_Manager_C_SpawnAiPitcher_Params
	{
	public:
		class AActor*                                              PitcherActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UserConstructionScript
	 */
	struct AHRD_Challenge_Manager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BaseballEvent
	 */
	struct AHRD_Challenge_Manager_C_BaseballEvent_Params
	{
	public:
		EBaseballEvent                                             BaseballEvent;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P6E2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveBeginPlay
	 */
	struct AHRD_Challenge_Manager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveEndPlay
	 */
	struct AHRD_Challenge_Manager_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.LocalHelperMessageComplete
	 */
	struct AHRD_Challenge_Manager_C_LocalHelperMessageComplete_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnRunnerSpawned
	 */
	struct AHRD_Challenge_Manager_C_OnRunnerSpawned_Params
	{
	public:
		class AScramBaseballRunnerAI*                              runner;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CheckForPlayerBattingPosition
	 */
	struct AHRD_Challenge_Manager_C_CheckForPlayerBattingPosition_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerBatterReady
	 */
	struct AHRD_Challenge_Manager_C_PlayerBatterReady_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BeginGame
	 */
	struct AHRD_Challenge_Manager_C_BeginGame_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateGameScore
	 */
	struct AHRD_Challenge_Manager_C_UpdateGameScore_Params
	{
	public:
		int32_t                                                    NewP1TotalScore;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewP2TotalScore;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Single
	 */
	struct AHRD_Challenge_Manager_C_Single_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Double
	 */
	struct AHRD_Challenge_Manager_C_Double_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Triple
	 */
	struct AHRD_Challenge_Manager_C_Triple_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HomeRun
	 */
	struct AHRD_Challenge_Manager_C_HomeRun_Params
	{
	public:
		bool                                                       BasesLoaded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterCatch
	 */
	struct AHRD_Challenge_Manager_C_RegisterCatch_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterFoul
	 */
	struct AHRD_Challenge_Manager_C_RegisterFoul_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateRunners
	 */
	struct AHRD_Challenge_Manager_C_UpdateRunners_Params
	{
	public:
		bool                                                       NewRunnerOnFirst;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewRunnerOnSecond;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewRunnerOnThird;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseInfo
	 */
	struct AHRD_Challenge_Manager_C_ShowPauseInfo_Params
	{
	public:
		bool                                                       IsPaused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasPausedByMe;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseBubble
	 */
	struct AHRD_Challenge_Manager_C_ShowPauseBubble_Params
	{
	public:
		bool                                                       IsPaused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGameResume
	 */
	struct AHRD_Challenge_Manager_C_OnGameResume_Params
	{
	public:
		bool                                                       WasPausedByMe;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGamePause
	 */
	struct AHRD_Challenge_Manager_C_OnGamePause_Params
	{
	public:
		bool                                                       WasPausedByMe;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnInitialActors
	 */
	struct AHRD_Challenge_Manager_C_SpawnInitialActors_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetSetupScoreboards
	 */
	struct AHRD_Challenge_Manager_C_NetSetupScoreboards_Params
	{
	public:
		int32_t                                                    BallsCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StrikesCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetDisplayPopup
	 */
	struct AHRD_Challenge_Manager_C_NetDisplayPopup_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGame
	 */
	struct AHRD_Challenge_Manager_C_EndGame_Params
	{
	public:
		float                                                      ScoreDelay;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameRunLoop
	 */
	struct AHRD_Challenge_Manager_C_GameRunLoop_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ExecuteUbergraph_HRD_Challenge_Manager
	 */
	struct AHRD_Challenge_Manager_C_ExecuteUbergraph_HRD_Challenge_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnersReady__DelegateSignature
	 */
	struct AHRD_Challenge_Manager_C_RunnersReady__DelegateSignature_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerHitHomerun__DelegateSignature
	 */
	struct AHRD_Challenge_Manager_C_PlayerHitHomerun__DelegateSignature_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerScoredRun__DelegateSignature
	 */
	struct AHRD_Challenge_Manager_C_PlayerScoredRun__DelegateSignature_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportComplete__DelegateSignature
	 */
	struct AHRD_Challenge_Manager_C_TeleportComplete__DelegateSignature_Params
	{	};

	/**
	 * Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameCompleted__DelegateSignature
	 */
	struct AHRD_Challenge_Manager_C_GameCompleted__DelegateSignature_Params
	{
	public:
		int32_t                                                    PlayerScore;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HomeRunCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
