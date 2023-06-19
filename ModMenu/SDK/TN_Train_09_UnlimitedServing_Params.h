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
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.UpdateOptions
	 */
	struct ATN_Train_09_UnlimitedServing_C_UpdateOptions_Params
	{	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.InitializeTrainingRoom09
	 */
	struct ATN_Train_09_UnlimitedServing_C_InitializeTrainingRoom09_Params
	{	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.UserConstructionScript
	 */
	struct ATN_Train_09_UnlimitedServing_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ReceiveBeginPlay
	 */
	struct ATN_Train_09_UnlimitedServing_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.TN_TNG_BallHit
	 */
	struct ATN_Train_09_UnlimitedServing_C_TN_TNG_BallHit_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.SpawnServeBall
	 */
	struct ATN_Train_09_UnlimitedServing_C_SpawnServeBall_Params
	{	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.BallDestroyed
	 */
	struct ATN_Train_09_UnlimitedServing_C_BallDestroyed_Params
	{
	public:
		class AScramPrimitiveActor*                                DestroyedPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.CountDownCompleted
	 */
	struct ATN_Train_09_UnlimitedServing_C_CountDownCompleted_Params
	{	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ShowCountdown
	 */
	struct ATN_Train_09_UnlimitedServing_C_ShowCountdown_Params
	{	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.Unpaused
	 */
	struct ATN_Train_09_UnlimitedServing_C_Unpaused_Params
	{	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ReceiveEndPlay
	 */
	struct ATN_Train_09_UnlimitedServing_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C.ExecuteUbergraph_TN_Train_09_UnlimitedServing
	 */
	struct ATN_Train_09_UnlimitedServing_C_ExecuteUbergraph_TN_Train_09_UnlimitedServing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KTQF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
