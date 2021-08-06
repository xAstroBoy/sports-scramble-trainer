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

// Function BallTrigger.BallTrigger_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABallTrigger_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTrigger.BallTrigger_C.Initialize");

	ABallTrigger_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTrigger.BallTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABallTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTrigger.BallTrigger_C.UserConstructionScript");

	ABallTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTrigger.BallTrigger_C.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallTrigger_C::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTrigger.BallTrigger_C.OnTriggered");

	ABallTrigger_C_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTrigger.BallTrigger_C.ExecuteUbergraph_BallTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallTrigger_C::ExecuteUbergraph_BallTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTrigger.BallTrigger_C.ExecuteUbergraph_BallTrigger");

	ABallTrigger_C_ExecuteUbergraph_BallTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTrigger.BallTrigger_C.BallEnteredTrigger__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallTrigger_C::BallEnteredTrigger__DelegateSignature(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTrigger.BallTrigger_C.BallEnteredTrigger__DelegateSignature");

	ABallTrigger_C_BallEnteredTrigger__DelegateSignature_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
