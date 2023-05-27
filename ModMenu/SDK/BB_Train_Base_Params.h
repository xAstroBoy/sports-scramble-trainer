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
	 * Function BB_Train_Base.BB_Train_Base_C.AddActorToGameElementList
	 */
	struct ABB_Train_Base_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.Shutdown
	 */
	struct ABB_Train_Base_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T5OZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchTargetListener
	 */
	struct ABB_Train_Base_C_BB_SpawnPitchTargetListener_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_TNG_SpawnNeverMissBatter
	 */
	struct ABB_Train_Base_C_BB_TNG_SpawnNeverMissBatter_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_TNG_TrackBasketballBounces
	 */
	struct ABB_Train_Base_C_BB_TNG_TrackBasketballBounces_Params
	{
	public:
		class ABB_BasketBall_C*                                    Basketball;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DestroyBasketball;                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NJD3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchingEquipment
	 */
	struct ABB_Train_Base_C_BB_SpawnPitchingEquipment_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_SpawnBBScrambleDisplay
	 */
	struct ABB_Train_Base_C_BB_SpawnBBScrambleDisplay_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_SpawnLauncherBarrier
	 */
	struct ABB_Train_Base_C_BB_SpawnLauncherBarrier_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_SpawnScrambleTargets
	 */
	struct ABB_Train_Base_C_BB_SpawnScrambleTargets_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_GetBattingSide
	 */
	struct ABB_Train_Base_C_BB_GetBattingSide_Params
	{
	public:
		EBattingSide                                               Side;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IAVH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_UpdateLargeScoreboardScore
	 */
	struct ABB_Train_Base_C_BB_UpdateLargeScoreboardScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player2;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_TeleportBatter
	 */
	struct ABB_Train_Base_C_BB_TeleportBatter_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_SpawnOutfieldTarget
	 */
	struct ABB_Train_Base_C_BB_SpawnOutfieldTarget_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_SpawnWindows
	 */
	struct ABB_Train_Base_C_BB_SpawnWindows_Params
	{
	public:
		bool                                                       ShowTargetScore;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FB75[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_SpawnBattingCage
	 */
	struct ABB_Train_Base_C_BB_SpawnBattingCage_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_SpawnLauncher
	 */
	struct ABB_Train_Base_C_BB_SpawnLauncher_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_SpawnPitchTarget
	 */
	struct ABB_Train_Base_C_BB_SpawnPitchTarget_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_MakeStrikezoneVisible
	 */
	struct ABB_Train_Base_C_BB_MakeStrikezoneVisible_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_UpdateTrainingScoreboardCount
	 */
	struct ABB_Train_Base_C_BB_UpdateTrainingScoreboardCount_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_UpdateTrainingScoreboardScore
	 */
	struct ABB_Train_Base_C_BB_UpdateTrainingScoreboardScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_CalculateEndScore
	 */
	struct ABB_Train_Base_C_BB_CalculateEndScore_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.SpawnPitchingEquipment_DEPRECATED
	 */
	struct ABB_Train_Base_C_SpawnPitchingEquipment_DEPRECATED_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.ClearScoreboards
	 */
	struct ABB_Train_Base_C_ClearScoreboards_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.Initialize
	 */
	struct ABB_Train_Base_C_Initialize_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.UserConstructionScript
	 */
	struct ABB_Train_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.ShowScoreboardAnimation
	 */
	struct ABB_Train_Base_C_ShowScoreboardAnimation_Params
	{
	public:
		EBB_ScoreboardVideos                                       Animation;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.SetScoreMaterialAndFont
	 */
	struct ABB_Train_Base_C_SetScoreMaterialAndFont_Params
	{
	public:
		int32_t                                                    FontSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.SetScoreVisibility
	 */
	struct ABB_Train_Base_C_SetScoreVisibility_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.AttachTrainingScoreboard
	 */
	struct ABB_Train_Base_C_AttachTrainingScoreboard_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BindToScoring
	 */
	struct ABB_Train_Base_C_BindToScoring_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.PlayerHitSingle
	 */
	struct ABB_Train_Base_C_PlayerHitSingle_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.PlayerHitDouble
	 */
	struct ABB_Train_Base_C_PlayerHitDouble_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.PlayerHitTriple
	 */
	struct ABB_Train_Base_C_PlayerHitTriple_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.PlayerHitHomerun
	 */
	struct ABB_Train_Base_C_PlayerHitHomerun_Params
	{
	public:
		bool                                                       BasesLoaded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.UnbindScoring
	 */
	struct ABB_Train_Base_C_UnbindScoring_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.TrainingTargetHit
	 */
	struct ABB_Train_Base_C_TrainingTargetHit_Params
	{
	public:
		EBaseballScrambleTargetLocations                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_OutfieldTargetHit
	 */
	struct ABB_Train_Base_C_BB_OutfieldTargetHit_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetID;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_BallLaunched
	 */
	struct ABB_Train_Base_C_BB_BallLaunched_Params
	{
	public:
		class AActor*                                              LaunchedBall;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.Strikezone_Strike
	 */
	struct ABB_Train_Base_C_Strikezone_Strike_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.Strikezone_Ball
	 */
	struct ABB_Train_Base_C_Strikezone_Ball_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.SportMgr_CatcherThrewBall
	 */
	struct ABB_Train_Base_C_SportMgr_CatcherThrewBall_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.SportMgr_PitcherReady
	 */
	struct ABB_Train_Base_C_SportMgr_PitcherReady_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.HitFloorCollision
	 */
	struct ABB_Train_Base_C_HitFloorCollision_Params
	{
	public:
		class ABB_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.CatcherCaughtBall
	 */
	struct ABB_Train_Base_C_CatcherCaughtBall_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.PitchTargetHit
	 */
	struct ABB_Train_Base_C_PitchTargetHit_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.ReceiveBeginPlay
	 */
	struct ABB_Train_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.EndOfGame
	 */
	struct ABB_Train_Base_C_EndOfGame_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.PlayerMoved
	 */
	struct ABB_Train_Base_C_PlayerMoved_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.NoTeleport
	 */
	struct ABB_Train_Base_C_NoTeleport_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.ReadyForTraining
	 */
	struct ABB_Train_Base_C_ReadyForTraining_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_EquipmentGrabbed
	 */
	struct ABB_Train_Base_C_BB_EquipmentGrabbed_Params
	{
	public:
		class AActor*                                              DominantHand;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABB_Mitt_C*                                          Mitt;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.PitcherCaughtSomething
	 */
	struct ABB_Train_Base_C_PitcherCaughtSomething_Params
	{
	public:
		class UScramEventBasePayload*                              Payload;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.BB_ResetScoreboards
	 */
	struct ABB_Train_Base_C_BB_ResetScoreboards_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.LargeScoreboard_TrainingProgress
	 */
	struct ABB_Train_Base_C_LargeScoreboard_TrainingProgress_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.PitcherMittReleasedBall
	 */
	struct ABB_Train_Base_C_PitcherMittReleasedBall_Params
	{
	public:
		class AActor*                                              TouchedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                ButtonReleased;                                          // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.OpenTravelCapsule
	 */
	struct ABB_Train_Base_C_OpenTravelCapsule_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.CloseTravelCapsule
	 */
	struct ABB_Train_Base_C_CloseTravelCapsule_Params
	{	};

	/**
	 * Function BB_Train_Base.BB_Train_Base_C.ExecuteUbergraph_BB_Train_Base
	 */
	struct ABB_Train_Base_C_ExecuteUbergraph_BB_Train_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y3YY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
