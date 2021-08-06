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

// Function Menu_JoinInvite.Menu_JoinInvite_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_JoinInvite_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.EnableMenuInput");

	AMenu_JoinInvite_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_JoinInvite_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.DisableMenuInput");

	AMenu_JoinInvite_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_JoinInvite_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.RemoveSubMenu");

	AMenu_JoinInvite_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_JoinInvite_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.HideSubMenu");

	AMenu_JoinInvite_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_JoinInvite_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.RestoreSubMenu");

	AMenu_JoinInvite_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.InitializeMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_JoinInvite_C::InitializeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.InitializeMenu");

	AMenu_JoinInvite_C_InitializeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.UpdateView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_JoinInvite_C::UpdateView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.UpdateView");

	AMenu_JoinInvite_C_UpdateView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_JoinInvite_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.Initialize");

	AMenu_JoinInvite_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_JoinInvite_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.UserConstructionScript");

	AMenu_JoinInvite_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_MoveMessage__FinishedFunc
// (BlueprintEvent)
void AMenu_JoinInvite_C::Timeline_MoveMessage__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_MoveMessage__FinishedFunc");

	AMenu_JoinInvite_C_Timeline_MoveMessage__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_MoveMessage__UpdateFunc
// (BlueprintEvent)
void AMenu_JoinInvite_C::Timeline_MoveMessage__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_MoveMessage__UpdateFunc");

	AMenu_JoinInvite_C_Timeline_MoveMessage__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_ScaleMenu__FinishedFunc
// (BlueprintEvent)
void AMenu_JoinInvite_C::Timeline_ScaleMenu__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_ScaleMenu__FinishedFunc");

	AMenu_JoinInvite_C_Timeline_ScaleMenu__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_ScaleMenu__UpdateFunc
// (BlueprintEvent)
void AMenu_JoinInvite_C::Timeline_ScaleMenu__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_ScaleMenu__UpdateFunc");

	AMenu_JoinInvite_C_Timeline_ScaleMenu__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_JoinInvite_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.ReceiveBeginPlay");

	AMenu_JoinInvite_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_JoinInvite_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.ReceiveTick");

	AMenu_JoinInvite_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_JoinInvite_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.ReceiveEndPlay");

	AMenu_JoinInvite_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_JoinInvite_C::ButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.ButtonPressed");

	AMenu_JoinInvite_C_ButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.PreviousButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_JoinInvite_C::PreviousButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.PreviousButtonPressed");

	AMenu_JoinInvite_C_PreviousButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.NextButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_JoinInvite_C::NextButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.NextButtonPressed");

	AMenu_JoinInvite_C_NextButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.ButtonSwappedJoin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_JoinInvite_C::ButtonSwappedJoin(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.ButtonSwappedJoin");

	AMenu_JoinInvite_C_ButtonSwappedJoin_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.DeclineAllSwapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_JoinInvite_C::DeclineAllSwapped(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.DeclineAllSwapped");

	AMenu_JoinInvite_C_DeclineAllSwapped_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.ShowMessage
// (BlueprintCallable, BlueprintEvent)
void AMenu_JoinInvite_C::ShowMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.ShowMessage");

	AMenu_JoinInvite_C_ShowMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.ScaleMenu
// (BlueprintCallable, BlueprintEvent)
void AMenu_JoinInvite_C::ScaleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.ScaleMenu");

	AMenu_JoinInvite_C_ScaleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.ExecuteUbergraph_Menu_JoinInvite
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_JoinInvite_C::ExecuteUbergraph_Menu_JoinInvite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.ExecuteUbergraph_Menu_JoinInvite");

	AMenu_JoinInvite_C_ExecuteUbergraph_Menu_JoinInvite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.DeclineAll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMenu_JoinInvite_C::DeclineAll__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.DeclineAll__DelegateSignature");

	AMenu_JoinInvite_C_DeclineAll__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.JoinPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScramGameInvite        JoinPlayer                     (BlueprintVisible, BlueprintReadOnly, Parm)
void AMenu_JoinInvite_C::JoinPlayer__DelegateSignature(const struct FScramGameInvite& JoinPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.JoinPlayer__DelegateSignature");

	AMenu_JoinInvite_C_JoinPlayer__DelegateSignature_Params params;
	params.JoinPlayer = JoinPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_JoinInvite.Menu_JoinInvite_C.SelectionStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_JoinInvite_C::SelectionStarted__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_JoinInvite.Menu_JoinInvite_C.SelectionStarted__DelegateSignature");

	AMenu_JoinInvite_C_SelectionStarted__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
