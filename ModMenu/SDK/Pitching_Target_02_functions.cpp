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

// Function Pitching_Target_02.Pitching_Target_02_C.HideBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APitching_Target_02_C::HideBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.HideBallTarget");

	APitching_Target_02_C_HideBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function Pitching_Target_02.Pitching_Target_02_C.ShowBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APitching_Target_02_C::ShowBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.ShowBallTarget");

	APitching_Target_02_C_ShowBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function Pitching_Target_02.Pitching_Target_02_C.FlashScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ScoreFlashed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APitching_Target_02_C::FlashScore(int score, const struct FSlateColor& Color, bool* ScoreFlashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.FlashScore");

	APitching_Target_02_C_FlashScore_Params params;
	params.score = score;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreFlashed != nullptr)
		*ScoreFlashed = params.ScoreFlashed;

}


// Function Pitching_Target_02.Pitching_Target_02_C.ShowScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APitching_Target_02_C::ShowScore(int score, const struct FSlateColor& Color, const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.ShowScore");

	APitching_Target_02_C_ShowScore_Params params;
	params.score = score;
	params.Color = Color;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void APitching_Target_02_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.Initialize");

	APitching_Target_02_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.SetTargetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
void APitching_Target_02_C::SetTargetMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.SetTargetMaterial");

	APitching_Target_02_C_SetTargetMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.RemoveMarks
// (Public, BlueprintCallable, BlueprintEvent)
void APitching_Target_02_C::RemoveMarks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.RemoveMarks");

	APitching_Target_02_C_RemoveMarks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APitching_Target_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.UserConstructionScript");

	APitching_Target_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.ChangeSize__FinishedFunc
// (BlueprintEvent)
void APitching_Target_02_C::ChangeSize__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.ChangeSize__FinishedFunc");

	APitching_Target_02_C_ChangeSize__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.ChangeSize__UpdateFunc
// (BlueprintEvent)
void APitching_Target_02_C::ChangeSize__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.ChangeSize__UpdateFunc");

	APitching_Target_02_C_ChangeSize__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APitching_Target_02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.ReceiveBeginPlay");

	APitching_Target_02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.Grow
// (BlueprintCallable, BlueprintEvent)
void APitching_Target_02_C::Grow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.Grow");

	APitching_Target_02_C_Grow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.Shrink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APitching_Target_02_C::Shrink(bool PlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.Shrink");

	APitching_Target_02_C_Shrink_Params params;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.BndEvt__BallOverlapDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void APitching_Target_02_C::BndEvt__BallOverlapDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.BndEvt__BallOverlapDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APitching_Target_02_C_BndEvt__BallOverlapDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.Impact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayStrikeSound                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APitching_Target_02_C::Impact(bool PlayStrikeSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.Impact");

	APitching_Target_02_C_Impact_Params params;
	params.PlayStrikeSound = PlayStrikeSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.HideScoreOnDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APitching_Target_02_C::HideScoreOnDelay(float DelayTime, class USceneComponent* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.HideScoreOnDelay");

	APitching_Target_02_C_HideScoreOnDelay_Params params;
	params.DelayTime = DelayTime;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.ExecuteUbergraph_Pitching_Target_02
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APitching_Target_02_C::ExecuteUbergraph_Pitching_Target_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.ExecuteUbergraph_Pitching_Target_02");

	APitching_Target_02_C_ExecuteUbergraph_Pitching_Target_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Pitching_Target_02.Pitching_Target_02_C.TargetOverlapDetection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void APitching_Target_02_C::TargetOverlapDetection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pitching_Target_02.Pitching_Target_02_C.TargetOverlapDetection__DelegateSignature");

	APitching_Target_02_C_TargetOverlapDetection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
