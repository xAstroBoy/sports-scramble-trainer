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
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.SetupInfoText");
		
		ABB_Challenge_04_ChinaShop_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.LaunchBall
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::LaunchBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.LaunchBall");
		
		ABB_Challenge_04_ChinaShop_C_LaunchBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateLauncherSpeeds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::UpdateLauncherSpeeds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateLauncherSpeeds");
		
		ABB_Challenge_04_ChinaShop_C_UpdateLauncherSpeeds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateBallType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::UpdateBallType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateBallType");
		
		ABB_Challenge_04_ChinaShop_C_UpdateBallType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateScoreAndBoard
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AdditionalScore                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_04_ChinaShop_C::UpdateScoreAndBoard(int32_t AdditionalScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UpdateScoreAndBoard");
		
		ABB_Challenge_04_ChinaShop_C_UpdateScoreAndBoard_Params params {};
		params.AdditionalScore = AdditionalScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.GrabInstrument
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::GrabInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.GrabInstrument");
		
		ABB_Challenge_04_ChinaShop_C_GrabInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.SpawnElements
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::SpawnElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.SpawnElements");
		
		ABB_Challenge_04_ChinaShop_C_SpawnElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Cleanup");
		
		ABB_Challenge_04_ChinaShop_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.UserConstructionScript");
		
		ABB_Challenge_04_ChinaShop_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_047EFD2642655A33283F9C92F0F88C04
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_04_ChinaShop_C::OnLoaded_047EFD2642655A33283F9C92F0F88C04(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_047EFD2642655A33283F9C92F0F88C04");
		
		ABB_Challenge_04_ChinaShop_C_OnLoaded_047EFD2642655A33283F9C92F0F88C04_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_8C015A1644FF34F0E0844D9314767423
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_04_ChinaShop_C::OnLoaded_8C015A1644FF34F0E0844D9314767423(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_8C015A1644FF34F0E0844D9314767423");
		
		ABB_Challenge_04_ChinaShop_C_OnLoaded_8C015A1644FF34F0E0844D9314767423_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_377666D14B3A393649660C81600EBD05
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_04_ChinaShop_C::OnLoaded_377666D14B3A393649660C81600EBD05(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnLoaded_377666D14B3A393649660C81600EBD05");
		
		ABB_Challenge_04_ChinaShop_C_OnLoaded_377666D14B3A393649660C81600EBD05_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.BallLaunched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewBallActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_04_ChinaShop_C::BallLaunched(class AActor* NewBallActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.BallLaunched");
		
		ABB_Challenge_04_ChinaShop_C_BallLaunched_Params params {};
		params.NewBallActor = NewBallActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ActorBroken
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABB_Ball_Base_C*                             Baseball                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WindowScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_04_ChinaShop_C::ActorBroken(class ABB_Ball_Base_C* Baseball, int32_t WindowScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ActorBroken");
		
		ABB_Challenge_04_ChinaShop_C_ActorBroken_Params params {};
		params.Baseball = Baseball;
		params.WindowScore = WindowScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.GameLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::GameLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.GameLoop");
		
		ABB_Challenge_04_ChinaShop_C_GameLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnBallHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_04_ChinaShop_C::OnBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.OnBallHit");
		
		ABB_Challenge_04_ChinaShop_C_OnBallHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::AnnouncerPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPaused");
		
		ABB_Challenge_04_ChinaShop_C_AnnouncerPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPresenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::AnnouncerPresenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPresenting");
		
		ABB_Challenge_04_ChinaShop_C_AnnouncerPresenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPlayingSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SequenceName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_04_ChinaShop_C::AnnouncerPlayingSequence(const class FName& SequenceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerPlayingSequence");
		
		ABB_Challenge_04_ChinaShop_C_AnnouncerPlayingSequence_Params params {};
		params.SequenceName = SequenceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ReceiveBeginPlay");
		
		ABB_Challenge_04_ChinaShop_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_04_ChinaShop_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ReceiveEndPlay");
		
		ABB_Challenge_04_ChinaShop_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.BB_TriggerCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::BB_TriggerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.BB_TriggerCountdown");
		
		ABB_Challenge_04_ChinaShop_C_BB_TriggerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.EndGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::EndGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.EndGame");
		
		ABB_Challenge_04_ChinaShop_C_EndGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Start_Game
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::Start_Game()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Start_Game");
		
		ABB_Challenge_04_ChinaShop_C_Start_Game_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.AnnouncerExitSequenceComplete");
		
		ABB_Challenge_04_ChinaShop_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Shortcut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_04_ChinaShop_C::Shortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.Shortcut");
		
		ABB_Challenge_04_ChinaShop_C_Shortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ExecuteUbergraph_BB_Challenge_04_ChinaShop
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_04_ChinaShop_C::ExecuteUbergraph_BB_Challenge_04_ChinaShop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C.ExecuteUbergraph_BB_Challenge_04_ChinaShop");
		
		ABB_Challenge_04_ChinaShop_C_ExecuteUbergraph_BB_Challenge_04_ChinaShop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Challenge_04_ChinaShop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Challenge_04_ChinaShop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C");
		return ptr;
	}

}


