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
	 * Function BB_ThrowingGlove.BB_ThrowingGlove_C.UserConstructionScript
	 */
	struct ABB_ThrowingGlove_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_ThrowingGlove.BB_ThrowingGlove_C.ReceiveBeginPlay
	 */
	struct ABB_ThrowingGlove_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_ThrowingGlove.BB_ThrowingGlove_C.BallThrown
	 */
	struct ABB_ThrowingGlove_C_BallThrown_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_ThrowingGlove.BB_ThrowingGlove_C.ReceiveEndPlay
	 */
	struct ABB_ThrowingGlove_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_ThrowingGlove.BB_ThrowingGlove_C.DestroyPrimitive
	 */
	struct ABB_ThrowingGlove_C_DestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AIRG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_ThrowingGlove.BB_ThrowingGlove_C.ExecuteUbergraph_BB_ThrowingGlove
	 */
	struct ABB_ThrowingGlove_C_ExecuteUbergraph_BB_ThrowingGlove_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
