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
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.SetupInfoText
	 */
	struct ATN_Train_04_SliceBalls_C_SetupInfoText_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.UserConstructionScript
	 */
	struct ATN_Train_04_SliceBalls_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.OnLoaded_F6E40A67480C3825F8FD6EA77E6091DC
	 */
	struct ATN_Train_04_SliceBalls_C_OnLoaded_F6E40A67480C3825F8FD6EA77E6091DC_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.OnLoaded_E362DC7E4E6C18B8F08D14B987CD7793
	 */
	struct ATN_Train_04_SliceBalls_C_OnLoaded_E362DC7E4E6C18B8F08D14B987CD7793_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.ReceiveBeginPlay
	 */
	struct ATN_Train_04_SliceBalls_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.PreTrainingGameCountDown
	 */
	struct ATN_Train_04_SliceBalls_C_PreTrainingGameCountDown_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.CountDownCompleted
	 */
	struct ATN_Train_04_SliceBalls_C_CountDownCompleted_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.TN_LaunchedBallHit
	 */
	struct ATN_Train_04_SliceBalls_C_TN_LaunchedBallHit_Params
	{
	public:
		float                                                      HitLocationX;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HitLocationY;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.TN_LaunchedBallMissed
	 */
	struct ATN_Train_04_SliceBalls_C_TN_LaunchedBallMissed_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.LaunchANewBall
	 */
	struct ATN_Train_04_SliceBalls_C_LaunchANewBall_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.PreTrainingAnnouncer
	 */
	struct ATN_Train_04_SliceBalls_C_PreTrainingAnnouncer_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.ProcessSliceShot
	 */
	struct ATN_Train_04_SliceBalls_C_ProcessSliceShot_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.NotifyTrainingContinue
	 */
	struct ATN_Train_04_SliceBalls_C_NotifyTrainingContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.CustomEvent_1
	 */
	struct ATN_Train_04_SliceBalls_C_CustomEvent_1_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.CountVoiceClips
	 */
	struct ATN_Train_04_SliceBalls_C_CountVoiceClips_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.AnnouncerExitSequenceComplete
	 */
	struct ATN_Train_04_SliceBalls_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.ReceiveEndPlay
	 */
	struct ATN_Train_04_SliceBalls_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.StartCustomTimer
	 */
	struct ATN_Train_04_SliceBalls_C_StartCustomTimer_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.SliceInstructions
	 */
	struct ATN_Train_04_SliceBalls_C_SliceInstructions_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.CustomEvent
	 */
	struct ATN_Train_04_SliceBalls_C_CustomEvent_Params
	{	};

	/**
	 * Function TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C.ExecuteUbergraph_TN_Train_04_SliceBalls
	 */
	struct ATN_Train_04_SliceBalls_C_ExecuteUbergraph_TN_Train_04_SliceBalls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QNIP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
