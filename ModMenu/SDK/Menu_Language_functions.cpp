// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Menu_Language.Menu_Language_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Language_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.RemoveSubMenu");

	AMenu_Language_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_Language.Menu_Language_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Language_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.HideSubMenu");

	AMenu_Language_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_Language.Menu_Language_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Language_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.RestoreSubMenu");

	AMenu_Language_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_Language.Menu_Language_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Language_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.DisableMenuInput");

	AMenu_Language_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_Language.Menu_Language_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Language_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.EnableMenuInput");

	AMenu_Language_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_Language.Menu_Language_C.UpdateTennisScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Language_C::UpdateTennisScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.UpdateTennisScoreboard");

	AMenu_Language_C_UpdateTennisScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.UpdatePlayByPlays
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Language_C::UpdatePlayByPlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.UpdatePlayByPlays");

	AMenu_Language_C_UpdatePlayByPlays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.RedrawWidgets
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Language_C::RedrawWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.RedrawWidgets");

	AMenu_Language_C_RedrawWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.EnableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Language_C::EnableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.EnableButtons");

	AMenu_Language_C_EnableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.DisableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Language_C::DisableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.DisableButtons");

	AMenu_Language_C_DisableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_Language_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.Initialize");

	AMenu_Language_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_Language_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.UserConstructionScript");

	AMenu_Language_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_Language_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.ReceiveBeginPlay");

	AMenu_Language_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Language_C::ButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.ButtonPressed");

	AMenu_Language_C_ButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Language_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.ReceiveTick");

	AMenu_Language_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Language_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.ReceiveEndPlay");

	AMenu_Language_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.ButtonSwapComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Language_C::ButtonSwapComplete(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.ButtonSwapComplete");

	AMenu_Language_C_ButtonSwapComplete_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.ExecuteUbergraph_Menu_Language
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Language_C::ExecuteUbergraph_Menu_Language(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.ExecuteUbergraph_Menu_Language");

	AMenu_Language_C_ExecuteUbergraph_Menu_Language_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.OptionChanging__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Language_C::OptionChanging__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.OptionChanging__DelegateSignature");

	AMenu_Language_C_OptionChanging__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Language.Menu_Language_C.OptionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Language_C::OptionChanged__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Language.Menu_Language_C.OptionChanged__DelegateSignature");

	AMenu_Language_C_OptionChanged__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
