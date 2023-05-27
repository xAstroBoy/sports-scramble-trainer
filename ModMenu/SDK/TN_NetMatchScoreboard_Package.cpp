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
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateNewText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::UpdateNewText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateNewText");
		
		ATN_NetMatchScoreboard_C_UpdateNewText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateRuleType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TraditionalScoring                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_NetMatchScoreboard_C::UpdateRuleType(bool TraditionalScoring)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateRuleType");
		
		ATN_NetMatchScoreboard_C_UpdateRuleType_Params params {};
		params.TraditionalScoring = TraditionalScoring;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Initialize");
		
		ATN_NetMatchScoreboard_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UserConstructionScript");
		
		ATN_NetMatchScoreboard_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Pop__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::Timeline_Pop__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Pop__FinishedFunc");
		
		ATN_NetMatchScoreboard_C_Timeline_Pop__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Pop__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::Timeline_Pop__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Pop__UpdateFunc");
		
		ATN_NetMatchScoreboard_C_Timeline_Pop__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Scores__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::Timeline_Reveal_Scores__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Scores__FinishedFunc");
		
		ATN_NetMatchScoreboard_C_Timeline_Reveal_Scores__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Scores__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::Timeline_Reveal_Scores__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Scores__UpdateFunc");
		
		ATN_NetMatchScoreboard_C_Timeline_Reveal_Scores__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Text__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::Timeline_Reveal_Text__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Text__FinishedFunc");
		
		ATN_NetMatchScoreboard_C_Timeline_Reveal_Text__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Text__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::Timeline_Reveal_Text__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Text__UpdateFunc");
		
		ATN_NetMatchScoreboard_C_Timeline_Reveal_Text__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowHideDebug__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::ShowHideDebug__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowHideDebug__FinishedFunc");
		
		ATN_NetMatchScoreboard_C_ShowHideDebug__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowHideDebug__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::ShowHideDebug__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowHideDebug__UpdateFunc");
		
		ATN_NetMatchScoreboard_C_ShowHideDebug__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ReceiveBeginPlay");
		
		ATN_NetMatchScoreboard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player2                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_NetMatchScoreboard_C::UpdateScore(int32_t Player1, int32_t Player2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateScore");
		
		ATN_NetMatchScoreboard_C_UpdateScore_Params params {};
		params.Player1 = Player1;
		params.Player2 = Player2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.DisplayScoreboard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TextMajor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        TextMinor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               UpdateScoreOnDelay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewScoreP1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewScoreP2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_NetMatchScoreboard_C::DisplayScoreboard(const class FText& TextMajor, const class FText& TextMinor, bool UpdateScoreOnDelay, float Delay, int32_t NewScoreP1, int32_t NewScoreP2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.DisplayScoreboard");
		
		ATN_NetMatchScoreboard_C_DisplayScoreboard_Params params {};
		params.TextMajor = TextMajor;
		params.TextMinor = TextMinor;
		params.UpdateScoreOnDelay = UpdateScoreOnDelay;
		params.Delay = Delay;
		params.NewScoreP1 = NewScoreP1;
		params.NewScoreP2 = NewScoreP2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideScoreBoard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::HideScoreBoard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideScoreBoard");
		
		ATN_NetMatchScoreboard_C_HideScoreBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.SetScoreToZero
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::SetScoreToZero()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.SetScoreToZero");
		
		ATN_NetMatchScoreboard_C_SetScoreToZero_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TopText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        BottomText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ATN_NetMatchScoreboard_C::UpdateText(const class FText& TopText, const class FText& BottomText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateText");
		
		ATN_NetMatchScoreboard_C_UpdateText_Params params {};
		params.TopText = TopText;
		params.BottomText = BottomText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.SpawnScoreVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               P1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_NetMatchScoreboard_C::SpawnScoreVFX(bool P1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.SpawnScoreVFX");
		
		ATN_NetMatchScoreboard_C_SpawnScoreVFX_Params params {};
		params.P1 = P1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.DisplayDebugText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        DebugText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ATN_NetMatchScoreboard_C::DisplayDebugText(const class FText& DebugText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.DisplayDebugText");
		
		ATN_NetMatchScoreboard_C_DisplayDebugText_Params params {};
		params.DebugText = DebugText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideNormalTennisScoring
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::HideNormalTennisScoring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideNormalTennisScoring");
		
		ATN_NetMatchScoreboard_C_HideNormalTennisScoring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowScores
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::ShowScores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowScores");
		
		ATN_NetMatchScoreboard_C_ShowScores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideScores
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::HideScores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideScores");
		
		ATN_NetMatchScoreboard_C_HideScores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::ShowText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowText");
		
		ATN_NetMatchScoreboard_C_ShowText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::HideText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideText");
		
		ATN_NetMatchScoreboard_C_HideText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.RevealDebugText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::RevealDebugText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.RevealDebugText");
		
		ATN_NetMatchScoreboard_C_RevealDebugText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideDebugText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_NetMatchScoreboard_C::HideDebugText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideDebugText");
		
		ATN_NetMatchScoreboard_C_HideDebugText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ExecuteUbergraph_TN_NetMatchScoreboard
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_NetMatchScoreboard_C::ExecuteUbergraph_TN_NetMatchScoreboard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ExecuteUbergraph_TN_NetMatchScoreboard");
		
		ATN_NetMatchScoreboard_C_ExecuteUbergraph_TN_NetMatchScoreboard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_NetMatchScoreboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_NetMatchScoreboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_NetMatchScoreboard.TN_NetMatchScoreboard_C");
		return ptr;
	}

}


