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

// Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_NetNotifier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.UserConstructionScript");

	ATennisScrambleTargetGroup_NetNotifier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_NetNotifier_C::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.OnTriggered");

	ATennisScrambleTargetGroup_NetNotifier_C_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisScrambleTargetGroup_NetNotifier_C::ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier");

	ATennisScrambleTargetGroup_NetNotifier_C_ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.TriggeredByBall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ATennisScrambleTargetGroup_NetNotifier_C::TriggeredByBall__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.TriggeredByBall__DelegateSignature");

	ATennisScrambleTargetGroup_NetNotifier_C_TriggeredByBall__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
