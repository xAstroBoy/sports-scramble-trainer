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

// Function InfoScreen.InfoScreen_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInfoScreen_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.EnableMenuInput");

	AInfoScreen_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function InfoScreen.InfoScreen_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInfoScreen_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.DisableMenuInput");

	AInfoScreen_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function InfoScreen.InfoScreen_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInfoScreen_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.RestoreSubMenu");

	AInfoScreen_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function InfoScreen.InfoScreen_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInfoScreen_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.HideSubMenu");

	AInfoScreen_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function InfoScreen.InfoScreen_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInfoScreen_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.RemoveSubMenu");

	AInfoScreen_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function InfoScreen.InfoScreen_C.SwapToNewText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocTextBody                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoScreen_C::SwapToNewText(const struct FName& LocTextBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.SwapToNewText");

	AInfoScreen_C_SwapToNewText_Params params;
	params.LocTextBody = LocTextBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.DisableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AInfoScreen_C::DisableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.DisableButtons");

	AInfoScreen_C_DisableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.SpawnOkButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInfoScreen_C::SpawnOkButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.SpawnOkButton");

	AInfoScreen_C_SpawnOkButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.SpawnCancelButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInfoScreen_C::SpawnCancelButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.SpawnCancelButton");

	AInfoScreen_C_SpawnCancelButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.UpdateMenuVisiblilty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInfoScreen_C::UpdateMenuVisiblilty(bool visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.UpdateMenuVisiblilty");

	AInfoScreen_C_UpdateMenuVisiblilty_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.SpawnHeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInfoScreen_C::SpawnHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.SpawnHeader");

	AInfoScreen_C_SpawnHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.UpdateBodyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocText                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoScreen_C::UpdateBodyText(const struct FName& LocText)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.UpdateBodyText");

	AInfoScreen_C_UpdateBodyText_Params params;
	params.LocText = LocText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AInfoScreen_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.Initialize");

	AInfoScreen_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AInfoScreen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.UserConstructionScript");

	AInfoScreen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.Timeline_ScaleMenu__FinishedFunc
// (BlueprintEvent)
void AInfoScreen_C::Timeline_ScaleMenu__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.Timeline_ScaleMenu__FinishedFunc");

	AInfoScreen_C_Timeline_ScaleMenu__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.Timeline_ScaleMenu__UpdateFunc
// (BlueprintEvent)
void AInfoScreen_C::Timeline_ScaleMenu__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.Timeline_ScaleMenu__UpdateFunc");

	AInfoScreen_C_Timeline_ScaleMenu__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInfoScreen_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.ReceiveBeginPlay");

	AInfoScreen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoScreen_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.ReceiveTick");

	AInfoScreen_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.FirstMenu
// (BlueprintCallable, BlueprintEvent)
void AInfoScreen_C::FirstMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.FirstMenu");

	AInfoScreen_C_FirstMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.HeaderClosing
// (BlueprintCallable, BlueprintEvent)
void AInfoScreen_C::HeaderClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.HeaderClosing");

	AInfoScreen_C_HeaderClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.DestroyMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoScreen_C::DestroyMenu(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.DestroyMenu");

	AInfoScreen_C_DestroyMenu_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.OpenMenu
// (BlueprintCallable, BlueprintEvent)
void AInfoScreen_C::OpenMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.OpenMenu");

	AInfoScreen_C_OpenMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
void AInfoScreen_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.CloseMenu");

	AInfoScreen_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoScreen_C::ButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.ButtonPressed");

	AInfoScreen_C_ButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.ButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoScreen_C::ButtonSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.ButtonSelected");

	AInfoScreen_C_ButtonSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoScreen_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.ReceiveEndPlay");

	AInfoScreen_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.ExecuteUbergraph_InfoScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoScreen_C::ExecuteUbergraph_InfoScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.ExecuteUbergraph_InfoScreen");

	AInfoScreen_C_ExecuteUbergraph_InfoScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.MenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoScreen_C::MenuClosed__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.MenuClosed__DelegateSignature");

	AInfoScreen_C_MenuClosed__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfoScreen.InfoScreen_C.ChoiceMade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInfoScreen_C::ChoiceMade__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoScreen.InfoScreen_C.ChoiceMade__DelegateSignature");

	AInfoScreen_C_ChoiceMade__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
