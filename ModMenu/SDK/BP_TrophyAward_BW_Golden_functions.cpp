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

// Function BP_TrophyAward_BW_Golden.BP_TrophyAward_BW_Golden_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_Golden_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Golden.BP_TrophyAward_BW_Golden_C.UserConstructionScript");

	ABP_TrophyAward_BW_Golden_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Golden.BP_TrophyAward_BW_Golden_C.OnStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Golden_C::OnStrike(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Golden.BP_TrophyAward_BW_Golden_C.OnStrike");

	ABP_TrophyAward_BW_Golden_C_OnStrike_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Golden.BP_TrophyAward_BW_Golden_C.OnGutterBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Golden_C::OnGutterBall(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Golden.BP_TrophyAward_BW_Golden_C.OnGutterBall");

	ABP_TrophyAward_BW_Golden_C_OnGutterBall_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Golden.BP_TrophyAward_BW_Golden_C.ExecuteUbergraph_BP_TrophyAward_BW_Golden
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Golden_C::ExecuteUbergraph_BP_TrophyAward_BW_Golden(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Golden.BP_TrophyAward_BW_Golden_C.ExecuteUbergraph_BP_TrophyAward_BW_Golden");

	ABP_TrophyAward_BW_Golden_C_ExecuteUbergraph_BP_TrophyAward_BW_Golden_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
