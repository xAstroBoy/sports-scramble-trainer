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

// Function TrainingBase.TrainingBase_C.StopFlashButtons
// (Public, BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::StopFlashButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.StopFlashButtons");

	ATrainingBase_C_StopFlashButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.FlashButtons
// (Public, BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::FlashButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.FlashButtons");

	ATrainingBase_C_FlashButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.HasPlayerCompletedTrainingRoomPreviously
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AlreadyCompleted               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrainingBase_C::HasPlayerCompletedTrainingRoomPreviously(bool* AlreadyCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.HasPlayerCompletedTrainingRoomPreviously");

	ATrainingBase_C_HasPlayerCompletedTrainingRoomPreviously_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AlreadyCompleted != nullptr)
		*AlreadyCompleted = params.AlreadyCompleted;

}


// Function TrainingBase.TrainingBase_C.DestroyAllBalls
// (Public, BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::DestroyAllBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.DestroyAllBalls");

	ATrainingBase_C_DestroyAllBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.TrainingBaseInitialize
// (Public, BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::TrainingBaseInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.TrainingBaseInitialize");

	ATrainingBase_C_TrainingBaseInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.CleanUpGameElements
// (Public, BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::CleanUpGameElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.CleanUpGameElements");

	ATrainingBase_C_CleanUpGameElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.SpawnCountDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACountdown_C*            CountdownActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrainingBase_C::SpawnCountDown(class ACountdown_C** CountdownActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.SpawnCountDown");

	ATrainingBase_C_SpawnCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CountdownActor != nullptr)
		*CountdownActor = params.CountdownActor;

}


// Function TrainingBase.TrainingBase_C.SpawnAnnouncerActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           AnnouncerAudioList             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATrainingBase_C::SpawnAnnouncerActor(TArray<struct FName>* AnnouncerAudioList)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.SpawnAnnouncerActor");

	ATrainingBase_C_SpawnAnnouncerActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnnouncerAudioList != nullptr)
		*AnnouncerAudioList = params.AnnouncerAudioList;

}


// Function TrainingBase.TrainingBase_C.SpawnPopupInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrainingBase_C::SpawnPopupInfo(const struct FText& Text, float DisplayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.SpawnPopupInfo");

	ATrainingBase_C_SpawnPopupInfo_Params params;
	params.Text = Text;
	params.DisplayTime = DisplayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.UserConstructionScript");

	ATrainingBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.OnLoaded_D422091D4680C88E550D2CBC371746CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrainingBase_C::OnLoaded_D422091D4680C88E550D2CBC371746CD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.OnLoaded_D422091D4680C88E550D2CBC371746CD");

	ATrainingBase_C_OnLoaded_D422091D4680C88E550D2CBC371746CD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.AnnouncerReady
// (BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::AnnouncerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.AnnouncerReady");

	ATrainingBase_C_AnnouncerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.ClosingAnnouncerComplete
// (BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::ClosingAnnouncerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.ClosingAnnouncerComplete");

	ATrainingBase_C_ClosingAnnouncerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.DisplayStartOfMatchInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeInOutMusic                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrainingBase_C::DisplayStartOfMatchInfo(bool FadeInOutMusic)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.DisplayStartOfMatchInfo");

	ATrainingBase_C_DisplayStartOfMatchInfo_Params params;
	params.FadeInOutMusic = FadeInOutMusic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATrainingBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.ReceiveBeginPlay");

	ATrainingBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.EndOfGame
// (BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::EndOfGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.EndOfGame");

	ATrainingBase_C_EndOfGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.MusicFadeOut
// (BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::MusicFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.MusicFadeOut");

	ATrainingBase_C_MusicFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.MusicFadeIn
// (BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::MusicFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.MusicFadeIn");

	ATrainingBase_C_MusicFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.NotifyTrainingContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrainingBase_C::NotifyTrainingContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.NotifyTrainingContinue");

	ATrainingBase_C_NotifyTrainingContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.AnnouncerPairedComplete
// (BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::AnnouncerPairedComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.AnnouncerPairedComplete");

	ATrainingBase_C_AnnouncerPairedComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.AnnouncerExitSequenceComplete");

	ATrainingBase_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.HandleSuccess
// (BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::HandleSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.HandleSuccess");

	ATrainingBase_C_HandleSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.HandleFailure
// (BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::HandleFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.HandleFailure");

	ATrainingBase_C_HandleFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrainingBase_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.ReceiveEndPlay");

	ATrainingBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.Play321
// (BlueprintCallable, BlueprintEvent)
void ATrainingBase_C::Play321()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.Play321");

	ATrainingBase_C_Play321_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.ExecuteUbergraph_TrainingBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrainingBase_C::ExecuteUbergraph_TrainingBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.ExecuteUbergraph_TrainingBase");

	ATrainingBase_C_ExecuteUbergraph_TrainingBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrainingBase.TrainingBase_C.TrainingComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResultsData            Results                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrainingBase_C::TrainingComplete__DelegateSignature(const struct FResultsData& Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.TrainingComplete__DelegateSignature");

	ATrainingBase_C_TrainingComplete__DelegateSignature_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
