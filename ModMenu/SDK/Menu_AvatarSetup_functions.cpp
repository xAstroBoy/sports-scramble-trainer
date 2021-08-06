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

// Function Menu_AvatarSetup.Menu_AvatarSetup_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_AvatarSetup_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.EnableMenuInput");

	AMenu_AvatarSetup_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_AvatarSetup_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.DisableMenuInput");

	AMenu_AvatarSetup_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_AvatarSetup_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.RemoveSubMenu");

	AMenu_AvatarSetup_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_AvatarSetup_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.HideSubMenu");

	AMenu_AvatarSetup_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_AvatarSetup_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.RestoreSubMenu");

	AMenu_AvatarSetup_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateAvatarText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::UpdateAvatarText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateAvatarText");

	AMenu_AvatarSetup_C_UpdateAvatarText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.SetRed
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::SetRed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.SetRed");

	AMenu_AvatarSetup_C_SetRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Shutdown
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Shutdown");

	AMenu_AvatarSetup_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::UpdateAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateAvatar");

	AMenu_AvatarSetup_C_UpdateAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateHairColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::UpdateHairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateHairColor");

	AMenu_AvatarSetup_C_UpdateHairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateSkinColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::UpdateSkinColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateSkinColor");

	AMenu_AvatarSetup_C_UpdateSkinColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.SaveAvatarLook
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::SaveAvatarLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.SaveAvatarLook");

	AMenu_AvatarSetup_C_SaveAvatarLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Initialize");

	AMenu_AvatarSetup_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.UserConstructionScript");

	AMenu_AvatarSetup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_Rotation__FinishedFunc
// (BlueprintEvent)
void AMenu_AvatarSetup_C::Timeline_Rotation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_Rotation__FinishedFunc");

	AMenu_AvatarSetup_C_Timeline_Rotation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_Rotation__UpdateFunc
// (BlueprintEvent)
void AMenu_AvatarSetup_C::Timeline_Rotation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_Rotation__UpdateFunc");

	AMenu_AvatarSetup_C_Timeline_Rotation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_BackingScale__FinishedFunc
// (BlueprintEvent)
void AMenu_AvatarSetup_C::Timeline_BackingScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_BackingScale__FinishedFunc");

	AMenu_AvatarSetup_C_Timeline_BackingScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_BackingScale__UpdateFunc
// (BlueprintEvent)
void AMenu_AvatarSetup_C::Timeline_BackingScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_BackingScale__UpdateFunc");

	AMenu_AvatarSetup_C_Timeline_BackingScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_MoveAvatar__FinishedFunc
// (BlueprintEvent)
void AMenu_AvatarSetup_C::Timeline_MoveAvatar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_MoveAvatar__FinishedFunc");

	AMenu_AvatarSetup_C_Timeline_MoveAvatar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_MoveAvatar__UpdateFunc
// (BlueprintEvent)
void AMenu_AvatarSetup_C::Timeline_MoveAvatar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_MoveAvatar__UpdateFunc");

	AMenu_AvatarSetup_C_Timeline_MoveAvatar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleMesh__FinishedFunc
// (BlueprintEvent)
void AMenu_AvatarSetup_C::Timeline_ScaleMesh__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleMesh__FinishedFunc");

	AMenu_AvatarSetup_C_Timeline_ScaleMesh__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleMesh__UpdateFunc
// (BlueprintEvent)
void AMenu_AvatarSetup_C::Timeline_ScaleMesh__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleMesh__UpdateFunc");

	AMenu_AvatarSetup_C_Timeline_ScaleMesh__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleAvatar__FinishedFunc
// (BlueprintEvent)
void AMenu_AvatarSetup_C::Timeline_ScaleAvatar__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleAvatar__FinishedFunc");

	AMenu_AvatarSetup_C_Timeline_ScaleAvatar__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleAvatar__UpdateFunc
// (BlueprintEvent)
void AMenu_AvatarSetup_C::Timeline_ScaleAvatar__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleAvatar__UpdateFunc");

	AMenu_AvatarSetup_C_Timeline_ScaleAvatar__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_AvatarSetup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveBeginPlay");

	AMenu_AvatarSetup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_AvatarSetup_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveTick");

	AMenu_AvatarSetup_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_AvatarSetup_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveEndPlay");

	AMenu_AvatarSetup_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousAvatar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_AvatarSetup_C::PreviousAvatar(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousAvatar");

	AMenu_AvatarSetup_C_PreviousAvatar_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextAvatar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_AvatarSetup_C::NextAvatar(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextAvatar");

	AMenu_AvatarSetup_C_NextAvatar_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_AvatarSetup_C::PreviousSkin(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousSkin");

	AMenu_AvatarSetup_C_PreviousSkin_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_AvatarSetup_C::NextSkin(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextSkin");

	AMenu_AvatarSetup_C_NextSkin_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousHair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_AvatarSetup_C::PreviousHair(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousHair");

	AMenu_AvatarSetup_C_PreviousHair_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextHair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_AvatarSetup_C::NextHair(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextHair");

	AMenu_AvatarSetup_C_NextHair_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.InitialSetupComplete
// (BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::InitialSetupComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.InitialSetupComplete");

	AMenu_AvatarSetup_C_InitialSetupComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.Play_SFX_Avatar_Intro
// (BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::Play_SFX_Avatar_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.Play_SFX_Avatar_Intro");

	AMenu_AvatarSetup_C_Play_SFX_Avatar_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.ExecuteUbergraph_Menu_AvatarSetup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_AvatarSetup_C::ExecuteUbergraph_Menu_AvatarSetup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.ExecuteUbergraph_Menu_AvatarSetup");

	AMenu_AvatarSetup_C_ExecuteUbergraph_Menu_AvatarSetup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_AvatarSetup.Menu_AvatarSetup_C.InitialSetupAnimComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMenu_AvatarSetup_C::InitialSetupAnimComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_AvatarSetup.Menu_AvatarSetup_C.InitialSetupAnimComplete__DelegateSignature");

	AMenu_AvatarSetup_C_InitialSetupAnimComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
