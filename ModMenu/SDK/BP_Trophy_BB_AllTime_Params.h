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
	 * Function BP_Trophy_BB_AllTime.BP_Trophy_BB_AllTime_C.UserConstructionScript
	 */
	struct ABP_Trophy_BB_AllTime_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Trophy_BB_AllTime.BP_Trophy_BB_AllTime_C.DebugEarn
	 */
	struct ABP_Trophy_BB_AllTime_C_DebugEarn_Params
	{	};

	/**
	 * Function BP_Trophy_BB_AllTime.BP_Trophy_BB_AllTime_C.HomeRun
	 */
	struct ABP_Trophy_BB_AllTime_C_HomeRun_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Trophy_BB_AllTime.BP_Trophy_BB_AllTime_C.ExecuteUbergraph_BP_Trophy_BB_AllTime
	 */
	struct ABP_Trophy_BB_AllTime_C_ExecuteUbergraph_BP_Trophy_BB_AllTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7VL0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
