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
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.Cleanup");
		
		ABB_GameSelector_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.ResetInstrument
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::ResetInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ResetInstrument");
		
		ABB_GameSelector_C_ResetInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.VanishAllBalls
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::VanishAllBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.VanishAllBalls");
		
		ABB_GameSelector_C_VanishAllBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.Initialize");
		
		ABB_GameSelector_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.DestroyGameManagers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::DestroyGameManagers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.DestroyGameManagers");
		
		ABB_GameSelector_C_DestroyGameManagers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.UserConstructionScript");
		
		ABB_GameSelector_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_GameSelector_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ReceiveBeginPlay");
		
		ABB_GameSelector_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_GameSelector_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ReceiveEndPlay");
		
		ABB_GameSelector_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.SpawnGameTypeSelectionMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::SpawnGameTypeSelectionMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.SpawnGameTypeSelectionMenu");
		
		ABB_GameSelector_C_SpawnGameTypeSelectionMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.GameTypeSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_GameSelector_C::GameTypeSelected(int32_t ButtonSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.GameTypeSelected");
		
		ABB_GameSelector_C_GameTypeSelected_Params params {};
		params.ButtonSelected = ButtonSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.GameOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::GameOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.GameOver");
		
		ABB_GameSelector_C_GameOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.SpawnPitchingGameSelector
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::SpawnPitchingGameSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.SpawnPitchingGameSelector");
		
		ABB_GameSelector_C_SpawnPitchingGameSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.PitchingGameSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_GameSelector_C::PitchingGameSelected(int32_t ButtonSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.PitchingGameSelected");
		
		ABB_GameSelector_C_PitchingGameSelected_Params params {};
		params.ButtonSelected = ButtonSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.SpawnBattingGameSelector
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::SpawnBattingGameSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.SpawnBattingGameSelector");
		
		ABB_GameSelector_C_SpawnBattingGameSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.BattingGameSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_GameSelector_C::BattingGameSelected(int32_t ButtonSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.BattingGameSelected");
		
		ABB_GameSelector_C_BattingGameSelected_Params params {};
		params.ButtonSelected = ButtonSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.ResetGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::ResetGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ResetGame");
		
		ABB_GameSelector_C_ResetGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.HomeAwayMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::HomeAwayMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.HomeAwayMenu");
		
		ABB_GameSelector_C_HomeAwayMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.SubChoiceMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_GameSelector_C::SubChoiceMade(int32_t ButtonSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.SubChoiceMade");
		
		ABB_GameSelector_C_SubChoiceMade_Params params {};
		params.ButtonSelected = ButtonSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.ExecuteUbergraph_BB_GameSelector
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_GameSelector_C::ExecuteUbergraph_BB_GameSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ExecuteUbergraph_BB_GameSelector");
		
		ABB_GameSelector_C_ExecuteUbergraph_BB_GameSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_GameSelector.BB_GameSelector_C.ResetButtonPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_GameSelector_C::ResetButtonPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_GameSelector.BB_GameSelector_C.ResetButtonPressed__DelegateSignature");
		
		ABB_GameSelector_C_ResetButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_GameSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_GameSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_GameSelector.BB_GameSelector_C");
		return ptr;
	}

}


