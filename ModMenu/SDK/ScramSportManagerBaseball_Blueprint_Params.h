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
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetRandomInstrument
	 */
	struct AScramSportManagerBaseball_Blueprint_C_GetRandomInstrument_Params
	{
	public:
		EBaseballInstrumentType                                    ExcludeType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L75F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBaseballInstrumentEntryProperties                  NewInstrument;                                           // 0x0008(0x0040)  (Parm, OutParm)
		bool                                                       Successful;                                              // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBatterRunAdvantage
	 */
	struct AScramSportManagerBaseball_Blueprint_C_GetBatterRunAdvantage_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SaveBaseballState
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SaveBaseballState_Params
	{
	public:
		int32_t                                                    VisitorsScore;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HomeScore;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Inning;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TopOfInning;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FirstPitchOfInning;                                      // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MWWM[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Outs;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Strikes;                                                 // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              BatterInstrument;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		TArray<struct FMittSpawnInfo>                              PitcherScrambleOptions;                                  // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetGloveMaterial
	 */
	struct AScramSportManagerBaseball_Blueprint_C_GetGloveMaterial_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFielderDifficulty
	 */
	struct AScramSportManagerBaseball_Blueprint_C_GetFielderDifficulty_Params
	{
	public:
		EDifficulty                                                NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnFielder
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnFielder_Params
	{
	public:
		EDifficulty                                                Difficulty;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ISX3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     Position;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOutfielder;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U1W6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMinMaxAngle                                        OutfieldMovementRange;                                   // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_LD7C[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameSetup
	 */
	struct AScramSportManagerBaseball_Blueprint_C_BB_ChallengeGameSetup_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetMittMaterial
	 */
	struct AScramSportManagerBaseball_Blueprint_C_GetMittMaterial_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.AI_StrikeLooking
	 */
	struct AScramSportManagerBaseball_Blueprint_C_AI_StrikeLooking_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateScoreboardNames
	 */
	struct AScramSportManagerBaseball_Blueprint_C_UpdateScoreboardNames_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetPitchingTargetBindings
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SetPitchingTargetBindings_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLogoPopup
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnLogoPopup_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RemoveRunners
	 */
	struct AScramSportManagerBaseball_Blueprint_C_RemoveRunners_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetStrikezoneSize
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SetStrikezoneSize_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayScoreboardVideo
	 */
	struct AScramSportManagerBaseball_Blueprint_C_PlayScoreboardVideo_Params
	{
	public:
		EBB_ScoreboardVideos                                       Animation;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4OJ9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetGameSettings
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SetGameSettings_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ChooseScrambleGroup
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ChooseScrambleGroup_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ActivateBattingTee
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ActivateBattingTee_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HideIndicators
	 */
	struct AScramSportManagerBaseball_Blueprint_C_HideIndicators_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RequestAllowPitch
	 */
	struct AScramSportManagerBaseball_Blueprint_C_RequestAllowPitch_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleInstrumentBroken
	 */
	struct AScramSportManagerBaseball_Blueprint_C_HandleInstrumentBroken_Params
	{
	public:
		class ABaseballInstrument*                                 Instrument;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInstrumentSelector
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnInstrumentSelector_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBattingMaterial
	 */
	struct AScramSportManagerBaseball_Blueprint_C_GetBattingMaterial_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFieldingMaterial
	 */
	struct AScramSportManagerBaseball_Blueprint_C_GetFieldingMaterial_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RunnerScores
	 */
	struct AScramSportManagerBaseball_Blueprint_C_RunnerScores_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetWinningPlayer
	 */
	struct AScramSportManagerBaseball_Blueprint_C_GetWinningPlayer_Params
	{
	public:
		int32_t                                                    WinnerInt;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.EndGameCleanUp
	 */
	struct AScramSportManagerBaseball_Blueprint_C_EndGameCleanUp_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLocalHelper
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnLocalHelper_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ToggleTeamColors
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ToggleTeamColors_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnTeamActors
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnTeamActors_Params
	{
	public:
		bool                                                       FieldersOnly;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetupScoreboards
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SetupScoreboards_Params
	{
	public:
		int32_t                                                    BallsCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StrikesCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CleanUpGameElements
	 */
	struct AScramSportManagerBaseball_Blueprint_C_CleanUpGameElements_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitcherScoring
	 */
	struct AScramSportManagerBaseball_Blueprint_C_PitcherScoring_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateOutsAndFreebies
	 */
	struct AScramSportManagerBaseball_Blueprint_C_UpdateOutsAndFreebies_Params
	{
	public:
		int32_t                                                    Outs;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Freebies;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Strikes;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterScoring
	 */
	struct AScramSportManagerBaseball_Blueprint_C_BatterScoring_Params
	{
	public:
		int32_t                                                    ScoreAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.TeleportPlayer
	 */
	struct AScramSportManagerBaseball_Blueprint_C_TeleportPlayer_Params
	{
	public:
		class FScriptDelegate                                      TransitionReady;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      TransitionComplete;                                      // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       UseTransitionDuration;                                   // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ProgressGame
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ProgressGame_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Initialize
	 */
	struct AScramSportManagerBaseball_Blueprint_C_Initialize_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnEquipmentAndAI
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnEquipmentAndAI_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnStrikezone
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnStrikezone_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatter
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnAiBatter_Params
	{
	public:
		class AScramBaseballBatterAI*                              Batter;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcher
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnAiPitcher_Params
	{
	public:
		class AScramBaseballPitcherAI*                             Pitcher;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UserConstructionScript
	 */
	struct AScramSportManagerBaseball_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__FinishedFunc
	 */
	struct AScramSportManagerBaseball_Blueprint_C_Timeline_OrganFade__FinishedFunc_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__UpdateFunc
	 */
	struct AScramSportManagerBaseball_Blueprint_C_Timeline_OrganFade__UpdateFunc_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BaseballEvent
	 */
	struct AScramSportManagerBaseball_Blueprint_C_BaseballEvent_Params
	{
	public:
		EBaseballEvent                                             BaseballEvent;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XEK1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveBeginPlay
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrike
	 */
	struct AScramSportManagerBaseball_Blueprint_C_RegisterStrike_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterOut
	 */
	struct AScramSportManagerBaseball_Blueprint_C_RegisterOut_Params
	{
	public:
		int32_t                                                    NewOuts;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayUmpireOut;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlayOrgan;                                               // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleGameEnd
	 */
	struct AScramSportManagerBaseball_Blueprint_C_HandleGameEnd_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveEndPlay
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BBGameIntroSequence
	 */
	struct AScramSportManagerBaseball_Blueprint_C_BBGameIntroSequence_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LocalHelperMessageComplete
	 */
	struct AScramSportManagerBaseball_Blueprint_C_LocalHelperMessageComplete_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginInning
	 */
	struct AScramSportManagerBaseball_Blueprint_C_BeginInning_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetDominantHand
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SetDominantHand_Params
	{
	public:
		class AActor*                                              DominantHand;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABB_Mitt_C*                                          Mitt;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnRunnerSpawned
	 */
	struct AScramSportManagerBaseball_Blueprint_C_OnRunnerSpawned_Params
	{
	public:
		class AScramBaseballRunnerAI*                              runner;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StartOrgan
	 */
	struct AScramSportManagerBaseball_Blueprint_C_StartOrgan_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StopOrgan
	 */
	struct AScramSportManagerBaseball_Blueprint_C_StopOrgan_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CheckForPlayerBattingPosition
	 */
	struct AScramSportManagerBaseball_Blueprint_C_CheckForPlayerBattingPosition_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayerBatterReady
	 */
	struct AScramSportManagerBaseball_Blueprint_C_PlayerBatterReady_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginGame
	 */
	struct AScramSportManagerBaseball_Blueprint_C_BeginGame_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchTargetHit
	 */
	struct AScramSportManagerBaseball_Blueprint_C_PitchTargetHit_Params
	{
	public:
		int32_t                                                    ScoreAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterHitOutfieldTarget
	 */
	struct AScramSportManagerBaseball_Blueprint_C_BatterHitOutfieldTarget_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetID;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SendRestartGame
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SendRestartGame_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateGameScore
	 */
	struct AScramSportManagerBaseball_Blueprint_C_UpdateGameScore_Params
	{
	public:
		int32_t                                                    NewP1TotalScore;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewP2TotalScore;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SwitchSides
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SwitchSides_Params
	{
	public:
		bool                                                       TopOfTheInning;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1CHA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrentInning;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Single
	 */
	struct AScramSportManagerBaseball_Blueprint_C_Single_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Double
	 */
	struct AScramSportManagerBaseball_Blueprint_C_Double_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Triple
	 */
	struct AScramSportManagerBaseball_Blueprint_C_Triple_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HomeRun
	 */
	struct AScramSportManagerBaseball_Blueprint_C_HomeRun_Params
	{
	public:
		bool                                                       BasesLoaded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayFirstPitchSFX
	 */
	struct AScramSportManagerBaseball_Blueprint_C_PlayFirstPitchSFX_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterCatch
	 */
	struct AScramSportManagerBaseball_Blueprint_C_RegisterCatch_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterFoul
	 */
	struct AScramSportManagerBaseball_Blueprint_C_RegisterFoul_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterBall
	 */
	struct AScramSportManagerBaseball_Blueprint_C_RegisterBall_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateRunners
	 */
	struct AScramSportManagerBaseball_Blueprint_C_UpdateRunners_Params
	{
	public:
		bool                                                       NewRunnerOnFirst;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewRunnerOnSecond;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewRunnerOnThird;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentSelected
	 */
	struct AScramSportManagerBaseball_Blueprint_C_OnInstrumentSelected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentBroken
	 */
	struct AScramSportManagerBaseball_Blueprint_C_OnInstrumentBroken_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PrepNewInning
	 */
	struct AScramSportManagerBaseball_Blueprint_C_PrepNewInning_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BrokenBat
	 */
	struct AScramSportManagerBaseball_Blueprint_C_BrokenBat_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NewInstrumentSelected
	 */
	struct AScramSportManagerBaseball_Blueprint_C_NewInstrumentSelected_Params
	{
	public:
		class ABaseballInstrument*                                 Instrument;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.InstrumentSelected
	 */
	struct AScramSportManagerBaseball_Blueprint_C_InstrumentSelected_Params
	{
	public:
		class UObject*                                             Instrument;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentsSpawned
	 */
	struct AScramSportManagerBaseball_Blueprint_C_OnInstrumentsSpawned_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseInfo
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ShowPauseInfo_Params
	{
	public:
		bool                                                       IsPaused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasPausedByMe;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseBubble
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ShowPauseBubble_Params
	{
	public:
		bool                                                       IsPaused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameResume
	 */
	struct AScramSportManagerBaseball_Blueprint_C_OnGameResume_Params
	{
	public:
		bool                                                       WasPausedByMe;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGamePause
	 */
	struct AScramSportManagerBaseball_Blueprint_C_OnGamePause_Params
	{
	public:
		bool                                                       WasPausedByMe;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInitialActors
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnInitialActors_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameReadyToBegin
	 */
	struct AScramSportManagerBaseball_Blueprint_C_GameReadyToBegin_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetSetupScoreboards
	 */
	struct AScramSportManagerBaseball_Blueprint_C_NetSetupScoreboards_Params
	{
	public:
		int32_t                                                    BallsCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StrikesCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrikeout
	 */
	struct AScramSportManagerBaseball_Blueprint_C_RegisterStrikeout_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetUpdateOutsAndFreebies
	 */
	struct AScramSportManagerBaseball_Blueprint_C_NetUpdateOutsAndFreebies_Params
	{
	public:
		int32_t                                                    Outs;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Freebies;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Strikes;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ResetCount
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ResetCount_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetsUpdated
	 */
	struct AScramSportManagerBaseball_Blueprint_C_PitchingTargetsUpdated_Params
	{
	public:
		bool                                                       TL;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TR;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BL;                                                      // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BR;                                                      // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetHit
	 */
	struct AScramSportManagerBaseball_Blueprint_C_PitchingTargetHit_Params
	{
	public:
		EBaseballScrambleTargetLocations                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisplayPopup
	 */
	struct AScramSportManagerBaseball_Blueprint_C_NetDisplayPopup_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetAILook
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SetAILook_Params
	{
	public:
		struct FAvatarLook                                         AvatarLook;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameStart
	 */
	struct AScramSportManagerBaseball_Blueprint_C_BB_ChallengeGameStart_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcherDelayed
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnAiPitcherDelayed_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatterDelayed
	 */
	struct AScramSportManagerBaseball_Blueprint_C_SpawnAiBatterDelayed_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayErrorSfx
	 */
	struct AScramSportManagerBaseball_Blueprint_C_PlayErrorSfx_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LoadBaseballState
	 */
	struct AScramSportManagerBaseball_Blueprint_C_LoadBaseballState_Params
	{
	public:
		int32_t                                                    VisitorsScore;                                           // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HomeScore;                                               // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Inning;                                                  // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TopOfInning;                                             // 0x000C(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FirstPitchOfInning;                                      // 0x000D(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9JM6[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Outs;                                                    // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Strikes;                                                 // 0x0014(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              BatterInstrument;                                        // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		TArray<struct FMittSpawnInfo>                              PitcherScrambleOptions;                                  // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ServerReady
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ServerReady_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_UpdateScoreboardInning
	 */
	struct AScramSportManagerBaseball_Blueprint_C_Multi_UpdateScoreboardInning_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_SetInning
	 */
	struct AScramSportManagerBaseball_Blueprint_C_Multi_SetInning_Params
	{
	public:
		int32_t                                                    Inning;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Top;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameDone
	 */
	struct AScramSportManagerBaseball_Blueprint_C_OnGameDone_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowMitt
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ShowMitt_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisablePause
	 */
	struct AScramSportManagerBaseball_Blueprint_C_NetDisablePause_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.DisablePause
	 */
	struct AScramSportManagerBaseball_Blueprint_C_DisablePause_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShutDown_Bat_PBP
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ShutDown_Bat_PBP_Params
	{	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ExecuteUbergraph_ScramSportManagerBaseball_Blueprint
	 */
	struct AScramSportManagerBaseball_Blueprint_C_ExecuteUbergraph_ScramSportManagerBaseball_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameCompleted__DelegateSignature
	 */
	struct AScramSportManagerBaseball_Blueprint_C_GameCompleted__DelegateSignature_Params
	{
	public:
		bool                                                       LocalPlayerVictory;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ABL9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AwayScore;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HomeScore;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnSidesSwitchedDispatcher__DelegateSignature
	 */
	struct AScramSportManagerBaseball_Blueprint_C_OnSidesSwitchedDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
