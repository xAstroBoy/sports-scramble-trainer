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

// Function TN_ReturnWall.TN_ReturnWall_C.FlashScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ScoreFlashed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_ReturnWall_C::FlashScore(int score, const struct FSlateColor& Color, bool* ScoreFlashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.FlashScore");

	ATN_ReturnWall_C_FlashScore_Params params;
	params.score = score;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreFlashed != nullptr)
		*ScoreFlashed = params.ScoreFlashed;

}


// Function TN_ReturnWall.TN_ReturnWall_C.HideBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_ReturnWall_C::HideBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.HideBallTarget");

	ATN_ReturnWall_C_HideBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function TN_ReturnWall.TN_ReturnWall_C.ShowBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_ReturnWall_C::ShowBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ShowBallTarget");

	ATN_ReturnWall_C_ShowBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function TN_ReturnWall.TN_ReturnWall_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_ReturnWall_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.RemoveGameElement");

	ATN_ReturnWall_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function TN_ReturnWall.TN_ReturnWall_C.AreStreaksContinued
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::AreStreaksContinued()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.AreStreaksContinued");

	ATN_ReturnWall_C_AreStreaksContinued_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.GetFlyTextTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ReturnWall_C::GetFlyTextTransform(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.GetFlyTextTransform");

	ATN_ReturnWall_C_GetFlyTextTransform_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Initialize");

	ATN_ReturnWall_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.RemoveImpacts
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::RemoveImpacts()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.RemoveImpacts");

	ATN_ReturnWall_C_RemoveImpacts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.CreateImpact
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ReturnWall_C::CreateImpact(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.CreateImpact");

	ATN_ReturnWall_C_CreateImpact_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.UserConstructionScript");

	ATN_ReturnWall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__FinishedFunc
// (BlueprintEvent)
void ATN_ReturnWall_C::Timeline_Move__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__FinishedFunc");

	ATN_ReturnWall_C_Timeline_Move__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__UpdateFunc
// (BlueprintEvent)
void ATN_ReturnWall_C::Timeline_Move__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__UpdateFunc");

	ATN_ReturnWall_C_Timeline_Move__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__FinishedFunc
// (BlueprintEvent)
void ATN_ReturnWall_C::Timeline_FirstResize__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__FinishedFunc");

	ATN_ReturnWall_C_Timeline_FirstResize__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__UpdateFunc
// (BlueprintEvent)
void ATN_ReturnWall_C::Timeline_FirstResize__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__UpdateFunc");

	ATN_ReturnWall_C_Timeline_FirstResize__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__FinishedFunc
// (BlueprintEvent)
void ATN_ReturnWall_C::Timeline_SecondResize__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__FinishedFunc");

	ATN_ReturnWall_C_Timeline_SecondResize__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__UpdateFunc
// (BlueprintEvent)
void ATN_ReturnWall_C::Timeline_SecondResize__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__UpdateFunc");

	ATN_ReturnWall_C_Timeline_SecondResize__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__FinishedFunc
// (BlueprintEvent)
void ATN_ReturnWall_C::Timeline_ThirdResize__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__FinishedFunc");

	ATN_ReturnWall_C_Timeline_ThirdResize__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__UpdateFunc
// (BlueprintEvent)
void ATN_ReturnWall_C::Timeline_ThirdResize__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__UpdateFunc");

	ATN_ReturnWall_C_Timeline_ThirdResize__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__FinishedFunc
// (BlueprintEvent)
void ATN_ReturnWall_C::Timeline_ResetOriginalSize__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__FinishedFunc");

	ATN_ReturnWall_C_Timeline_ResetOriginalSize__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__UpdateFunc
// (BlueprintEvent)
void ATN_ReturnWall_C::Timeline_ResetOriginalSize__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__UpdateFunc");

	ATN_ReturnWall_C_Timeline_ResetOriginalSize__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_B0FBF894492B325F15CF9C8269818093
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ReturnWall_C::OnLoaded_B0FBF894492B325F15CF9C8269818093(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_B0FBF894492B325F15CF9C8269818093");

	ATN_ReturnWall_C_OnLoaded_B0FBF894492B325F15CF9C8269818093_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_13BD0E934DE2D426979204B30A43C614
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ReturnWall_C::OnLoaded_13BD0E934DE2D426979204B30A43C614(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_13BD0E934DE2D426979204B30A43C614");

	ATN_ReturnWall_C_OnLoaded_13BD0E934DE2D426979204B30A43C614_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ReturnWall_C::OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361");

	ATN_ReturnWall_C_OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.RiseUp
// (BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::RiseUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.RiseUp");

	ATN_ReturnWall_C_RiseUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.LowerDown
// (BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::LowerDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.LowerDown");

	ATN_ReturnWall_C_LowerDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_ReturnWall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ReceiveBeginPlay");

	ATN_ReturnWall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.TargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ReturnWall_C::TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.TargetHit");

	ATN_ReturnWall_C_TargetHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ReturnWall_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ReceiveEndPlay");

	ATN_ReturnWall_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakHits
// (BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::CalculateStreakHits()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakHits");

	ATN_ReturnWall_C_CalculateStreakHits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.CalculateCumulativeHits
// (BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::CalculateCumulativeHits()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.CalculateCumulativeHits");

	ATN_ReturnWall_C_CalculateCumulativeHits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.FirstResize
// (BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::FirstResize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.FirstResize");

	ATN_ReturnWall_C_FirstResize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.SecondResize
// (BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::SecondResize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.SecondResize");

	ATN_ReturnWall_C_SecondResize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.ThirdResize
// (BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::ThirdResize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ThirdResize");

	ATN_ReturnWall_C_ThirdResize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.ResetOriginalSize
// (BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::ResetOriginalSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ResetOriginalSize");

	ATN_ReturnWall_C_ResetOriginalSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakMultiplier
// (BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::CalculateStreakMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakMultiplier");

	ATN_ReturnWall_C_CalculateStreakMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.TargetMaterialFlash
// (BlueprintCallable, BlueprintEvent)
void ATN_ReturnWall_C::TargetMaterialFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.TargetMaterialFlash");

	ATN_ReturnWall_C_TargetMaterialFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.ExecuteUbergraph_TN_ReturnWall
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ReturnWall_C::ExecuteUbergraph_TN_ReturnWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ExecuteUbergraph_TN_ReturnWall");

	ATN_ReturnWall_C_ExecuteUbergraph_TN_ReturnWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_ReturnWall.TN_ReturnWall_C.ReturnWallHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentStreak                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_ReturnWall_C::ReturnWallHit__DelegateSignature(int CurrentStreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ReturnWallHit__DelegateSignature");

	ATN_ReturnWall_C_ReturnWallHit__DelegateSignature_Params params;
	params.CurrentStreak = CurrentStreak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
