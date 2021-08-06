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

// Function GameHandlerOnline.GameHandlerOnline_C.SpawnSevereMessageMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnSevereMessageMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnSevereMessageMenu");

	AGameHandlerOnline_C_SpawnSevereMessageMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RemoveErrorMenu
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::RemoveErrorMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RemoveErrorMenu");

	AGameHandlerOnline_C_RemoveErrorMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ClosePauseMenu
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ClosePauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ClosePauseMenu");

	AGameHandlerOnline_C_ClosePauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.FailsafeDoubleMenu
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::FailsafeDoubleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.FailsafeDoubleMenu");

	AGameHandlerOnline_C_FailsafeDoubleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RepairLocalClientState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> NewClientState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::RepairLocalClientState(TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> NewClientState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RepairLocalClientState");

	AGameHandlerOnline_C_RepairLocalClientState_Params params;
	params.NewClientState = NewClientState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.UnbindPause
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::UnbindPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.UnbindPause");

	AGameHandlerOnline_C_UnbindPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.BindPause
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::BindPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.BindPause");

	AGameHandlerOnline_C_BindPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.CheckRemotePlayerClientState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         RemotePlayerClientState        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AGameHandlerOnline_C::CheckRemotePlayerClientState(const struct FScriptDelegate& RemotePlayerClientState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.CheckRemotePlayerClientState");

	AGameHandlerOnline_C_CheckRemotePlayerClientState_Params params;
	params.RemotePlayerClientState = RemotePlayerClientState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ResetStatusBools
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ResetStatusBools()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ResetStatusBools");

	AGameHandlerOnline_C_ResetStatusBools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnExitButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StaticPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScriptDelegate         ExitEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AGameHandlerOnline_C::SpawnExitButton(bool StaticPosition, const struct FScriptDelegate& ExitEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnExitButton");

	AGameHandlerOnline_C_SpawnExitButton_Params params;
	params.StaticPosition = StaticPosition;
	params.ExitEvent = ExitEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ShowMenus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ShowMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ShowMenus");

	AGameHandlerOnline_C_ShowMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.HideMenus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::HideMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HideMenus");

	AGameHandlerOnline_C_HideMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RemoveAvatarButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::RemoveAvatarButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RemoveAvatarButtons");

	AGameHandlerOnline_C_RemoveAvatarButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnAvatarButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarButtons");

	AGameHandlerOnline_C_SpawnAvatarButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnConfirmationMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocText                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   OverrideText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate         Selection                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           Static                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::SpawnConfirmationMenu(const struct FName& LocText, const struct FText& OverrideText, const struct FScriptDelegate& Selection, bool Static)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnConfirmationMenu");

	AGameHandlerOnline_C_SpawnConfirmationMenu_Params params;
	params.LocText = LocText;
	params.OverrideText = OverrideText;
	params.Selection = Selection;
	params.Static = Static;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnTextTwoMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocText0                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   LocText1                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptDelegate         SelectionFinished              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AGameHandlerOnline_C::SpawnTextTwoMenu(const struct FName& LocText0, const struct FName& LocText1, const struct FScriptDelegate& SelectionFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnTextTwoMenu");

	AGameHandlerOnline_C_SpawnTextTwoMenu_Params params;
	params.LocText0 = LocText0;
	params.LocText1 = LocText1;
	params.SelectionFinished = SelectionFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.PlayerReady?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ready                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::PlayerReady_(class AScramPlayer* Player, bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.PlayerReady?");

	AGameHandlerOnline_C_PlayerReady__Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ready != nullptr)
		*Ready = params.Ready;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportOptionsMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnSportOptionsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportOptionsMenu");

	AGameHandlerOnline_C_SpawnSportOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSportMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         ChoiceEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AGameHandlerOnline_C::SpawnChooseSportMenu(const struct FScriptDelegate& ChoiceEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSportMenu");

	AGameHandlerOnline_C_SpawnChooseSportMenu_Params params;
	params.ChoiceEvent = ChoiceEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SetFindMatchGameOptions
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SetFindMatchGameOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SetFindMatchGameOptions");

	AGameHandlerOnline_C_SetFindMatchGameOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnBowlingGloves
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::SpawnBowlingGloves(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnBowlingGloves");

	AGameHandlerOnline_C_SpawnBowlingGloves_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnMessageMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Static                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::SpawnMessageMenu(const struct FText& Text, bool Static)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnMessageMenu");

	AGameHandlerOnline_C_SpawnMessageMenu_Params params;
	params.Text = Text;
	params.Static = Static;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnAwardMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         AwardReadyEvent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AGameHandlerOnline_C::SpawnAwardMenu(const struct FScriptDelegate& AwardReadyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnAwardMenu");

	AGameHandlerOnline_C_SpawnAwardMenu_Params params;
	params.AwardReadyEvent = AwardReadyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.AwardsEarned?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AwardWaiting                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::AwardsEarned_(bool* AwardWaiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.AwardsEarned?");

	AGameHandlerOnline_C_AwardsEarned__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AwardWaiting != nullptr)
		*AwardWaiting = params.AwardWaiting;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnResultsMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         ResultsCompleteEvent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FResultsData            ResultsData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::SpawnResultsMenu(const struct FScriptDelegate& ResultsCompleteEvent, const struct FResultsData& ResultsData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnResultsMenu");

	AGameHandlerOnline_C_SpawnResultsMenu_Params params;
	params.ResultsCompleteEvent = ResultsCompleteEvent;
	params.ResultsData = ResultsData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.PrepSport
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::PrepSport()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.PrepSport");

	AGameHandlerOnline_C_PrepSport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RevealRemoteAvatar
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::RevealRemoteAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RevealRemoteAvatar");

	AGameHandlerOnline_C_RevealRemoteAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnGameManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameManager");

	AGameHandlerOnline_C_SpawnGameManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportIconMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenu_MpSportIcon_C*     Menu                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::SpawnSportIconMenu(class AMenu_MpSportIcon_C** Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportIconMenu");

	AGameHandlerOnline_C_SpawnSportIconMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Menu != nullptr)
		*Menu = params.Menu;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnMpReadyMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnMpReadyMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnMpReadyMenu");

	AGameHandlerOnline_C_SpawnMpReadyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarChoiceMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnAvatarChoiceMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarChoiceMenu");

	AGameHandlerOnline_C_SpawnAvatarChoiceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.NextMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AGameHandlerOnline_C::NextMenu(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.NextMenu");

	AGameHandlerOnline_C_NextMenu_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RemoveNavigationButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::RemoveNavigationButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RemoveNavigationButtons");

	AGameHandlerOnline_C_RemoveNavigationButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.DisableActiveMenuInput
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::DisableActiveMenuInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.DisableActiveMenuInput");

	AGameHandlerOnline_C_DisableActiveMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnNavigationButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ok                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScriptDelegate         OkEvent                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           WideSpacing                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScriptDelegate         NextEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           Trophy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Home                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FocusNext                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::SpawnNavigationButtons(bool Ok, const struct FScriptDelegate& OkEvent, bool WideSpacing, bool Next, const struct FScriptDelegate& NextEvent, bool Trophy, bool Home, bool FocusNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnNavigationButtons");

	AGameHandlerOnline_C_SpawnNavigationButtons_Params params;
	params.Ok = Ok;
	params.OkEvent = OkEvent;
	params.WideSpacing = WideSpacing;
	params.Next = Next;
	params.NextEvent = NextEvent;
	params.Trophy = Trophy;
	params.Home = Home;
	params.FocusNext = FocusNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.EnableActiveMenuInput
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::EnableActiveMenuInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.EnableActiveMenuInput");

	AGameHandlerOnline_C_EnableActiveMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnHeader
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         InitialMenu_Event              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           StartOpen                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::SpawnHeader(const struct FScriptDelegate& InitialMenu_Event, bool StartOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnHeader");

	AGameHandlerOnline_C_SpawnHeader_Params params;
	params.InitialMenu_Event = InitialMenu_Event;
	params.StartOpen = StartOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Initialize");

	AGameHandlerOnline_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.UserConstructionScript");

	AGameHandlerOnline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__FinishedFunc
// (BlueprintEvent)
void AGameHandlerOnline_C::Timeline_MenuScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__FinishedFunc");

	AGameHandlerOnline_C_Timeline_MenuScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__UpdateFunc
// (BlueprintEvent)
void AGameHandlerOnline_C::Timeline_MenuScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__UpdateFunc");

	AGameHandlerOnline_C_Timeline_MenuScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_CB7A18C444F2E804805EC3A08673C765
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnFailure_CB7A18C444F2E804805EC3A08673C765()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_CB7A18C444F2E804805EC3A08673C765");

	AGameHandlerOnline_C_OnFailure_CB7A18C444F2E804805EC3A08673C765_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_CB7A18C444F2E804805EC3A08673C765
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnSuccess_CB7A18C444F2E804805EC3A08673C765()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_CB7A18C444F2E804805EC3A08673C765");

	AGameHandlerOnline_C_OnSuccess_CB7A18C444F2E804805EC3A08673C765_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_FE43AE584DB619A31AB35583C4B33B9D
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnFailure_FE43AE584DB619A31AB35583C4B33B9D()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_FE43AE584DB619A31AB35583C4B33B9D");

	AGameHandlerOnline_C_OnFailure_FE43AE584DB619A31AB35583C4B33B9D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_FE43AE584DB619A31AB35583C4B33B9D
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnSuccess_FE43AE584DB619A31AB35583C4B33B9D()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_FE43AE584DB619A31AB35583C4B33B9D");

	AGameHandlerOnline_C_OnSuccess_FE43AE584DB619A31AB35583C4B33B9D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnLoaded_3BE7A01644B7D6F446DF06B53AF96672
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::OnLoaded_3BE7A01644B7D6F446DF06B53AF96672(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnLoaded_3BE7A01644B7D6F446DF06B53AF96672");

	AGameHandlerOnline_C_OnLoaded_3BE7A01644B7D6F446DF06B53AF96672_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AGameHandlerOnline_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ReceiveBeginPlay");

	AGameHandlerOnline_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.InitialMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::InitialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.InitialMenu");

	AGameHandlerOnline_C_InitialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ScaleUpMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ScaleUpMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ScaleUpMenu");

	AGameHandlerOnline_C_ScaleUpMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ScaleDownMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ScaleDownMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ScaleDownMenu");

	AGameHandlerOnline_C_ScaleDownMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::ButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ButtonPressed");

	AGameHandlerOnline_C_ButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.HomeButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::HomeButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HomeButtonPressed");

	AGameHandlerOnline_C_HomeButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.AvatarChoiceMenuOpened
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::AvatarChoiceMenuOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.AvatarChoiceMenuOpened");

	AGameHandlerOnline_C_AvatarChoiceMenuOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.AvatarSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::AvatarSelected(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.AvatarSelected");

	AGameHandlerOnline_C_AvatarSelected_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnReadyMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnReadyMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnReadyMenu");

	AGameHandlerOnline_C_SpawnReadyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ReadyMenuOpened
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ReadyMenuOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ReadyMenuOpened");

	AGameHandlerOnline_C_ReadyMenuOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.AllPlayersReady
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::AllPlayersReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.AllPlayersReady");

	AGameHandlerOnline_C_AllPlayersReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.CloseReadyMenu
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::CloseReadyMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.CloseReadyMenu");

	AGameHandlerOnline_C_CloseReadyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnIconMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnIconMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnIconMenu");

	AGameHandlerOnline_C_SpawnIconMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.TennisMatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::TennisMatchComplete(TEnumAsByte<GameResult_EGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.TennisMatchComplete");

	AGameHandlerOnline_C_TennisMatchComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ShowResults
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ShowResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ShowResults");

	AGameHandlerOnline_C_ShowResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.GameOver
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::GameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.GameOver");

	AGameHandlerOnline_C_GameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnCapsule
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnCapsule");

	AGameHandlerOnline_C_SpawnCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.CapsuleOn
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::CapsuleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.CapsuleOn");

	AGameHandlerOnline_C_CapsuleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SetResults
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Results_Game_Result            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::SetResults(TEnumAsByte<GameResult_EGameResult> Results_Game_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SetResults");

	AGameHandlerOnline_C_SetResults_Params params;
	params.Results_Game_Result = Results_Game_Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.TrophyComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllAwardsComplete              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::TrophyComplete(bool AllAwardsComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.TrophyComplete");

	AGameHandlerOnline_C_TrophyComplete_Params params;
	params.AllAwardsComplete = AllAwardsComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.TrophyReadyToSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::TrophyReadyToSpawn(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.TrophyReadyToSpawn");

	AGameHandlerOnline_C_TrophyReadyToSpawn_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.CreateTrophyMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::CreateTrophyMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.CreateTrophyMenu");

	AGameHandlerOnline_C_CreateTrophyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.TrophyLoop
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::TrophyLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.TrophyLoop");

	AGameHandlerOnline_C_TrophyLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.CreateNextFromResultsButton
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::CreateNextFromResultsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.CreateNextFromResultsButton");

	AGameHandlerOnline_C_CreateNextFromResultsButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ResultsDoneSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::ResultsDoneSelected(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ResultsDoneSelected");

	AGameHandlerOnline_C_ResultsDoneSelected_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReplayRequested
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::RemotePlayerReplayRequested(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReplayRequested");

	AGameHandlerOnline_C_RemotePlayerReplayRequested_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RestartMatch
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::RestartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RestartMatch");

	AGameHandlerOnline_C_RestartMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematch
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::WaitingForRematch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematch");

	AGameHandlerOnline_C_WaitingForRematch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematchDisplayed
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::WaitingForRematchDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematchDisplayed");

	AGameHandlerOnline_C_WaitingForRematchDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.DoNothing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::DoNothing(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.DoNothing");

	AGameHandlerOnline_C_DoNothing_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.BowlingMatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> MatchResult                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::BowlingMatchComplete(TEnumAsByte<GameResult_EGameResult> MatchResult, int Player1GamesWon, int Player2GamesWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.BowlingMatchComplete");

	AGameHandlerOnline_C_BowlingMatchComplete_Params params;
	params.MatchResult = MatchResult;
	params.Player1GamesWon = Player1GamesWon;
	params.Player2GamesWon = Player2GamesWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.BaseballMatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LocalPlayerVictory             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            AwayScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HomeScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::BaseballMatchComplete(bool LocalPlayerVictory, int AwayScore, int HomeScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.BaseballMatchComplete");

	AGameHandlerOnline_C_BaseballMatchComplete_Params params;
	params.LocalPlayerVictory = LocalPlayerVictory;
	params.AwayScore = AwayScore;
	params.HomeScore = HomeScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.HeaderHandoffComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::HeaderHandoffComplete(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HeaderHandoffComplete");

	AGameHandlerOnline_C_HeaderHandoffComplete_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnAvatarMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarMenu");

	AGameHandlerOnline_C_SpawnAvatarMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelected
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           BBHostIsHomeTeam               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::SportOptionsSelected(SportsScramble_EScramSport Sport, bool BBHostIsHomeTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelected");

	AGameHandlerOnline_C_SportOptionsSelected_Params params;
	params.Sport = Sport;
	params.BBHostIsHomeTeam = BBHostIsHomeTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.Sport Chosen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::Sport_Chosen(SportsScramble_EScramSport Sport)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Sport Chosen");

	AGameHandlerOnline_C_Sport_Chosen_Params params;
	params.Sport = Sport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameOptionsMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnGameOptionsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameOptionsMenu");

	AGameHandlerOnline_C_SpawnGameOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsMenuDisplayed
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SportOptionsMenuDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsMenuDisplayed");

	AGameHandlerOnline_C_SportOptionsMenuDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsChosen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::SportOptionsChosen(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsChosen");

	AGameHandlerOnline_C_SportOptionsChosen_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnGeoLevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewGeoLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::OnGeoLevelChanged(const struct FName& NewGeoLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnGeoLevelChanged");

	AGameHandlerOnline_C_OnGeoLevelChanged_Params params;
	params.NewGeoLevel = NewGeoLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.PlayerInitComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::PlayerInitComplete(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.PlayerInitComplete");

	AGameHandlerOnline_C_PlayerInitComplete_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnMatchStart
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnMatchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnMatchStart");

	AGameHandlerOnline_C_OnMatchStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ReceiveEndPlay");

	AGameHandlerOnline_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.FadeComplete
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::FadeComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.FadeComplete");

	AGameHandlerOnline_C_FadeComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.Shutdown
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Shutdown");

	AGameHandlerOnline_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnInitialPlayerInitComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::OnInitialPlayerInitComplete(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnInitialPlayerInitComplete");

	AGameHandlerOnline_C_OnInitialPlayerInitComplete_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayer*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::OnRemoteAvatarSelected(class AScramPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarSelected");

	AGameHandlerOnline_C_OnRemoteAvatarSelected_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ResultsDisplayComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WideNextButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::ResultsDisplayComplete(bool WideNextButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ResultsDisplayComplete");

	AGameHandlerOnline_C_ResultsDisplayComplete_Params params;
	params.WideNextButton = WideNextButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.PlayMatchBeginAudio
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::PlayMatchBeginAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.PlayMatchBeginAudio");

	AGameHandlerOnline_C_PlayMatchBeginAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatConnected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayerController*  PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::HeartbeatConnected(class AScramPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatConnected");

	AGameHandlerOnline_C_HeartbeatConnected_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatDisconnected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayerController*  PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::HeartbeatDisconnected(class AScramPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatDisconnected");

	AGameHandlerOnline_C_HeartbeatDisconnected_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatTravelCapsuleClosed
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::HeartbeatTravelCapsuleClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatTravelCapsuleClosed");

	AGameHandlerOnline_C_HeartbeatTravelCapsuleClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatReconnected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPlayerController*  PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::HeartbeatReconnected(class AScramPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatReconnected");

	AGameHandlerOnline_C_HeartbeatReconnected_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnMenuInstruments
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnMenuInstruments()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnMenuInstruments");

	AGameHandlerOnline_C_SpawnMenuInstruments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.Net_AllPlayersReconnected
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::Net_AllPlayersReconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Net_AllPlayersReconnected");

	AGameHandlerOnline_C_Net_AllPlayersReconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Local
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnDisconnect_Local()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Local");

	AGameHandlerOnline_C_OnDisconnect_Local_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnDisconnect_Remote()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote");

	AGameHandlerOnline_C_OnDisconnect_Remote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu0
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnDisconnect_Remote_Menu0()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu0");

	AGameHandlerOnline_C_OnDisconnect_Remote_Menu0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu1
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnDisconnect_Remote_Menu1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu1");

	AGameHandlerOnline_C_OnDisconnect_Remote_Menu1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnGameOverMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnGameOverMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnGameOverMenu");

	AGameHandlerOnline_C_OnGameOverMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchOrResetMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnRematchOrResetMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchOrResetMenu");

	AGameHandlerOnline_C_SpawnRematchOrResetMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendSelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::RematchWithFriendSelectionMade(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendSelectionMade");

	AGameHandlerOnline_C_RematchWithFriendSelectionMade_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendOpened
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::RematchWithFriendOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendOpened");

	AGameHandlerOnline_C_RematchWithFriendOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ReplayChooseSport
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ReplayChooseSport()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ReplayChooseSport");

	AGameHandlerOnline_C_ReplayChooseSport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.MulticastReselectSport
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::MulticastReselectSport()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.MulticastReselectSport");

	AGameHandlerOnline_C_MulticastReselectSport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnRematchMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchMenu");

	AGameHandlerOnline_C_SpawnRematchMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RematchChoiceMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::RematchChoiceMenu(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RematchChoiceMenu");

	AGameHandlerOnline_C_RematchChoiceMenu_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.DisconnectPauseEvent
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::DisconnectPauseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.DisconnectPauseEvent");

	AGameHandlerOnline_C_DisconnectPauseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginning
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::MatchBeginning()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginning");

	AGameHandlerOnline_C_MatchBeginning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnNetworkFailure
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnNetworkFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnNetworkFailure");

	AGameHandlerOnline_C_OnNetworkFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.TrySpawnNetworkFailureMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::TrySpawnNetworkFailureMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.TrySpawnNetworkFailureMenu");

	AGameHandlerOnline_C_TrySpawnNetworkFailureMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailureMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnNetworkFailureMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailureMenu");

	AGameHandlerOnline_C_SpawnNetworkFailureMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureTravelCapsuleClosed
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::NetworkFailureTravelCapsuleClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureTravelCapsuleClosed");

	AGameHandlerOnline_C_NetworkFailureTravelCapsuleClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.GamePaused
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::GamePaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.GamePaused");

	AGameHandlerOnline_C_GamePaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.GameUnpaused
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::GameUnpaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.GameUnpaused");

	AGameHandlerOnline_C_GameUnpaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarUnselected
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OnRemoteAvatarUnselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarUnselected");

	AGameHandlerOnline_C_OnRemoteAvatarUnselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ExitConfirmResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::ExitConfirmResult(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ExitConfirmResult");

	AGameHandlerOnline_C_ExitConfirmResult_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.WaitinForHostMessageReady
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::WaitinForHostMessageReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.WaitinForHostMessageReady");

	AGameHandlerOnline_C_WaitinForHostMessageReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.QuitSelectedPauseMenu
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::QuitSelectedPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.QuitSelectedPauseMenu");

	AGameHandlerOnline_C_QuitSelectedPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OverrideHostReady
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::OverrideHostReady(bool Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OverrideHostReady");

	AGameHandlerOnline_C_OverrideHostReady_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OverrideClientReady
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::OverrideClientReady(bool Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OverrideClientReady");

	AGameHandlerOnline_C_OverrideClientReady_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReadyAgain
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::RemotePlayerReadyAgain()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReadyAgain");

	AGameHandlerOnline_C_RemotePlayerReadyAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.QuitViaPause
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::QuitViaPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.QuitViaPause");

	AGameHandlerOnline_C_QuitViaPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ResetFromPauseMenu
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ResetFromPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ResetFromPauseMenu");

	AGameHandlerOnline_C_ResetFromPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SendClientExpectedState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> ExpectedClientState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::SendClientExpectedState(TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> ExpectedClientState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SendClientExpectedState");

	AGameHandlerOnline_C_SendClientExpectedState_Params params;
	params.ExpectedClientState = ExpectedClientState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SendHostExpectedState
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> ExpectedClientState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::SendHostExpectedState(TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> ExpectedClientState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SendHostExpectedState");

	AGameHandlerOnline_C_SendHostExpectedState_Params params;
	params.ExpectedClientState = ExpectedClientState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RequestHostExpectedState
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::RequestHostExpectedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RequestHostExpectedState");

	AGameHandlerOnline_C_RequestHostExpectedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RequestClientExpected
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::RequestClientExpected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RequestClientExpected");

	AGameHandlerOnline_C_RequestClientExpected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelectedClientOnly
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           BBHostIsHomeTeam               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameHandlerOnline_C::SportOptionsSelectedClientOnly(SportsScramble_EScramSport Sport, bool BBHostIsHomeTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelectedClientOnly");

	AGameHandlerOnline_C_SportOptionsSelectedClientOnly_Params params;
	params.Sport = Sport;
	params.BBHostIsHomeTeam = BBHostIsHomeTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.RequestSportOptionsSelected
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::RequestSportOptionsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RequestSportOptionsSelected");

	AGameHandlerOnline_C_RequestSportOptionsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ForfeitResults
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ForfeitResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ForfeitResults");

	AGameHandlerOnline_C_ForfeitResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSport
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnChooseSport()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSport");

	AGameHandlerOnline_C_SpawnChooseSport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.InitialMessageDisplayed
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::InitialMessageDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.InitialMessageDisplayed");

	AGameHandlerOnline_C_InitialMessageDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ShowConnctionMessage
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ShowConnctionMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ShowConnctionMessage");

	AGameHandlerOnline_C_ShowConnctionMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::NetworkFailureExit(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureExit");

	AGameHandlerOnline_C_NetworkFailureExit_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailure
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SpawnNetworkFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailure");

	AGameHandlerOnline_C_SpawnNetworkFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.PlayForfeitMusic
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::PlayForfeitMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.PlayForfeitMusic");

	AGameHandlerOnline_C_PlayForfeitMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginTravelCapsuleOpened
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::MatchBeginTravelCapsuleOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginTravelCapsuleOpened");

	AGameHandlerOnline_C_MatchBeginTravelCapsuleOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ServerReady
// (Event, Public, BlueprintEvent)
void AGameHandlerOnline_C::ServerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ServerReady");

	AGameHandlerOnline_C_ServerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.Multi_Initialize
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::Multi_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Multi_Initialize");

	AGameHandlerOnline_C_Multi_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.BackToChooseSport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::BackToChooseSport(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.BackToChooseSport");

	AGameHandlerOnline_C_BackToChooseSport_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.StartTravel
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::StartTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.StartTravel");

	AGameHandlerOnline_C_StartTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanTravel
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SetClientCanTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanTravel");

	AGameHandlerOnline_C_SetClientCanTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.BeginMatch
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::BeginMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.BeginMatch");

	AGameHandlerOnline_C_BeginMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanBeginMatch
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::SetClientCanBeginMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanBeginMatch");

	AGameHandlerOnline_C_SetClientCanBeginMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.Multi_BeginMatchOpenCapsule
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::Multi_BeginMatchOpenCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Multi_BeginMatchOpenCapsule");

	AGameHandlerOnline_C_Multi_BeginMatchOpenCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessageOpened
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ConnectionMessageOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessageOpened");

	AGameHandlerOnline_C_ConnectionMessageOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessage
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::ConnectionMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessage");

	AGameHandlerOnline_C_ConnectionMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ExecuteUbergraph_GameHandlerOnline
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::ExecuteUbergraph_GameHandlerOnline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ExecuteUbergraph_GameHandlerOnline");

	AGameHandlerOnline_C_ExecuteUbergraph_GameHandlerOnline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.ReturnExpectedClientState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> RemotePlayerExpectedClientState (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerOnline_C::ReturnExpectedClientState__DelegateSignature(TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> RemotePlayerExpectedClientState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ReturnExpectedClientState__DelegateSignature");

	AGameHandlerOnline_C_ReturnExpectedClientState__DelegateSignature_Params params;
	params.RemotePlayerExpectedClientState = RemotePlayerExpectedClientState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.OldMenuClear__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::OldMenuClear__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OldMenuClear__DelegateSignature");

	AGameHandlerOnline_C_OldMenuClear__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerOnline.GameHandlerOnline_C.MenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AGameHandlerOnline_C::MenuOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.MenuOpened__DelegateSignature");

	AGameHandlerOnline_C_MenuOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
