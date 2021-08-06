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

// Function ServeLocationIndicator.ServeLocationIndicator_C.ResetBall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLocationIndicator_C::ResetBall(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.ResetBall");

	AServeLocationIndicator_C_ResetBall_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AServeLocationIndicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.UserConstructionScript");

	AServeLocationIndicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.OnLoaded_4D1D00D34A359C869029F29A6612B8F3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLocationIndicator_C::OnLoaded_4D1D00D34A359C869029F29A6612B8F3(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.OnLoaded_4D1D00D34A359C869029F29A6612B8F3");

	AServeLocationIndicator_C_OnLoaded_4D1D00D34A359C869029F29A6612B8F3_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.Show
// (Event, Public, BlueprintEvent)
void AServeLocationIndicator_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.Show");

	AServeLocationIndicator_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.Hide
// (Event, Public, BlueprintEvent)
void AServeLocationIndicator_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.Hide");

	AServeLocationIndicator_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.ServeBallGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLocationIndicator_C::ServeBallGrabbed(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.ServeBallGrabbed");

	AServeLocationIndicator_C_ServeBallGrabbed_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.ServeBallSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLocationIndicator_C::ServeBallSpawned(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.ServeBallSpawned");

	AServeLocationIndicator_C_ServeBallSpawned_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.OnPlayerEnter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLocationIndicator_C::OnPlayerEnter(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.OnPlayerEnter");

	AServeLocationIndicator_C_OnPlayerEnter_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.OnPlayerExit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLocationIndicator_C::OnPlayerExit(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.OnPlayerExit");

	AServeLocationIndicator_C_OnPlayerExit_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.AttractLoop
// (BlueprintCallable, BlueprintEvent)
void AServeLocationIndicator_C::AttractLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.AttractLoop");

	AServeLocationIndicator_C_AttractLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.StopAttract
// (BlueprintCallable, BlueprintEvent)
void AServeLocationIndicator_C::StopAttract()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.StopAttract");

	AServeLocationIndicator_C_StopAttract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.ExecuteUbergraph_ServeLocationIndicator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLocationIndicator_C::ExecuteUbergraph_ServeLocationIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.ExecuteUbergraph_ServeLocationIndicator");

	AServeLocationIndicator_C_ExecuteUbergraph_ServeLocationIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.BallSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLocationIndicator_C::BallSpawned__DelegateSignature(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.BallSpawned__DelegateSignature");

	AServeLocationIndicator_C_BallSpawned__DelegateSignature_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServeLocationIndicator.ServeLocationIndicator_C.BallGrabbed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AServeLocationIndicator_C::BallGrabbed__DelegateSignature(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServeLocationIndicator.ServeLocationIndicator_C.BallGrabbed__DelegateSignature");

	AServeLocationIndicator_C_BallGrabbed__DelegateSignature_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
