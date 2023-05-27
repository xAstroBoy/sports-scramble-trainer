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
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.InitializeChallenge
	 */
	struct ABB_Challenge_02_DeadEye_C_InitializeChallenge_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.Cleanup
	 */
	struct ABB_Challenge_02_DeadEye_C_Cleanup_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.UpdateScoreAndBoard
	 */
	struct ABB_Challenge_02_DeadEye_C_UpdateScoreAndBoard_Params
	{
	public:
		int32_t                                                    AddScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.Launch A Ball
	 */
	struct ABB_Challenge_02_DeadEye_C_LaunchABall_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.SpawnAndSetManager
	 */
	struct ABB_Challenge_02_DeadEye_C_SpawnAndSetManager_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.SetupInfoText
	 */
	struct ABB_Challenge_02_DeadEye_C_SetupInfoText_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.UserConstructionScript
	 */
	struct ABB_Challenge_02_DeadEye_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.OnLoaded_37E8D5894448E31F0DE345BF8859AB32
	 */
	struct ABB_Challenge_02_DeadEye_C_OnLoaded_37E8D5894448E31F0DE345BF8859AB32_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.OnLoaded_3AFD01DE4391313FA6831B9C6EF733BD
	 */
	struct ABB_Challenge_02_DeadEye_C_OnLoaded_3AFD01DE4391313FA6831B9C6EF733BD_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.OnLoaded_FD1FFDC6474C8BFCD721438D1B29A6D8
	 */
	struct ABB_Challenge_02_DeadEye_C_OnLoaded_FD1FFDC6474C8BFCD721438D1B29A6D8_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.InitiateBonusScore
	 */
	struct ABB_Challenge_02_DeadEye_C_InitiateBonusScore_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.SpawnPitchingEquipment
	 */
	struct ABB_Challenge_02_DeadEye_C_SpawnPitchingEquipment_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.Find Gloves
	 */
	struct ABB_Challenge_02_DeadEye_C_FindGloves_Params
	{
	public:
		class AActor*                                              DominantHand;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABB_Mitt_C*                                          Mitt;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.TargetScored
	 */
	struct ABB_Challenge_02_DeadEye_C_TargetScored_Params
	{
	public:
		bool                                                       bonus;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.GroupCleared
	 */
	struct ABB_Challenge_02_DeadEye_C_GroupCleared_Params
	{
	public:
		bool                                                       BonusGroup;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.BallLaunched
	 */
	struct ABB_Challenge_02_DeadEye_C_BallLaunched_Params
	{
	public:
		class AActor*                                              Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.OnLaunchedBallHit
	 */
	struct ABB_Challenge_02_DeadEye_C_OnLaunchedBallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.BallPitched
	 */
	struct ABB_Challenge_02_DeadEye_C_BallPitched_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.OnLaunchedBallCaught
	 */
	struct ABB_Challenge_02_DeadEye_C_OnLaunchedBallCaught_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.BallDestroyed
	 */
	struct ABB_Challenge_02_DeadEye_C_BallDestroyed_Params
	{
	public:
		class AScramPrimitiveActor*                                DestroyedPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.OnGlobalBallHit
	 */
	struct ABB_Challenge_02_DeadEye_C_OnGlobalBallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.BonusScoreReceived
	 */
	struct ABB_Challenge_02_DeadEye_C_BonusScoreReceived_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.SpawnSecondSetOfGold
	 */
	struct ABB_Challenge_02_DeadEye_C_SpawnSecondSetOfGold_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.ReceiveBeginPlay
	 */
	struct ABB_Challenge_02_DeadEye_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.StartGame
	 */
	struct ABB_Challenge_02_DeadEye_C_StartGame_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.TimeLoop
	 */
	struct ABB_Challenge_02_DeadEye_C_TimeLoop_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.ReceiveEndPlay
	 */
	struct ABB_Challenge_02_DeadEye_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.BB_TriggerCountdown
	 */
	struct ABB_Challenge_02_DeadEye_C_BB_TriggerCountdown_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.EndGame
	 */
	struct ABB_Challenge_02_DeadEye_C_EndGame_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.AnnouncerExitSequenceComplete
	 */
	struct ABB_Challenge_02_DeadEye_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.Shortcut
	 */
	struct ABB_Challenge_02_DeadEye_C_Shortcut_Params
	{	};

	/**
	 * Function BB_Challenge_02_DeadEye.BB_Challenge_02_DeadEye_C.ExecuteUbergraph_BB_Challenge_02_DeadEye
	 */
	struct ABB_Challenge_02_DeadEye_C_ExecuteUbergraph_BB_Challenge_02_DeadEye_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JR59[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
