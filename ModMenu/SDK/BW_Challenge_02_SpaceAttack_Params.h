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
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UnbindEvents
	 */
	struct ABW_Challenge_02_SpaceAttack_C_UnbindEvents_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.InitializeChallengeRoom
	 */
	struct ABW_Challenge_02_SpaceAttack_C_InitializeChallengeRoom_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.SetupInfoText
	 */
	struct ABW_Challenge_02_SpaceAttack_C_SetupInfoText_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UserConstructionScript
	 */
	struct ABW_Challenge_02_SpaceAttack_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ReceiveBeginPlay
	 */
	struct ABW_Challenge_02_SpaceAttack_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.SpawnBalls
	 */
	struct ABW_Challenge_02_SpaceAttack_C_SpawnBalls_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.NotifyChallengeContinue
	 */
	struct ABW_Challenge_02_SpaceAttack_C_NotifyChallengeContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ReceiveEndPlay
	 */
	struct ABW_Challenge_02_SpaceAttack_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.BW_TriggerCountdown
	 */
	struct ABW_Challenge_02_SpaceAttack_C_BW_TriggerCountdown_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.GameEnd
	 */
	struct ABW_Challenge_02_SpaceAttack_C_GameEnd_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.Shortcut
	 */
	struct ABW_Challenge_02_SpaceAttack_C_Shortcut_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UpdateCurrentScore
	 */
	struct ABW_Challenge_02_SpaceAttack_C_UpdateCurrentScore_Params
	{
	public:
		int32_t                                                    LaneID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentScore;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.LaneReplacement
	 */
	struct ABW_Challenge_02_SpaceAttack_C_LaneReplacement_Params
	{
	public:
		class ABowlingLane_Base_C*                                 ReplacementLane;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABowlingLane_Base_C*                                 OutgoingLane;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.UpdateAlienSpeed
	 */
	struct ABW_Challenge_02_SpaceAttack_C_UpdateAlienSpeed_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.AnnouncerExitSequenceComplete
	 */
	struct ABW_Challenge_02_SpaceAttack_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function BW_Challenge_02_SpaceAttack.BW_Challenge_02_SpaceAttack_C.ExecuteUbergraph_BW_Challenge_02_SpaceAttack
	 */
	struct ABW_Challenge_02_SpaceAttack_C_ExecuteUbergraph_BW_Challenge_02_SpaceAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
