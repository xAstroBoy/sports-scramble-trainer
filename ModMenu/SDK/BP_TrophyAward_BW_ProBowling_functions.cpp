// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_ProBowling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.UserConstructionScript");

	ABP_TrophyAward_BW_ProBowling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.OnGameEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_ProBowling_C::OnGameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.OnGameEnd");

	ABP_TrophyAward_BW_ProBowling_C_OnGameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.ExecuteUbergraph_BP_TrophyAward_BW_ProBowling
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_ProBowling_C::ExecuteUbergraph_BP_TrophyAward_BW_ProBowling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.ExecuteUbergraph_BP_TrophyAward_BW_ProBowling");

	ABP_TrophyAward_BW_ProBowling_C_ExecuteUbergraph_BP_TrophyAward_BW_ProBowling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
