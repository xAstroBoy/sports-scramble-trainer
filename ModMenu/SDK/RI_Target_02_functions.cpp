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

// Function RI_Target_02.RI_Target_02_C.HideBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARI_Target_02_C::HideBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.HideBallTarget");

	ARI_Target_02_C_HideBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function RI_Target_02.RI_Target_02_C.ShowBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARI_Target_02_C::ShowBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ShowBallTarget");

	ARI_Target_02_C_ShowBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function RI_Target_02.RI_Target_02_C.FlashScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ScoreFlashed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ARI_Target_02_C::FlashScore(int score, const struct FSlateColor& Color, bool* ScoreFlashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.FlashScore");

	ARI_Target_02_C_FlashScore_Params params;
	params.score = score;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreFlashed != nullptr)
		*ScoreFlashed = params.ScoreFlashed;

}


// Function RI_Target_02.RI_Target_02_C.RemoveMarks
// (Public, BlueprintCallable, BlueprintEvent)
void ARI_Target_02_C::RemoveMarks()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.RemoveMarks");

	ARI_Target_02_C_RemoveMarks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ARI_Target_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.UserConstructionScript");

	ARI_Target_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.ChangeSize__FinishedFunc
// (BlueprintEvent)
void ARI_Target_02_C::ChangeSize__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ChangeSize__FinishedFunc");

	ARI_Target_02_C_ChangeSize__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.ChangeSize__UpdateFunc
// (BlueprintEvent)
void ARI_Target_02_C::ChangeSize__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ChangeSize__UpdateFunc");

	ARI_Target_02_C_ChangeSize__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ARI_Target_02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ReceiveBeginPlay");

	ARI_Target_02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.ScoreOuter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_Target_02_C::ScoreOuter(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ScoreOuter");

	ARI_Target_02_C_ScoreOuter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.ScoreInner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_Target_02_C::ScoreInner(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ScoreInner");

	ARI_Target_02_C_ScoreInner_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.TargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_Target_02_C::TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.TargetHit");

	ARI_Target_02_C_TargetHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.FlashOuter
// (BlueprintCallable, BlueprintEvent)
void ARI_Target_02_C::FlashOuter()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.FlashOuter");

	ARI_Target_02_C_FlashOuter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.FlashInner
// (BlueprintCallable, BlueprintEvent)
void ARI_Target_02_C::FlashInner()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.FlashInner");

	ARI_Target_02_C_FlashInner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.HideScoreOnDelay
// (BlueprintCallable, BlueprintEvent)
void ARI_Target_02_C::HideScoreOnDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.HideScoreOnDelay");

	ARI_Target_02_C_HideScoreOnDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.Score Middle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_Target_02_C::Score_Middle(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.Score Middle");

	ARI_Target_02_C_Score_Middle_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.FlashMiddle
// (BlueprintCallable, BlueprintEvent)
void ARI_Target_02_C::FlashMiddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.FlashMiddle");

	ARI_Target_02_C_FlashMiddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.Grow
// (BlueprintCallable, BlueprintEvent)
void ARI_Target_02_C::Grow()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.Grow");

	ARI_Target_02_C_Grow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.Shrink
// (BlueprintCallable, BlueprintEvent)
void ARI_Target_02_C::Shrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.Shrink");

	ARI_Target_02_C_Shrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ARI_Target_02_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ReceiveDestroyed");

	ARI_Target_02_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.ExecuteUbergraph_RI_Target_02
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_Target_02_C::ExecuteUbergraph_RI_Target_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ExecuteUbergraph_RI_Target_02");

	ARI_Target_02_C_ExecuteUbergraph_RI_Target_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RI_Target_02.RI_Target_02_C.RI_Target_02_Hit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PayloadActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  BallTargetActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            RegionHit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ARI_Target_02_C::RI_Target_02_Hit__DelegateSignature(class AActor* PayloadActor, class AActor* BallTargetActor, int RegionHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.RI_Target_02_Hit__DelegateSignature");

	ARI_Target_02_C_RI_Target_02_Hit__DelegateSignature_Params params;
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
