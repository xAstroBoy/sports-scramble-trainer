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

// Function TN_Train_Base.TN_Train_Base_C.AddActorToGameElementList
struct ATN_Train_Base_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Train_Base.TN_Train_Base_C.Shutdown
struct ATN_Train_Base_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Train_Base.TN_Train_Base_C.TN_UnbindEvents
struct ATN_Train_Base_C_TN_UnbindEvents_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.TN_CalculateEndScore
struct ATN_Train_Base_C_TN_CalculateEndScore_Params
{
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TargetScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.GetListOfBallClasses
struct ATN_Train_Base_C_GetListOfBallClasses_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.GetRandomBallClass
struct ATN_Train_Base_C_GetRandomBallClass_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.TN_ScrambleTargetBallHit
struct ATN_Train_Base_C_TN_ScrambleTargetBallHit_Params
{
	float                                              HitLocationX;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitLocationY;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.PBP_ScrambleTargetHit
struct ATN_Train_Base_C_PBP_ScrambleTargetHit_Params
{
	class UClass*                                      EventClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.ProcessLightNormalShot
struct ATN_Train_Base_C_ProcessLightNormalShot_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.ProcessChargeShot
struct ATN_Train_Base_C_ProcessChargeShot_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.TN_ScrambleTargetInstrumentChangeMissed
struct ATN_Train_Base_C_TN_ScrambleTargetInstrumentChangeMissed_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.TN_TRN_InstrumentHit
struct ATN_Train_Base_C_TN_TRN_InstrumentHit_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.SpawnScrambler
struct ATN_Train_Base_C_SpawnScrambler_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.DestroyAllBalls_1
struct ATN_Train_Base_C_DestroyAllBalls_1_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.ProcessSliceShot
struct ATN_Train_Base_C_ProcessSliceShot_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.FindNewTrainingTarget
struct ATN_Train_Base_C_FindNewTrainingTarget_Params
{
	class AActor*                                      OldTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.SpawnTrainingTargets
struct ATN_Train_Base_C_SpawnTrainingTargets_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.SpawnServeLauncher
struct ATN_Train_Base_C_SpawnServeLauncher_Params
{
	bool                                               TeeBall;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MoveSpawnedBalls;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Train_Base.TN_Train_Base_C.SpawnCenterLaucher
struct ATN_Train_Base_C_SpawnCenterLaucher_Params
{
	float                                              InitialHeight;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.TN_LaunchedBallMissed
struct ATN_Train_Base_C_TN_LaunchedBallMissed_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.TN_LaunchedBallHit
struct ATN_Train_Base_C_TN_LaunchedBallHit_Params
{
	float                                              HitLocationX;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitLocationY;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.SpawnFloorLightUp
struct ATN_Train_Base_C_SpawnFloorLightUp_Params
{
	bool                                               OutOnly;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InOnly;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BothInOut;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Train_Base.TN_Train_Base_C.SpawnLeftRightLauchers
struct ATN_Train_Base_C_SpawnLeftRightLauchers_Params
{
	bool                                               SpawnLeftLauncher;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SpawnRightLauncher;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Train_Base.TN_Train_Base_C.SpawnNetScoreboard
struct ATN_Train_Base_C_SpawnNetScoreboard_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.BallAccuracySound
struct ATN_Train_Base_C_BallAccuracySound_Params
{
	bool                                               In;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Train_Base.TN_Train_Base_C.CheckInBounds
struct ATN_Train_Base_C_CheckInBounds_Params
{
	float                                              XLocation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YLocation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlaySound;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InBounds;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Train_Base.TN_Train_Base_C.Initialize
struct ATN_Train_Base_C_Initialize_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.UserConstructionScript
struct ATN_Train_Base_C_UserConstructionScript_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.OnLoaded_A43C58794D9F2CCF6D593985EC3E313B
struct ATN_Train_Base_C_OnLoaded_A43C58794D9F2CCF6D593985EC3E313B_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.ReceiveBeginPlay
struct ATN_Train_Base_C_ReceiveBeginPlay_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.ReceiveEndPlay
struct ATN_Train_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.NewLauncherBall
struct ATN_Train_Base_C_NewLauncherBall_Params
{
	class AActor*                                      NewBallActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.BallHasBeenHit
struct ATN_Train_Base_C_BallHasBeenHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.TN_TNG_BallSpawned
struct ATN_Train_Base_C_TN_TNG_BallSpawned_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.TN_TNG_BallHit
struct ATN_Train_Base_C_TN_TNG_BallHit_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.TN_TNG_WallTargetHit
struct ATN_Train_Base_C_TN_TNG_WallTargetHit_Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      BallTargetActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RegionHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.TN_TNG_BallGrabbed
struct ATN_Train_Base_C_TN_TNG_BallGrabbed_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.BallShotTypeChange
struct ATN_Train_Base_C_BallShotTypeChange_Params
{
	SportsScramble_ETennisShotType                     ShotType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.ScrambleTargetLaunchedBall
struct ATN_Train_Base_C_ScrambleTargetLaunchedBall_Params
{
	class ATN_Ball_Base_C*                             LaunchedBall;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.ScrambleIconBallHit
struct ATN_Train_Base_C_ScrambleIconBallHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.TN_TNG_ScrambleTargetHit
struct ATN_Train_Base_C_TN_TNG_ScrambleTargetHit_Params
{
	class ATennisScrambleTarget_C*                     TargetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      EventClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TargetId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.ScrambleIconBallTypeShotChange
struct ATN_Train_Base_C_ScrambleIconBallTypeShotChange_Params
{
	SportsScramble_ETennisShotType                     ShotType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.ChangeBallClass
struct ATN_Train_Base_C_ChangeBallClass_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Train_Base.TN_Train_Base_C.EndOfGame
struct ATN_Train_Base_C_EndOfGame_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.PlayAsync2D
struct ATN_Train_Base_C_PlayAsync2D_Params
{
};

// Function TN_Train_Base.TN_Train_Base_C.ExecuteUbergraph_TN_Train_Base
struct ATN_Train_Base_C_ExecuteUbergraph_TN_Train_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
