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
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.PlayResultMusic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Succeeded                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallengeBase_C::PlayResultMusic(bool Succeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.PlayResultMusic");
		
		AChallengeBase_C_PlayResultMusic_Params params {};
		params.Succeeded = Succeeded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.EarnChallengeTrophy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::EarnChallengeTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.EarnChallengeTrophy");
		
		AChallengeBase_C_EarnChallengeTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.SaveIntroHasPlayed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::SaveIntroHasPlayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SaveIntroHasPlayed");
		
		AChallengeBase_C_SaveIntroHasPlayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.CheckIntroHasPlayed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IntroHasPlayed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallengeBase_C::CheckIntroHasPlayed(bool* IntroHasPlayed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.CheckIntroHasPlayed");
		
		AChallengeBase_C_CheckIntroHasPlayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntroHasPlayed != nullptr)
			*IntroHasPlayed = params.IntroHasPlayed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.DestroyAllBalls
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::DestroyAllBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.DestroyAllBalls");
		
		AChallengeBase_C_DestroyAllBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.BB_SpawnScrambleIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBB_ScramIconSetting                               Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::BB_SpawnScrambleIcon(EBB_ScramIconSetting Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.BB_SpawnScrambleIcon");
		
		AChallengeBase_C_BB_SpawnScrambleIcon_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.AwardTrophy?
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::AwardTrophy(int32_t CurrentScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AwardTrophy?");
		
		AChallengeBase_C_AwardTrophy_Params params {};
		params.CurrentScore = CurrentScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerPaired
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                AnnouncerPairedList                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AChallengeBase_C::SpawnAnnouncerPaired(TArray<class FName>* AnnouncerPairedList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerPaired");
		
		AChallengeBase_C_SpawnAnnouncerPaired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnnouncerPairedList != nullptr)
			*AnnouncerPairedList = params.AnnouncerPairedList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.VerifyNotMultiplayerGame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NotMultiplayer                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallengeBase_C::VerifyNotMultiplayerGame(bool* NotMultiplayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.VerifyNotMultiplayerGame");
		
		AChallengeBase_C_VerifyNotMultiplayerGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotMultiplayer != nullptr)
			*NotMultiplayer = params.NotMultiplayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.BW_SpawnScrambleIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::BW_SpawnScrambleIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.BW_SpawnScrambleIcon");
		
		AChallengeBase_C_BW_SpawnScrambleIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.DestroyPopupInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::DestroyPopupInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.DestroyPopupInfo");
		
		AChallengeBase_C_DestroyPopupInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.DemoDisplayInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Display_Time                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Display_Text                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AChallengeBase_C::DemoDisplayInfo(float Display_Time, const class FText& Display_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.DemoDisplayInfo");
		
		AChallengeBase_C_DemoDisplayInfo_Params params {};
		params.Display_Time = Display_Time;
		params.Display_Text = Display_Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.SpawnDemoCountdown
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::SpawnDemoCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SpawnDemoCountdown");
		
		AChallengeBase_C_SpawnDemoCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.SetAnnouncerIdle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::SetAnnouncerIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SetAnnouncerIdle");
		
		AChallengeBase_C_SetAnnouncerIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.TN_SpawnScrambleIcons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::TN_SpawnScrambleIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.TN_SpawnScrambleIcons");
		
		AChallengeBase_C_TN_SpawnScrambleIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.CleanUpGameElements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::CleanUpGameElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.CleanUpGameElements");
		
		AChallengeBase_C_CleanUpGameElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.SpawnCountDown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CountdownDelay                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GoShrinkDelay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACountdown_C*                                CountdownActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::SpawnCountDown(float CountdownDelay, float GoShrinkDelay, class ACountdown_C** CountdownActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SpawnCountDown");
		
		AChallengeBase_C_SpawnCountDown_Params params {};
		params.CountdownDelay = CountdownDelay;
		params.GoShrinkDelay = GoShrinkDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CountdownActor != nullptr)
			*CountdownActor = params.CountdownActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerActor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                AnnouncerAudioList                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AChallengeBase_C::SpawnAnnouncerActor(TArray<class FName>* AnnouncerAudioList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SpawnAnnouncerActor");
		
		AChallengeBase_C_SpawnAnnouncerActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnnouncerAudioList != nullptr)
			*AnnouncerAudioList = params.AnnouncerAudioList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.SpawnPopupInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              DisplayTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::SpawnPopupInfo(const class FText& Text, float DisplayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SpawnPopupInfo");
		
		AChallengeBase_C_SpawnPopupInfo_Params params {};
		params.Text = Text;
		params.DisplayTime = DisplayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.UserConstructionScript");
		
		AChallengeBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.OnLoaded_240F79C84511017CD505A2935D87C98D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::OnLoaded_240F79C84511017CD505A2935D87C98D(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.OnLoaded_240F79C84511017CD505A2935D87C98D");
		
		AChallengeBase_C_OnLoaded_240F79C84511017CD505A2935D87C98D_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.OnLoaded_C635C19C410089A01C0EDB9E032CD3AB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::OnLoaded_C635C19C410089A01C0EDB9E032CD3AB(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.OnLoaded_C635C19C410089A01C0EDB9E032CD3AB");
		
		AChallengeBase_C_OnLoaded_C635C19C410089A01C0EDB9E032CD3AB_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.OnLoaded_AE66B1B049760CA5F7EA9695763B44E4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::OnLoaded_AE66B1B049760CA5F7EA9695763B44E4(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.OnLoaded_AE66B1B049760CA5F7EA9695763B44E4");
		
		AChallengeBase_C_OnLoaded_AE66B1B049760CA5F7EA9695763B44E4_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.OnLoaded_47A418EE4AFE710FF392008F080B51FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::OnLoaded_47A418EE4AFE710FF392008F080B51FF(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.OnLoaded_47A418EE4AFE710FF392008F080B51FF");
		
		AChallengeBase_C_OnLoaded_47A418EE4AFE710FF392008F080B51FF_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.OnLoaded_7EC3FD0744C090F4AC8184B285AF0573
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::OnLoaded_7EC3FD0744C090F4AC8184B285AF0573(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.OnLoaded_7EC3FD0744C090F4AC8184B285AF0573");
		
		AChallengeBase_C_OnLoaded_7EC3FD0744C090F4AC8184B285AF0573_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.RestoreAllSportSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::RestoreAllSportSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.RestoreAllSportSettings");
		
		AChallengeBase_C_RestoreAllSportSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.SetTempChallengeSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::SetTempChallengeSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SetTempChallengeSettings");
		
		AChallengeBase_C_SetTempChallengeSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.AnnouncerReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::AnnouncerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerReady");
		
		AChallengeBase_C_AnnouncerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.DisplayStartOfMatchInfo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FadeInOutMusic                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChallengeBase_C::DisplayStartOfMatchInfo(bool FadeInOutMusic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.DisplayStartOfMatchInfo");
		
		AChallengeBase_C_DisplayStartOfMatchInfo_Params params {};
		params.FadeInOutMusic = FadeInOutMusic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AChallengeBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ReceiveBeginPlay");
		
		AChallengeBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.EndOfGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::EndOfGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.EndOfGame");
		
		AChallengeBase_C_EndOfGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.MusicFadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::MusicFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.MusicFadeOut");
		
		AChallengeBase_C_MusicFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.MusicFadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::MusicFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.MusicFadeIn");
		
		AChallengeBase_C_MusicFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.VoiceClipEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::VoiceClipEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.VoiceClipEnd");
		
		AChallengeBase_C_VoiceClipEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.ResumeAnnouncer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::ResumeAnnouncer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ResumeAnnouncer");
		
		AChallengeBase_C_ResumeAnnouncer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.AnnouncerPaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::AnnouncerPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerPaused");
		
		AChallengeBase_C_AnnouncerPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.SaveAllSportSettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::SaveAllSportSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SaveAllSportSettings");
		
		AChallengeBase_C_SaveAllSportSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.AnnouncerPresenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::AnnouncerPresenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerPresenting");
		
		AChallengeBase_C_AnnouncerPresenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.AnnouncerDonePresenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::AnnouncerDonePresenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerDonePresenting");
		
		AChallengeBase_C_AnnouncerDonePresenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.AnnouncerPlayingSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SequenceName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::AnnouncerPlayingSequence(const class FName& SequenceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerPlayingSequence");
		
		AChallengeBase_C_AnnouncerPlayingSequence_Params params {};
		params.SequenceName = SequenceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.NotifyChallengeContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::NotifyChallengeContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.NotifyChallengeContinue");
		
		AChallengeBase_C_NotifyChallengeContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.ShowDemoInstructions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::ShowDemoInstructions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ShowDemoInstructions");
		
		AChallengeBase_C_ShowDemoInstructions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.AnnouncerPairedComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::AnnouncerPairedComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerPairedComplete");
		
		AChallengeBase_C_AnnouncerPairedComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.AnnouncerExitSequenceComplete");
		
		AChallengeBase_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.HandleSuccess
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::HandleSuccess(int32_t CurrentScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.HandleSuccess");
		
		AChallengeBase_C_HandleSuccess_Params params {};
		params.CurrentScore = CurrentScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.HandleFailure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::HandleFailure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.HandleFailure");
		
		AChallengeBase_C_HandleFailure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.CloseTravelCapsule
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::CloseTravelCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.CloseTravelCapsule");
		
		AChallengeBase_C_CloseTravelCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ReceiveEndPlay");
		
		AChallengeBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.PlayFaster
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::PlayFaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.PlayFaster");
		
		AChallengeBase_C_PlayFaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.SetupCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::SetupCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.SetupCountdown");
		
		AChallengeBase_C_SetupCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.PlayMoreFaster
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::PlayMoreFaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.PlayMoreFaster");
		
		AChallengeBase_C_PlayMoreFaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.PlayMaxFastness
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChallengeBase_C::PlayMaxFastness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.PlayMaxFastness");
		
		AChallengeBase_C_PlayMaxFastness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.ExecuteUbergraph_ChallengeBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::ExecuteUbergraph_ChallengeBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ExecuteUbergraph_ChallengeBase");
		
		AChallengeBase_C_ExecuteUbergraph_ChallengeBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ChallengeBase.ChallengeBase_C.ChallengeLevelComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FResultsData                                Results                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChallengeBase_C::ChallengeLevelComplete__DelegateSignature(const struct FResultsData& Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChallengeBase.ChallengeBase_C.ChallengeLevelComplete__DelegateSignature");
		
		AChallengeBase_C_ChallengeLevelComplete__DelegateSignature_Params params {};
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChallengeBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChallengeBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChallengeBase.ChallengeBase_C");
		return ptr;
	}

}


