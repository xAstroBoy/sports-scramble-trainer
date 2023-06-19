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
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.SpawnVariousBalls
	 */
	struct ABW_Train_03_ScrambleBalls_C_SpawnVariousBalls_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.InitializeTrainingRoom02
	 */
	struct ABW_Train_03_ScrambleBalls_C_InitializeTrainingRoom02_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.SetupInfoText
	 */
	struct ABW_Train_03_ScrambleBalls_C_SetupInfoText_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.UserConstructionScript
	 */
	struct ABW_Train_03_ScrambleBalls_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.OnLoaded_3DA272EF41C3A8030B8783A5CAB8567B
	 */
	struct ABW_Train_03_ScrambleBalls_C_OnLoaded_3DA272EF41C3A8030B8783A5CAB8567B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.OnLoaded_F01801864B34A82AD791508CDF7CF9CA
	 */
	struct ABW_Train_03_ScrambleBalls_C_OnLoaded_F01801864B34A82AD791508CDF7CF9CA_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.OnLoaded_8876CE7B4904DD5B2707FF8CB1874798
	 */
	struct ABW_Train_03_ScrambleBalls_C_OnLoaded_8876CE7B4904DD5B2707FF8CB1874798_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.OnLoaded_75B19AD848484CE1B30D13A6DA881097
	 */
	struct ABW_Train_03_ScrambleBalls_C_OnLoaded_75B19AD848484CE1B30D13A6DA881097_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.ReceiveBeginPlay
	 */
	struct ABW_Train_03_ScrambleBalls_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.TutorialStepOne
	 */
	struct ABW_Train_03_ScrambleBalls_C_TutorialStepOne_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.TutorialStepTwo
	 */
	struct ABW_Train_03_ScrambleBalls_C_TutorialStepTwo_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.CountDownCompleted
	 */
	struct ABW_Train_03_ScrambleBalls_C_CountDownCompleted_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.StartTraining
	 */
	struct ABW_Train_03_ScrambleBalls_C_StartTraining_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.GetCurrentLaneScore
	 */
	struct ABW_Train_03_ScrambleBalls_C_GetCurrentLaneScore_Params
	{
	public:
		int32_t                                                    LaneID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentScore;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.NotifyTrainingContinue
	 */
	struct ABW_Train_03_ScrambleBalls_C_NotifyTrainingContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.AnnouncerExitSequenceComplete
	 */
	struct ABW_Train_03_ScrambleBalls_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.ReceiveEndPlay
	 */
	struct ABW_Train_03_ScrambleBalls_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.AudioFinished_02
	 */
	struct ABW_Train_03_ScrambleBalls_C_AudioFinished_02_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.CustomEvent
	 */
	struct ABW_Train_03_ScrambleBalls_C_CustomEvent_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.CustomEvent_2
	 */
	struct ABW_Train_03_ScrambleBalls_C_CustomEvent_2_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.CustomEvent_3
	 */
	struct ABW_Train_03_ScrambleBalls_C_CustomEvent_3_Params
	{	};

	/**
	 * Function BW_Train_03_ScrambleBalls.BW_Train_03_ScrambleBalls_C.ExecuteUbergraph_BW_Train_03_ScrambleBalls
	 */
	struct ABW_Train_03_ScrambleBalls_C_ExecuteUbergraph_BW_Train_03_ScrambleBalls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7VRE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
