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
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.HideBallTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABallTarget_NW_C::HideBallTarget(bool Instant, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.HideBallTarget");
		
		ABallTarget_NW_C_HideBallTarget_Params params {};
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
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.ShowBallTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABallTarget_NW_C::ShowBallTarget(bool Instant, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ShowBallTarget");
		
		ABallTarget_NW_C_ShowBallTarget_Params params {};
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
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.FlashScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ScoreFlashed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABallTarget_NW_C::FlashScore(int32_t score, const struct FSlateColor& Color, bool* ScoreFlashed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.FlashScore");
		
		ABallTarget_NW_C_FlashScore_Params params {};
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
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABallTarget_NW_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Initialize");
		
		ABallTarget_NW_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.RemoveMarks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABallTarget_NW_C::RemoveMarks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.RemoveMarks");
		
		ABallTarget_NW_C_RemoveMarks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABallTarget_NW_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.UserConstructionScript");
		
		ABallTarget_NW_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.ChangeSize__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallTarget_NW_C::ChangeSize__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ChangeSize__FinishedFunc");
		
		ABallTarget_NW_C_ChangeSize__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.ChangeSize__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallTarget_NW_C::ChangeSize__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ChangeSize__UpdateFunc");
		
		ABallTarget_NW_C_ChangeSize__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallTarget_NW_C::Timeline_Outer__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__FinishedFunc");
		
		ABallTarget_NW_C_Timeline_Outer__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallTarget_NW_C::Timeline_Outer__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Outer__UpdateFunc");
		
		ABallTarget_NW_C_Timeline_Outer__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallTarget_NW_C::Timeline_Middle__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__FinishedFunc");
		
		ABallTarget_NW_C_Timeline_Middle__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallTarget_NW_C::Timeline_Middle__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Middle__UpdateFunc");
		
		ABallTarget_NW_C_Timeline_Middle__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallTarget_NW_C::Timeline_Inner__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__FinishedFunc");
		
		ABallTarget_NW_C_Timeline_Inner__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABallTarget_NW_C::Timeline_Inner__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Timeline_Inner__UpdateFunc");
		
		ABallTarget_NW_C_Timeline_Inner__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABallTarget_NW_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ReceiveBeginPlay");
		
		ABallTarget_NW_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.ScoreOuter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallTarget_NW_C::ScoreOuter(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ScoreOuter");
		
		ABallTarget_NW_C_ScoreOuter_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.ScoreInner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallTarget_NW_C::ScoreInner(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ScoreInner");
		
		ABallTarget_NW_C_ScoreInner_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.TargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallTarget_NW_C::TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.TargetHit");
		
		ABallTarget_NW_C_TargetHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.FlashOuter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallTarget_NW_C::FlashOuter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.FlashOuter");
		
		ABallTarget_NW_C_FlashOuter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.FlashInner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallTarget_NW_C::FlashInner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.FlashInner");
		
		ABallTarget_NW_C_FlashInner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.Score Middle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallTarget_NW_C::ScoreMiddle(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Score Middle");
		
		ABallTarget_NW_C_ScoreMiddle_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.FlashMiddle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallTarget_NW_C::FlashMiddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.FlashMiddle");
		
		ABallTarget_NW_C_FlashMiddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.Grow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallTarget_NW_C::Grow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Grow");
		
		ABallTarget_NW_C_Grow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.Shrink
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallTarget_NW_C::Shrink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.Shrink");
		
		ABallTarget_NW_C_Shrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABallTarget_NW_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ReceiveDestroyed");
		
		ABallTarget_NW_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.DelayShrink
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallTarget_NW_C::DelayShrink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.DelayShrink");
		
		ABallTarget_NW_C_DelayShrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.ResetShrink
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABallTarget_NW_C::ResetShrink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ResetShrink");
		
		ABallTarget_NW_C_ResetShrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.ExecuteUbergraph_BallTarget_NW
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallTarget_NW_C::ExecuteUbergraph_BallTarget_NW(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ExecuteUbergraph_BallTarget_NW");
		
		ABallTarget_NW_C_ExecuteUbergraph_BallTarget_NW_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.ShrinkStart__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallTarget_NW_C::ShrinkStart__DelegateSignature(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.ShrinkStart__DelegateSignature");
		
		ABallTarget_NW_C_ShrinkStart__DelegateSignature_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BallTarget_NW.BallTarget_NW_C.BallTarget_NW_Hit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      PayloadActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      BallTargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RegionHit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABallTarget_NW_C::BallTarget_NW_Hit__DelegateSignature(class AActor* PayloadActor, class AActor* BallTargetActor, int32_t RegionHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BallTarget_NW.BallTarget_NW_C.BallTarget_NW_Hit__DelegateSignature");
		
		ABallTarget_NW_C_BallTarget_NW_Hit__DelegateSignature_Params params {};
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
	 * 		Name   -> PredefinedFunction ABallTarget_NW_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABallTarget_NW_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BallTarget_NW.BallTarget_NW_C");
		return ptr;
	}

}


