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

// Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Trophy_BB_Candyman_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.UserConstructionScript");

	ABP_Trophy_BB_Candyman_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.OnHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Baseball                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABB_Instrument_Base_C*   Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBaseballBallType BallType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_Candyman_C::OnHit(class ABaseballBall* Baseball, class ABB_Instrument_Base_C* Instrument, SportsScramble_EBaseballBallType BallType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.OnHit");

	ABP_Trophy_BB_Candyman_C_OnHit_Params params;
	params.Baseball = Baseball;
	params.Instrument = Instrument;
	params.BallType = BallType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.DebugEarn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Trophy_BB_Candyman_C::DebugEarn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.DebugEarn");

	ABP_Trophy_BB_Candyman_C_DebugEarn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.ExecuteUbergraph_BP_Trophy_BB_Candyman
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_Candyman_C::ExecuteUbergraph_BP_Trophy_BB_Candyman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.ExecuteUbergraph_BP_Trophy_BB_Candyman");

	ABP_Trophy_BB_Candyman_C_ExecuteUbergraph_BP_Trophy_BB_Candyman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
