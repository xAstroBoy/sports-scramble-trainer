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
	 * Function TN_Train_Base.TN_Train_Base_C.AddActorToGameElementList
	 */
	struct ATN_Train_Base_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.Shutdown
	 */
	struct ATN_Train_Base_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_UnbindEvents
	 */
	struct ATN_Train_Base_C_TN_UnbindEvents_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_CalculateEndScore
	 */
	struct ATN_Train_Base_C_TN_CalculateEndScore_Params
	{
	public:
		int32_t                                                    CurrentScore;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetScore;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.GetListOfBallClasses
	 */
	struct ATN_Train_Base_C_GetListOfBallClasses_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.GetRandomBallClass
	 */
	struct ATN_Train_Base_C_GetRandomBallClass_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_ScrambleTargetBallHit
	 */
	struct ATN_Train_Base_C_TN_ScrambleTargetBallHit_Params
	{
	public:
		float                                                      HitLocationX;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HitLocationY;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.PBP_ScrambleTargetHit
	 */
	struct ATN_Train_Base_C_PBP_ScrambleTargetHit_Params
	{
	public:
		class UClass*                                              EventClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.ProcessLightNormalShot
	 */
	struct ATN_Train_Base_C_ProcessLightNormalShot_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.ProcessChargeShot
	 */
	struct ATN_Train_Base_C_ProcessChargeShot_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_ScrambleTargetInstrumentChangeMissed
	 */
	struct ATN_Train_Base_C_TN_ScrambleTargetInstrumentChangeMissed_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_TRN_InstrumentHit
	 */
	struct ATN_Train_Base_C_TN_TRN_InstrumentHit_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.SpawnScrambler
	 */
	struct ATN_Train_Base_C_SpawnScrambler_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.DestroyAllBalls_1
	 */
	struct ATN_Train_Base_C_DestroyAllBalls_1_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.ProcessSliceShot
	 */
	struct ATN_Train_Base_C_ProcessSliceShot_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.FindNewTrainingTarget
	 */
	struct ATN_Train_Base_C_FindNewTrainingTarget_Params
	{
	public:
		class AActor*                                              OldTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.SpawnTrainingTargets
	 */
	struct ATN_Train_Base_C_SpawnTrainingTargets_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.SpawnServeLauncher
	 */
	struct ATN_Train_Base_C_SpawnServeLauncher_Params
	{
	public:
		bool                                                       TeeBall;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MoveSpawnedBalls;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PUH0[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.SpawnCenterLaucher
	 */
	struct ATN_Train_Base_C_SpawnCenterLaucher_Params
	{
	public:
		float                                                      InitialHeight;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AUTD[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_LaunchedBallMissed
	 */
	struct ATN_Train_Base_C_TN_LaunchedBallMissed_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_LaunchedBallHit
	 */
	struct ATN_Train_Base_C_TN_LaunchedBallHit_Params
	{
	public:
		float                                                      HitLocationX;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HitLocationY;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.SpawnFloorLightUp
	 */
	struct ATN_Train_Base_C_SpawnFloorLightUp_Params
	{
	public:
		bool                                                       OutOnly;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InOnly;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BothInOut;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G7NG[0xD];                                   // 0x0003(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.SpawnLeftRightLauchers
	 */
	struct ATN_Train_Base_C_SpawnLeftRightLauchers_Params
	{
	public:
		bool                                                       SpawnLeftLauncher;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnRightLauncher;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_43DY[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.SpawnNetScoreboard
	 */
	struct ATN_Train_Base_C_SpawnNetScoreboard_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.BallAccuracySound
	 */
	struct ATN_Train_Base_C_BallAccuracySound_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.CheckInBounds
	 */
	struct ATN_Train_Base_C_CheckInBounds_Params
	{
	public:
		float                                                      XLocation;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YLocation;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySound;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InBounds;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.Initialize
	 */
	struct ATN_Train_Base_C_Initialize_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.UserConstructionScript
	 */
	struct ATN_Train_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.OnLoaded_A43C58794D9F2CCF6D593985EC3E313B
	 */
	struct ATN_Train_Base_C_OnLoaded_A43C58794D9F2CCF6D593985EC3E313B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.ReceiveBeginPlay
	 */
	struct ATN_Train_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.ReceiveEndPlay
	 */
	struct ATN_Train_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.NewLauncherBall
	 */
	struct ATN_Train_Base_C_NewLauncherBall_Params
	{
	public:
		class AActor*                                              NewBallActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.BallHasBeenHit
	 */
	struct ATN_Train_Base_C_BallHasBeenHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_TNG_BallSpawned
	 */
	struct ATN_Train_Base_C_TN_TNG_BallSpawned_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_TNG_BallHit
	 */
	struct ATN_Train_Base_C_TN_TNG_BallHit_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_TNG_WallTargetHit
	 */
	struct ATN_Train_Base_C_TN_TNG_WallTargetHit_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              BallTargetActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RegionHit;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_TNG_BallGrabbed
	 */
	struct ATN_Train_Base_C_TN_TNG_BallGrabbed_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.BallShotTypeChange
	 */
	struct ATN_Train_Base_C_BallShotTypeChange_Params
	{
	public:
		ETennisShotType                                            ShotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.ScrambleTargetLaunchedBall
	 */
	struct ATN_Train_Base_C_ScrambleTargetLaunchedBall_Params
	{
	public:
		class ATN_Ball_Base_C*                                     LaunchedBall;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.ScrambleIconBallHit
	 */
	struct ATN_Train_Base_C_ScrambleIconBallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.TN_TNG_ScrambleTargetHit
	 */
	struct ATN_Train_Base_C_TN_TNG_ScrambleTargetHit_Params
	{
	public:
		class ATennisScrambleTarget_C*                             TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              EventClass;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetID;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.ScrambleIconBallTypeShotChange
	 */
	struct ATN_Train_Base_C_ScrambleIconBallTypeShotChange_Params
	{
	public:
		ETennisShotType                                            ShotType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.ChangeBallClass
	 */
	struct ATN_Train_Base_C_ChangeBallClass_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.EndOfGame
	 */
	struct ATN_Train_Base_C_EndOfGame_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.PlayAsync2D
	 */
	struct ATN_Train_Base_C_PlayAsync2D_Params
	{	};

	/**
	 * Function TN_Train_Base.TN_Train_Base_C.ExecuteUbergraph_TN_Train_Base
	 */
	struct ATN_Train_Base_C_ExecuteUbergraph_TN_Train_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZY19[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
