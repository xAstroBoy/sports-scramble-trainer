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
	 * Function GutterTracker_BP.GutterTracker_BP_C.FireLeftParticle
	 */
	struct UGutterTracker_BP_C_FireLeftParticle_Params
	{	};

	/**
	 * Function GutterTracker_BP.GutterTracker_BP_C.FireRightParticle
	 */
	struct UGutterTracker_BP_C_FireRightParticle_Params
	{	};

	/**
	 * Function GutterTracker_BP.GutterTracker_BP_C.Left Net MultiCast
	 */
	struct UGutterTracker_BP_C_LeftNetMultiCast_Params
	{	};

	/**
	 * Function GutterTracker_BP.GutterTracker_BP_C.Right Net Multicast
	 */
	struct UGutterTracker_BP_C_RightNetMulticast_Params
	{	};

	/**
	 * Function GutterTracker_BP.GutterTracker_BP_C.ReceiveEndPlay
	 */
	struct UGutterTracker_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GutterTracker_BP.GutterTracker_BP_C.Left Server Callup
	 */
	struct UGutterTracker_BP_C_LeftServerCallup_Params
	{	};

	/**
	 * Function GutterTracker_BP.GutterTracker_BP_C.Right Server Callup
	 */
	struct UGutterTracker_BP_C_RightServerCallup_Params
	{	};

	/**
	 * Function GutterTracker_BP.GutterTracker_BP_C.ExecuteUbergraph_GutterTracker_BP
	 */
	struct UGutterTracker_BP_C_ExecuteUbergraph_GutterTracker_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
