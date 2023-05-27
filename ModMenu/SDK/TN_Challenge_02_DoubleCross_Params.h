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
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupRackets
	 */
	struct ATN_Challenge_02_DoubleCross_C_SetupRackets_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupBallLaunchers
	 */
	struct ATN_Challenge_02_DoubleCross_C_SetupBallLaunchers_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupInfoText
	 */
	struct ATN_Challenge_02_DoubleCross_C_SetupInfoText_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Initialize
	 */
	struct ATN_Challenge_02_DoubleCross_C_Initialize_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.UserConstructionScript
	 */
	struct ATN_Challenge_02_DoubleCross_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.BallLaunched
	 */
	struct ATN_Challenge_02_DoubleCross_C_BallLaunched_Params
	{
	public:
		class AActor*                                              Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHit
	 */
	struct ATN_Challenge_02_DoubleCross_C_OnBallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.LaunchedBall Primitive Destroyed
	 */
	struct ATN_Challenge_02_DoubleCross_C_LaunchedBallPrimitiveDestroyed_Params
	{
	public:
		class AScramPrimitiveActor*                                DestroyedPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SCORE AND DISPLAY
	 */
	struct ATN_Challenge_02_DoubleCross_C_SCOREANDDISPLAY_Params
	{
	public:
		int32_t                                                    ScoreValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             BallStrikePos;                                           // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveBeginPlay
	 */
	struct ATN_Challenge_02_DoubleCross_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.StartGame
	 */
	struct ATN_Challenge_02_DoubleCross_C_StartGame_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveEndPlay
	 */
	struct ATN_Challenge_02_DoubleCross_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerPresenting
	 */
	struct ATN_Challenge_02_DoubleCross_C_AnnouncerPresenting_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.NotifyChallengeContinue
	 */
	struct ATN_Challenge_02_DoubleCross_C_NotifyChallengeContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SpeedUpTimer
	 */
	struct ATN_Challenge_02_DoubleCross_C_SpeedUpTimer_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.GameEnd
	 */
	struct ATN_Challenge_02_DoubleCross_C_GameEnd_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.TN_TriggerCountdown
	 */
	struct ATN_Challenge_02_DoubleCross_C_TN_TriggerCountdown_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHitModifyCollision
	 */
	struct ATN_Challenge_02_DoubleCross_C_OnBallHitModifyCollision_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerExitSequenceComplete
	 */
	struct ATN_Challenge_02_DoubleCross_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Short Cut
	 */
	struct ATN_Challenge_02_DoubleCross_C_ShortCut_Params
	{	};

	/**
	 * Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ExecuteUbergraph_TN_Challenge_02_DoubleCross
	 */
	struct ATN_Challenge_02_DoubleCross_C_ExecuteUbergraph_TN_Challenge_02_DoubleCross_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
