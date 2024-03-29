﻿#pragma once

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
	 * Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.UserConstructionScript
	 */
	struct ABP_Trophy_BB_BaseBowling_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.Strike
	 */
	struct ABP_Trophy_BB_BaseBowling_C_Strike_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.PitchEvent
	 */
	struct ABP_Trophy_BB_BaseBowling_C_PitchEvent_Params
	{	};

	/**
	 * Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.BadPitch
	 */
	struct ABP_Trophy_BB_BaseBowling_C_BadPitch_Params
	{	};

	/**
	 * Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.SwingAndMiss
	 */
	struct ABP_Trophy_BB_BaseBowling_C_SwingAndMiss_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.OnHit
	 */
	struct ABP_Trophy_BB_BaseBowling_C_OnHit_Params
	{	};

	/**
	 * Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.ExecuteUbergraph_BP_Trophy_BB_BaseBowling
	 */
	struct ABP_Trophy_BB_BaseBowling_C_ExecuteUbergraph_BP_Trophy_BB_BaseBowling_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
