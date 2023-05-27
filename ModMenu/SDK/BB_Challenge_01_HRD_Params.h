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
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.InitializeChallenge
	 */
	struct ABB_Challenge_01_HRD_C_InitializeChallenge_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.SetupInfoText
	 */
	struct ABB_Challenge_01_HRD_C_SetupInfoText_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.CheckProperAudioList
	 */
	struct ABB_Challenge_01_HRD_C_CheckProperAudioList_Params
	{
	public:
		bool                                                       UseAlternate;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NP8Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBat
	 */
	struct ABB_Challenge_01_HRD_C_RequestNewBat_Params
	{
	public:
		class UClass*                                              NewInstrumentClass;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8LQ0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBall
	 */
	struct ABB_Challenge_01_HRD_C_RequestNewBall_Params
	{
	public:
		class UClass*                                              NewBallClass;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R5AZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Cleanup
	 */
	struct ABB_Challenge_01_HRD_C_Cleanup_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.UserConstructionScript
	 */
	struct ABB_Challenge_01_HRD_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_618E959F46A70B0ED3A8958638CE6E1E
	 */
	struct ABB_Challenge_01_HRD_C_OnLoaded_618E959F46A70B0ED3A8958638CE6E1E_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_3FA9753143D16E5E38723691EAE3CEF5
	 */
	struct ABB_Challenge_01_HRD_C_OnLoaded_3FA9753143D16E5E38723691EAE3CEF5_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD
	 */
	struct ABB_Challenge_01_HRD_C_OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPlayingSequence
	 */
	struct ABB_Challenge_01_HRD_C_AnnouncerPlayingSequence_Params
	{
	public:
		class FName                                                SequenceName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPresenting
	 */
	struct ABB_Challenge_01_HRD_C_AnnouncerPresenting_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPaused
	 */
	struct ABB_Challenge_01_HRD_C_AnnouncerPaused_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveBeginPlay
	 */
	struct ABB_Challenge_01_HRD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.BB_TriggerCountdown
	 */
	struct ABB_Challenge_01_HRD_C_BB_TriggerCountdown_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Start_Game
	 */
	struct ABB_Challenge_01_HRD_C_Start_Game_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.End_Game
	 */
	struct ABB_Challenge_01_HRD_C_End_Game_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveEndPlay
	 */
	struct ABB_Challenge_01_HRD_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerExitSequenceComplete
	 */
	struct ABB_Challenge_01_HRD_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerScoredRun
	 */
	struct ABB_Challenge_01_HRD_C_PlayerScoredRun_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerHitHomerun
	 */
	struct ABB_Challenge_01_HRD_C_PlayerHitHomerun_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Shortcut
	 */
	struct ABB_Challenge_01_HRD_C_Shortcut_Params
	{	};

	/**
	 * Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ExecuteUbergraph_BB_Challenge_01_HRD
	 */
	struct ABB_Challenge_01_HRD_C_ExecuteUbergraph_BB_Challenge_01_HRD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_17BV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
