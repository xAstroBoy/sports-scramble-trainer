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

// Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_Kingpin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.UserConstructionScript");

	ABP_TrophyAward_BW_Kingpin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.OnStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Kingpin_C::OnStrike(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.OnStrike");

	ABP_TrophyAward_BW_Kingpin_C_OnStrike_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.ExecuteUbergraph_BP_TrophyAward_BW_Kingpin
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Kingpin_C::ExecuteUbergraph_BP_TrophyAward_BW_Kingpin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.ExecuteUbergraph_BP_TrophyAward_BW_Kingpin");

	ABP_TrophyAward_BW_Kingpin_C_ExecuteUbergraph_BP_TrophyAward_BW_Kingpin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
