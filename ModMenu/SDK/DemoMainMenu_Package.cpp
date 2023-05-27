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
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.ShowMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::ShowMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ShowMenu");
		
		ADemoMainMenu_C_ShowMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.HideMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::HideMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.HideMenu");
		
		ADemoMainMenu_C_HideMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.BindPause
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::BindPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.BindPause");
		
		ADemoMainMenu_C_BindPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.RemoveButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::RemoveButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.RemoveButtons");
		
		ADemoMainMenu_C_RemoveButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.DisableButtonInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::DisableButtonInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.DisableButtonInput");
		
		ADemoMainMenu_C_DisableButtonInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.SpawnButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FUI_ButtonData                              ButtonDataStart                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FUI_ButtonData                              ButtonDataToggled                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AButton_Standard_C*                          Button                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADemoMainMenu_C::SpawnButton(const struct FTransform& SpawnTransform, const struct FUI_ButtonData& ButtonDataStart, const struct FUI_ButtonData& ButtonDataToggled, int32_t ID, class AButton_Standard_C** Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.SpawnButton");
		
		ADemoMainMenu_C_SpawnButton_Params params {};
		params.SpawnTransform = SpawnTransform;
		params.ButtonDataStart = ButtonDataStart;
		params.ButtonDataToggled = ButtonDataToggled;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.Initialize");
		
		ADemoMainMenu_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.UserConstructionScript");
		
		ADemoMainMenu_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADemoMainMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ReceiveBeginPlay");
		
		ADemoMainMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.SelectionMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADemoMainMenu_C::SelectionMade(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.SelectionMade");
		
		ADemoMainMenu_C_SelectionMade_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.CloseMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.CloseMenu");
		
		ADemoMainMenu_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADemoMainMenu_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ReceiveTick");
		
		ADemoMainMenu_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.ButtonSwapped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADemoMainMenu_C::ButtonSwapped(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ButtonSwapped");
		
		ADemoMainMenu_C_ButtonSwapped_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.OpenMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::OpenMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.OpenMenu");
		
		ADemoMainMenu_C_OpenMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.ButtonDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADemoMainMenu_C::ButtonDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ButtonDestroyed");
		
		ADemoMainMenu_C_ButtonDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.GamePaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::GamePaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.GamePaused");
		
		ADemoMainMenu_C_GamePaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.GameUnpaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADemoMainMenu_C::GameUnpaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.GameUnpaused");
		
		ADemoMainMenu_C_GameUnpaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.ExecuteUbergraph_DemoMainMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADemoMainMenu_C::ExecuteUbergraph_DemoMainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ExecuteUbergraph_DemoMainMenu");
		
		ADemoMainMenu_C_ExecuteUbergraph_DemoMainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DemoMainMenu.DemoMainMenu_C.ChoiceMade__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADemoMainMenu_C::ChoiceMade__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoMainMenu.DemoMainMenu_C.ChoiceMade__DelegateSignature");
		
		ADemoMainMenu_C_ChoiceMade__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADemoMainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADemoMainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DemoMainMenu.DemoMainMenu_C");
		return ptr;
	}

}


