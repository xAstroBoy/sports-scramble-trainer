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

// Function LaneEndBallTrigger.LaneEndBallTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ALaneEndBallTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LaneEndBallTrigger.LaneEndBallTrigger_C.UserConstructionScript");

	ALaneEndBallTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LaneEndBallTrigger.LaneEndBallTrigger_C.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALaneEndBallTrigger_C::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function LaneEndBallTrigger.LaneEndBallTrigger_C.OnTriggered");

	ALaneEndBallTrigger_C_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LaneEndBallTrigger.LaneEndBallTrigger_C.ExecuteUbergraph_LaneEndBallTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALaneEndBallTrigger_C::ExecuteUbergraph_LaneEndBallTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LaneEndBallTrigger.LaneEndBallTrigger_C.ExecuteUbergraph_LaneEndBallTrigger");

	ALaneEndBallTrigger_C_ExecuteUbergraph_LaneEndBallTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LaneEndBallTrigger.LaneEndBallTrigger_C.TriggeredByBall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALaneEndBallTrigger_C::TriggeredByBall__DelegateSignature(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function LaneEndBallTrigger.LaneEndBallTrigger_C.TriggeredByBall__DelegateSignature");

	ALaneEndBallTrigger_C_TriggeredByBall__DelegateSignature_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
