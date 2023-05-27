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
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SetupBallLaunchers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::SetupBallLaunchers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SetupBallLaunchers");
		
		ATN_Challenge_01_WhackATarget_C_SetupBallLaunchers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SetupInfoText");
		
		ATN_Challenge_01_WhackATarget_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.Initialize");
		
		ATN_Challenge_01_WhackATarget_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.UserConstructionScript");
		
		ATN_Challenge_01_WhackATarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.ReceiveBeginPlay");
		
		ATN_Challenge_01_WhackATarget_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.StartGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.StartGame");
		
		ATN_Challenge_01_WhackATarget_C_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_01_WhackATarget_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.ReceiveEndPlay");
		
		ATN_Challenge_01_WhackATarget_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.AnnouncerPresenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::AnnouncerPresenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.AnnouncerPresenting");
		
		ATN_Challenge_01_WhackATarget_C_AnnouncerPresenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SetTargetAnimationPlayRate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::SetTargetAnimationPlayRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SetTargetAnimationPlayRate");
		
		ATN_Challenge_01_WhackATarget_C_SetTargetAnimationPlayRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.NotifyChallengeContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_01_WhackATarget_C::NotifyChallengeContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.NotifyChallengeContinue");
		
		ATN_Challenge_01_WhackATarget_C_NotifyChallengeContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SpeedUpTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::SpeedUpTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SpeedUpTimer");
		
		ATN_Challenge_01_WhackATarget_C_SpeedUpTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SpeedUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::SpeedUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.SpeedUp");
		
		ATN_Challenge_01_WhackATarget_C_SpeedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.GameEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.GameEnd");
		
		ATN_Challenge_01_WhackATarget_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.TN_TriggerCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::TN_TriggerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.TN_TriggerCountdown");
		
		ATN_Challenge_01_WhackATarget_C_TN_TriggerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.OnBallHitModifyCollision
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_01_WhackATarget_C::OnBallHitModifyCollision(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.OnBallHitModifyCollision");
		
		ATN_Challenge_01_WhackATarget_C_OnBallHitModifyCollision_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.AnnouncerExitSequenceComplete");
		
		ATN_Challenge_01_WhackATarget_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.GetNextLauncherBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_01_WhackATarget_C::GetNextLauncherBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.GetNextLauncherBall");
		
		ATN_Challenge_01_WhackATarget_C_GetNextLauncherBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.ExecuteUbergraph_TN_Challenge_01_WhackATarget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_01_WhackATarget_C::ExecuteUbergraph_TN_Challenge_01_WhackATarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C.ExecuteUbergraph_TN_Challenge_01_WhackATarget");
		
		ATN_Challenge_01_WhackATarget_C_ExecuteUbergraph_TN_Challenge_01_WhackATarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Challenge_01_WhackATarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Challenge_01_WhackATarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Challenge_01_WhackATarget.TN_Challenge_01_WhackATarget_C");
		return ptr;
	}

}


