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
	 * Function BB_ChallengeTarget.BB_ChallengeTarget_C.SetUpTarget
	 */
	struct ABB_ChallengeTarget_C_SetUpTarget_Params
	{	};

	/**
	 * Function BB_ChallengeTarget.BB_ChallengeTarget_C.UserConstructionScript
	 */
	struct ABB_ChallengeTarget_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_ChallengeTarget.BB_ChallengeTarget_C.ReceiveBeginPlay
	 */
	struct ABB_ChallengeTarget_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_ChallengeTarget.BB_ChallengeTarget_C.OnTriggered
	 */
	struct ABB_ChallengeTarget_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_ChallengeTarget.BB_ChallengeTarget_C.ShrinkDestroy
	 */
	struct ABB_ChallengeTarget_C_ShrinkDestroy_Params
	{	};

	/**
	 * Function BB_ChallengeTarget.BB_ChallengeTarget_C.ExecuteUbergraph_BB_ChallengeTarget
	 */
	struct ABB_ChallengeTarget_C_ExecuteUbergraph_BB_ChallengeTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2PQ8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_ChallengeTarget.BB_ChallengeTarget_C.OnTriggeredHit__DelegateSignature
	 */
	struct ABB_ChallengeTarget_C_OnTriggeredHit__DelegateSignature_Params
	{
	public:
		class ABB_ChallengeTarget_C*                               NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
