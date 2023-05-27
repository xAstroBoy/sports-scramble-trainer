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
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.UpdateOptions
	 */
	struct ABB_Train_07_UnlimitedBatting_C_UpdateOptions_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.GetAllInstruments
	 */
	struct ABB_Train_07_UnlimitedBatting_C_GetAllInstruments_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.GetAllBallClasses
	 */
	struct ABB_Train_07_UnlimitedBatting_C_GetAllBallClasses_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.GetRandomBallClass
	 */
	struct ABB_Train_07_UnlimitedBatting_C_GetRandomBallClass_Params
	{
	public:
		class UClass*                                              RandomBallClass;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.BB_TRN_Initialize
	 */
	struct ABB_Train_07_UnlimitedBatting_C_BB_TRN_Initialize_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.UserConstructionScript
	 */
	struct ABB_Train_07_UnlimitedBatting_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ReceiveBeginPlay
	 */
	struct ABB_Train_07_UnlimitedBatting_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.SpawnLauncherAndBarrier
	 */
	struct ABB_Train_07_UnlimitedBatting_C_SpawnLauncherAndBarrier_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ChangeBallClass
	 */
	struct ABB_Train_07_UnlimitedBatting_C_ChangeBallClass_Params
	{
	public:
		class UClass*                                              NewBallClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.LaunchTrainingBall
	 */
	struct ABB_Train_07_UnlimitedBatting_C_LaunchTrainingBall_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.TrainingBallLaunched
	 */
	struct ABB_Train_07_UnlimitedBatting_C_TrainingBallLaunched_Params
	{
	public:
		class AActor*                                              Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.InitializeOutfieldTargets
	 */
	struct ABB_Train_07_UnlimitedBatting_C_InitializeOutfieldTargets_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.TargetHit
	 */
	struct ABB_Train_07_UnlimitedBatting_C_TargetHit_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetID;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.InitializeInstrumentSelector
	 */
	struct ABB_Train_07_UnlimitedBatting_C_InitializeInstrumentSelector_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.InstrumentSelected
	 */
	struct ABB_Train_07_UnlimitedBatting_C_InstrumentSelected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.StartTheLauncher
	 */
	struct ABB_Train_07_UnlimitedBatting_C_StartTheLauncher_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.WhenTutorialBallHit
	 */
	struct ABB_Train_07_UnlimitedBatting_C_WhenTutorialBallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ReceiveEndPlay
	 */
	struct ABB_Train_07_UnlimitedBatting_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.Unpaused
	 */
	struct ABB_Train_07_UnlimitedBatting_C_Unpaused_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ResetOutfieldTargets
	 */
	struct ABB_Train_07_UnlimitedBatting_C_ResetOutfieldTargets_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.CountDownCompleted
	 */
	struct ABB_Train_07_UnlimitedBatting_C_CountDownCompleted_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ShowCountdown
	 */
	struct ABB_Train_07_UnlimitedBatting_C_ShowCountdown_Params
	{	};

	/**
	 * Function BB_Train_07_UnlimitedBatting.BB_Train_07_UnlimitedBatting_C.ExecuteUbergraph_BB_Train_07_UnlimitedBatting
	 */
	struct ABB_Train_07_UnlimitedBatting_C_ExecuteUbergraph_BB_Train_07_UnlimitedBatting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
