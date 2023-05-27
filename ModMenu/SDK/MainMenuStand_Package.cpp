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
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuStand_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Initialize");
		
		AMainMenuStand_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.DisableButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuStand_C::DisableButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.DisableButtons");
		
		AMainMenuStand_C_DisableButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.SpawnButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuStand_C::SpawnButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.SpawnButtons");
		
		AMainMenuStand_C_SpawnButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuStand_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.UserConstructionScript");
		
		AMainMenuStand_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenuStand_C::Timeline_MovePanel__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__FinishedFunc");
		
		AMainMenuStand_C_Timeline_MovePanel__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenuStand_C::Timeline_MovePanel__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__UpdateFunc");
		
		AMainMenuStand_C_Timeline_MovePanel__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenuStand_C::Timeline_MoveRoot__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__FinishedFunc");
		
		AMainMenuStand_C_Timeline_MoveRoot__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMainMenuStand_C::Timeline_MoveRoot__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__UpdateFunc");
		
		AMainMenuStand_C_Timeline_MoveRoot__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMainMenuStand_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ReceiveBeginPlay");
		
		AMainMenuStand_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.ButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuStand_C::ButtonPressed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ButtonPressed");
		
		AMainMenuStand_C_ButtonPressed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.SwapFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuStand_C::SwapFinished(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.SwapFinished");
		
		AMainMenuStand_C_SwapFinished_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuStand_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ReceiveEndPlay");
		
		AMainMenuStand_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.OpenPanel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuStand_C::OpenPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.OpenPanel");
		
		AMainMenuStand_C_OpenPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.ClosePanel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuStand_C::ClosePanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ClosePanel");
		
		AMainMenuStand_C_ClosePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.LowerStand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuStand_C::LowerStand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.LowerStand");
		
		AMainMenuStand_C_LowerStand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.ButtonTouched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuStand_C::ButtonTouched(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ButtonTouched");
		
		AMainMenuStand_C_ButtonTouched_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.ButtonUntouched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuStand_C::ButtonUntouched(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ButtonUntouched");
		
		AMainMenuStand_C_ButtonUntouched_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Raise
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuStand_C::Play_SFX_Menu_Raise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Raise");
		
		AMainMenuStand_C_Play_SFX_Menu_Raise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Lower
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuStand_C::Play_SFX_Menu_Lower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Lower");
		
		AMainMenuStand_C_Play_SFX_Menu_Lower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.ExecuteUbergraph_MainMenuStand
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuStand_C::ExecuteUbergraph_MainMenuStand(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ExecuteUbergraph_MainMenuStand");
		
		AMainMenuStand_C_ExecuteUbergraph_MainMenuStand_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.MenuOpened__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AMainMenuStand_C::MenuOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.MenuOpened__DelegateSignature");
		
		AMainMenuStand_C_MenuOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.SelectionComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuStand_C::SelectionComplete__DelegateSignature(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.SelectionComplete__DelegateSignature");
		
		AMainMenuStand_C_SelectionComplete__DelegateSignature_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MainMenuStand.MainMenuStand_C.SelectionStarted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainMenuStand_C::SelectionStarted__DelegateSignature(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.SelectionStarted__DelegateSignature");
		
		AMainMenuStand_C_SelectionStarted__DelegateSignature_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainMenuStand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainMenuStand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainMenuStand.MainMenuStand_C");
		return ptr;
	}

}


