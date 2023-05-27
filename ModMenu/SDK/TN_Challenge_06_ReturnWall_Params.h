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
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.SetupInfoText
	 */
	struct ATN_Challenge_06_ReturnWall_C_SetupInfoText_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.Initialize
	 */
	struct ATN_Challenge_06_ReturnWall_C_Initialize_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.UserConstructionScript
	 */
	struct ATN_Challenge_06_ReturnWall_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.StartGame
	 */
	struct ATN_Challenge_06_ReturnWall_C_StartGame_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReceiveEndPlay
	 */
	struct ATN_Challenge_06_ReturnWall_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AnnouncerPresenting
	 */
	struct ATN_Challenge_06_ReturnWall_C_AnnouncerPresenting_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.NotifyChallengeContinue
	 */
	struct ATN_Challenge_06_ReturnWall_C_NotifyChallengeContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.GameEnd
	 */
	struct ATN_Challenge_06_ReturnWall_C_GameEnd_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.TN_TriggerCountdown
	 */
	struct ATN_Challenge_06_ReturnWall_C_TN_TriggerCountdown_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReturnWallLauncherBall
	 */
	struct ATN_Challenge_06_ReturnWall_C_ReturnWallLauncherBall_Params
	{
	public:
		class AActor*                                              NewBallActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.BallHitSomething
	 */
	struct ATN_Challenge_06_ReturnWall_C_BallHitSomething_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReturnWallHit
	 */
	struct ATN_Challenge_06_ReturnWall_C_ReturnWallHit_Params
	{
	public:
		int32_t                                                    Streak;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReceiveBeginPlay
	 */
	struct ATN_Challenge_06_ReturnWall_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.Shortcut
	 */
	struct ATN_Challenge_06_ReturnWall_C_Shortcut_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AttemptLaunchBall
	 */
	struct ATN_Challenge_06_ReturnWall_C_AttemptLaunchBall_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AnnouncerExitSequenceComplete
	 */
	struct ATN_Challenge_06_ReturnWall_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ExecuteUbergraph_TN_Challenge_06_ReturnWall
	 */
	struct ATN_Challenge_06_ReturnWall_C_ExecuteUbergraph_TN_Challenge_06_ReturnWall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
