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

// Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_Limit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.UserConstructionScript");

	ABP_TrophyAward_BW_Limit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.OnGameEnd
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BW_Limit_C::OnGameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.OnGameEnd");

	ABP_TrophyAward_BW_Limit_C_OnGameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.OnGutterBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Limit_C::OnGutterBall(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.OnGutterBall");

	ABP_TrophyAward_BW_Limit_C_OnGutterBall_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.OnSpare
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Limit_C::OnSpare(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.OnSpare");

	ABP_TrophyAward_BW_Limit_C_OnSpare_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.OnStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingBall*            Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Limit_C::OnStrike(class ABowlingBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.OnStrike");

	ABP_TrophyAward_BW_Limit_C_OnStrike_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.ExecuteUbergraph_BP_TrophyAward_BW_Limit
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BW_Limit_C::ExecuteUbergraph_BP_TrophyAward_BW_Limit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Limit.BP_TrophyAward_BW_Limit_C.ExecuteUbergraph_BP_TrophyAward_BW_Limit");

	ABP_TrophyAward_BW_Limit_C_ExecuteUbergraph_BP_TrophyAward_BW_Limit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
