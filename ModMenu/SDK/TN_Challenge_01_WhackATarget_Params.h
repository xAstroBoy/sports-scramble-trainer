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
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SetupBallLaunchers
	 */
	struct ATN_Challenge_01_WhackATarget_C_SetupBallLaunchers_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SetupInfoText
	 */
	struct ATN_Challenge_01_WhackATarget_C_SetupInfoText_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.Initialize
	 */
	struct ATN_Challenge_01_WhackATarget_C_Initialize_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.UserConstructionScript
	 */
	struct ATN_Challenge_01_WhackATarget_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.ReceiveBeginPlay
	 */
	struct ATN_Challenge_01_WhackATarget_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.StartGame
	 */
	struct ATN_Challenge_01_WhackATarget_C_StartGame_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.ReceiveEndPlay
	 */
	struct ATN_Challenge_01_WhackATarget_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.AnnouncerPresenting
	 */
	struct ATN_Challenge_01_WhackATarget_C_AnnouncerPresenting_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SetTargetAnimationPlayRate
	 */
	struct ATN_Challenge_01_WhackATarget_C_SetTargetAnimationPlayRate_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.NotifyChallengeContinue
	 */
	struct ATN_Challenge_01_WhackATarget_C_NotifyChallengeContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SpeedUpTimer
	 */
	struct ATN_Challenge_01_WhackATarget_C_SpeedUpTimer_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SpeedUp
	 */
	struct ATN_Challenge_01_WhackATarget_C_SpeedUp_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.GameEnd
	 */
	struct ATN_Challenge_01_WhackATarget_C_GameEnd_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.TN_TriggerCountdown
	 */
	struct ATN_Challenge_01_WhackATarget_C_TN_TriggerCountdown_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.OnBallHitModifyCollision
	 */
	struct ATN_Challenge_01_WhackATarget_C_OnBallHitModifyCollision_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.AnnouncerExitSequenceComplete
	 */
	struct ATN_Challenge_01_WhackATarget_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.GetNextLauncherBall
	 */
	struct ATN_Challenge_01_WhackATarget_C_GetNextLauncherBall_Params
	{	};

	/**
	 * Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.ExecuteUbergraph_TN_Challenge_01_WhackATarget
	 */
	struct ATN_Challenge_01_WhackATarget_C_ExecuteUbergraph_TN_Challenge_01_WhackATarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
