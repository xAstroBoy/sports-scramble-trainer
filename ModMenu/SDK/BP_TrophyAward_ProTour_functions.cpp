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

// Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.GetSkill
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSkill     Skill                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_ProTour_C::GetSkill(SportsScramble_EScramSkill* Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.GetSkill");

	ABP_TrophyAward_ProTour_C_GetSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skill != nullptr)
		*Skill = params.Skill;

}


// Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_ProTour_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.UserConstructionScript");

	ABP_TrophyAward_ProTour_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.DebugEarn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_ProTour_C::DebugEarn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.DebugEarn");

	ABP_TrophyAward_ProTour_C_DebugEarn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.OnScorePoint
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_ProTour_C::OnScorePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.OnScorePoint");

	ABP_TrophyAward_ProTour_C_OnScorePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TrophyAward_ProTour_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.ReceiveBeginPlay");

	ABP_TrophyAward_ProTour_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.BallInPlay
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_ProTour_C::BallInPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.BallInPlay");

	ABP_TrophyAward_ProTour_C_BallInPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.OnMatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_ProTour_C::OnMatchComplete(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.OnMatchComplete");

	ABP_TrophyAward_ProTour_C_OnMatchComplete_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.ExecuteUbergraph_BP_TrophyAward_ProTour
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_ProTour_C::ExecuteUbergraph_BP_TrophyAward_ProTour(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C.ExecuteUbergraph_BP_TrophyAward_ProTour");

	ABP_TrophyAward_ProTour_C_ExecuteUbergraph_BP_TrophyAward_ProTour_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
