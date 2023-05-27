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
	 * Function BowlingAvatar_BP.BowlingAvatar_BP_C.UserConstructionScript
	 */
	struct ABowlingAvatar_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BowlingAvatar_BP.BowlingAvatar_BP_C.Timeline_0__FinishedFunc
	 */
	struct ABowlingAvatar_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BowlingAvatar_BP.BowlingAvatar_BP_C.Timeline_0__UpdateFunc
	 */
	struct ABowlingAvatar_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BowlingAvatar_BP.BowlingAvatar_BP_C.ReceiveBeginPlay
	 */
	struct ABowlingAvatar_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BowlingAvatar_BP.BowlingAvatar_BP_C.CapsuleOpening
	 */
	struct ABowlingAvatar_BP_C_CapsuleOpening_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAvatar_BP.BowlingAvatar_BP_C.ScaleUp
	 */
	struct ABowlingAvatar_BP_C_ScaleUp_Params
	{	};

	/**
	 * Function BowlingAvatar_BP.BowlingAvatar_BP_C.ExecuteUbergraph_BowlingAvatar_BP
	 */
	struct ABowlingAvatar_BP_C_ExecuteUbergraph_BowlingAvatar_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
