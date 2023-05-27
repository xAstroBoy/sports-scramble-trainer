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
	 * Function BP_Trophy_BB_RunRule.BP_Trophy_BB_RunRule_C.UserConstructionScript
	 */
	struct ABP_Trophy_BB_RunRule_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Trophy_BB_RunRule.BP_Trophy_BB_RunRule_C.RunnerHome
	 */
	struct ABP_Trophy_BB_RunRule_C_RunnerHome_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Trophy_BB_RunRule.BP_Trophy_BB_RunRule_C.ExecuteUbergraph_BP_Trophy_BB_RunRule
	 */
	struct ABP_Trophy_BB_RunRule_C_ExecuteUbergraph_BP_Trophy_BB_RunRule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
