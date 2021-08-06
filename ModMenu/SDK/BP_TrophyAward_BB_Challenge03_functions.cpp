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

// Function BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C.ResetProgress
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BB_Challenge03_C::ResetProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C.ResetProgress");

	ABP_TrophyAward_BB_Challenge03_C_ResetProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_BB_Challenge03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C.UserConstructionScript");

	ABP_TrophyAward_BB_Challenge03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C.RunnerHome
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BB_Challenge03_C::RunnerHome(class AScramPlayer* Player, int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C.RunnerHome");

	ABP_TrophyAward_BB_Challenge03_C_RunnerHome_Params params;
	params.Player = Player;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C.HomeRun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BB_Challenge03_C::HomeRun(class AScramPlayer* Player, int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C.HomeRun");

	ABP_TrophyAward_BB_Challenge03_C_HomeRun_Params params;
	params.Player = Player;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C.ExecuteUbergraph_BP_TrophyAward_BB_Challenge03
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_BB_Challenge03_C::ExecuteUbergraph_BP_TrophyAward_BB_Challenge03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Challenge03.BP_TrophyAward_BB_Challenge03_C.ExecuteUbergraph_BP_TrophyAward_BB_Challenge03");

	ABP_TrophyAward_BB_Challenge03_C_ExecuteUbergraph_BP_TrophyAward_BB_Challenge03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
