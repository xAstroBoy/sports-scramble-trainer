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
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ValidateBallTrajectory
	 */
	struct ABaseballPitchingTarget_BP_C_ValidateBallTrajectory_Params
	{
	public:
		class AScramBall*                                          IncomingBall;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ValidHit;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X97F[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.SetVisibleElements
	 */
	struct ABaseballPitchingTarget_BP_C_SetVisibleElements_Params
	{	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.UserConstructionScript
	 */
	struct ABaseballPitchingTarget_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveBeginPlay
	 */
	struct ABaseballPitchingTarget_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.OnTriggered
	 */
	struct ABaseballPitchingTarget_BP_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.AutoCleanup
	 */
	struct ABaseballPitchingTarget_BP_C_AutoCleanup_Params
	{	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.Break Target
	 */
	struct ABaseballPitchingTarget_BP_C_BreakTarget_Params
	{	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalShow
	 */
	struct ABaseballPitchingTarget_BP_C_LocalShow_Params
	{	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalHide
	 */
	struct ABaseballPitchingTarget_BP_C_LocalHide_Params
	{	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ChangeTargetVisibility
	 */
	struct ABaseballPitchingTarget_BP_C_ChangeTargetVisibility_Params
	{
	public:
		bool                                                       ShowTarget;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveEndPlay
	 */
	struct ABaseballPitchingTarget_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ExecuteUbergraph_BaseballPitchingTarget_BP
	 */
	struct ABaseballPitchingTarget_BP_C_ExecuteUbergraph_BaseballPitchingTarget_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.PitchingTargetHit__DelegateSignature
	 */
	struct ABaseballPitchingTarget_BP_C_PitchingTargetHit__DelegateSignature_Params
	{
	public:
		EBaseballScrambleTargetLocations                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
