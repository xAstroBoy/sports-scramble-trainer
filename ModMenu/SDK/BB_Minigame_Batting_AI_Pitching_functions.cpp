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

// Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Batting_AI_Pitching_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.AddActorToGameElementList");

	ABB_Minigame_Batting_AI_Pitching_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Batting_AI_Pitching_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.Shutdown");

	ABB_Minigame_Batting_AI_Pitching_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.GetRandomPitchSpeed
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_AI_Pitching_C::GetRandomPitchSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.GetRandomPitchSpeed");

	ABB_Minigame_Batting_AI_Pitching_C_GetRandomPitchSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.SetPitchSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_AI_Pitching_C::SetPitchSpeed(int Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.SetPitchSpeed");

	ABB_Minigame_Batting_AI_Pitching_C_SetPitchSpeed_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.UpdateScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_AI_Pitching_C::UpdateScore(float NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.UpdateScore");

	ABB_Minigame_Batting_AI_Pitching_C_UpdateScore_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_AI_Pitching_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.Initialize");

	ABB_Minigame_Batting_AI_Pitching_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_AI_Pitching_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.UserConstructionScript");

	ABB_Minigame_Batting_AI_Pitching_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Minigame_Batting_AI_Pitching_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.ReceiveBeginPlay");

	ABB_Minigame_Batting_AI_Pitching_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_AI_Pitching_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.DelayDestroy");

	ABB_Minigame_Batting_AI_Pitching_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.ExecuteUbergraph_BB_Minigame_Batting_AI_Pitching
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_AI_Pitching_C::ExecuteUbergraph_BB_Minigame_Batting_AI_Pitching(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_AI_Pitching.BB_Minigame_Batting_AI_Pitching_C.ExecuteUbergraph_BB_Minigame_Batting_AI_Pitching");

	ABB_Minigame_Batting_AI_Pitching_C_ExecuteUbergraph_BB_Minigame_Batting_AI_Pitching_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
