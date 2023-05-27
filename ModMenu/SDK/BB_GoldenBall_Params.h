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
	 * Function BB_GoldenBall.BB_GoldenBall_C.UserConstructionScript
	 */
	struct ABB_GoldenBall_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_GoldenBall.BB_GoldenBall_C.ReceiveBeginPlay
	 */
	struct ABB_GoldenBall_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_GoldenBall.BB_GoldenBall_C.ReceiveEndPlay
	 */
	struct ABB_GoldenBall_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_GoldenBall.BB_GoldenBall_C.GoldenBallGrabbed
	 */
	struct ABB_GoldenBall_C_GoldenBallGrabbed_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_GoldenBall.BB_GoldenBall_C.ExecuteUbergraph_BB_GoldenBall
	 */
	struct ABB_GoldenBall_C_ExecuteUbergraph_BB_GoldenBall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
