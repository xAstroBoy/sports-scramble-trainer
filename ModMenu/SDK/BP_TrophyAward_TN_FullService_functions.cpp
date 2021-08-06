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

// Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.GetService
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_ETennisServiceStyle ServiceStyle                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TN_FullService_C::GetService(SportsScramble_ETennisServiceStyle* ServiceStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.GetService");

	ABP_TrophyAward_TN_FullService_C_GetService_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServiceStyle != nullptr)
		*ServiceStyle = params.ServiceStyle;

}


// Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TN_FullService_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.UserConstructionScript");

	ABP_TrophyAward_TN_FullService_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.DebugEarn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TN_FullService_C::DebugEarn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.DebugEarn");

	ABP_TrophyAward_TN_FullService_C_DebugEarn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.OnScorePoint
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TN_FullService_C::OnScorePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.OnScorePoint");

	ABP_TrophyAward_TN_FullService_C_OnScorePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TrophyAward_TN_FullService_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.ReceiveBeginPlay");

	ABP_TrophyAward_TN_FullService_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.OnMatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TN_FullService_C::OnMatchComplete(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.OnMatchComplete");

	ABP_TrophyAward_TN_FullService_C_OnMatchComplete_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.BallInPlay
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_TN_FullService_C::BallInPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.BallInPlay");

	ABP_TrophyAward_TN_FullService_C_BallInPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.ExecuteUbergraph_BP_TrophyAward_TN_FullService
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_TN_FullService_C::ExecuteUbergraph_BP_TrophyAward_TN_FullService(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_FullService.BP_TrophyAward_TN_FullService_C.ExecuteUbergraph_BP_TrophyAward_TN_FullService");

	ABP_TrophyAward_TN_FullService_C_ExecuteUbergraph_BP_TrophyAward_TN_FullService_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
