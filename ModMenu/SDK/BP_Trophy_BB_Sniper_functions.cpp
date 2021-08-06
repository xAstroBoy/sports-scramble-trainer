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

// Function BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Trophy_BB_Sniper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C.UserConstructionScript");

	ABP_Trophy_BB_Sniper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C.TargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballPitchingTarget_BP_C* PitchingTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_Sniper_C::TargetHit(class ABaseballPitchingTarget_BP_C* PitchingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C.TargetHit");

	ABP_Trophy_BB_Sniper_C_TargetHit_Params params;
	params.PitchingTarget = PitchingTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C.ExecuteUbergraph_BP_Trophy_BB_Sniper
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trophy_BB_Sniper_C::ExecuteUbergraph_BP_Trophy_BB_Sniper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C.ExecuteUbergraph_BP_Trophy_BB_Sniper");

	ABP_Trophy_BB_Sniper_C_ExecuteUbergraph_BP_Trophy_BB_Sniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
