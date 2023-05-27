/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.StopFlashButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::StopFlashButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.StopFlashButtons");
		
		ATrainingBase_C_StopFlashButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.FlashButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::FlashButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.FlashButtons");
		
		ATrainingBase_C_FlashButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.HasPlayerCompletedTrainingRoomPreviously
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AlreadyCompleted                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrainingBase_C::HasPlayerCompletedTrainingRoomPreviously(bool* AlreadyCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.HasPlayerCompletedTrainingRoomPreviously");
		
		ATrainingBase_C_HasPlayerCompletedTrainingRoomPreviously_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AlreadyCompleted != nullptr)
			*AlreadyCompleted = params.AlreadyCompleted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.DestroyAllBalls
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::DestroyAllBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.DestroyAllBalls");
		
		ATrainingBase_C_DestroyAllBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.TrainingBaseInitialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::TrainingBaseInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.TrainingBaseInitialize");
		
		ATrainingBase_C_TrainingBaseInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.CleanUpGameElements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::CleanUpGameElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.CleanUpGameElements");
		
		ATrainingBase_C_CleanUpGameElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.SpawnCountDown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACountdown_C*                                CountdownActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrainingBase_C::SpawnCountDown(class ACountdown_C** CountdownActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.SpawnCountDown");
		
		ATrainingBase_C_SpawnCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CountdownActor != nullptr)
			*CountdownActor = params.CountdownActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.SpawnAnnouncerActor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                AnnouncerAudioList                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ATrainingBase_C::SpawnAnnouncerActor(TArray<class FName>* AnnouncerAudioList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.SpawnAnnouncerActor");
		
		ATrainingBase_C_SpawnAnnouncerActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnnouncerAudioList != nullptr)
			*AnnouncerAudioList = params.AnnouncerAudioList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.SpawnPopupInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              DisplayTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrainingBase_C::SpawnPopupInfo(const class FText& Text, float DisplayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.SpawnPopupInfo");
		
		ATrainingBase_C_SpawnPopupInfo_Params params {};
		params.Text = Text;
		params.DisplayTime = DisplayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.UserConstructionScript");
		
		ATrainingBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.OnLoaded_D422091D4680C88E550D2CBC371746CD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrainingBase_C::OnLoaded_D422091D4680C88E550D2CBC371746CD(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.OnLoaded_D422091D4680C88E550D2CBC371746CD");
		
		ATrainingBase_C_OnLoaded_D422091D4680C88E550D2CBC371746CD_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.AnnouncerReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::AnnouncerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.AnnouncerReady");
		
		ATrainingBase_C_AnnouncerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.ClosingAnnouncerComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::ClosingAnnouncerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.ClosingAnnouncerComplete");
		
		ATrainingBase_C_ClosingAnnouncerComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.DisplayStartOfMatchInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FadeInOutMusic                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrainingBase_C::DisplayStartOfMatchInfo(bool FadeInOutMusic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.DisplayStartOfMatchInfo");
		
		ATrainingBase_C_DisplayStartOfMatchInfo_Params params {};
		params.FadeInOutMusic = FadeInOutMusic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATrainingBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.ReceiveBeginPlay");
		
		ATrainingBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.EndOfGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::EndOfGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.EndOfGame");
		
		ATrainingBase_C_EndOfGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.MusicFadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::MusicFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.MusicFadeOut");
		
		ATrainingBase_C_MusicFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.MusicFadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::MusicFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.MusicFadeIn");
		
		ATrainingBase_C_MusicFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.NotifyTrainingContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrainingBase_C::NotifyTrainingContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.NotifyTrainingContinue");
		
		ATrainingBase_C_NotifyTrainingContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.AnnouncerPairedComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::AnnouncerPairedComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.AnnouncerPairedComplete");
		
		ATrainingBase_C_AnnouncerPairedComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.AnnouncerExitSequenceComplete");
		
		ATrainingBase_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.HandleSuccess
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::HandleSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.HandleSuccess");
		
		ATrainingBase_C_HandleSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.HandleFailure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::HandleFailure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.HandleFailure");
		
		ATrainingBase_C_HandleFailure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrainingBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.ReceiveEndPlay");
		
		ATrainingBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.Play321
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATrainingBase_C::Play321()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.Play321");
		
		ATrainingBase_C_Play321_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.ExecuteUbergraph_TrainingBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrainingBase_C::ExecuteUbergraph_TrainingBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.ExecuteUbergraph_TrainingBase");
		
		ATrainingBase_C_ExecuteUbergraph_TrainingBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrainingBase.TrainingBase_C.TrainingComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FResultsData                                Results                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrainingBase_C::TrainingComplete__DelegateSignature(const struct FResultsData& Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrainingBase.TrainingBase_C.TrainingComplete__DelegateSignature");
		
		ATrainingBase_C_TrainingComplete__DelegateSignature_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrainingBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrainingBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrainingBase.TrainingBase_C");
		return ptr;
	}

}


