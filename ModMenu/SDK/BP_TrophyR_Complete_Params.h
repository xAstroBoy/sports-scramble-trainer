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
	 * Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.HideTrophyInfoDisplay
	 */
	struct UBP_TrophyR_Complete_C_HideTrophyInfoDisplay_Params
	{	};

	/**
	 * Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.ShowTrophyInfoDisplay
	 */
	struct UBP_TrophyR_Complete_C_ShowTrophyInfoDisplay_Params
	{
	public:
		class FName                                                TrophyNameText;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TrophyDescText;                                          // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                DateEarned;                                              // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
