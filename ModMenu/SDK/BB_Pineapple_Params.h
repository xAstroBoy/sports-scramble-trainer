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
	 * Function BB_Pineapple.BB_Pineapple_C.UserConstructionScript
	 */
	struct ABB_Pineapple_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Pineapple.BB_Pineapple_C.ReceiveBeginPlay
	 */
	struct ABB_Pineapple_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Pineapple.BB_Pineapple_C.Impact Scripting
	 */
	struct ABB_Pineapple_C_ImpactScripting_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Pineapple.BB_Pineapple_C.ExecuteUbergraph_BB_Pineapple
	 */
	struct ABB_Pineapple_C_ExecuteUbergraph_BB_Pineapple_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VBDK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
