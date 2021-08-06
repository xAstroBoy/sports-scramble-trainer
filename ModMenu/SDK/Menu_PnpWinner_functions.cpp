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

// Function Menu_PnpWinner.Menu_PnpWinner_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_PnpWinner_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.EnableMenuInput");

	AMenu_PnpWinner_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_PnpWinner_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.DisableMenuInput");

	AMenu_PnpWinner_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_PnpWinner_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.RemoveSubMenu");

	AMenu_PnpWinner_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_PnpWinner_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.HideSubMenu");

	AMenu_PnpWinner_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_PnpWinner_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.RestoreSubMenu");

	AMenu_PnpWinner_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_PnpWinner_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.Initialize");

	AMenu_PnpWinner_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_PnpWinner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.UserConstructionScript");

	AMenu_PnpWinner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_PnpWinner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveBeginPlay");

	AMenu_PnpWinner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_PnpWinner_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveTick");

	AMenu_PnpWinner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_PnpWinner_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveEndPlay");

	AMenu_PnpWinner_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.ExecuteUbergraph_Menu_PnpWinner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_PnpWinner_C::ExecuteUbergraph_Menu_PnpWinner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.ExecuteUbergraph_Menu_PnpWinner");

	AMenu_PnpWinner_C_ExecuteUbergraph_Menu_PnpWinner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_PnpWinner.Menu_PnpWinner_C.ResultsScoreComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMenu_PnpWinner_C::ResultsScoreComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_PnpWinner.Menu_PnpWinner_C.ResultsScoreComplete__DelegateSignature");

	AMenu_PnpWinner_C_ResultsScoreComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
