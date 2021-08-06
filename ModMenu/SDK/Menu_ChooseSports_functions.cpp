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

// Function Menu_ChooseSports.Menu_ChooseSports_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_ChooseSports_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.EnableMenuInput");

	AMenu_ChooseSports_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_ChooseSports_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.DisableMenuInput");

	AMenu_ChooseSports_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_ChooseSports_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.RemoveSubMenu");

	AMenu_ChooseSports_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_ChooseSports_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.HideSubMenu");

	AMenu_ChooseSports_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_ChooseSports_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.RestoreSubMenu");

	AMenu_ChooseSports_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_ChooseSports_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.Initialize");

	AMenu_ChooseSports_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_ChooseSports_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.UserConstructionScript");

	AMenu_ChooseSports_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_ChooseSports_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveBeginPlay");

	AMenu_ChooseSports_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_ChooseSports_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveTick");

	AMenu_ChooseSports_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_ChooseSports_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveEndPlay");

	AMenu_ChooseSports_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_ChooseSports_C::ButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.ButtonPressed");

	AMenu_ChooseSports_C_ButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.ButtonSwapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_ChooseSports_C::ButtonSwapped(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.ButtonSwapped");

	AMenu_ChooseSports_C_ButtonSwapped_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.CheckButtonState
// (BlueprintCallable, BlueprintEvent)
void AMenu_ChooseSports_C::CheckButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.CheckButtonState");

	AMenu_ChooseSports_C_CheckButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.ExecuteUbergraph_Menu_ChooseSports
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_ChooseSports_C::ExecuteUbergraph_Menu_ChooseSports(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.ExecuteUbergraph_Menu_ChooseSports");

	AMenu_ChooseSports_C_ExecuteUbergraph_Menu_ChooseSports_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_ChooseSports.Menu_ChooseSports_C.UpdateNextButtonState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_ChooseSports_C::UpdateNextButtonState__DelegateSignature(bool EnableButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ChooseSports.Menu_ChooseSports_C.UpdateNextButtonState__DelegateSignature");

	AMenu_ChooseSports_C_UpdateNextButtonState__DelegateSignature_Params params;
	params.EnableButton = EnableButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
