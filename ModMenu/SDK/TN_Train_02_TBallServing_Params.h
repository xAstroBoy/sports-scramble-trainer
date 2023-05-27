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
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.SetupInfoText
	 */
	struct ATN_Train_02_TBallServing_C_SetupInfoText_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.UserConstructionScript
	 */
	struct ATN_Train_02_TBallServing_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.OnLoaded_CE29F7854F25E6982077878960FA43EF
	 */
	struct ATN_Train_02_TBallServing_C_OnLoaded_CE29F7854F25E6982077878960FA43EF_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.OnLoaded_3A18E96343B9DD14EF90B098408B7AFD
	 */
	struct ATN_Train_02_TBallServing_C_OnLoaded_3A18E96343B9DD14EF90B098408B7AFD_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.OnLoaded_3111E7564B39D20A9BB2878590F329BC
	 */
	struct ATN_Train_02_TBallServing_C_OnLoaded_3111E7564B39D20A9BB2878590F329BC_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.ReceiveBeginPlay
	 */
	struct ATN_Train_02_TBallServing_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.StartCountdown
	 */
	struct ATN_Train_02_TBallServing_C_StartCountdown_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.StartTraining
	 */
	struct ATN_Train_02_TBallServing_C_StartTraining_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.CountDownCompleted
	 */
	struct ATN_Train_02_TBallServing_C_CountDownCompleted_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.TN_LaunchedBallHit
	 */
	struct ATN_Train_02_TBallServing_C_TN_LaunchedBallHit_Params
	{
	public:
		float                                                      HitLocationX;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HitLocationY;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.TN_LaunchedBallMissed
	 */
	struct ATN_Train_02_TBallServing_C_TN_LaunchedBallMissed_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.SpawnFirstBall
	 */
	struct ATN_Train_02_TBallServing_C_SpawnFirstBall_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.PreTrainingAnnouncer
	 */
	struct ATN_Train_02_TBallServing_C_PreTrainingAnnouncer_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.TN_TNG_BallHit
	 */
	struct ATN_Train_02_TBallServing_C_TN_TNG_BallHit_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.TN_TNG_RespawnBall
	 */
	struct ATN_Train_02_TBallServing_C_TN_TNG_RespawnBall_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.TN_TNG_WallTargetHit
	 */
	struct ATN_Train_02_TBallServing_C_TN_TNG_WallTargetHit_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              BallTargetActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RegionHit;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.NotifyTrainingContinue
	 */
	struct ATN_Train_02_TBallServing_C_NotifyTrainingContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.AnnouncerExitSequenceComplete
	 */
	struct ATN_Train_02_TBallServing_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.ReceiveEndPlay
	 */
	struct ATN_Train_02_TBallServing_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.CustomEvent_1
	 */
	struct ATN_Train_02_TBallServing_C_CustomEvent_1_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.CustomEvent
	 */
	struct ATN_Train_02_TBallServing_C_CustomEvent_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.CustomEvent_2
	 */
	struct ATN_Train_02_TBallServing_C_CustomEvent_2_Params
	{	};

	/**
	 * Function TN_Train_02_TBallServing.TN_Train_02_TBallServing_C.ExecuteUbergraph_TN_Train_02_TBallServing
	 */
	struct ATN_Train_02_TBallServing_C_ExecuteUbergraph_TN_Train_02_TBallServing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TYAJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
