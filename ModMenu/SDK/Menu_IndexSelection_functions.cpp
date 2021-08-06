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

// Function Menu_IndexSelection.Menu_IndexSelection_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_IndexSelection_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.EnableMenuInput");

	AMenu_IndexSelection_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_IndexSelection_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.DisableMenuInput");

	AMenu_IndexSelection_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_IndexSelection_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.RestoreSubMenu");

	AMenu_IndexSelection_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_IndexSelection_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.HideSubMenu");

	AMenu_IndexSelection_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_IndexSelection_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.RemoveSubMenu");

	AMenu_IndexSelection_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.ShouldButtonBeLocked
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<UI_ButtonState_EUI_ButtonState> ButtonState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowTrophy                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_IndexSelection_C::ShouldButtonBeLocked(int Index, TEnumAsByte<UI_ButtonState_EUI_ButtonState>* ButtonState, bool* ShowTrophy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.ShouldButtonBeLocked");

	AMenu_IndexSelection_C_ShouldButtonBeLocked_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ButtonState != nullptr)
		*ButtonState = params.ButtonState;
	if (ShowTrophy != nullptr)
		*ShowTrophy = params.ShowTrophy;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.SpawnButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_IndexSelection_C::SpawnButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.SpawnButtons");

	AMenu_IndexSelection_C_SpawnButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_IndexSelection_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.Initialize");

	AMenu_IndexSelection_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_IndexSelection_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.UserConstructionScript");

	AMenu_IndexSelection_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.InpActEvt_DebugButton_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AMenu_IndexSelection_C::InpActEvt_DebugButton_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.InpActEvt_DebugButton_K2Node_InputActionEvent_1");

	AMenu_IndexSelection_C_InpActEvt_DebugButton_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_IndexSelection_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveBeginPlay");

	AMenu_IndexSelection_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_IndexSelection_C::SelectionMade(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionMade");

	AMenu_IndexSelection_C_SelectionMade_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_IndexSelection_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveTick");

	AMenu_IndexSelection_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_IndexSelection_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveEndPlay");

	AMenu_IndexSelection_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_IndexSelection_C::SelectionStarted(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionStarted");

	AMenu_IndexSelection_C_SelectionStarted_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.ExecuteUbergraph_Menu_IndexSelection
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_IndexSelection_C::ExecuteUbergraph_Menu_IndexSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.ExecuteUbergraph_Menu_IndexSelection");

	AMenu_IndexSelection_C_ExecuteUbergraph_Menu_IndexSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   GameName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_IndexSelection_C::SelectionComplete__DelegateSignature(int ID, const struct FName& GameName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionComplete__DelegateSignature");

	AMenu_IndexSelection_C_SelectionComplete__DelegateSignature_Params params;
	params.ID = ID;
	params.GameName = GameName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_IndexSelection.Menu_IndexSelection_C.ChoiceStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_IndexSelection_C::ChoiceStarted__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_IndexSelection.Menu_IndexSelection_C.ChoiceStarted__DelegateSignature");

	AMenu_IndexSelection_C_ChoiceStarted__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
