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
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.FlashScore
	 */
	struct ABaseballPracticeArenaLight_C_FlashScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q926[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateColor                                         Color;                                                   // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ScoreFlashed;                                            // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9YU8[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.HideBallTarget
	 */
	struct ABaseballPracticeArenaLight_C_HideBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ShowBallTarget
	 */
	struct ABaseballPracticeArenaLight_C_ShowBallTarget_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ResetTarget
	 */
	struct ABaseballPracticeArenaLight_C_ResetTarget_Params
	{	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.DeactivateEverything
	 */
	struct ABaseballPracticeArenaLight_C_DeactivateEverything_Params
	{	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.Initialize
	 */
	struct ABaseballPracticeArenaLight_C_Initialize_Params
	{	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.UserConstructionScript
	 */
	struct ABaseballPracticeArenaLight_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ReceiveBeginPlay
	 */
	struct ABaseballPracticeArenaLight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.BreakLightFixture
	 */
	struct ABaseballPracticeArenaLight_C_BreakLightFixture_Params
	{	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ScorePlayerHit
	 */
	struct ABaseballPracticeArenaLight_C_ScorePlayerHit_Params
	{
	public:
		class ABB_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.CleanupTarget
	 */
	struct ABaseballPracticeArenaLight_C_CleanupTarget_Params
	{	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ResetLightFixture
	 */
	struct ABaseballPracticeArenaLight_C_ResetLightFixture_Params
	{	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.Deactivate
	 */
	struct ABaseballPracticeArenaLight_C_Deactivate_Params
	{	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.OnTriggered
	 */
	struct ABaseballPracticeArenaLight_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ExecuteUbergraph_BaseballPracticeArenaLight
	 */
	struct ABaseballPracticeArenaLight_C_ExecuteUbergraph_BaseballPracticeArenaLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.PlayerBrokeLightFixture__DelegateSignature
	 */
	struct ABaseballPracticeArenaLight_C_PlayerBrokeLightFixture__DelegateSignature_Params
	{
	public:
		class ABB_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ScoreAmount;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.LightFixtureHitDetected__DelegateSignature
	 */
	struct ABaseballPracticeArenaLight_C_LightFixtureHitDetected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
