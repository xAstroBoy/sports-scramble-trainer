#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TN_Challenge_Base.TN_Challenge_Base_C.AddActorToGameElementList
struct ATN_Challenge_Base_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.Shutdown
struct ATN_Challenge_Base_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_UnbindEvent
struct ATN_Challenge_Base_C_TN_CHG_UnbindEvent_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ShowAllWhackTargets
struct ATN_Challenge_Base_C_TN_CHG_ShowAllWhackTargets_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ResetArenaScoreboards
struct ATN_Challenge_Base_C_TN_CHG_ResetArenaScoreboards_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_UpdateArenaScoreboards
struct ATN_Challenge_Base_C_TN_CHG_UpdateArenaScoreboards_Params
{
	int                                                Player1Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Player2Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdateScoreOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_GetArenaScoreboards
struct ATN_Challenge_Base_C_TN_CHG_GetArenaScoreboards_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnChallengeSportManager
struct ATN_Challenge_Base_C_TN_CHG_SpawnChallengeSportManager_Params
{
	class AChallenge_ScramSportManager_TN_C*           ChallengeSportMgr;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_CalculateEndTennisMatch
struct ATN_Challenge_Base_C_TN_CHG_CalculateEndTennisMatch_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnFloorLightUpGroup
struct ATN_Challenge_Base_C_TN_CHG_SpawnFloorLightUpGroup_Params
{
	bool                                               Player2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OutOnly;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InOnly;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Demo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnSportManager
struct ATN_Challenge_Base_C_TN_CHG_SpawnSportManager_Params
{
	bool                                               UseScrambler;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseStartOfMatchInfoPanels;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       ScrambleSchedule;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnAIOpponent
struct ATN_Challenge_Base_C_TN_CHG_SpawnAIOpponent_Params
{
	class UClass*                                      AIActorClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScramTennisAI*                              ScramTennisAI;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnReturnWallAndLauncher
struct ATN_Challenge_Base_C_TN_CHG_SpawnReturnWallAndLauncher_Params
{
	TEnumAsByte<TN_ReturnWall_ScoreType_ETN_ReturnWall_ScoreType> ReurnWallType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SwapInstrumentIcon
struct ATN_Challenge_Base_C_TN_CHG_SwapInstrumentIcon_Params
{
	class UClass*                                      InstrumentClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SwapBallIcon
struct ATN_Challenge_Base_C_TN_CHG_SwapBallIcon_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AnnounceBall;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.Get_TN_CHG_BallList
struct ATN_Challenge_Base_C_Get_TN_CHG_BallList_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.Get_TN_CHG_InstrumentList
struct ATN_Challenge_Base_C_Get_TN_CHG_InstrumentList_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.RefreshActivePayloads
struct ATN_Challenge_Base_C_RefreshActivePayloads_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.IsStreakContinued
struct ATN_Challenge_Base_C_IsStreakContinued_Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StreakContinues;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.UpdateScore
struct ATN_Challenge_Base_C_UpdateScore_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_CalculateEndScore
struct ATN_Challenge_Base_C_TN_CHG_CalculateEndScore_Params
{
	bool                                               Countdown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TargetScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ScrambleTargetBallHit
struct ATN_Challenge_Base_C_TN_CHG_ScrambleTargetBallHit_Params
{
	float                                              HitLocationX;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitLocationY;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.PBP_ScrambleTargetHit
struct ATN_Challenge_Base_C_PBP_ScrambleTargetHit_Params
{
	class UClass*                                      EventClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessLightNormalShot
struct ATN_Challenge_Base_C_ProcessLightNormalShot_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessChargeShot
struct ATN_Challenge_Base_C_ProcessChargeShot_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_ScrambleTargetInstrumentChangeMissed
struct ATN_Challenge_Base_C_TN_ScrambleTargetInstrumentChangeMissed_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TRN_InstrumentHit
struct ATN_Challenge_Base_C_TN_TRN_InstrumentHit_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.DestroyAllBalls_1
struct ATN_Challenge_Base_C_DestroyAllBalls_1_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessSliceShot
struct ATN_Challenge_Base_C_ProcessSliceShot_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.PickNew_CHG_WhackTarget
struct ATN_Challenge_Base_C_PickNew_CHG_WhackTarget_Params
{
	class AActor*                                      OldTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.Spawn_CHG_WhackTargets
struct ATN_Challenge_Base_C_Spawn_CHG_WhackTargets_Params
{
	bool                                               LowerOnGameEnd;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnServeLauncher
struct ATN_Challenge_Base_C_SpawnServeLauncher_Params
{
	bool                                               TeeBall;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MoveSpawnedBalls;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnCenterLaucher
struct ATN_Challenge_Base_C_SpawnCenterLaucher_Params
{
	float                                              InitialHeight;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_LaunchedBallMissed
struct ATN_Challenge_Base_C_TN_LaunchedBallMissed_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_LaunchedBallHit
struct ATN_Challenge_Base_C_TN_LaunchedBallHit_Params
{
	float                                              HitLocationX;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitLocationY;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnFloorLightUp
struct ATN_Challenge_Base_C_SpawnFloorLightUp_Params
{
	bool                                               OutOnly;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InOnly;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BothInOut;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnLeftRightLauchers
struct ATN_Challenge_Base_C_SpawnLeftRightLauchers_Params
{
	bool                                               SpawnLeftLauncher;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SpawnRightLauncher;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.BallAccuracySound
struct ATN_Challenge_Base_C_BallAccuracySound_Params
{
	bool                                               In;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.CheckInBounds
struct ATN_Challenge_Base_C_CheckInBounds_Params
{
	float                                              XLocation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YLocation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlaySound;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InBounds;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.InitializeBase
struct ATN_Challenge_Base_C_InitializeBase_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.UserConstructionScript
struct ATN_Challenge_Base_C_UserConstructionScript_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.OnLoaded_B009CC43435532B8D5D6D0AF4E5B6CBC
struct ATN_Challenge_Base_C_OnLoaded_B009CC43435532B8D5D6D0AF4E5B6CBC_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.SportManager_MatchComplete
struct ATN_Challenge_Base_C_SportManager_MatchComplete_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.ReturnWallLauncherBall
struct ATN_Challenge_Base_C_ReturnWallLauncherBall_Params
{
	class AActor*                                      NewBallActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.ReturnWallHit
struct ATN_Challenge_Base_C_ReturnWallHit_Params
{
	int                                                Streak;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.ReceiveBeginPlay
struct ATN_Challenge_Base_C_ReceiveBeginPlay_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.ReceiveEndPlay
struct ATN_Challenge_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.NewLauncherBall
struct ATN_Challenge_Base_C_NewLauncherBall_Params
{
	class AActor*                                      NewBallActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.BallHasBeenHit
struct ATN_Challenge_Base_C_BallHasBeenHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallSpawned
struct ATN_Challenge_Base_C_TN_TNG_BallSpawned_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallHit
struct ATN_Challenge_Base_C_TN_TNG_BallHit_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_WallTargetHit
struct ATN_Challenge_Base_C_TN_CHG_WallTargetHit_Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      BallTargetActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RegionHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallGrabbed
struct ATN_Challenge_Base_C_TN_TNG_BallGrabbed_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.BallShotTypeChange
struct ATN_Challenge_Base_C_BallShotTypeChange_Params
{
	SportsScramble_ETennisShotType                     ShotType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_ScrambleTargetHit
struct ATN_Challenge_Base_C_TN_TNG_ScrambleTargetHit_Params
{
	class ATennisScrambleTarget_C*                     TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      EventClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TargetId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.ChangeBallClass
struct ATN_Challenge_Base_C_ChangeBallClass_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.EndOfGame
struct ATN_Challenge_Base_C_EndOfGame_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_TimerExpired
struct ATN_Challenge_Base_C_TN_CHG_TimerExpired_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_TimerTriggered
struct ATN_Challenge_Base_C_TN_CHG_TimerTriggered_Params
{
	int                                                CurrentTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_WallTargetShrinking
struct ATN_Challenge_Base_C_TN_CHG_WallTargetShrinking_Params
{
	class AActor*                                      TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TriggerCountdown
struct ATN_Challenge_Base_C_TN_TriggerCountdown_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_StartIntroCadence
struct ATN_Challenge_Base_C_TN_StartIntroCadence_Params
{
	bool                                               UseChallengeMusic;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseCountdown;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseThreeCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_ShowInstrumentAndBallIcons
struct ATN_Challenge_Base_C_TN_ShowInstrumentAndBallIcons_Params
{
	bool                                               InstrumentBothHands;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TriggerAlternativeCadence
struct ATN_Challenge_Base_C_TriggerAlternativeCadence_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerShowInstrumentIcon
struct ATN_Challenge_Base_C_TN_AnnouncerShowInstrumentIcon_Params
{
	class UClass*                                      OptionalBallClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AnnounceBall;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerPresentation
struct ATN_Challenge_Base_C_TN_AnnouncerPresentation_Params
{
	bool                                               InstrumentBothHands;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerAcceleratorChallenge
struct ATN_Challenge_Base_C_TN_AnnouncerAcceleratorChallenge_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.PlayAsync2D
struct ATN_Challenge_Base_C_PlayAsync2D_Params
{
};

// Function TN_Challenge_Base.TN_Challenge_Base_C.ExecuteUbergraph_TN_Challenge_Base
struct ATN_Challenge_Base_C_ExecuteUbergraph_TN_Challenge_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
