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
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.InitializeChallenge
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::InitializeChallenge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.InitializeChallenge");
		
		ABB_Challenge_01_HRD_C_InitializeChallenge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.SetupInfoText");
		
		ABB_Challenge_01_HRD_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.CheckProperAudioList
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               UseAlternate                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Challenge_01_HRD_C::CheckProperAudioList(bool* UseAlternate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.CheckProperAudioList");
		
		ABB_Challenge_01_HRD_C_CheckProperAudioList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UseAlternate != nullptr)
			*UseAlternate = params.UseAlternate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBat
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewInstrumentClass                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Challenge_01_HRD_C::RequestNewBat(class UClass** NewInstrumentClass, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBat");
		
		ABB_Challenge_01_HRD_C_RequestNewBat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewInstrumentClass != nullptr)
			*NewInstrumentClass = params.NewInstrumentClass;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBall
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewBallClass                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Challenge_01_HRD_C::RequestNewBall(class UClass** NewBallClass, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBall");
		
		ABB_Challenge_01_HRD_C_RequestNewBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewBallClass != nullptr)
			*NewBallClass = params.NewBallClass;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Cleanup");
		
		ABB_Challenge_01_HRD_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.UserConstructionScript");
		
		ABB_Challenge_01_HRD_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_618E959F46A70B0ED3A8958638CE6E1E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_01_HRD_C::OnLoaded_618E959F46A70B0ED3A8958638CE6E1E(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_618E959F46A70B0ED3A8958638CE6E1E");
		
		ABB_Challenge_01_HRD_C_OnLoaded_618E959F46A70B0ED3A8958638CE6E1E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_3FA9753143D16E5E38723691EAE3CEF5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_01_HRD_C::OnLoaded_3FA9753143D16E5E38723691EAE3CEF5(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_3FA9753143D16E5E38723691EAE3CEF5");
		
		ABB_Challenge_01_HRD_C_OnLoaded_3FA9753143D16E5E38723691EAE3CEF5_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_01_HRD_C::OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD");
		
		ABB_Challenge_01_HRD_C_OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPlayingSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SequenceName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_01_HRD_C::AnnouncerPlayingSequence(const class FName& SequenceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPlayingSequence");
		
		ABB_Challenge_01_HRD_C_AnnouncerPlayingSequence_Params params {};
		params.SequenceName = SequenceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPresenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::AnnouncerPresenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPresenting");
		
		ABB_Challenge_01_HRD_C_AnnouncerPresenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::AnnouncerPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPaused");
		
		ABB_Challenge_01_HRD_C_AnnouncerPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveBeginPlay");
		
		ABB_Challenge_01_HRD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.BB_TriggerCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::BB_TriggerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.BB_TriggerCountdown");
		
		ABB_Challenge_01_HRD_C_BB_TriggerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Start_Game
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::Start_Game()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Start_Game");
		
		ABB_Challenge_01_HRD_C_Start_Game_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.End_Game
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::End_Game()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.End_Game");
		
		ABB_Challenge_01_HRD_C_End_Game_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_01_HRD_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveEndPlay");
		
		ABB_Challenge_01_HRD_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerExitSequenceComplete");
		
		ABB_Challenge_01_HRD_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerScoredRun
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::PlayerScoredRun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerScoredRun");
		
		ABB_Challenge_01_HRD_C_PlayerScoredRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerHitHomerun
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::PlayerHitHomerun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerHitHomerun");
		
		ABB_Challenge_01_HRD_C_PlayerHitHomerun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Shortcut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_01_HRD_C::Shortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Shortcut");
		
		ABB_Challenge_01_HRD_C_Shortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ExecuteUbergraph_BB_Challenge_01_HRD
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_01_HRD_C::ExecuteUbergraph_BB_Challenge_01_HRD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ExecuteUbergraph_BB_Challenge_01_HRD");
		
		ABB_Challenge_01_HRD_C_ExecuteUbergraph_BB_Challenge_01_HRD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Challenge_01_HRD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Challenge_01_HRD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Challenge_01_HRD.BB_Challenge_01_HRD_C");
		return ptr;
	}

}


