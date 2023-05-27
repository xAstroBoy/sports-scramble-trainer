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
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.SetupInfoText");
		
		ATN_Challenge_06_ReturnWall_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.Initialize");
		
		ATN_Challenge_06_ReturnWall_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.UserConstructionScript");
		
		ATN_Challenge_06_ReturnWall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.StartGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.StartGame");
		
		ATN_Challenge_06_ReturnWall_C_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_06_ReturnWall_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReceiveEndPlay");
		
		ATN_Challenge_06_ReturnWall_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AnnouncerPresenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::AnnouncerPresenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AnnouncerPresenting");
		
		ATN_Challenge_06_ReturnWall_C_AnnouncerPresenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.NotifyChallengeContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_06_ReturnWall_C::NotifyChallengeContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.NotifyChallengeContinue");
		
		ATN_Challenge_06_ReturnWall_C_NotifyChallengeContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.GameEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.GameEnd");
		
		ATN_Challenge_06_ReturnWall_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.TN_TriggerCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::TN_TriggerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.TN_TriggerCountdown");
		
		ATN_Challenge_06_ReturnWall_C_TN_TriggerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReturnWallLauncherBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewBallActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_06_ReturnWall_C::ReturnWallLauncherBall(class AActor* NewBallActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReturnWallLauncherBall");
		
		ATN_Challenge_06_ReturnWall_C_ReturnWallLauncherBall_Params params {};
		params.NewBallActor = NewBallActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.BallHitSomething
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_06_ReturnWall_C::BallHitSomething(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.BallHitSomething");
		
		ATN_Challenge_06_ReturnWall_C_BallHitSomething_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReturnWallHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Streak                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_06_ReturnWall_C::ReturnWallHit(int32_t Streak)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReturnWallHit");
		
		ATN_Challenge_06_ReturnWall_C_ReturnWallHit_Params params {};
		params.Streak = Streak;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReceiveBeginPlay");
		
		ATN_Challenge_06_ReturnWall_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.Shortcut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::Shortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.Shortcut");
		
		ATN_Challenge_06_ReturnWall_C_Shortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AttemptLaunchBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::AttemptLaunchBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AttemptLaunchBall");
		
		ATN_Challenge_06_ReturnWall_C_AttemptLaunchBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_06_ReturnWall_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AnnouncerExitSequenceComplete");
		
		ATN_Challenge_06_ReturnWall_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ExecuteUbergraph_TN_Challenge_06_ReturnWall
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_06_ReturnWall_C::ExecuteUbergraph_TN_Challenge_06_ReturnWall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ExecuteUbergraph_TN_Challenge_06_ReturnWall");
		
		ATN_Challenge_06_ReturnWall_C_ExecuteUbergraph_TN_Challenge_06_ReturnWall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Challenge_06_ReturnWall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Challenge_06_ReturnWall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C");
		return ptr;
	}

}


