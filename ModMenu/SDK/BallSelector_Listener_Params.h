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
	 * Function BallSelector_Listener.BallSelector_Listener_C.UserConstructionScript
	 */
	struct ABallSelector_Listener_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BallSelector_Listener.BallSelector_Listener_C.ReceiveBeginPlay
	 */
	struct ABallSelector_Listener_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BallSelector_Listener.BallSelector_Listener_C.ReceiveBaseballEvent
	 */
	struct ABallSelector_Listener_C_ReceiveBaseballEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallSelector_Listener.BallSelector_Listener_C.ReceiveEndPlay
	 */
	struct ABallSelector_Listener_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BallSelector_Listener.BallSelector_Listener_C.Sides_Switched
	 */
	struct ABallSelector_Listener_C_Sides_Switched_Params
	{	};

	/**
	 * Function BallSelector_Listener.BallSelector_Listener_C.ExecuteUbergraph_BallSelector_Listener
	 */
	struct ABallSelector_Listener_C_ExecuteUbergraph_BallSelector_Listener_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_03X4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
