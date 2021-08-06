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

// Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TN_SlappyFish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.UserConstructionScript");

	ABP_TrophyAward_TN_SlappyFish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.DebugEarn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TN_SlappyFish_C::DebugEarn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.DebugEarn");

	ABP_TrophyAward_TN_SlappyFish_C_DebugEarn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.OnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATennisBall*             TennisBall                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATN_Instrument_Base_C*   Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_ETennisBallType BallType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TN_SlappyFish_C::OnHit(class ATennisBall* TennisBall, class ATN_Instrument_Base_C* Instrument, SportsScramble_ETennisBallType BallType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.OnHit");

	ABP_TrophyAward_TN_SlappyFish_C_OnHit_Params params;
	params.TennisBall = TennisBall;
	params.Instrument = Instrument;
	params.BallType = BallType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.ExecuteUbergraph_BP_TrophyAward_TN_SlappyFish
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TN_SlappyFish_C::ExecuteUbergraph_BP_TrophyAward_TN_SlappyFish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C.ExecuteUbergraph_BP_TrophyAward_TN_SlappyFish");

	ABP_TrophyAward_TN_SlappyFish_C_ExecuteUbergraph_BP_TrophyAward_TN_SlappyFish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
