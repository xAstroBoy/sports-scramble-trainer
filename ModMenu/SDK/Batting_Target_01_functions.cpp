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

// Function Batting_Target_01.Batting_Target_01_C.ShowScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
void ABatting_Target_01_C::ShowScore(int score, const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.ShowScore");

	ABatting_Target_01_C_ShowScore_Params params;
	params.score = score;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABatting_Target_01_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.Initialize");

	ABatting_Target_01_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABatting_Target_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.UserConstructionScript");

	ABatting_Target_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.ChangeTargetSize__FinishedFunc
// (BlueprintEvent)
void ABatting_Target_01_C::ChangeTargetSize__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.ChangeTargetSize__FinishedFunc");

	ABatting_Target_01_C_ChangeTargetSize__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.ChangeTargetSize__UpdateFunc
// (BlueprintEvent)
void ABatting_Target_01_C::ChangeTargetSize__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.ChangeTargetSize__UpdateFunc");

	ABatting_Target_01_C_ChangeTargetSize__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABatting_Target_01_C::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.OnTriggered");

	ABatting_Target_01_C_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABatting_Target_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.ReceiveBeginPlay");

	ABatting_Target_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.Grow
// (BlueprintCallable, BlueprintEvent)
void ABatting_Target_01_C::Grow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.Grow");

	ABatting_Target_01_C_Grow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.Shrink
// (BlueprintCallable, BlueprintEvent)
void ABatting_Target_01_C::Shrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.Shrink");

	ABatting_Target_01_C_Shrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.ResetTargetDispatcher
// (BlueprintCallable, BlueprintEvent)
void ABatting_Target_01_C::ResetTargetDispatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.ResetTargetDispatcher");

	ABatting_Target_01_C_ResetTargetDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.ExecuteUbergraph_Batting_Target_01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABatting_Target_01_C::ExecuteUbergraph_Batting_Target_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.ExecuteUbergraph_Batting_Target_01");

	ABatting_Target_01_C_ExecuteUbergraph_Batting_Target_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Batting_Target_01.Batting_Target_01_C.TargetOverlapDetection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABatting_Target_01_C::TargetOverlapDetection__DelegateSignature(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function Batting_Target_01.Batting_Target_01_C.TargetOverlapDetection__DelegateSignature");

	ABatting_Target_01_C_TargetOverlapDetection__DelegateSignature_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
