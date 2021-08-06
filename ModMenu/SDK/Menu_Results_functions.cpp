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

// Function Menu_Results.Menu_Results_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Results_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.EnableMenuInput");

	AMenu_Results_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_Results.Menu_Results_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Results_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.DisableMenuInput");

	AMenu_Results_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_Results.Menu_Results_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Results_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.RemoveSubMenu");

	AMenu_Results_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_Results.Menu_Results_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Results_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.HideSubMenu");

	AMenu_Results_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_Results.Menu_Results_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Results_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.RestoreSubMenu");

	AMenu_Results_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_Results.Menu_Results_C.SwapToRed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::SwapToRed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.SwapToRed");

	AMenu_Results_C_SwapToRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.RevealHighScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::RevealHighScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.RevealHighScore");

	AMenu_Results_C_RevealHighScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.AvatarsReact
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::AvatarsReact()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.AvatarsReact");

	AMenu_Results_C_AvatarsReact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.SpawnAvatars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::SpawnAvatars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.SpawnAvatars");

	AMenu_Results_C_SpawnAvatars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.ShowTrophyIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::ShowTrophyIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.ShowTrophyIcon");

	AMenu_Results_C_ShowTrophyIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.SwapToGold
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::SwapToGold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.SwapToGold");

	AMenu_Results_C_SwapToGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm, OutParm)
void AMenu_Results_C::GetTitleText(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.GetTitleText");

	AMenu_Results_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Title != nullptr)
		*Title = params.Title;

}


// Function Menu_Results.Menu_Results_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Initialize");

	AMenu_Results_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.UserConstructionScript");

	AMenu_Results_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ScaleBox__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ScaleBox__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ScaleBox__FinishedFunc");

	AMenu_Results_C_Timeline_ScaleBox__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ScaleBox__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ScaleBox__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ScaleBox__UpdateFunc");

	AMenu_Results_C_Timeline_ScaleBox__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_SwapBoxText__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_SwapBoxText__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_SwapBoxText__FinishedFunc");

	AMenu_Results_C_Timeline_SwapBoxText__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_SwapBoxText__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_SwapBoxText__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_SwapBoxText__UpdateFunc");

	AMenu_Results_C_Timeline_SwapBoxText__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ShowHighScore__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ShowHighScore__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ShowHighScore__FinishedFunc");

	AMenu_Results_C_Timeline_ShowHighScore__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ShowHighScore__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ShowHighScore__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ShowHighScore__UpdateFunc");

	AMenu_Results_C_Timeline_ShowHighScore__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_MoveTitle__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_MoveTitle__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_MoveTitle__FinishedFunc");

	AMenu_Results_C_Timeline_MoveTitle__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_MoveTitle__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_MoveTitle__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_MoveTitle__UpdateFunc");

	AMenu_Results_C_Timeline_MoveTitle__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ShowInnerMessage__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ShowInnerMessage__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ShowInnerMessage__FinishedFunc");

	AMenu_Results_C_Timeline_ShowInnerMessage__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ShowInnerMessage__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ShowInnerMessage__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ShowInnerMessage__UpdateFunc");

	AMenu_Results_C_Timeline_ShowInnerMessage__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_SwapBoxBump__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_SwapBoxBump__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_SwapBoxBump__FinishedFunc");

	AMenu_Results_C_Timeline_SwapBoxBump__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_SwapBoxBump__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_SwapBoxBump__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_SwapBoxBump__UpdateFunc");

	AMenu_Results_C_Timeline_SwapBoxBump__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ScaleAvatars__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ScaleAvatars__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ScaleAvatars__FinishedFunc");

	AMenu_Results_C_Timeline_ScaleAvatars__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ScaleAvatars__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ScaleAvatars__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ScaleAvatars__UpdateFunc");

	AMenu_Results_C_Timeline_ScaleAvatars__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_MoveAvatars__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_MoveAvatars__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_MoveAvatars__FinishedFunc");

	AMenu_Results_C_Timeline_MoveAvatars__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_MoveAvatars__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_MoveAvatars__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_MoveAvatars__UpdateFunc");

	AMenu_Results_C_Timeline_MoveAvatars__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ScaleMessage__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ScaleMessage__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ScaleMessage__FinishedFunc");

	AMenu_Results_C_Timeline_ScaleMessage__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ScaleMessage__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ScaleMessage__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ScaleMessage__UpdateFunc");

	AMenu_Results_C_Timeline_ScaleMessage__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_SwapBox__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_SwapBox__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_SwapBox__FinishedFunc");

	AMenu_Results_C_Timeline_SwapBox__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_SwapBox__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_SwapBox__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_SwapBox__UpdateFunc");

	AMenu_Results_C_Timeline_SwapBox__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ScaleBoxBump__FinishedFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ScaleBoxBump__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ScaleBoxBump__FinishedFunc");

	AMenu_Results_C_Timeline_ScaleBoxBump__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.Timeline_ScaleBoxBump__UpdateFunc
// (BlueprintEvent)
void AMenu_Results_C::Timeline_ScaleBoxBump__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.Timeline_ScaleBoxBump__UpdateFunc");

	AMenu_Results_C_Timeline_ScaleBoxBump__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_Results_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.ReceiveBeginPlay");

	AMenu_Results_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Results_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.ReceiveTick");

	AMenu_Results_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Results_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.ReceiveEndPlay");

	AMenu_Results_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.RevealBox
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::RevealBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.RevealBox");

	AMenu_Results_C_RevealBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.ShowScore
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::ShowScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.ShowScore");

	AMenu_Results_C_ShowScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.ShowHighScore
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::ShowHighScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.ShowHighScore");

	AMenu_Results_C_ShowHighScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.MoveMessage
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::MoveMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.MoveMessage");

	AMenu_Results_C_MoveMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.ShowInnerMessage
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::ShowInnerMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.ShowInnerMessage");

	AMenu_Results_C_ShowInnerMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.ShowFinalMessage
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::ShowFinalMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.ShowFinalMessage");

	AMenu_Results_C_ShowFinalMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.FinishFinalMessage
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::FinishFinalMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.FinishFinalMessage");

	AMenu_Results_C_FinishFinalMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.BeginResultsDisplay
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::BeginResultsDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.BeginResultsDisplay");

	AMenu_Results_C_BeginResultsDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.MoveAvatars
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::MoveAvatars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.MoveAvatars");

	AMenu_Results_C_MoveAvatars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.DisplayMessage
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::DisplayMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.DisplayMessage");

	AMenu_Results_C_DisplayMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.PlayFX
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::PlayFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.PlayFX");

	AMenu_Results_C_PlayFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.PlayRedFX
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::PlayRedFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.PlayRedFX");

	AMenu_Results_C_PlayRedFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.DelayedYellowPulse
// (BlueprintCallable, BlueprintEvent)
void AMenu_Results_C::DelayedYellowPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.DelayedYellowPulse");

	AMenu_Results_C_DelayedYellowPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.ExecuteUbergraph_Menu_Results
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Results_C::ExecuteUbergraph_Menu_Results(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.ExecuteUbergraph_Menu_Results");

	AMenu_Results_C_ExecuteUbergraph_Menu_Results_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Results.Menu_Results_C.ResultsDisplayComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WideNextButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Results_C::ResultsDisplayComplete__DelegateSignature(bool WideNextButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Results.Menu_Results_C.ResultsDisplayComplete__DelegateSignature");

	AMenu_Results_C_ResultsDisplayComplete__DelegateSignature_Params params;
	params.WideNextButton = WideNextButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
