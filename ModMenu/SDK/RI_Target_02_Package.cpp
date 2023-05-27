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
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.HideBallTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARI_Target_02_C::HideBallTarget(bool Instant, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.HideBallTarget");
		
		ARI_Target_02_C_HideBallTarget_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.ShowBallTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARI_Target_02_C::ShowBallTarget(bool Instant, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ShowBallTarget");
		
		ARI_Target_02_C_ShowBallTarget_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.FlashScore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ScoreFlashed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARI_Target_02_C::FlashScore(int32_t score, const struct FSlateColor& Color, bool* ScoreFlashed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.FlashScore");
		
		ARI_Target_02_C_FlashScore_Params params {};
		params.score = score;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScoreFlashed != nullptr)
			*ScoreFlashed = params.ScoreFlashed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.RemoveMarks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARI_Target_02_C::RemoveMarks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.RemoveMarks");
		
		ARI_Target_02_C_RemoveMarks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARI_Target_02_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.UserConstructionScript");
		
		ARI_Target_02_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.ChangeSize__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARI_Target_02_C::ChangeSize__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ChangeSize__FinishedFunc");
		
		ARI_Target_02_C_ChangeSize__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.ChangeSize__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARI_Target_02_C::ChangeSize__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ChangeSize__UpdateFunc");
		
		ARI_Target_02_C_ChangeSize__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARI_Target_02_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ReceiveBeginPlay");
		
		ARI_Target_02_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.ScoreOuter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARI_Target_02_C::ScoreOuter(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ScoreOuter");
		
		ARI_Target_02_C_ScoreOuter_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.ScoreInner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARI_Target_02_C::ScoreInner(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ScoreInner");
		
		ARI_Target_02_C_ScoreInner_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.TargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARI_Target_02_C::TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.TargetHit");
		
		ARI_Target_02_C_TargetHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.FlashOuter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARI_Target_02_C::FlashOuter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.FlashOuter");
		
		ARI_Target_02_C_FlashOuter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.FlashInner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARI_Target_02_C::FlashInner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.FlashInner");
		
		ARI_Target_02_C_FlashInner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.HideScoreOnDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARI_Target_02_C::HideScoreOnDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.HideScoreOnDelay");
		
		ARI_Target_02_C_HideScoreOnDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.Score Middle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARI_Target_02_C::ScoreMiddle(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.Score Middle");
		
		ARI_Target_02_C_ScoreMiddle_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.FlashMiddle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARI_Target_02_C::FlashMiddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.FlashMiddle");
		
		ARI_Target_02_C_FlashMiddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.Grow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARI_Target_02_C::Grow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.Grow");
		
		ARI_Target_02_C_Grow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.Shrink
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARI_Target_02_C::Shrink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.Shrink");
		
		ARI_Target_02_C_Shrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ARI_Target_02_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ReceiveDestroyed");
		
		ARI_Target_02_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.ExecuteUbergraph_RI_Target_02
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARI_Target_02_C::ExecuteUbergraph_RI_Target_02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.ExecuteUbergraph_RI_Target_02");
		
		ARI_Target_02_C_ExecuteUbergraph_RI_Target_02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function RI_Target_02.RI_Target_02_C.RI_Target_02_Hit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PayloadActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      BallTargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RegionHit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARI_Target_02_C::RI_Target_02_Hit__DelegateSignature(class AActor* PayloadActor, class AActor* BallTargetActor, int32_t RegionHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RI_Target_02.RI_Target_02_C.RI_Target_02_Hit__DelegateSignature");
		
		ARI_Target_02_C_RI_Target_02_Hit__DelegateSignature_Params params {};
		params.PayloadActor = PayloadActor;
		params.BallTargetActor = BallTargetActor;
		params.RegionHit = RegionHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARI_Target_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARI_Target_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RI_Target_02.RI_Target_02_C");
		return ptr;
	}

}


