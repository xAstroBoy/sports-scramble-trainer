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

// Function Menu_PlayerCount.Menu_PlayerCount_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_PlayerCount_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.EnableMenuInput");

	AMenu_PlayerCount_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_PlayerCount_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.DisableMenuInput");

	AMenu_PlayerCount_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_PlayerCount_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.RemoveSubMenu");

	AMenu_PlayerCount_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_PlayerCount_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.HideSubMenu");

	AMenu_PlayerCount_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_PlayerCount_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.RestoreSubMenu");

	AMenu_PlayerCount_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.UpdateDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_PlayerCount_C::UpdateDisplay(int PlayerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.UpdateDisplay");

	AMenu_PlayerCount_C_UpdateDisplay_Params params;
	params.PlayerCount = PlayerCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_PlayerCount_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.Initialize");

	AMenu_PlayerCount_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_PlayerCount_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.UserConstructionScript");

	AMenu_PlayerCount_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale3__FinishedFunc
// (BlueprintEvent)
void AMenu_PlayerCount_C::Timeline_Scale3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale3__FinishedFunc");

	AMenu_PlayerCount_C_Timeline_Scale3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale3__UpdateFunc
// (BlueprintEvent)
void AMenu_PlayerCount_C::Timeline_Scale3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale3__UpdateFunc");

	AMenu_PlayerCount_C_Timeline_Scale3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale4__FinishedFunc
// (BlueprintEvent)
void AMenu_PlayerCount_C::Timeline_Scale4__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale4__FinishedFunc");

	AMenu_PlayerCount_C_Timeline_Scale4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale4__UpdateFunc
// (BlueprintEvent)
void AMenu_PlayerCount_C::Timeline_Scale4__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale4__UpdateFunc");

	AMenu_PlayerCount_C_Timeline_Scale4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_PlayerCount_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveBeginPlay");

	AMenu_PlayerCount_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_PlayerCount_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveTick");

	AMenu_PlayerCount_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_PlayerCount_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveEndPlay");

	AMenu_PlayerCount_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.DecrementCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_PlayerCount_C::DecrementCount(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.DecrementCount");

	AMenu_PlayerCount_C_DecrementCount_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.IncrementCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_PlayerCount_C::IncrementCount(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.IncrementCount");

	AMenu_PlayerCount_C_IncrementCount_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.DisableMenu
// (BlueprintCallable, BlueprintEvent)
void AMenu_PlayerCount_C::DisableMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.DisableMenu");

	AMenu_PlayerCount_C_DisableMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.Show3
// (BlueprintCallable, BlueprintEvent)
void AMenu_PlayerCount_C::Show3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.Show3");

	AMenu_PlayerCount_C_Show3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.Show4
// (BlueprintCallable, BlueprintEvent)
void AMenu_PlayerCount_C::Show4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.Show4");

	AMenu_PlayerCount_C_Show4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.Hide3
// (BlueprintCallable, BlueprintEvent)
void AMenu_PlayerCount_C::Hide3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.Hide3");

	AMenu_PlayerCount_C_Hide3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.Hide4
// (BlueprintCallable, BlueprintEvent)
void AMenu_PlayerCount_C::Hide4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.Hide4");

	AMenu_PlayerCount_C_Hide4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PlayerCount.Menu_PlayerCount_C.ExecuteUbergraph_Menu_PlayerCount
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_PlayerCount_C::ExecuteUbergraph_Menu_PlayerCount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PlayerCount.Menu_PlayerCount_C.ExecuteUbergraph_Menu_PlayerCount");

	AMenu_PlayerCount_C_ExecuteUbergraph_Menu_PlayerCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
