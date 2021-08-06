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

// Function Menu_GameDetails.Menu_GameDetails_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_GameDetails_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.EnableMenuInput");

	AMenu_GameDetails_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_GameDetails.Menu_GameDetails_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_GameDetails_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.DisableMenuInput");

	AMenu_GameDetails_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_GameDetails.Menu_GameDetails_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_GameDetails_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.RemoveSubMenu");

	AMenu_GameDetails_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_GameDetails.Menu_GameDetails_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_GameDetails_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.HideSubMenu");

	AMenu_GameDetails_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_GameDetails.Menu_GameDetails_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_GameDetails_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.RestoreSubMenu");

	AMenu_GameDetails_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_GameDetails.Menu_GameDetails_C.GetIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EScramSport     Sport                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GameIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_GameDetails_C::GetIndex(SportsScramble_EScramSport Sport, int* GameIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.GetIndex");

	AMenu_GameDetails_C_GetIndex_Params params;
	params.Sport = Sport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameIndex != nullptr)
		*GameIndex = params.GameIndex;

}


// Function Menu_GameDetails.Menu_GameDetails_C.SetInfoTrophyIconLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_GameDetails_C::SetInfoTrophyIconLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.SetInfoTrophyIconLocation");

	AMenu_GameDetails_C_SetInfoTrophyIconLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_GameDetails.Menu_GameDetails_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_GameDetails_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.Initialize");

	AMenu_GameDetails_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_GameDetails.Menu_GameDetails_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_GameDetails_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.UserConstructionScript");

	AMenu_GameDetails_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_GameDetails.Menu_GameDetails_C.Timeline_MenuScale__FinishedFunc
// (BlueprintEvent)
void AMenu_GameDetails_C::Timeline_MenuScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.Timeline_MenuScale__FinishedFunc");

	AMenu_GameDetails_C_Timeline_MenuScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_GameDetails.Menu_GameDetails_C.Timeline_MenuScale__UpdateFunc
// (BlueprintEvent)
void AMenu_GameDetails_C::Timeline_MenuScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.Timeline_MenuScale__UpdateFunc");

	AMenu_GameDetails_C_Timeline_MenuScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_GameDetails.Menu_GameDetails_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_GameDetails_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.ReceiveBeginPlay");

	AMenu_GameDetails_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_GameDetails.Menu_GameDetails_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_GameDetails_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.ReceiveTick");

	AMenu_GameDetails_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_GameDetails.Menu_GameDetails_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_GameDetails_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.ReceiveEndPlay");

	AMenu_GameDetails_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_GameDetails.Menu_GameDetails_C.ToggleInfo
// (BlueprintCallable, BlueprintEvent)
void AMenu_GameDetails_C::ToggleInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.ToggleInfo");

	AMenu_GameDetails_C_ToggleInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_GameDetails.Menu_GameDetails_C.ExecuteUbergraph_Menu_GameDetails
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_GameDetails_C::ExecuteUbergraph_Menu_GameDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.ExecuteUbergraph_Menu_GameDetails");

	AMenu_GameDetails_C_ExecuteUbergraph_Menu_GameDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_GameDetails.Menu_GameDetails_C.ResultsScoreComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMenu_GameDetails_C::ResultsScoreComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_GameDetails.Menu_GameDetails_C.ResultsScoreComplete__DelegateSignature");

	AMenu_GameDetails_C_ResultsScoreComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
