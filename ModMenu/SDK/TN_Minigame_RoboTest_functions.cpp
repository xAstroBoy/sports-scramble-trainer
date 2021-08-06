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

// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Minigame_RoboTest_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.AddActorToGameElementList");

	ATN_Minigame_RoboTest_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Minigame_RoboTest_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.Shutdown");

	ATN_Minigame_RoboTest_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.RefreshActivePayloads
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_RoboTest_C::RefreshActivePayloads()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.RefreshActivePayloads");

	ATN_Minigame_RoboTest_C_RefreshActivePayloads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.IsStreakContinued?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PayloadActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           StreakContinues                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Minigame_RoboTest_C::IsStreakContinued_(class AActor* PayloadActor, bool* StreakContinues)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.IsStreakContinued?");

	ATN_Minigame_RoboTest_C_IsStreakContinued__Params params;
	params.PayloadActor = PayloadActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StreakContinues != nullptr)
		*StreakContinues = params.StreakContinues;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.SpawnGameElements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_RoboTest_C::SpawnGameElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.SpawnGameElements");

	ATN_Minigame_RoboTest_C_SpawnGameElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.UpdateScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_RoboTest_C::UpdateScore(int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.UpdateScore");

	ATN_Minigame_RoboTest_C_UpdateScore_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_RoboTest_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.Initialize");

	ATN_Minigame_RoboTest_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_RoboTest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.UserConstructionScript");

	ATN_Minigame_RoboTest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_Minigame_RoboTest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.ReceiveBeginPlay");

	ATN_Minigame_RoboTest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.AddScore2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PayloadActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  BallTargetActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            RegionHit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_RoboTest_C::AddScore2(class AActor* PayloadActor, class AActor* BallTargetActor, int RegionHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.AddScore2");

	ATN_Minigame_RoboTest_C_AddScore2_Params params;
	params.PayloadActor = PayloadActor;
	params.BallTargetActor = BallTargetActor;
	params.RegionHit = RegionHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ATN_Minigame_RoboTest_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.DelayDestroy");

	ATN_Minigame_RoboTest_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.NewBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewBallActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_RoboTest_C::NewBall(class AActor* NewBallActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.NewBall");

	ATN_Minigame_RoboTest_C_NewBall_Params params;
	params.NewBallActor = NewBallActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.GameLoop
// (BlueprintCallable, BlueprintEvent)
void ATN_Minigame_RoboTest_C::GameLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.GameLoop");

	ATN_Minigame_RoboTest_C_GameLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.ExecuteUbergraph_TN_Minigame_RoboTest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_RoboTest_C::ExecuteUbergraph_TN_Minigame_RoboTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_RoboTest.TN_Minigame_RoboTest_C.ExecuteUbergraph_TN_Minigame_RoboTest");

	ATN_Minigame_RoboTest_C_ExecuteUbergraph_TN_Minigame_RoboTest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
