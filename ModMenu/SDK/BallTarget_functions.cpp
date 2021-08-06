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

// Function BallTarget.BallTarget_C.ShowBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBallTarget_C::ShowBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget.BallTarget_C.ShowBallTarget");

	UBallTarget_C_ShowBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BallTarget.BallTarget_C.HideBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBallTarget_C::HideBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget.BallTarget_C.HideBallTarget");

	UBallTarget_C_HideBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BallTarget.BallTarget_C.FlashScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ScoreFlashed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBallTarget_C::FlashScore(int score, const struct FSlateColor& Color, bool* ScoreFlashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BallTarget.BallTarget_C.FlashScore");

	UBallTarget_C_FlashScore_Params params;
	params.score = score;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreFlashed != nullptr)
		*ScoreFlashed = params.ScoreFlashed;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
