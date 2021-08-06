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

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_3dPanelImages_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.EnableMenuInput");

	AMenu_3dPanelImages_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_3dPanelImages_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.DisableMenuInput");

	AMenu_3dPanelImages_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_3dPanelImages_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.RemoveSubMenu");

	AMenu_3dPanelImages_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_3dPanelImages_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.HideSubMenu");

	AMenu_3dPanelImages_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_3dPanelImages_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.RestoreSubMenu");

	AMenu_3dPanelImages_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_3dPanelImages_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.Initialize");

	AMenu_3dPanelImages_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_3dPanelImages_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.UserConstructionScript");

	AMenu_3dPanelImages_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_3dPanelImages_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveBeginPlay");

	AMenu_3dPanelImages_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_3dPanelImages_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveTick");

	AMenu_3dPanelImages_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_3dPanelImages_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveEndPlay");

	AMenu_3dPanelImages_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_3dPanelImages_C::ButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.ButtonPressed");

	AMenu_3dPanelImages_C_ButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ButtonSwapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_3dPanelImages_C::ButtonSwapped(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.ButtonSwapped");

	AMenu_3dPanelImages_C_ButtonSwapped_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.DisableMenu
// (BlueprintCallable, BlueprintEvent)
void AMenu_3dPanelImages_C::DisableMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.DisableMenu");

	AMenu_3dPanelImages_C_DisableMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ExecuteUbergraph_Menu_3dPanelImages
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_3dPanelImages_C::ExecuteUbergraph_Menu_3dPanelImages(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.ExecuteUbergraph_Menu_3dPanelImages");

	AMenu_3dPanelImages_C_ExecuteUbergraph_Menu_3dPanelImages_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.SelectionComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_3dPanelImages_C::SelectionComplete__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.SelectionComplete__DelegateSignature");

	AMenu_3dPanelImages_C_SelectionComplete__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_3dPanelImages.Menu_3dPanelImages_C.SelectionStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_3dPanelImages_C::SelectionStarted__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_3dPanelImages.Menu_3dPanelImages_C.SelectionStarted__DelegateSignature");

	AMenu_3dPanelImages_C_SelectionStarted__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
