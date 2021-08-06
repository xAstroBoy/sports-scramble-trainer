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

// Function BP_TrophyAward_BW_Ringer.BP_TrophyAward_BW_Ringer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_Ringer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Ringer.BP_TrophyAward_BW_Ringer_C.UserConstructionScript");

	ABP_TrophyAward_BW_Ringer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Ringer.BP_TrophyAward_BW_Ringer_C.OnGameEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_Ringer_C::OnGameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Ringer.BP_TrophyAward_BW_Ringer_C.OnGameEnd");

	ABP_TrophyAward_BW_Ringer_C_OnGameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Ringer.BP_TrophyAward_BW_Ringer_C.ExecuteUbergraph_BP_TrophyAward_BW_Ringer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Ringer_C::ExecuteUbergraph_BP_TrophyAward_BW_Ringer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Ringer.BP_TrophyAward_BW_Ringer_C.ExecuteUbergraph_BP_TrophyAward_BW_Ringer");

	ABP_TrophyAward_BW_Ringer_C_ExecuteUbergraph_BP_TrophyAward_BW_Ringer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
