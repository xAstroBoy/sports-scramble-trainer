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
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SetupInfoText");
		
		ATN_Challenge_04_Accelerator_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Challenge_04_Accelerator_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AddActorToGameElementList");
		
		ATN_Challenge_04_Accelerator_C_AddActorToGameElementList_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_Challenge_04_Accelerator_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shutdown");
		
		ATN_Challenge_04_Accelerator_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Initialize");
		
		ATN_Challenge_04_Accelerator_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.UserConstructionScript");
		
		ATN_Challenge_04_Accelerator_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveBeginPlay");
		
		ATN_Challenge_04_Accelerator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DelayDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::DelayDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DelayDestroy");
		
		ATN_Challenge_04_Accelerator_C_DelayDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_04_Accelerator_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveEndPlay");
		
		ATN_Challenge_04_Accelerator_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SportManager_MatchComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_04_Accelerator_C::SportManager_MatchComplete(EGameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SportManager_MatchComplete");
		
		ATN_Challenge_04_Accelerator_C_SportManager_MatchComplete_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.NotifyChallengeContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_04_Accelerator_C::NotifyChallengeContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.NotifyChallengeContinue");
		
		ATN_Challenge_04_Accelerator_C_NotifyChallengeContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.TN_TriggerCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::TN_TriggerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.TN_TriggerCountdown");
		
		ATN_Challenge_04_Accelerator_C_TN_TriggerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_04_Accelerator_C::BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallHit");
		
		ATN_Challenge_04_Accelerator_C_BallHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shortcut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::Shortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shortcut");
		
		ATN_Challenge_04_Accelerator_C_Shortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ResetScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_04_Accelerator_C::ResetScore(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ResetScore");
		
		ATN_Challenge_04_Accelerator_C_ResetScore_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.StartGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.StartGame");
		
		ATN_Challenge_04_Accelerator_C_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.GameEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.GameEnd");
		
		ATN_Challenge_04_Accelerator_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerPresenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::AnnouncerPresenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerPresenting");
		
		ATN_Challenge_04_Accelerator_C_AnnouncerPresenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerExitSequenceComplete");
		
		ATN_Challenge_04_Accelerator_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AI_Hit_Ball
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATennisBall*                                 Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_04_Accelerator_C::AI_Hit_Ball(class ATennisBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AI_Hit_Ball");
		
		ATN_Challenge_04_Accelerator_C_AI_Hit_Ball_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Ready Challenge State
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::ReadyChallengeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Ready Challenge State");
		
		ATN_Challenge_04_Accelerator_C_ReadyChallengeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DisableAIServing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::DisableAIServing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DisableAIServing");
		
		ATN_Challenge_04_Accelerator_C_DisableAIServing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallnPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_04_Accelerator_C::BallnPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallnPlay");
		
		ATN_Challenge_04_Accelerator_C_BallnPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ExecuteUbergraph_TN_Challenge_04_Accelerator
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_04_Accelerator_C::ExecuteUbergraph_TN_Challenge_04_Accelerator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ExecuteUbergraph_TN_Challenge_04_Accelerator");
		
		ATN_Challenge_04_Accelerator_C_ExecuteUbergraph_TN_Challenge_04_Accelerator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Challenge_04_Accelerator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Challenge_04_Accelerator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C");
		return ptr;
	}

}


