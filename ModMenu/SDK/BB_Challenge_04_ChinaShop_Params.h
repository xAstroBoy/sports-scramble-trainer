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
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.SetupInfoText
	 */
	struct ABB_Challenge_04_ChinaShop_C_SetupInfoText_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.LaunchBall
	 */
	struct ABB_Challenge_04_ChinaShop_C_LaunchBall_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateLauncherSpeeds
	 */
	struct ABB_Challenge_04_ChinaShop_C_UpdateLauncherSpeeds_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateBallType
	 */
	struct ABB_Challenge_04_ChinaShop_C_UpdateBallType_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateScoreAndBoard
	 */
	struct ABB_Challenge_04_ChinaShop_C_UpdateScoreAndBoard_Params
	{
	public:
		int32_t                                                    AdditionalScore;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.GrabInstrument
	 */
	struct ABB_Challenge_04_ChinaShop_C_GrabInstrument_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.SpawnElements
	 */
	struct ABB_Challenge_04_ChinaShop_C_SpawnElements_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Cleanup
	 */
	struct ABB_Challenge_04_ChinaShop_C_Cleanup_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UserConstructionScript
	 */
	struct ABB_Challenge_04_ChinaShop_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_047EFD2642655A33283F9C92F0F88C04
	 */
	struct ABB_Challenge_04_ChinaShop_C_OnLoaded_047EFD2642655A33283F9C92F0F88C04_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_8C015A1644FF34F0E0844D9314767423
	 */
	struct ABB_Challenge_04_ChinaShop_C_OnLoaded_8C015A1644FF34F0E0844D9314767423_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_377666D14B3A393649660C81600EBD05
	 */
	struct ABB_Challenge_04_ChinaShop_C_OnLoaded_377666D14B3A393649660C81600EBD05_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.BallLaunched
	 */
	struct ABB_Challenge_04_ChinaShop_C_BallLaunched_Params
	{
	public:
		class AActor*                                              NewBallActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ActorBroken
	 */
	struct ABB_Challenge_04_ChinaShop_C_ActorBroken_Params
	{
	public:
		class ABB_Ball_Base_C*                                     Baseball;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WindowScore;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.GameLoop
	 */
	struct ABB_Challenge_04_ChinaShop_C_GameLoop_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnBallHit
	 */
	struct ABB_Challenge_04_ChinaShop_C_OnBallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPaused
	 */
	struct ABB_Challenge_04_ChinaShop_C_AnnouncerPaused_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPresenting
	 */
	struct ABB_Challenge_04_ChinaShop_C_AnnouncerPresenting_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPlayingSequence
	 */
	struct ABB_Challenge_04_ChinaShop_C_AnnouncerPlayingSequence_Params
	{
	public:
		class FName                                                SequenceName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ReceiveBeginPlay
	 */
	struct ABB_Challenge_04_ChinaShop_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ReceiveEndPlay
	 */
	struct ABB_Challenge_04_ChinaShop_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.BB_TriggerCountdown
	 */
	struct ABB_Challenge_04_ChinaShop_C_BB_TriggerCountdown_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.EndGame
	 */
	struct ABB_Challenge_04_ChinaShop_C_EndGame_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Start_Game
	 */
	struct ABB_Challenge_04_ChinaShop_C_Start_Game_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerExitSequenceComplete
	 */
	struct ABB_Challenge_04_ChinaShop_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Shortcut
	 */
	struct ABB_Challenge_04_ChinaShop_C_Shortcut_Params
	{	};

	/**
	 * Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ExecuteUbergraph_BB_Challenge_04_ChinaShop
	 */
	struct ABB_Challenge_04_ChinaShop_C_ExecuteUbergraph_BB_Challenge_04_ChinaShop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SD6E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
