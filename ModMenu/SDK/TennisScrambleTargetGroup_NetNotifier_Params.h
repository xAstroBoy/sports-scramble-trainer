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
	 * Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.UserConstructionScript
	 */
	struct ATennisScrambleTargetGroup_NetNotifier_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.OnTriggered
	 */
	struct ATennisScrambleTargetGroup_NetNotifier_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier
	 */
	struct ATennisScrambleTargetGroup_NetNotifier_C_ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R0DB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.TriggeredByBall__DelegateSignature
	 */
	struct ATennisScrambleTargetGroup_NetNotifier_C_TriggeredByBall__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
