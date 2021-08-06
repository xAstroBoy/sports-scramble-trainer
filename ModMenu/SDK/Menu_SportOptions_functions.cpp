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

// Function Menu_SportOptions.Menu_SportOptions_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_SportOptions_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.EnableMenuInput");

	AMenu_SportOptions_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_SportOptions.Menu_SportOptions_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_SportOptions_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.DisableMenuInput");

	AMenu_SportOptions_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_SportOptions.Menu_SportOptions_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_SportOptions_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.RemoveSubMenu");

	AMenu_SportOptions_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_SportOptions.Menu_SportOptions_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_SportOptions_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.HideSubMenu");

	AMenu_SportOptions_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_SportOptions.Menu_SportOptions_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_SportOptions_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.RestoreSubMenu");

	AMenu_SportOptions_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_SportOptions.Menu_SportOptions_C.UpdateBowlingButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_SportOptions_C::UpdateBowlingButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.UpdateBowlingButtons");

	AMenu_SportOptions_C_UpdateBowlingButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.UpdateTeamColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_SportOptions_C::UpdateTeamColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.UpdateTeamColors");

	AMenu_SportOptions_C_UpdateTeamColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.UpdateBWAiOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_SportOptions_C::UpdateBWAiOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.UpdateBWAiOptions");

	AMenu_SportOptions_C_UpdateBWAiOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.Update_TN_PointsButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_SportOptions_C::Update_TN_PointsButtons(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.Update_TN_PointsButtons");

	AMenu_SportOptions_C_Update_TN_PointsButtons_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.Update_BW_FramesButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_SportOptions_C::Update_BW_FramesButtons(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.Update_BW_FramesButtons");

	AMenu_SportOptions_C_Update_BW_FramesButtons_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.SetupBowling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_SportOptions_C::SetupBowling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.SetupBowling");

	AMenu_SportOptions_C_SetupBowling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.SetupTennis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_SportOptions_C::SetupTennis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.SetupTennis");

	AMenu_SportOptions_C_SetupTennis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.SetupBaseball
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_SportOptions_C::SetupBaseball()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.SetupBaseball");

	AMenu_SportOptions_C_SetupBaseball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.EnableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_SportOptions_C::EnableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.EnableButtons");

	AMenu_SportOptions_C_EnableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.DisableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_SportOptions_C::DisableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.DisableButtons");

	AMenu_SportOptions_C_DisableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_SportOptions_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.Initialize");

	AMenu_SportOptions_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_SportOptions_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.UserConstructionScript");

	AMenu_SportOptions_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_SportOptions_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.ReceiveBeginPlay");

	AMenu_SportOptions_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.ReceiveTick");

	AMenu_SportOptions_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.ReceiveEndPlay");

	AMenu_SportOptions_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.P0Previous
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::P0Previous(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.P0Previous");

	AMenu_SportOptions_C_P0Previous_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.P0Next
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::P0Next(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.P0Next");

	AMenu_SportOptions_C_P0Next_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.ButtonToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::ButtonToggled(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.ButtonToggled");

	AMenu_SportOptions_C_ButtonToggled_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.P2Previous0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::P2Previous0(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.P2Previous0");

	AMenu_SportOptions_C_P2Previous0_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.P2Next0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::P2Next0(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.P2Next0");

	AMenu_SportOptions_C_P2Next0_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.P2Previous1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::P2Previous1(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.P2Previous1");

	AMenu_SportOptions_C_P2Previous1_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.P2Next1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::P2Next1(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.P2Next1");

	AMenu_SportOptions_C_P2Next1_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.P2Previous2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::P2Previous2(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.P2Previous2");

	AMenu_SportOptions_C_P2Previous2_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.P2Next2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::P2Next2(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.P2Next2");

	AMenu_SportOptions_C_P2Next2_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.P2Previous3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::P2Previous3(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.P2Previous3");

	AMenu_SportOptions_C_P2Previous3_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.P2Next3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::P2Next3(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.P2Next3");

	AMenu_SportOptions_C_P2Next3_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_SportOptions.Menu_SportOptions_C.ExecuteUbergraph_Menu_SportOptions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_SportOptions_C::ExecuteUbergraph_Menu_SportOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_SportOptions.Menu_SportOptions_C.ExecuteUbergraph_Menu_SportOptions");

	AMenu_SportOptions_C_ExecuteUbergraph_Menu_SportOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
