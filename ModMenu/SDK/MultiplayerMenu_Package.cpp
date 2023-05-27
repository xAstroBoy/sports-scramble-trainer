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
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.UserConstructionScript");
		
		AMultiplayerMenu_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.ReceiveBeginPlay");
		
		AMultiplayerMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.SessionsFound
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              SessionsFound                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AMultiplayerMenu_C::SessionsFound(TArray<class FString>* SessionsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.SessionsFound");
		
		AMultiplayerMenu_C_SessionsFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionsFound != nullptr)
			*SessionsFound = params.SessionsFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.NoSessionsFound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::NoSessionsFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.NoSessionsFound");
		
		AMultiplayerMenu_C_NoSessionsFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.UnbindFromInstance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::UnbindFromInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.UnbindFromInstance");
		
		AMultiplayerMenu_C_UnbindFromInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.CreateButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::CreateButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.CreateButtons");
		
		AMultiplayerMenu_C_CreateButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.ChoiceMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiplayerMenu_C::ChoiceMade(int32_t ButtonSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.ChoiceMade");
		
		AMultiplayerMenu_C_ChoiceMade_Params params {};
		params.ButtonSelected = ButtonSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.JoinFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::JoinFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.JoinFailed");
		
		AMultiplayerMenu_C_JoinFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.JoinSuccess
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::JoinSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.JoinSuccess");
		
		AMultiplayerMenu_C_JoinSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.GameSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiplayerMenu_C::GameSelected(int32_t ButtonSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.GameSelected");
		
		AMultiplayerMenu_C_GameSelected_Params params {};
		params.ButtonSelected = ButtonSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.SpawnTypeSelectionMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::SpawnTypeSelectionMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.SpawnTypeSelectionMenu");
		
		AMultiplayerMenu_C_SpawnTypeSelectionMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.GetSessions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::GetSessions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.GetSessions");
		
		AMultiplayerMenu_C_GetSessions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.CreateSportButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::CreateSportButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.CreateSportButtons");
		
		AMultiplayerMenu_C_CreateSportButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.SportChosen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiplayerMenu_C::SportChosen(int32_t ButtonSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.SportChosen");
		
		AMultiplayerMenu_C_SportChosen_Params params {};
		params.ButtonSelected = ButtonSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiplayerMenu_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.ReceiveTick");
		
		AMultiplayerMenu_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.AvatarDone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiplayerMenu_C::AvatarDone(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.AvatarDone");
		
		AMultiplayerMenu_C_AvatarDone_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.ExecuteUbergraph_MultiplayerMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMultiplayerMenu_C::ExecuteUbergraph_MultiplayerMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.ExecuteUbergraph_MultiplayerMenu");
		
		AMultiplayerMenu_C_ExecuteUbergraph_MultiplayerMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function MultiplayerMenu.MultiplayerMenu_C.BackButtonSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AMultiplayerMenu_C::BackButtonSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiplayerMenu.MultiplayerMenu_C.BackButtonSelected__DelegateSignature");
		
		AMultiplayerMenu_C_BackButtonSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMultiplayerMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMultiplayerMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MultiplayerMenu.MultiplayerMenu_C");
		return ptr;
	}

}


