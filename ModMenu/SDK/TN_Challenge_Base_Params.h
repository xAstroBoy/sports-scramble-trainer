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
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.AddActorToGameElementList
	 */
	struct ATN_Challenge_Base_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.Shutdown
	 */
	struct ATN_Challenge_Base_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_UnbindEvent
	 */
	struct ATN_Challenge_Base_C_TN_CHG_UnbindEvent_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ShowAllWhackTargets
	 */
	struct ATN_Challenge_Base_C_TN_CHG_ShowAllWhackTargets_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ResetArenaScoreboards
	 */
	struct ATN_Challenge_Base_C_TN_CHG_ResetArenaScoreboards_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_UpdateArenaScoreboards
	 */
	struct ATN_Challenge_Base_C_TN_CHG_UpdateArenaScoreboards_Params
	{
	public:
		int32_t                                                    Player1Score;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Score;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player1Games;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Games;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Player2Serve;                                            // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdateScoreOnly;                                         // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VM4C[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_GetArenaScoreboards
	 */
	struct ATN_Challenge_Base_C_TN_CHG_GetArenaScoreboards_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnChallengeSportManager
	 */
	struct ATN_Challenge_Base_C_TN_CHG_SpawnChallengeSportManager_Params
	{
	public:
		class AChallenge_ScramSportManager_TN_C*                   ChallengeSportMgr;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8F2B[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_CalculateEndTennisMatch
	 */
	struct ATN_Challenge_Base_C_TN_CHG_CalculateEndTennisMatch_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnFloorLightUpGroup
	 */
	struct ATN_Challenge_Base_C_TN_CHG_SpawnFloorLightUpGroup_Params
	{
	public:
		bool                                                       Player2;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutOnly;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InOnly;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Demo;                                                    // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XP0G[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnSportManager
	 */
	struct ATN_Challenge_Base_C_TN_CHG_SpawnSportManager_Params
	{
	public:
		bool                                                       UseScrambler;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseStartOfMatchInfoPanels;                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GP4T[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ScrambleSchedule;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnAIOpponent
	 */
	struct ATN_Challenge_Base_C_TN_CHG_SpawnAIOpponent_Params
	{
	public:
		class UClass*                                              AIActorClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AScramTennisAI*                                      ScramTennisAI;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnReturnWallAndLauncher
	 */
	struct ATN_Challenge_Base_C_TN_CHG_SpawnReturnWallAndLauncher_Params
	{
	public:
		ETN_ReturnWall_ScoreType                                   ReurnWallType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HJRD[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SwapInstrumentIcon
	 */
	struct ATN_Challenge_Base_C_TN_CHG_SwapInstrumentIcon_Params
	{
	public:
		class UClass*                                              InstrumentClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SwapBallIcon
	 */
	struct ATN_Challenge_Base_C_TN_CHG_SwapBallIcon_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AnnounceBall;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LM7M[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.Get_TN_CHG_BallList
	 */
	struct ATN_Challenge_Base_C_Get_TN_CHG_BallList_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.Get_TN_CHG_InstrumentList
	 */
	struct ATN_Challenge_Base_C_Get_TN_CHG_InstrumentList_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.RefreshActivePayloads
	 */
	struct ATN_Challenge_Base_C_RefreshActivePayloads_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.IsStreakContinued
	 */
	struct ATN_Challenge_Base_C_IsStreakContinued_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StreakContinues;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0LIR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.UpdateScore
	 */
	struct ATN_Challenge_Base_C_UpdateScore_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C6OX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_CalculateEndScore
	 */
	struct ATN_Challenge_Base_C_TN_CHG_CalculateEndScore_Params
	{
	public:
		bool                                                       Countdown;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GHM8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrentScore;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetScore;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MO78[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ScrambleTargetBallHit
	 */
	struct ATN_Challenge_Base_C_TN_CHG_ScrambleTargetBallHit_Params
	{
	public:
		float                                                      HitLocationX;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HitLocationY;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.PBP_ScrambleTargetHit
	 */
	struct ATN_Challenge_Base_C_PBP_ScrambleTargetHit_Params
	{
	public:
		class UClass*                                              EventClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessLightNormalShot
	 */
	struct ATN_Challenge_Base_C_ProcessLightNormalShot_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessChargeShot
	 */
	struct ATN_Challenge_Base_C_ProcessChargeShot_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_ScrambleTargetInstrumentChangeMissed
	 */
	struct ATN_Challenge_Base_C_TN_ScrambleTargetInstrumentChangeMissed_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TRN_InstrumentHit
	 */
	struct ATN_Challenge_Base_C_TN_TRN_InstrumentHit_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.DestroyAllBalls_1
	 */
	struct ATN_Challenge_Base_C_DestroyAllBalls_1_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessSliceShot
	 */
	struct ATN_Challenge_Base_C_ProcessSliceShot_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.PickNew_CHG_WhackTarget
	 */
	struct ATN_Challenge_Base_C_PickNew_CHG_WhackTarget_Params
	{
	public:
		class AActor*                                              OldTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.Spawn_CHG_WhackTargets
	 */
	struct ATN_Challenge_Base_C_Spawn_CHG_WhackTargets_Params
	{
	public:
		bool                                                       LowerOnGameEnd;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TN22[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnServeLauncher
	 */
	struct ATN_Challenge_Base_C_SpawnServeLauncher_Params
	{
	public:
		bool                                                       TeeBall;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MoveSpawnedBalls;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_33ZY[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnCenterLaucher
	 */
	struct ATN_Challenge_Base_C_SpawnCenterLaucher_Params
	{
	public:
		float                                                      InitialHeight;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GRHI[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_LaunchedBallMissed
	 */
	struct ATN_Challenge_Base_C_TN_LaunchedBallMissed_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_LaunchedBallHit
	 */
	struct ATN_Challenge_Base_C_TN_LaunchedBallHit_Params
	{
	public:
		float                                                      HitLocationX;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HitLocationY;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnFloorLightUp
	 */
	struct ATN_Challenge_Base_C_SpawnFloorLightUp_Params
	{
	public:
		bool                                                       OutOnly;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InOnly;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BothInOut;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EUNL[0xD];                                   // 0x0003(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnLeftRightLauchers
	 */
	struct ATN_Challenge_Base_C_SpawnLeftRightLauchers_Params
	{
	public:
		bool                                                       SpawnLeftLauncher;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnRightLauncher;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B9X6[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.BallAccuracySound
	 */
	struct ATN_Challenge_Base_C_BallAccuracySound_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.CheckInBounds
	 */
	struct ATN_Challenge_Base_C_CheckInBounds_Params
	{
	public:
		float                                                      XLocation;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YLocation;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySound;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InBounds;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.InitializeBase
	 */
	struct ATN_Challenge_Base_C_InitializeBase_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.UserConstructionScript
	 */
	struct ATN_Challenge_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.OnLoaded_B009CC43435532B8D5D6D0AF4E5B6CBC
	 */
	struct ATN_Challenge_Base_C_OnLoaded_B009CC43435532B8D5D6D0AF4E5B6CBC_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.SportManager_MatchComplete
	 */
	struct ATN_Challenge_Base_C_SportManager_MatchComplete_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.ReturnWallLauncherBall
	 */
	struct ATN_Challenge_Base_C_ReturnWallLauncherBall_Params
	{
	public:
		class AActor*                                              NewBallActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.ReturnWallHit
	 */
	struct ATN_Challenge_Base_C_ReturnWallHit_Params
	{
	public:
		int32_t                                                    Streak;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.ReceiveBeginPlay
	 */
	struct ATN_Challenge_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.ReceiveEndPlay
	 */
	struct ATN_Challenge_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.NewLauncherBall
	 */
	struct ATN_Challenge_Base_C_NewLauncherBall_Params
	{
	public:
		class AActor*                                              NewBallActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.BallHasBeenHit
	 */
	struct ATN_Challenge_Base_C_BallHasBeenHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallSpawned
	 */
	struct ATN_Challenge_Base_C_TN_TNG_BallSpawned_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallHit
	 */
	struct ATN_Challenge_Base_C_TN_TNG_BallHit_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_WallTargetHit
	 */
	struct ATN_Challenge_Base_C_TN_CHG_WallTargetHit_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              BallTargetActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RegionHit;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallGrabbed
	 */
	struct ATN_Challenge_Base_C_TN_TNG_BallGrabbed_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.BallShotTypeChange
	 */
	struct ATN_Challenge_Base_C_BallShotTypeChange_Params
	{
	public:
		ETennisShotType                                            ShotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_ScrambleTargetHit
	 */
	struct ATN_Challenge_Base_C_TN_TNG_ScrambleTargetHit_Params
	{
	public:
		class ATennisScrambleTarget_C*                             TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              EventClass;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetID;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.ChangeBallClass
	 */
	struct ATN_Challenge_Base_C_ChangeBallClass_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.EndOfGame
	 */
	struct ATN_Challenge_Base_C_EndOfGame_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_TimerExpired
	 */
	struct ATN_Challenge_Base_C_TN_CHG_TimerExpired_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_TimerTriggered
	 */
	struct ATN_Challenge_Base_C_TN_CHG_TimerTriggered_Params
	{
	public:
		int32_t                                                    CurrentTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_WallTargetShrinking
	 */
	struct ATN_Challenge_Base_C_TN_CHG_WallTargetShrinking_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TriggerCountdown
	 */
	struct ATN_Challenge_Base_C_TN_TriggerCountdown_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_StartIntroCadence
	 */
	struct ATN_Challenge_Base_C_TN_StartIntroCadence_Params
	{
	public:
		bool                                                       UseChallengeMusic;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseCountdown;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseThreeCategory;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_ShowInstrumentAndBallIcons
	 */
	struct ATN_Challenge_Base_C_TN_ShowInstrumentAndBallIcons_Params
	{
	public:
		bool                                                       InstrumentBothHands;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TriggerAlternativeCadence
	 */
	struct ATN_Challenge_Base_C_TriggerAlternativeCadence_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerShowInstrumentIcon
	 */
	struct ATN_Challenge_Base_C_TN_AnnouncerShowInstrumentIcon_Params
	{
	public:
		class UClass*                                              OptionalBallClass;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AnnounceBall;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerPresentation
	 */
	struct ATN_Challenge_Base_C_TN_AnnouncerPresentation_Params
	{
	public:
		bool                                                       InstrumentBothHands;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerAcceleratorChallenge
	 */
	struct ATN_Challenge_Base_C_TN_AnnouncerAcceleratorChallenge_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.PlayAsync2D
	 */
	struct ATN_Challenge_Base_C_PlayAsync2D_Params
	{	};

	/**
	 * Function TN_Challenge_Base.TN_Challenge_Base_C.ExecuteUbergraph_TN_Challenge_Base
	 */
	struct ATN_Challenge_Base_C_ExecuteUbergraph_TN_Challenge_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3LQX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
