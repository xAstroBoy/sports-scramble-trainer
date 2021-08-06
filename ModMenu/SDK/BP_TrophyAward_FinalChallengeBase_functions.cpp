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

// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Restore
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_FinalChallengeBase_C::Restore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Restore");

	ABP_TrophyAward_FinalChallengeBase_C_Restore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.IsNewCompletion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   GameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyAward_FinalChallengeBase_C::IsNewCompletion(const struct FName& GameID, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.IsNewCompletion");

	ABP_TrophyAward_FinalChallengeBase_C_IsNewCompletion_Params params;
	params.GameID = GameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.GetCompletionCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CompletedCount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_FinalChallengeBase_C::GetCompletionCount(int* CompletedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.GetCompletionCount");

	ABP_TrophyAward_FinalChallengeBase_C_GetCompletionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CompletedCount != nullptr)
		*CompletedCount = params.CompletedCount;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.RefreshGameProgress
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_FinalChallengeBase_C::RefreshGameProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.RefreshGameProgress");

	ABP_TrophyAward_FinalChallengeBase_C_RefreshGameProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnChallengeCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ChallengeID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_FinalChallengeBase_C::OnChallengeCompleted(const struct FName& ChallengeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnChallengeCompleted");

	ABP_TrophyAward_FinalChallengeBase_C_OnChallengeCompleted_Params params;
	params.ChallengeID = ChallengeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UpdateChallengeProgress
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_FinalChallengeBase_C::UpdateChallengeProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UpdateChallengeProgress");

	ABP_TrophyAward_FinalChallengeBase_C_UpdateChallengeProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_FinalChallengeBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UserConstructionScript");

	ABP_TrophyAward_FinalChallengeBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.DebugEarn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_FinalChallengeBase_C::DebugEarn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.DebugEarn");

	ABP_TrophyAward_FinalChallengeBase_C_DebugEarn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnTrophyEarned
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_FinalChallengeBase_C::OnTrophyEarned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnTrophyEarned");

	ABP_TrophyAward_FinalChallengeBase_C_OnTrophyEarned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TrophyAward_FinalChallengeBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ReceiveBeginPlay");

	ABP_TrophyAward_FinalChallengeBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Initialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyAward_FinalChallengeBase_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Initialize");

	ABP_TrophyAward_FinalChallengeBase_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyAward_FinalChallengeBase_C::ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase");

	ABP_TrophyAward_FinalChallengeBase_C_ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
