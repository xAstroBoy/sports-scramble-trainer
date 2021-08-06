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

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Minigame_ReturnWall_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.AddActorToGameElementList");

	ATN_Minigame_ReturnWall_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Minigame_ReturnWall_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.Shutdown");

	ATN_Minigame_ReturnWall_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.SpawnGameElements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_ReturnWall_C::SpawnGameElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.SpawnGameElements");

	ATN_Minigame_ReturnWall_C_SpawnGameElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.UpdateScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_ReturnWall_C::UpdateScore(int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.UpdateScore");

	ATN_Minigame_ReturnWall_C_UpdateScore_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_ReturnWall_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.Initialize");

	ATN_Minigame_ReturnWall_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_ReturnWall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.UserConstructionScript");

	ATN_Minigame_ReturnWall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.InpActEvt_A_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ATN_Minigame_ReturnWall_C::InpActEvt_A_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.InpActEvt_A_K2Node_InputActionEvent_1");

	ATN_Minigame_ReturnWall_C_InpActEvt_A_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_Minigame_ReturnWall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ReceiveBeginPlay");

	ATN_Minigame_ReturnWall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ATN_Minigame_ReturnWall_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.DelayDestroy");

	ATN_Minigame_ReturnWall_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ReturnWallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Streak                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_ReturnWall_C::ReturnWallHit(int Streak)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ReturnWallHit");

	ATN_Minigame_ReturnWall_C_ReturnWallHit_Params params;
	params.Streak = Streak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.HideNets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewGeo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_ReturnWall_C::HideNets(const struct FName& NewGeo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.HideNets");

	ATN_Minigame_ReturnWall_C_HideNets_Params params;
	params.NewGeo = NewGeo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.AllowPlayerInput
// (BlueprintCallable, BlueprintEvent)
void ATN_Minigame_ReturnWall_C::AllowPlayerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.AllowPlayerInput");

	ATN_Minigame_ReturnWall_C_AllowPlayerInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ExecuteUbergraph_TN_Minigame_ReturnWall
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_ReturnWall_C::ExecuteUbergraph_TN_Minigame_ReturnWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ExecuteUbergraph_TN_Minigame_ReturnWall");

	ATN_Minigame_ReturnWall_C_ExecuteUbergraph_TN_Minigame_ReturnWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
