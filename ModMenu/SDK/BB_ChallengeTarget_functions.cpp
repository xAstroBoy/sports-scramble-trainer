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

// Function BB_ChallengeTarget.BB_ChallengeTarget_C.SetUpTarget
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_ChallengeTarget_C::SetUpTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.SetUpTarget");

	ABB_ChallengeTarget_C_SetUpTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget.BB_ChallengeTarget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_ChallengeTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.UserConstructionScript");

	ABB_ChallengeTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget.BB_ChallengeTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_ChallengeTarget_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.ReceiveBeginPlay");

	ABB_ChallengeTarget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget.BB_ChallengeTarget_C.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ChallengeTarget_C::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.OnTriggered");

	ABB_ChallengeTarget_C_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget.BB_ChallengeTarget_C.ShrinkDestroy
// (BlueprintCallable, BlueprintEvent)
void ABB_ChallengeTarget_C::ShrinkDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.ShrinkDestroy");

	ABB_ChallengeTarget_C_ShrinkDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget.BB_ChallengeTarget_C.ExecuteUbergraph_BB_ChallengeTarget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ChallengeTarget_C::ExecuteUbergraph_BB_ChallengeTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.ExecuteUbergraph_BB_ChallengeTarget");

	ABB_ChallengeTarget_C_ExecuteUbergraph_BB_ChallengeTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_ChallengeTarget.BB_ChallengeTarget_C.OnTriggeredHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABB_ChallengeTarget_C*   NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_ChallengeTarget_C::OnTriggeredHit__DelegateSignature(class ABB_ChallengeTarget_C* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.OnTriggeredHit__DelegateSignature");

	ABB_ChallengeTarget_C_OnTriggeredHit__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
