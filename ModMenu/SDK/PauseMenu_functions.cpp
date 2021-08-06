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

// Function PauseMenu.PauseMenu_C.UnloadReflection
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::UnloadReflection()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UnloadReflection");

	APauseMenu_C_UnloadReflection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.LoadReflection
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::LoadReflection()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.LoadReflection");

	APauseMenu_C_LoadReflection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnTempIntroButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnTempIntroButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnTempIntroButton");

	APauseMenu_C_SpawnTempIntroButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnAudioButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnAudioButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnAudioButton");

	APauseMenu_C_SpawnAudioButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnAudioOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnAudioOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnAudioOptions");

	APauseMenu_C_SpawnAudioOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnExtras
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnExtras()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnExtras");

	APauseMenu_C_SpawnExtras_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.GetCurrentLanguage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Language                       (Parm, OutParm)
void APauseMenu_C::GetCurrentLanguage(struct FText* Language)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GetCurrentLanguage");

	APauseMenu_C_GetCurrentLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Language != nullptr)
		*Language = params.Language;

}


// Function PauseMenu.PauseMenu_C.SpawnLanguageMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnLanguageMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnLanguageMenu");

	APauseMenu_C_SpawnLanguageMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnPointerButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnPointerButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnPointerButton");

	APauseMenu_C_SpawnPointerButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.UpdatePointerType
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::UpdatePointerType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UpdatePointerType");

	APauseMenu_C_UpdatePointerType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.RestartGame
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::RestartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RestartGame");

	APauseMenu_C_RestartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnRestartButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void APauseMenu_C::SpawnRestartButton(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnRestartButton");

	APauseMenu_C_SpawnRestartButton_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnSportOptionButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnSportOptionButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnSportOptionButton");

	APauseMenu_C_SpawnSportOptionButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ShowDebugMsg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          LifeTime                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::ShowDebugMsg(const struct FString& Message, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowDebugMsg");

	APauseMenu_C_ShowDebugMsg_Params params;
	params.Message = Message;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SetSport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SetSport()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SetSport");

	APauseMenu_C_SetSport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnJoinInviteMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         JoinEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         DeclineAllEvent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void APauseMenu_C::SpawnJoinInviteMenu(const struct FScriptDelegate& JoinEvent, const struct FScriptDelegate& DeclineAllEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnJoinInviteMenu");

	APauseMenu_C_SpawnJoinInviteMenu_Params params;
	params.JoinEvent = JoinEvent;
	params.DeclineAllEvent = DeclineAllEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnGripButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnGripButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnGripButton");

	APauseMenu_C_SpawnGripButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnAvatarOptionsButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnAvatarOptionsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnAvatarOptionsButton");

	APauseMenu_C_SpawnAvatarOptionsButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnAvatarMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnAvatarMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnAvatarMenu");

	APauseMenu_C_SpawnAvatarMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnTrainingOpMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GoWide                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APauseMenu_C::SpawnTrainingOpMenu(bool* GoWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnTrainingOpMenu");

	APauseMenu_C_SpawnTrainingOpMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GoWide != nullptr)
		*GoWide = params.GoWide;

}


// Function PauseMenu.PauseMenu_C.SpawnTrainingOptionsButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Back                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void APauseMenu_C::SpawnTrainingOptionsButton(bool Back, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnTrainingOptionsButton");

	APauseMenu_C_SpawnTrainingOptionsButton_Params params;
	params.Back = Back;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SwapThrowingGlove
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SwapThrowingGlove()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SwapThrowingGlove");

	APauseMenu_C_SwapThrowingGlove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SwapInstrumentHand
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SwapInstrumentHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SwapInstrumentHand");

	APauseMenu_C_SwapInstrumentHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ShowInstrument
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::ShowInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowInstrument");

	APauseMenu_C_ShowInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.HideInstrument
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::HideInstrument()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.HideInstrument");

	APauseMenu_C_HideInstrument_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.GetPnpPreferences
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::GetPnpPreferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GetPnpPreferences");

	APauseMenu_C_GetPnpPreferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.NextMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void APauseMenu_C::NextMenu(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.NextMenu");

	APauseMenu_C_NextMenu_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnConfirmationMenu
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocText                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void APauseMenu_C::SpawnConfirmationMenu(const struct FName& LocText, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnConfirmationMenu");

	APauseMenu_C_SpawnConfirmationMenu_Params params;
	params.LocText = LocText;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.UpdateVoiceSetting
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::UpdateVoiceSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UpdateVoiceSetting");

	APauseMenu_C_UpdateVoiceSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.RemoveNavButtons
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::RemoveNavButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RemoveNavButtons");

	APauseMenu_C_RemoveNavButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ShowNoPauseIcon
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::ShowNoPauseIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowNoPauseIcon");

	APauseMenu_C_ShowNoPauseIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SaveOptions
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SaveOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SaveOptions");

	APauseMenu_C_SaveOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.EnableMenuInput
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::EnableMenuInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.EnableMenuInput");

	APauseMenu_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnHeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnHeader");

	APauseMenu_C_SpawnHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.UpdateBoundarySetting
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::UpdateBoundarySetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UpdateBoundarySetting");

	APauseMenu_C_UpdateBoundarySetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.DestroyMenuActors
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::DestroyMenuActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.DestroyMenuActors");

	APauseMenu_C_DestroyMenuActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.DisableMenuInput
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::DisableMenuInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.DisableMenuInput");

	APauseMenu_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnQuarterPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   LocString                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::SpawnQuarterPanel(class USceneComponent* Loc, const struct FName& LocString)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnQuarterPanel");

	APauseMenu_C_SpawnQuarterPanel_Params params;
	params.Loc = Loc;
	params.LocString = LocString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SetColumns
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasAvatarButton                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APauseMenu_C::SetColumns(bool HasAvatarButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SetColumns");

	APauseMenu_C_SetColumns_Params params;
	params.HasAvatarButton = HasAvatarButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.GetAnchors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         QpPos                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         ButtonPos                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::GetAnchors(class USceneComponent** QpPos, class USceneComponent** ButtonPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GetAnchors");

	APauseMenu_C_GetAnchors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QpPos != nullptr)
		*QpPos = params.QpPos;
	if (ButtonPos != nullptr)
		*ButtonPos = params.ButtonPos;

}


// Function PauseMenu.PauseMenu_C.SpawnBackButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         EventBack                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void APauseMenu_C::SpawnBackButtons(const struct FScriptDelegate& EventBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnBackButtons");

	APauseMenu_C_SpawnBackButtons_Params params;
	params.EventBack = EventBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnQuitButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnQuitButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnQuitButton");

	APauseMenu_C_SpawnQuitButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnVoiceChatButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnVoiceChatButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnVoiceChatButton");

	APauseMenu_C_SpawnVoiceChatButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnSportButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::SpawnSportButtons(SportsScramble_EScramSport Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnSportButtons");

	APauseMenu_C_SpawnSportButtons_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnSharedButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnSharedButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnSharedButtons");

	APauseMenu_C_SpawnSharedButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ResetGameSelector
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::ResetGameSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ResetGameSelector");

	APauseMenu_C_ResetGameSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.GetDebugGameSelectors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DebugSelectorExists            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetAllowed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APauseMenu_C::GetDebugGameSelectors(bool* DebugSelectorExists, bool* ResetAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GetDebugGameSelectors");

	APauseMenu_C_GetDebugGameSelectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DebugSelectorExists != nullptr)
		*DebugSelectorExists = params.DebugSelectorExists;
	if (ResetAllowed != nullptr)
		*ResetAllowed = params.ResetAllowed;

}


// Function PauseMenu.PauseMenu_C.EndGame
// (Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::EndGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.EndGame");

	APauseMenu_C_EndGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Initialize");

	APauseMenu_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UserConstructionScript");

	APauseMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.Timeline_ScaleMenu__FinishedFunc
// (BlueprintEvent)
void APauseMenu_C::Timeline_ScaleMenu__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Timeline_ScaleMenu__FinishedFunc");

	APauseMenu_C_Timeline_ScaleMenu__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.Timeline_ScaleMenu__UpdateFunc
// (BlueprintEvent)
void APauseMenu_C::Timeline_ScaleMenu__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Timeline_ScaleMenu__UpdateFunc");

	APauseMenu_C_Timeline_ScaleMenu__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.InpActEvt_Pause_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APauseMenu_C::InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.InpActEvt_Pause_K2Node_InputActionEvent_1");

	APauseMenu_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.OnFailure_CB7A18C444F2E804805EC3A042280AA5
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::OnFailure_CB7A18C444F2E804805EC3A042280AA5()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnFailure_CB7A18C444F2E804805EC3A042280AA5");

	APauseMenu_C_OnFailure_CB7A18C444F2E804805EC3A042280AA5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.OnSuccess_CB7A18C444F2E804805EC3A042280AA5
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::OnSuccess_CB7A18C444F2E804805EC3A042280AA5()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnSuccess_CB7A18C444F2E804805EC3A042280AA5");

	APauseMenu_C_OnSuccess_CB7A18C444F2E804805EC3A042280AA5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.OnFailure_1BED71814B71FE0478E2F1AAE838DA9E
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::OnFailure_1BED71814B71FE0478E2F1AAE838DA9E()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnFailure_1BED71814B71FE0478E2F1AAE838DA9E");

	APauseMenu_C_OnFailure_1BED71814B71FE0478E2F1AAE838DA9E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E");

	APauseMenu_C_OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.OnFailure_FE43AE584DB619A31AB3558300E8F65D
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::OnFailure_FE43AE584DB619A31AB3558300E8F65D()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnFailure_FE43AE584DB619A31AB3558300E8F65D");

	APauseMenu_C_OnFailure_FE43AE584DB619A31AB3558300E8F65D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.OnSuccess_FE43AE584DB619A31AB3558300E8F65D
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::OnSuccess_FE43AE584DB619A31AB3558300E8F65D()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnSuccess_FE43AE584DB619A31AB3558300E8F65D");

	APauseMenu_C_OnSuccess_FE43AE584DB619A31AB3558300E8F65D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.BoundaryLineChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::BoundaryLineChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BoundaryLineChanged");

	APauseMenu_C_BoundaryLineChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.VoiceChatChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::VoiceChatChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.VoiceChatChanged");

	APauseMenu_C_VoiceChatChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.PitcherHandChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::PitcherHandChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PitcherHandChanged");

	APauseMenu_C_PitcherHandChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.TennisHandChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::TennisHandChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TennisHandChanged");

	APauseMenu_C_TennisHandChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.BattingSideChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::BattingSideChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BattingSideChanged");

	APauseMenu_C_BattingSideChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.BattingHandChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::BattingHandChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BattingHandChanged");

	APauseMenu_C_BattingHandChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.TennisSkillChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::TennisSkillChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TennisSkillChanged");

	APauseMenu_C_TennisSkillChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.BattingSkillChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::BattingSkillChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BattingSkillChanged");

	APauseMenu_C_BattingSkillChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.PitchingSkillChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::PitchingSkillChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PitchingSkillChanged");

	APauseMenu_C_PitchingSkillChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.CatchingSkillChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::CatchingSkillChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CatchingSkillChanged");

	APauseMenu_C_CatchingSkillChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.BowlingSkillChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::BowlingSkillChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BowlingSkillChanged");

	APauseMenu_C_BowlingSkillChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.GripChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::GripChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GripChanged");

	APauseMenu_C_GripChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.TennisServeStyleChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::TennisServeStyleChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TennisServeStyleChanged");

	APauseMenu_C_TennisServeStyleChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.PointerTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::PointerTypeChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PointerTypeChanged");

	APauseMenu_C_PointerTypeChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.VoiceConfirmationConfirmed
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::VoiceConfirmationConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.VoiceConfirmationConfirmed");

	APauseMenu_C_VoiceConfirmationConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.TipsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::TipsChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TipsChanged");

	APauseMenu_C_TipsChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.GameVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::GameVolumeChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GameVolumeChanged");

	APauseMenu_C_GameVolumeChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ShortIntroChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::ShortIntroChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShortIntroChanged");

	APauseMenu_C_ShortIntroChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.VoipVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::VoipVolumeChanged(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.VoipVolumeChanged");

	APauseMenu_C_VoipVolumeChanged_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APauseMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ReceiveBeginPlay");

	APauseMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ReceiveTick");

	APauseMenu_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ScaleUpMenu
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::ScaleUpMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ScaleUpMenu");

	APauseMenu_C_ScaleUpMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ScaleDownMenu
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::ScaleDownMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ScaleDownMenu");

	APauseMenu_C_ScaleDownMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.HeaderDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::HeaderDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.HeaderDestroyed");

	APauseMenu_C_HeaderDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.OpenFirstMenu
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::OpenFirstMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OpenFirstMenu");

	APauseMenu_C_OpenFirstMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.TopMenuOpen
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::TopMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TopMenuOpen");

	APauseMenu_C_TopMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.DisableInputOnButtonPress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::DisableInputOnButtonPress(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.DisableInputOnButtonPress");

	APauseMenu_C_DisableInputOnButtonPress_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CloseMenu");

	APauseMenu_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.CloseMenuButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::CloseMenuButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CloseMenuButtonPressed");

	APauseMenu_C_CloseMenuButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SwapToVoiceConfirmation
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SwapToVoiceConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SwapToVoiceConfirmation");

	APauseMenu_C_SwapToVoiceConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.QuitMultiplayer
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::QuitMultiplayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.QuitMultiplayer");

	APauseMenu_C_QuitMultiplayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnVoiceConfirmation
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnVoiceConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnVoiceConfirmation");

	APauseMenu_C_SpawnVoiceConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.VoiceConfirmatinoButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::VoiceConfirmatinoButtonSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.VoiceConfirmatinoButtonSelected");

	APauseMenu_C_VoiceConfirmatinoButtonSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ConfirmationMenuReady
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::ConfirmationMenuReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ConfirmationMenuReady");

	APauseMenu_C_ConfirmationMenuReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.BackToTop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::BackToTop(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BackToTop");

	APauseMenu_C_BackToTop_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ShowForfeit
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::ShowForfeit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowForfeit");

	APauseMenu_C_ShowForfeit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ForfeitConfirmationMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::ForfeitConfirmationMade(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ForfeitConfirmationMade");

	APauseMenu_C_ForfeitConfirmationMade_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ForfeitSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::ForfeitSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ForfeitSelected");

	APauseMenu_C_ForfeitSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.QuitSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::QuitSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.QuitSelected");

	APauseMenu_C_QuitSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ReceiveEndPlay");

	APauseMenu_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnTrainingOptions
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnTrainingOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnTrainingOptions");

	APauseMenu_C_SpawnTrainingOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.TrainingOptionsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::TrainingOptionsSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TrainingOptionsSelected");

	APauseMenu_C_TrainingOptionsSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.TrainingOptionsOpened
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::TrainingOptionsOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TrainingOptionsOpened");

	APauseMenu_C_TrainingOptionsOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.CreateAvatarMenu
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::CreateAvatarMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CreateAvatarMenu");

	APauseMenu_C_CreateAvatarMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.AvatarButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::AvatarButtonSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.AvatarButtonSelected");

	APauseMenu_C_AvatarButtonSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.AvataMenuOpened
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::AvataMenuOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.AvataMenuOpened");

	APauseMenu_C_AvataMenuOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.OpenMainOptionsMenu
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::OpenMainOptionsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OpenMainOptionsMenu");

	APauseMenu_C_OpenMainOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.CreateJoinInviteMenu
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::CreateJoinInviteMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CreateJoinInviteMenu");

	APauseMenu_C_CreateJoinInviteMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.InvitesChecked
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           wasSuccessful                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FScramGameInvite> invites                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void APauseMenu_C::InvitesChecked(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.InvitesChecked");

	APauseMenu_C_InvitesChecked_Params params;
	params.wasSuccessful = wasSuccessful;
	params.invites = invites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.JoinGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScramGameInvite        JoinPlayer                     (BlueprintVisible, BlueprintReadOnly, Parm)
void APauseMenu_C::JoinGame(const struct FScramGameInvite& JoinPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.JoinGame");

	APauseMenu_C_JoinGame_Params params;
	params.JoinPlayer = JoinPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.DeclineAll
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::DeclineAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.DeclineAll");

	APauseMenu_C_DeclineAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.JoinTheMatch
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::JoinTheMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.JoinTheMatch");

	APauseMenu_C_JoinTheMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.NoInvitesFound
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::NoInvitesFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.NoInvitesFound");

	APauseMenu_C_NoInvitesFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SportOptionsButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::SportOptionsButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SportOptionsButtonPressed");

	APauseMenu_C_SportOptionsButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ShowSportOptions
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::ShowSportOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowSportOptions");

	APauseMenu_C_ShowSportOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SportOptionsOpened
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SportOptionsOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SportOptionsOpened");

	APauseMenu_C_SportOptionsOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.RestartConfirmation
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::RestartConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RestartConfirmation");

	APauseMenu_C_RestartConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.RestartConfirmationChoiceMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::RestartConfirmationChoiceMade(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RestartConfirmationChoiceMade");

	APauseMenu_C_RestartConfirmationChoiceMade_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.RestartChallengeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::RestartChallengeSelected(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RestartChallengeSelected");

	APauseMenu_C_RestartChallengeSelected_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.RecenterMenu
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::RecenterMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RecenterMenu");

	APauseMenu_C_RecenterMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ClientUnrealJoinFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramPendingGameFailure failureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::ClientUnrealJoinFailed(SportsScramble_EScramPendingGameFailure failureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ClientUnrealJoinFailed");

	APauseMenu_C_ClientUnrealJoinFailed_Params params;
	params.failureType = failureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.UnrealJoinFailed
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::UnrealJoinFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UnrealJoinFailed");

	APauseMenu_C_UnrealJoinFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.LanguageOptionButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::LanguageOptionButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.LanguageOptionButtonPressed");

	APauseMenu_C_LanguageOptionButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ShowLanguageOptions
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::ShowLanguageOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowLanguageOptions");

	APauseMenu_C_ShowLanguageOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ExtrasButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::ExtrasButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ExtrasButtonPressed");

	APauseMenu_C_ExtrasButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnExtrasMenu
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnExtrasMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnExtrasMenu");

	APauseMenu_C_SpawnExtrasMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CustomEvent");

	APauseMenu_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.AudioButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::AudioButtonSelected(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.AudioButtonSelected");

	APauseMenu_C_AudioButtonSelected_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.SpawnAudioMenu
// (BlueprintCallable, BlueprintEvent)
void APauseMenu_C::SpawnAudioMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnAudioMenu");

	APauseMenu_C_SpawnAudioMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseMenu_C::ExecuteUbergraph_PauseMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu");

	APauseMenu_C_ExecuteUbergraph_PauseMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.PauseMenuCleared__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::PauseMenuCleared__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PauseMenuCleared__DelegateSignature");

	APauseMenu_C_PauseMenuCleared__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.PauseMenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::PauseMenuOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PauseMenuOpened__DelegateSignature");

	APauseMenu_C_PauseMenuOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.UnPauseReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceKeepTravelCapsule         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APauseMenu_C::UnPauseReady__DelegateSignature(bool ForceKeepTravelCapsule)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UnPauseReady__DelegateSignature");

	APauseMenu_C_UnPauseReady__DelegateSignature_Params params;
	params.ForceKeepTravelCapsule = ForceKeepTravelCapsule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseMenu.PauseMenu_C.AllButtonsDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void APauseMenu_C::AllButtonsDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.AllButtonsDestroyed__DelegateSignature");

	APauseMenu_C_AllButtonsDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
