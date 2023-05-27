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
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_Minigame_Pitching_Whack_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.Shutdown");
		
		ABB_Minigame_Pitching_Whack_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ClearWhackTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::ClearWhackTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ClearWhackTimer");
		
		ABB_Minigame_Pitching_Whack_C_ClearWhackTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackScoreboardGameOver
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::WhackScoreboardGameOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackScoreboardGameOver");
		
		ABB_Minigame_Pitching_Whack_C_WhackScoreboardGameOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.InitializeWhack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::InitializeWhack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.InitializeWhack");
		
		ABB_Minigame_Pitching_Whack_C_InitializeWhack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UpdateWhackScoreboard
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Whack_C::UpdateWhackScoreboard(int32_t score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UpdateWhackScoreboard");
		
		ABB_Minigame_Pitching_Whack_C_UpdateWhackScoreboard_Params params {};
		params.score = score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackTimerCountdownStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Whack_C::WhackTimerCountdownStart(int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackTimerCountdownStart");
		
		ABB_Minigame_Pitching_Whack_C_WhackTimerCountdownStart_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UserConstructionScript");
		
		ABB_Minigame_Pitching_Whack_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ReceiveBeginPlay");
		
		ABB_Minigame_Pitching_Whack_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.StartCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::StartCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.StartCountdown");
		
		ABB_Minigame_Pitching_Whack_C_StartCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.CountdownComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::CountdownComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.CountdownComplete");
		
		ABB_Minigame_Pitching_Whack_C_CountdownComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.DisableWhackTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::DisableWhackTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.DisableWhackTargets");
		
		ABB_Minigame_Pitching_Whack_C_DisableWhackTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackEquipmentGrabbed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::WhackEquipmentGrabbed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackEquipmentGrabbed");
		
		ABB_Minigame_Pitching_Whack_C_WhackEquipmentGrabbed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.GoMessageReceived
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::GoMessageReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.GoMessageReceived");
		
		ABB_Minigame_Pitching_Whack_C_GoMessageReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.PlayerTeleportComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::PlayerTeleportComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.PlayerTeleportComplete");
		
		ABB_Minigame_Pitching_Whack_C_PlayerTeleportComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.DisableTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::DisableTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.DisableTargets");
		
		ABB_Minigame_Pitching_Whack_C_DisableTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.PitchTargetCreated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::PitchTargetCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.PitchTargetCreated");
		
		ABB_Minigame_Pitching_Whack_C_PitchTargetCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UpdateScoreboardScoreValue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ScoreAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Whack_C::UpdateScoreboardScoreValue(int32_t ScoreAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UpdateScoreboardScoreValue");
		
		ABB_Minigame_Pitching_Whack_C_UpdateScoreboardScoreValue_Params params {};
		params.ScoreAmount = ScoreAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.NoTeleport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Minigame_Pitching_Whack_C::NoTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.NoTeleport");
		
		ABB_Minigame_Pitching_Whack_C_NoTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ExecuteUbergraph_BB_Minigame_Pitching_Whack
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Minigame_Pitching_Whack_C::ExecuteUbergraph_BB_Minigame_Pitching_Whack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ExecuteUbergraph_BB_Minigame_Pitching_Whack");
		
		ABB_Minigame_Pitching_Whack_C_ExecuteUbergraph_BB_Minigame_Pitching_Whack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Minigame_Pitching_Whack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Minigame_Pitching_Whack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C");
		return ptr;
	}

}


