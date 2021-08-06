#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.HideTrophyInfoDisplay
struct UBP_TrophyR_Complete_C_HideTrophyInfoDisplay_Params
{
};

// Function BP_TrophyR_Complete.BP_TrophyR_Complete_C.ShowTrophyInfoDisplay
struct UBP_TrophyR_Complete_C_ShowTrophyInfoDisplay_Params
{
	struct FName                                       TrophyNameText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TrophyDescText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DateEarned;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
