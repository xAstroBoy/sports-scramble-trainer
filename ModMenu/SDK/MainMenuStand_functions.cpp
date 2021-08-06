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

// Function MainMenuStand.MainMenuStand_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AMainMenuStand_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Initialize");

	AMainMenuStand_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.DisableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AMainMenuStand_C::DisableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.DisableButtons");

	AMainMenuStand_C_DisableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.SpawnButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMainMenuStand_C::SpawnButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.SpawnButtons");

	AMainMenuStand_C_SpawnButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMainMenuStand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.UserConstructionScript");

	AMainMenuStand_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__FinishedFunc
// (BlueprintEvent)
void AMainMenuStand_C::Timeline_MovePanel__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__FinishedFunc");

	AMainMenuStand_C_Timeline_MovePanel__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__UpdateFunc
// (BlueprintEvent)
void AMainMenuStand_C::Timeline_MovePanel__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__UpdateFunc");

	AMainMenuStand_C_Timeline_MovePanel__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__FinishedFunc
// (BlueprintEvent)
void AMainMenuStand_C::Timeline_MoveRoot__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__FinishedFunc");

	AMainMenuStand_C_Timeline_MoveRoot__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__UpdateFunc
// (BlueprintEvent)
void AMainMenuStand_C::Timeline_MoveRoot__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__UpdateFunc");

	AMainMenuStand_C_Timeline_MoveRoot__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMainMenuStand_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ReceiveBeginPlay");

	AMainMenuStand_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenuStand_C::ButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ButtonPressed");

	AMainMenuStand_C_ButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.SwapFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenuStand_C::SwapFinished(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.SwapFinished");

	AMainMenuStand_C_SwapFinished_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenuStand_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ReceiveEndPlay");

	AMainMenuStand_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.OpenPanel
// (BlueprintCallable, BlueprintEvent)
void AMainMenuStand_C::OpenPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.OpenPanel");

	AMainMenuStand_C_OpenPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.ClosePanel
// (BlueprintCallable, BlueprintEvent)
void AMainMenuStand_C::ClosePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ClosePanel");

	AMainMenuStand_C_ClosePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.LowerStand
// (BlueprintCallable, BlueprintEvent)
void AMainMenuStand_C::LowerStand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.LowerStand");

	AMainMenuStand_C_LowerStand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.ButtonTouched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenuStand_C::ButtonTouched(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ButtonTouched");

	AMainMenuStand_C_ButtonTouched_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.ButtonUntouched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenuStand_C::ButtonUntouched(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ButtonUntouched");

	AMainMenuStand_C_ButtonUntouched_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Raise
// (BlueprintCallable, BlueprintEvent)
void AMainMenuStand_C::Play_SFX_Menu_Raise()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Raise");

	AMainMenuStand_C_Play_SFX_Menu_Raise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Lower
// (BlueprintCallable, BlueprintEvent)
void AMainMenuStand_C::Play_SFX_Menu_Lower()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Lower");

	AMainMenuStand_C_Play_SFX_Menu_Lower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.ExecuteUbergraph_MainMenuStand
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenuStand_C::ExecuteUbergraph_MainMenuStand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.ExecuteUbergraph_MainMenuStand");

	AMainMenuStand_C_ExecuteUbergraph_MainMenuStand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.MenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMainMenuStand_C::MenuOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.MenuOpened__DelegateSignature");

	AMainMenuStand_C_MenuOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.SelectionComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenuStand_C::SelectionComplete__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.SelectionComplete__DelegateSignature");

	AMainMenuStand_C_SelectionComplete__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuStand.MainMenuStand_C.SelectionStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMainMenuStand_C::SelectionStarted__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuStand.MainMenuStand_C.SelectionStarted__DelegateSignature");

	AMainMenuStand_C_SelectionStarted__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
