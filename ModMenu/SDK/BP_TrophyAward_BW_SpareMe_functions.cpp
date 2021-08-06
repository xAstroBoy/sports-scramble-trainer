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

// Function BP_TrophyAward_BW_SpareMe.BP_TrophyAward_BW_SpareMe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_SpareMe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_SpareMe.BP_TrophyAward_BW_SpareMe_C.UserConstructionScript");

	ABP_TrophyAward_BW_SpareMe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_SpareMe.BP_TrophyAward_BW_SpareMe_C.OnSpare
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_SpareMe_C::OnSpare(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_SpareMe.BP_TrophyAward_BW_SpareMe_C.OnSpare");

	ABP_TrophyAward_BW_SpareMe_C_OnSpare_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_SpareMe.BP_TrophyAward_BW_SpareMe_C.ExecuteUbergraph_BP_TrophyAward_BW_SpareMe
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_SpareMe_C::ExecuteUbergraph_BP_TrophyAward_BW_SpareMe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_SpareMe.BP_TrophyAward_BW_SpareMe_C.ExecuteUbergraph_BP_TrophyAward_BW_SpareMe");

	ABP_TrophyAward_BW_SpareMe_C_ExecuteUbergraph_BP_TrophyAward_BW_SpareMe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
