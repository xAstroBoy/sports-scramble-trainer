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

// Function Menu_Feathered.Menu_Feathered_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Feathered_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.EnableMenuInput");

	AMenu_Feathered_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_Feathered.Menu_Feathered_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Feathered_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.DisableMenuInput");

	AMenu_Feathered_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_Feathered.Menu_Feathered_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Feathered_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.RemoveSubMenu");

	AMenu_Feathered_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_Feathered.Menu_Feathered_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Feathered_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.HideSubMenu");

	AMenu_Feathered_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_Feathered.Menu_Feathered_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Feathered_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.RestoreSubMenu");

	AMenu_Feathered_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_Feathered.Menu_Feathered_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Feathered_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.Cleanup");

	AMenu_Feathered_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.GetNewPanelInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture*                Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Output1                        (Parm, OutParm)
void AMenu_Feathered_C::GetNewPanelInfo(bool Next, class UTexture** Output, struct FText* Output1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.GetNewPanelInfo");

	AMenu_Feathered_C_GetNewPanelInfo_Params params;
	params.Next = Next;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
	if (Output1 != nullptr)
		*Output1 = params.Output1;

}


// Function Menu_Feathered.Menu_Feathered_C.FinishRotateL
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Feathered_C::FinishRotateL()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.FinishRotateL");

	AMenu_Feathered_C_FinishRotateL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.FinishRotateR
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Feathered_C::FinishRotateR()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.FinishRotateR");

	AMenu_Feathered_C_FinishRotateR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.SpawnPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void AMenu_Feathered_C::SpawnPanel(int Slot, class UTexture* Texture, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.SpawnPanel");

	AMenu_Feathered_C_SpawnPanel_Params params;
	params.Slot = Slot;
	params.Texture = Texture;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.EnableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Feathered_C::EnableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.EnableButtons");

	AMenu_Feathered_C_EnableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.DisableButtons
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_Feathered_C::DisableButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.DisableButtons");

	AMenu_Feathered_C_DisableButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_Feathered_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.Initialize");

	AMenu_Feathered_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_Feathered_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.UserConstructionScript");

	AMenu_Feathered_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateRight__FinishedFunc
// (BlueprintEvent)
void AMenu_Feathered_C::Timeline_RotateRight__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateRight__FinishedFunc");

	AMenu_Feathered_C_Timeline_RotateRight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateRight__UpdateFunc
// (BlueprintEvent)
void AMenu_Feathered_C::Timeline_RotateRight__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateRight__UpdateFunc");

	AMenu_Feathered_C_Timeline_RotateRight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateLeft__FinishedFunc
// (BlueprintEvent)
void AMenu_Feathered_C::Timeline_RotateLeft__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateLeft__FinishedFunc");

	AMenu_Feathered_C_Timeline_RotateLeft__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateLeft__UpdateFunc
// (BlueprintEvent)
void AMenu_Feathered_C::Timeline_RotateLeft__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateLeft__UpdateFunc");

	AMenu_Feathered_C_Timeline_RotateLeft__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_Feathered_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.ReceiveBeginPlay");

	AMenu_Feathered_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Feathered_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.ReceiveTick");

	AMenu_Feathered_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Feathered_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.ReceiveEndPlay");

	AMenu_Feathered_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.DecrementCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Feathered_C::DecrementCount(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.DecrementCount");

	AMenu_Feathered_C_DecrementCount_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.IncrementCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Feathered_C::IncrementCount(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.IncrementCount");

	AMenu_Feathered_C_IncrementCount_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.SelectionStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Feathered_C::SelectionStarted(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.SelectionStarted");

	AMenu_Feathered_C_SelectionStarted_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.SelectionCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Feathered_C::SelectionCompleted(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.SelectionCompleted");

	AMenu_Feathered_C_SelectionCompleted_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.Shift
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_Feathered_C::Shift(bool Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.Shift");

	AMenu_Feathered_C_Shift_Params params;
	params.Next = Next;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.StartRotateRight
// (BlueprintCallable, BlueprintEvent)
void AMenu_Feathered_C::StartRotateRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.StartRotateRight");

	AMenu_Feathered_C_StartRotateRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.StartRotateLeft
// (BlueprintCallable, BlueprintEvent)
void AMenu_Feathered_C::StartRotateLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.StartRotateLeft");

	AMenu_Feathered_C_StartRotateLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.ExecuteUbergraph_Menu_Feathered
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Feathered_C::ExecuteUbergraph_Menu_Feathered(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.ExecuteUbergraph_Menu_Feathered");

	AMenu_Feathered_C_ExecuteUbergraph_Menu_Feathered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.SelectionConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Feathered_C::SelectionConfirmed__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.SelectionConfirmed__DelegateSignature");

	AMenu_Feathered_C_SelectionConfirmed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_Feathered.Menu_Feathered_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_Feathered_C::ButtonPressed__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Feathered.Menu_Feathered_C.ButtonPressed__DelegateSignature");

	AMenu_Feathered_C_ButtonPressed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
