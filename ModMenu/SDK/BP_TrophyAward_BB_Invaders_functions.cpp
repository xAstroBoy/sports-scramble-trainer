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

// Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.SetRequirement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            alienCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BB_Invaders_C::SetRequirement(int alienCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.SetRequirement");

	ABP_TrophyAward_BB_Invaders_C_SetRequirement_Params params;
	params.alienCount = alienCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.AlienEliminated
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BB_Invaders_C::AlienEliminated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.AlienEliminated");

	ABP_TrophyAward_BB_Invaders_C_AlienEliminated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.ResetCount
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BB_Invaders_C::ResetCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.ResetCount");

	ABP_TrophyAward_BB_Invaders_C_ResetCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BB_Invaders_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.UserConstructionScript");

	ABP_TrophyAward_BB_Invaders_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
