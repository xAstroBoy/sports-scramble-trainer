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
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SetupInfoText
	 */
	struct ATN_Challenge_04_Accelerator_C_SetupInfoText_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AddActorToGameElementList
	 */
	struct ATN_Challenge_04_Accelerator_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shutdown
	 */
	struct ATN_Challenge_04_Accelerator_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Initialize
	 */
	struct ATN_Challenge_04_Accelerator_C_Initialize_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.UserConstructionScript
	 */
	struct ATN_Challenge_04_Accelerator_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveBeginPlay
	 */
	struct ATN_Challenge_04_Accelerator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DelayDestroy
	 */
	struct ATN_Challenge_04_Accelerator_C_DelayDestroy_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveEndPlay
	 */
	struct ATN_Challenge_04_Accelerator_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SportManager_MatchComplete
	 */
	struct ATN_Challenge_04_Accelerator_C_SportManager_MatchComplete_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.NotifyChallengeContinue
	 */
	struct ATN_Challenge_04_Accelerator_C_NotifyChallengeContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.TN_TriggerCountdown
	 */
	struct ATN_Challenge_04_Accelerator_C_TN_TriggerCountdown_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallHit
	 */
	struct ATN_Challenge_04_Accelerator_C_BallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shortcut
	 */
	struct ATN_Challenge_04_Accelerator_C_Shortcut_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ResetScore
	 */
	struct ATN_Challenge_04_Accelerator_C_ResetScore_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.StartGame
	 */
	struct ATN_Challenge_04_Accelerator_C_StartGame_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.GameEnd
	 */
	struct ATN_Challenge_04_Accelerator_C_GameEnd_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerPresenting
	 */
	struct ATN_Challenge_04_Accelerator_C_AnnouncerPresenting_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerExitSequenceComplete
	 */
	struct ATN_Challenge_04_Accelerator_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AI_Hit_Ball
	 */
	struct ATN_Challenge_04_Accelerator_C_AI_Hit_Ball_Params
	{
	public:
		class ATennisBall*                                         Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Ready Challenge State
	 */
	struct ATN_Challenge_04_Accelerator_C_ReadyChallengeState_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DisableAIServing
	 */
	struct ATN_Challenge_04_Accelerator_C_DisableAIServing_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallnPlay
	 */
	struct ATN_Challenge_04_Accelerator_C_BallnPlay_Params
	{	};

	/**
	 * Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ExecuteUbergraph_TN_Challenge_04_Accelerator
	 */
	struct ATN_Challenge_04_Accelerator_C_ExecuteUbergraph_TN_Challenge_04_Accelerator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
