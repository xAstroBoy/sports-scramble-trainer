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
	 * Function BallTrigger.BallTrigger_C.Initialize
	 */
	struct ABallTrigger_C_Initialize_Params
	{	};

	/**
	 * Function BallTrigger.BallTrigger_C.UserConstructionScript
	 */
	struct ABallTrigger_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BallTrigger.BallTrigger_C.OnTriggered
	 */
	struct ABallTrigger_C_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallTrigger.BallTrigger_C.ExecuteUbergraph_BallTrigger
	 */
	struct ABallTrigger_C_ExecuteUbergraph_BallTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VHRT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BallTrigger.BallTrigger_C.BallEnteredTrigger__DelegateSignature
	 */
	struct ABallTrigger_C_BallEnteredTrigger__DelegateSignature_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
