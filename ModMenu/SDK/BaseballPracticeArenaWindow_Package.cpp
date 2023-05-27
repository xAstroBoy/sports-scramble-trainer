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
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.FlashScore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ScoreFlashed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballPracticeArenaWindow_C::FlashScore(int32_t score, const struct FSlateColor& Color, bool* ScoreFlashed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.FlashScore");
		
		ABaseballPracticeArenaWindow_C_FlashScore_Params params {};
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
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.HideBallTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballPracticeArenaWindow_C::HideBallTarget(bool Instant, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.HideBallTarget");
		
		ABaseballPracticeArenaWindow_C_HideBallTarget_Params params {};
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
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ShowBallTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballPracticeArenaWindow_C::ShowBallTarget(bool Instant, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ShowBallTarget");
		
		ABaseballPracticeArenaWindow_C_ShowBallTarget_Params params {};
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
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPracticeArenaWindow_C::ResetTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetTarget");
		
		ABaseballPracticeArenaWindow_C_ResetTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.DeactivateEverything
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPracticeArenaWindow_C::DeactivateEverything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.DeactivateEverything");
		
		ABaseballPracticeArenaWindow_C_DeactivateEverything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPracticeArenaWindow_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Initialize");
		
		ABaseballPracticeArenaWindow_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPracticeArenaWindow_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.UserConstructionScript");
		
		ABaseballPracticeArenaWindow_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballPracticeArenaWindow_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ReceiveBeginPlay");
		
		ABaseballPracticeArenaWindow_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.BreakWindow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPracticeArenaWindow_C::BreakWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.BreakWindow");
		
		ABaseballPracticeArenaWindow_C_BreakWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ScorePlayerHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABB_Ball_Base_C*                             Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballPracticeArenaWindow_C::ScorePlayerHit(class ABB_Ball_Base_C* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ScorePlayerHit");
		
		ABaseballPracticeArenaWindow_C_ScorePlayerHit_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.CleanupTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPracticeArenaWindow_C::CleanupTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.CleanupTarget");
		
		ABaseballPracticeArenaWindow_C_CleanupTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetWindow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPracticeArenaWindow_C::ResetWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetWindow");
		
		ABaseballPracticeArenaWindow_C_ResetWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Deactivate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPracticeArenaWindow_C::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Deactivate");
		
		ABaseballPracticeArenaWindow_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.OnTriggered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballPracticeArenaWindow_C::OnTriggered(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.OnTriggered");
		
		ABaseballPracticeArenaWindow_C_OnTriggered_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ExecuteUbergraph_BaseballPracticeArenaWindow
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballPracticeArenaWindow_C::ExecuteUbergraph_BaseballPracticeArenaWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ExecuteUbergraph_BaseballPracticeArenaWindow");
		
		ABaseballPracticeArenaWindow_C_ExecuteUbergraph_BaseballPracticeArenaWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.PlayerBrokeWindow__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABB_Ball_Base_C*                             Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ScoreAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballPracticeArenaWindow_C::PlayerBrokeWindow__DelegateSignature(class ABB_Ball_Base_C* Ball, int32_t ScoreAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.PlayerBrokeWindow__DelegateSignature");
		
		ABaseballPracticeArenaWindow_C_PlayerBrokeWindow__DelegateSignature_Params params {};
		params.Ball = Ball;
		params.ScoreAmount = ScoreAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.WindowOverlapDetected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballPracticeArenaWindow_C::WindowOverlapDetected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.WindowOverlapDetected__DelegateSignature");
		
		ABaseballPracticeArenaWindow_C_WindowOverlapDetected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballPracticeArenaWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballPracticeArenaWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C");
		return ptr;
	}

}


