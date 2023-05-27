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
	 * Function BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C.UserConstructionScript
	 */
	struct ABP_Trophy_BB_Sniper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C.TargetHit
	 */
	struct ABP_Trophy_BB_Sniper_C_TargetHit_Params
	{
	public:
		class ABaseballPitchingTarget_BP_C*                        PitchingTarget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C.ExecuteUbergraph_BP_Trophy_BB_Sniper
	 */
	struct ABP_Trophy_BB_Sniper_C_ExecuteUbergraph_BP_Trophy_BB_Sniper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
