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

// Function BallTarget_NW.BallTarget_NW_C.HideBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallTarget_NW_C::HideBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.HideBallTarget");

	ABallTarget_NW_C_HideBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BallTarget_NW.BallTarget_NW_C.ShowBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallTarget_NW_C::ShowBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ShowBallTarget");

	ABallTarget_NW_C_ShowBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BallTarget_NW.BallTarget_NW_C.FlashScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ScoreFlashed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABallTarget_NW_C::FlashScore(int score, const struct FSlateColor& Color, bool* ScoreFlashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.FlashScore");

	ABallTarget_NW_C_FlashScore_Params params;
	params.score = score;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreFlashed != nullptr)
		*ScoreFlashed = params.ScoreFlashed;

}


// Function BallTarget_NW.BallTarget_NW_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABallTarget_NW_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Initialize");

	ABallTarget_NW_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.RemoveMarks
// (Public, BlueprintCallable, BlueprintEvent)
void ABallTarget_NW_C::RemoveMarks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.RemoveMarks");

	ABallTarget_NW_C_RemoveMarks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABallTarget_NW_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.UserConstructionScript");

	ABallTarget_NW_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.ChangeSize__FinishedFunc
// (BlueprintEvent)
void ABallTarget_NW_C::ChangeSize__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ChangeSize__FinishedFunc");

	ABallTarget_NW_C_ChangeSize__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.ChangeSize__UpdateFunc
// (BlueprintEvent)
void ABallTarget_NW_C::ChangeSize__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ChangeSize__UpdateFunc");

	ABallTarget_NW_C_ChangeSize__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__FinishedFunc
// (BlueprintEvent)
void ABallTarget_NW_C::Timeline_Outer__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__FinishedFunc");

	ABallTarget_NW_C_Timeline_Outer__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__UpdateFunc
// (BlueprintEvent)
void ABallTarget_NW_C::Timeline_Outer__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__UpdateFunc");

	ABallTarget_NW_C_Timeline_Outer__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__FinishedFunc
// (BlueprintEvent)
void ABallTarget_NW_C::Timeline_Middle__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__FinishedFunc");

	ABallTarget_NW_C_Timeline_Middle__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__UpdateFunc
// (BlueprintEvent)
void ABallTarget_NW_C::Timeline_Middle__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__UpdateFunc");

	ABallTarget_NW_C_Timeline_Middle__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__FinishedFunc
// (BlueprintEvent)
void ABallTarget_NW_C::Timeline_Inner__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__FinishedFunc");

	ABallTarget_NW_C_Timeline_Inner__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__UpdateFunc
// (BlueprintEvent)
void ABallTarget_NW_C::Timeline_Inner__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__UpdateFunc");

	ABallTarget_NW_C_Timeline_Inner__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABallTarget_NW_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ReceiveBeginPlay");

	ABallTarget_NW_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.ScoreOuter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallTarget_NW_C::ScoreOuter(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ScoreOuter");

	ABallTarget_NW_C_ScoreOuter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.ScoreInner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallTarget_NW_C::ScoreInner(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ScoreInner");

	ABallTarget_NW_C_ScoreInner_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.TargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallTarget_NW_C::TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.TargetHit");

	ABallTarget_NW_C_TargetHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.FlashOuter
// (BlueprintCallable, BlueprintEvent)
void ABallTarget_NW_C::FlashOuter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.FlashOuter");

	ABallTarget_NW_C_FlashOuter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.FlashInner
// (BlueprintCallable, BlueprintEvent)
void ABallTarget_NW_C::FlashInner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.FlashInner");

	ABallTarget_NW_C_FlashInner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.Score Middle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallTarget_NW_C::Score_Middle(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Score Middle");

	ABallTarget_NW_C_Score_Middle_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.FlashMiddle
// (BlueprintCallable, BlueprintEvent)
void ABallTarget_NW_C::FlashMiddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.FlashMiddle");

	ABallTarget_NW_C_FlashMiddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.Grow
// (BlueprintCallable, BlueprintEvent)
void ABallTarget_NW_C::Grow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Grow");

	ABallTarget_NW_C_Grow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.Shrink
// (BlueprintCallable, BlueprintEvent)
void ABallTarget_NW_C::Shrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Shrink");

	ABallTarget_NW_C_Shrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABallTarget_NW_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ReceiveDestroyed");

	ABallTarget_NW_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.DelayShrink
// (BlueprintCallable, BlueprintEvent)
void ABallTarget_NW_C::DelayShrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.DelayShrink");

	ABallTarget_NW_C_DelayShrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.ResetShrink
// (BlueprintCallable, BlueprintEvent)
void ABallTarget_NW_C::ResetShrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ResetShrink");

	ABallTarget_NW_C_ResetShrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.ExecuteUbergraph_BallTarget_NW
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallTarget_NW_C::ExecuteUbergraph_BallTarget_NW(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ExecuteUbergraph_BallTarget_NW");

	ABallTarget_NW_C_ExecuteUbergraph_BallTarget_NW_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.ShrinkStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallTarget_NW_C::ShrinkStart__DelegateSignature(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ShrinkStart__DelegateSignature");

	ABallTarget_NW_C_ShrinkStart__DelegateSignature_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BallTarget_NW.BallTarget_NW_C.BallTarget_NW_Hit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PayloadActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  BallTargetActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            RegionHit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABallTarget_NW_C::BallTarget_NW_Hit__DelegateSignature(class AActor* PayloadActor, class AActor* BallTargetActor, int RegionHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.BallTarget_NW_Hit__DelegateSignature");

	ABallTarget_NW_C_BallTarget_NW_Hit__DelegateSignature_Params params;
	params.PayloadActor = PayloadActor;
	params.BallTargetActor = BallTargetActor;
	params.RegionHit = RegionHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
