﻿/**
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
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.CheckTrophy
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_03_LittleLeague_C::CheckTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.CheckTrophy");
		
		ABB_Challenge_03_LittleLeague_C_CheckTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.StopPlayingAudioComponents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_03_LittleLeague_C::StopPlayingAudioComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.StopPlayingAudioComponents");
		
		ABB_Challenge_03_LittleLeague_C_StopPlayingAudioComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.SetupInfoText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_03_LittleLeague_C::SetupInfoText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.SetupInfoText");
		
		ABB_Challenge_03_LittleLeague_C_SetupInfoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.BB_Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_03_LittleLeague_C::BB_Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.BB_Initialize");
		
		ABB_Challenge_03_LittleLeague_C_BB_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_03_LittleLeague_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.UserConstructionScript");
		
		ABB_Challenge_03_LittleLeague_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_Challenge_03_LittleLeague_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ReceiveBeginPlay");
		
		ABB_Challenge_03_LittleLeague_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.BaseballGameCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LocalPlayerVictory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AwayScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HomeScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_03_LittleLeague_C::BaseballGameCompleted(bool LocalPlayerVictory, int32_t AwayScore, int32_t HomeScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.BaseballGameCompleted");
		
		ABB_Challenge_03_LittleLeague_C_BaseballGameCompleted_Params params {};
		params.LocalPlayerVictory = LocalPlayerVictory;
		params.AwayScore = AwayScore;
		params.HomeScore = HomeScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_03_LittleLeague_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ReceiveEndPlay");
		
		ABB_Challenge_03_LittleLeague_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.AnnouncerExitSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_03_LittleLeague_C::AnnouncerExitSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.AnnouncerExitSequenceComplete");
		
		ABB_Challenge_03_LittleLeague_C_AnnouncerExitSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.TriggerAlternateCadence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_03_LittleLeague_C::TriggerAlternateCadence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.TriggerAlternateCadence");
		
		ABB_Challenge_03_LittleLeague_C_TriggerAlternateCadence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.Shortcut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_Challenge_03_LittleLeague_C::Shortcut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.Shortcut");
		
		ABB_Challenge_03_LittleLeague_C_Shortcut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ExecuteUbergraph_BB_Challenge_03_LittleLeague
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_Challenge_03_LittleLeague_C::ExecuteUbergraph_BB_Challenge_03_LittleLeague(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C.ExecuteUbergraph_BB_Challenge_03_LittleLeague");
		
		ABB_Challenge_03_LittleLeague_C_ExecuteUbergraph_BB_Challenge_03_LittleLeague_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_Challenge_03_LittleLeague_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Challenge_03_LittleLeague_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Challenge_03_LittleLeague.BB_Challenge_03_LittleLeague_C");
		return ptr;
	}

}

