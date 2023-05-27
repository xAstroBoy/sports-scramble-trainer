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
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupRackets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::SetupRackets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupRackets");
		
		ATN_Challenge_02_DoubleCross_C_SetupRackets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupBallLaunchers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::SetupBallLaunchers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupBallLaunchers");
		
		ATN_Challenge_02_DoubleCross_C_SetupBallLaunchers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupInfoText");
		
		ATN_Challenge_02_DoubleCross_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Initialize");
		
		ATN_Challenge_02_DoubleCross_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.UserConstructionScript");
		
		ATN_Challenge_02_DoubleCross_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.BallLaunched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_02_DoubleCross_C::BallLaunched(class AActor* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.BallLaunched");
		
		ATN_Challenge_02_DoubleCross_C_BallLaunched_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_02_DoubleCross_C::OnBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHit");
		
		ATN_Challenge_02_DoubleCross_C_OnBallHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.LaunchedBall Primitive Destroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        DestroyedPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_02_DoubleCross_C::LaunchedBallPrimitiveDestroyed(class AScramPrimitiveActor* DestroyedPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.LaunchedBall Primitive Destroyed");
		
		ATN_Challenge_02_DoubleCross_C_LaunchedBallPrimitiveDestroyed_Params params {};
		params.DestroyedPrimitive = DestroyedPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SCORE AND DISPLAY
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ScoreValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     BallStrikePos                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_02_DoubleCross_C::SCOREANDDISPLAY(int32_t ScoreValue, const struct FVector& BallStrikePos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SCORE AND DISPLAY");
		
		ATN_Challenge_02_DoubleCross_C_SCOREANDDISPLAY_Params params {};
		params.ScoreValue = ScoreValue;
		params.BallStrikePos = BallStrikePos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveBeginPlay");
		
		ATN_Challenge_02_DoubleCross_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.StartGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.StartGame");
		
		ATN_Challenge_02_DoubleCross_C_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_02_DoubleCross_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveEndPlay");
		
		ATN_Challenge_02_DoubleCross_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerPresenting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::AnnouncerPresenting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerPresenting");
		
		ATN_Challenge_02_DoubleCross_C_AnnouncerPresenting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.NotifyChallengeContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_02_DoubleCross_C::NotifyChallengeContinue(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.NotifyChallengeContinue");
		
		ATN_Challenge_02_DoubleCross_C_NotifyChallengeContinue_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SpeedUpTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::SpeedUpTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SpeedUpTimer");
		
		ATN_Challenge_02_DoubleCross_C_SpeedUpTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.GameEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.GameEnd");
		
		ATN_Challenge_02_DoubleCross_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.TN_TriggerCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::TN_TriggerCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.TN_TriggerCountdown");
		
		ATN_Challenge_02_DoubleCross_C_TN_TriggerCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHitModifyCollision
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_02_DoubleCross_C::OnBallHitModifyCollision(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHitModifyCollision");
		
		ATN_Challenge_02_DoubleCross_C_OnBallHitModifyCollision_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerExitSequenceComplete");
		
		ATN_Challenge_02_DoubleCross_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Short Cut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Challenge_02_DoubleCross_C::ShortCut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Short Cut");
		
		ATN_Challenge_02_DoubleCross_C_ShortCut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ExecuteUbergraph_TN_Challenge_02_DoubleCross
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Challenge_02_DoubleCross_C::ExecuteUbergraph_TN_Challenge_02_DoubleCross(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ExecuteUbergraph_TN_Challenge_02_DoubleCross");
		
		ATN_Challenge_02_DoubleCross_C_ExecuteUbergraph_TN_Challenge_02_DoubleCross_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Challenge_02_DoubleCross_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Challenge_02_DoubleCross_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C");
		return ptr;
	}

}


