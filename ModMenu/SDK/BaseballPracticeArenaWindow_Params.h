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
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.FlashScore
	 */
	struct ABaseballPracticeArenaWindow_C_FlashScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F0P0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ScoreFlashed;                                            // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZGU2[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.HideBallTarget
	 */
	struct ABaseballPracticeArenaWindow_C_HideBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ShowBallTarget
	 */
	struct ABaseballPracticeArenaWindow_C_ShowBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetTarget
	 */
	struct ABaseballPracticeArenaWindow_C_ResetTarget_Params
	{	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.DeactivateEverything
	 */
	struct ABaseballPracticeArenaWindow_C_DeactivateEverything_Params
	{	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Initialize
	 */
	struct ABaseballPracticeArenaWindow_C_Initialize_Params
	{	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.UserConstructionScript
	 */
	struct ABaseballPracticeArenaWindow_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ReceiveBeginPlay
	 */
	struct ABaseballPracticeArenaWindow_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.BreakWindow
	 */
	struct ABaseballPracticeArenaWindow_C_BreakWindow_Params
	{	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ScorePlayerHit
	 */
	struct ABaseballPracticeArenaWindow_C_ScorePlayerHit_Params
	{
	public:
		class ABB_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.CleanupTarget
	 */
	struct ABaseballPracticeArenaWindow_C_CleanupTarget_Params
	{	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetWindow
	 */
	struct ABaseballPracticeArenaWindow_C_ResetWindow_Params
	{	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Deactivate
	 */
	struct ABaseballPracticeArenaWindow_C_Deactivate_Params
	{	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.OnTriggered
	 */
	struct ABaseballPracticeArenaWindow_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ExecuteUbergraph_BaseballPracticeArenaWindow
	 */
	struct ABaseballPracticeArenaWindow_C_ExecuteUbergraph_BaseballPracticeArenaWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T1I6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.PlayerBrokeWindow__DelegateSignature
	 */
	struct ABaseballPracticeArenaWindow_C_PlayerBrokeWindow__DelegateSignature_Params
	{
	public:
		class ABB_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ScoreAmount;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.WindowOverlapDetected__DelegateSignature
	 */
	struct ABaseballPracticeArenaWindow_C_WindowOverlapDetected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
