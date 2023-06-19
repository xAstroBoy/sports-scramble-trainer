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
	 * Function BW_Glove.BW_Glove_C.UserConstructionScript
	 */
	struct ABW_Glove_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Glove.BW_Glove_C.ReceiveEndPlay
	 */
	struct ABW_Glove_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Glove.BW_Glove_C.BallThrown
	 */
	struct ABW_Glove_C_BallThrown_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Glove.BW_Glove_C.ReceiveBeginPlay
	 */
	struct ABW_Glove_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Glove.BW_Glove_C.OnThrowFinalized
	 */
	struct ABW_Glove_C_OnThrowFinalized_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Glove.BW_Glove_C.DestroyPrimitive
	 */
	struct ABW_Glove_C_DestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PFTZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Glove.BW_Glove_C.ExecuteUbergraph_BW_Glove
	 */
	struct ABW_Glove_C_ExecuteUbergraph_BW_Glove_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Glove.BW_Glove_C.FinalizeThrow__DelegateSignature
	 */
	struct ABW_Glove_C_FinalizeThrow__DelegateSignature_Params
	{
	public:
		class ABowlingBall*                                        BowlingBall;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
