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
	 * Function LaneEndBallTrigger.LaneEndBallTrigger_C.UserConstructionScript
	 */
	struct ALaneEndBallTrigger_C_UserConstructionScript_Params
	{	};

	/**
	 * Function LaneEndBallTrigger.LaneEndBallTrigger_C.OnTriggered
	 */
	struct ALaneEndBallTrigger_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LaneEndBallTrigger.LaneEndBallTrigger_C.ExecuteUbergraph_LaneEndBallTrigger
	 */
	struct ALaneEndBallTrigger_C_ExecuteUbergraph_LaneEndBallTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LaneEndBallTrigger.LaneEndBallTrigger_C.TriggeredByBall__DelegateSignature
	 */
	struct ALaneEndBallTrigger_C_TriggeredByBall__DelegateSignature_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
