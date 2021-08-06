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

// Function Countdown.Countdown_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ACountdown_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.Initialize");

	ACountdown_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ACountdown_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.UserConstructionScript");

	ACountdown_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.Timeline_ScaleUp__FinishedFunc
// (BlueprintEvent)
void ACountdown_C::Timeline_ScaleUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.Timeline_ScaleUp__FinishedFunc");

	ACountdown_C_Timeline_ScaleUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.Timeline_ScaleUp__UpdateFunc
// (BlueprintEvent)
void ACountdown_C::Timeline_ScaleUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.Timeline_ScaleUp__UpdateFunc");

	ACountdown_C_Timeline_ScaleUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACountdown_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.ReceiveBeginPlay");

	ACountdown_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.StartCountdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACountdown_C::StartCountdown(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.StartCountdown");

	ACountdown_C_StartCountdown_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.DisplayGameOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DestroyActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACountdown_C::DisplayGameOver(float Duration, bool DestroyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.DisplayGameOver");

	ACountdown_C_DisplayGameOver_Params params;
	params.Duration = Duration;
	params.DestroyActor = DestroyActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.CountdownLoop
// (BlueprintCallable, BlueprintEvent)
void ACountdown_C::CountdownLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.CountdownLoop");

	ACountdown_C_CountdownLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void ACountdown_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.ScaleUp");

	ACountdown_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.ScaleDown
// (BlueprintCallable, BlueprintEvent)
void ACountdown_C::ScaleDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.ScaleDown");

	ACountdown_C_ScaleDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.DisplayText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DestroyActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void ACountdown_C::DisplayText(float Duration, bool DestroyActor, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.DisplayText");

	ACountdown_C_DisplayText_Params params;
	params.Duration = Duration;
	params.DestroyActor = DestroyActor;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.CustomCountdown_Bowling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisplayBowl                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACountdown_C::CustomCountdown_Bowling(bool DisplayBowl)
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.CustomCountdown_Bowling");

	ACountdown_C_CustomCountdown_Bowling_Params params;
	params.DisplayBowl = DisplayBowl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.ExecuteUbergraph_Countdown
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACountdown_C::ExecuteUbergraph_Countdown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.ExecuteUbergraph_Countdown");

	ACountdown_C_ExecuteUbergraph_Countdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.BowlDisplayed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ACountdown_C::BowlDisplayed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.BowlDisplayed__DelegateSignature");

	ACountdown_C_BowlDisplayed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.OneDisplayed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ACountdown_C::OneDisplayed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.OneDisplayed__DelegateSignature");

	ACountdown_C_OneDisplayed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.TwoDisplayed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ACountdown_C::TwoDisplayed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.TwoDisplayed__DelegateSignature");

	ACountdown_C_TwoDisplayed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.ThreeDisplayed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ACountdown_C::ThreeDisplayed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.ThreeDisplayed__DelegateSignature");

	ACountdown_C_ThreeDisplayed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.GoMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ACountdown_C::GoMessage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.GoMessage__DelegateSignature");

	ACountdown_C_GoMessage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Countdown.Countdown_C.CountdownComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ACountdown_C::CountdownComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Countdown.Countdown_C.CountdownComplete__DelegateSignature");

	ACountdown_C_CountdownComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
