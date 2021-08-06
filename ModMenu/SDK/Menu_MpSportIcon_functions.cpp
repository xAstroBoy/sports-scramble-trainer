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

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_MpSportIcon_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.EnableMenuInput");

	AMenu_MpSportIcon_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_MpSportIcon_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.DisableMenuInput");

	AMenu_MpSportIcon_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_MpSportIcon_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.RemoveSubMenu");

	AMenu_MpSportIcon_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_MpSportIcon_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.HideSubMenu");

	AMenu_MpSportIcon_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_MpSportIcon_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.RestoreSubMenu");

	AMenu_MpSportIcon_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_MpSportIcon_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.Initialize");

	AMenu_MpSportIcon_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_MpSportIcon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.UserConstructionScript");

	AMenu_MpSportIcon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Rotate__FinishedFunc
// (BlueprintEvent)
void AMenu_MpSportIcon_C::Timeline_Rotate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Rotate__FinishedFunc");

	AMenu_MpSportIcon_C_Timeline_Rotate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Rotate__UpdateFunc
// (BlueprintEvent)
void AMenu_MpSportIcon_C::Timeline_Rotate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Rotate__UpdateFunc");

	AMenu_MpSportIcon_C_Timeline_Rotate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Scale__FinishedFunc
// (BlueprintEvent)
void AMenu_MpSportIcon_C::Timeline_Scale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Scale__FinishedFunc");

	AMenu_MpSportIcon_C_Timeline_Scale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Scale__UpdateFunc
// (BlueprintEvent)
void AMenu_MpSportIcon_C::Timeline_Scale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Scale__UpdateFunc");

	AMenu_MpSportIcon_C_Timeline_Scale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.OnLoaded_F3D473AB41A8445F32AD52AED5A8A8B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_MpSportIcon_C::OnLoaded_F3D473AB41A8445F32AD52AED5A8A8B4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.OnLoaded_F3D473AB41A8445F32AD52AED5A8A8B4");

	AMenu_MpSportIcon_C_OnLoaded_F3D473AB41A8445F32AD52AED5A8A8B4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_MpSportIcon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveBeginPlay");

	AMenu_MpSportIcon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_MpSportIcon_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveTick");

	AMenu_MpSportIcon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_MpSportIcon_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveEndPlay");

	AMenu_MpSportIcon_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_MpSportIcon.Menu_MpSportIcon_C.ExecuteUbergraph_Menu_MpSportIcon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_MpSportIcon_C::ExecuteUbergraph_Menu_MpSportIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_MpSportIcon.Menu_MpSportIcon_C.ExecuteUbergraph_Menu_MpSportIcon");

	AMenu_MpSportIcon_C_ExecuteUbergraph_Menu_MpSportIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
