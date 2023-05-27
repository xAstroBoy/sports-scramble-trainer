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
	 * Function TN_AcceleratorBall.TN_AcceleratorBall_C.UserConstructionScript
	 */
	struct ATN_AcceleratorBall_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_AcceleratorBall.TN_AcceleratorBall_C.ReceiveEndPlay
	 */
	struct ATN_AcceleratorBall_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_AcceleratorBall.TN_AcceleratorBall_C.PlayChargedFX
	 */
	struct ATN_AcceleratorBall_C_PlayChargedFX_Params
	{
	public:
		bool                                                       NoHitSFX;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_AcceleratorBall.TN_AcceleratorBall_C.PlayChargedSliceFX
	 */
	struct ATN_AcceleratorBall_C_PlayChargedSliceFX_Params
	{	};

	/**
	 * Function TN_AcceleratorBall.TN_AcceleratorBall_C.ExecuteUbergraph_TN_AcceleratorBall
	 */
	struct ATN_AcceleratorBall_C_ExecuteUbergraph_TN_AcceleratorBall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
