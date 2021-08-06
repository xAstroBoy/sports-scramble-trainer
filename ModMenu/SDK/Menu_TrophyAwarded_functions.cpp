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

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrophyAwarded_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.EnableMenuInput");

	AMenu_TrophyAwarded_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrophyAwarded_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DisableMenuInput");

	AMenu_TrophyAwarded_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrophyAwarded_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RemoveSubMenu");

	AMenu_TrophyAwarded_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrophyAwarded_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.HideSubMenu");

	AMenu_TrophyAwarded_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrophyAwarded_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RestoreSubMenu");

	AMenu_TrophyAwarded_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnHairPack
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::SpawnHairPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnHairPack");

	AMenu_TrophyAwarded_C_SpawnHairPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnSkinPack
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::SpawnSkinPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnSkinPack");

	AMenu_TrophyAwarded_C_SpawnSkinPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugHairPackData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::DebugHairPackData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugHairPackData");

	AMenu_TrophyAwarded_C_DebugHairPackData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugSkinPackData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::DebugSkinPackData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugSkinPackData");

	AMenu_TrophyAwarded_C_DebugSkinPackData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugAvatarData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::DebugAvatarData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugAvatarData");

	AMenu_TrophyAwarded_C_DebugAvatarData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.GetDate
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::GetDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.GetDate");

	AMenu_TrophyAwarded_C_GetDate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::SpawnAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnAvatar");

	AMenu_TrophyAwarded_C_SpawnAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnTrophy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::SpawnTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnTrophy");

	AMenu_TrophyAwarded_C_SpawnTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Initialize");

	AMenu_TrophyAwarded_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.UserConstructionScript");

	AMenu_TrophyAwarded_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveTitle__FinishedFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_MoveTitle__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveTitle__FinishedFunc");

	AMenu_TrophyAwarded_C_Timeline_MoveTitle__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveTitle__UpdateFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_MoveTitle__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveTitle__UpdateFunc");

	AMenu_TrophyAwarded_C_Timeline_MoveTitle__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleIcon__FinishedFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_ScaleIcon__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleIcon__FinishedFunc");

	AMenu_TrophyAwarded_C_Timeline_ScaleIcon__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleIcon__UpdateFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_ScaleIcon__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleIcon__UpdateFunc");

	AMenu_TrophyAwarded_C_Timeline_ScaleIcon__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleModels__FinishedFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_ScaleModels__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleModels__FinishedFunc");

	AMenu_TrophyAwarded_C_Timeline_ScaleModels__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleModels__UpdateFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_ScaleModels__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleModels__UpdateFunc");

	AMenu_TrophyAwarded_C_Timeline_ScaleModels__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleInfo__FinishedFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_ScaleInfo__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleInfo__FinishedFunc");

	AMenu_TrophyAwarded_C_Timeline_ScaleInfo__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleInfo__UpdateFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_ScaleInfo__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleInfo__UpdateFunc");

	AMenu_TrophyAwarded_C_Timeline_ScaleInfo__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_SpinIcon__FinishedFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_SpinIcon__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_SpinIcon__FinishedFunc");

	AMenu_TrophyAwarded_C_Timeline_SpinIcon__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_SpinIcon__UpdateFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_SpinIcon__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_SpinIcon__UpdateFunc");

	AMenu_TrophyAwarded_C_Timeline_SpinIcon__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_HideIcon__FinishedFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_HideIcon__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_HideIcon__FinishedFunc");

	AMenu_TrophyAwarded_C_Timeline_HideIcon__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_HideIcon__UpdateFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_HideIcon__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_HideIcon__UpdateFunc");

	AMenu_TrophyAwarded_C_Timeline_HideIcon__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveModel__FinishedFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_MoveModel__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveModel__FinishedFunc");

	AMenu_TrophyAwarded_C_Timeline_MoveModel__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveModel__UpdateFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_MoveModel__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveModel__UpdateFunc");

	AMenu_TrophyAwarded_C_Timeline_MoveModel__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_RotatePacks__FinishedFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_RotatePacks__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_RotatePacks__FinishedFunc");

	AMenu_TrophyAwarded_C_Timeline_RotatePacks__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_RotatePacks__UpdateFunc
// (BlueprintEvent)
void AMenu_TrophyAwarded_C::Timeline_RotatePacks__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_RotatePacks__UpdateFunc");

	AMenu_TrophyAwarded_C_Timeline_RotatePacks__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_TrophyAwarded_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveBeginPlay");

	AMenu_TrophyAwarded_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrophyAwarded_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveTick");

	AMenu_TrophyAwarded_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrophyAwarded_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveEndPlay");

	AMenu_TrophyAwarded_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.TrophyMenuGo
// (BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::TrophyMenuGo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.TrophyMenuGo");

	AMenu_TrophyAwarded_C_TrophyMenuGo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RevealIcon
// (BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::RevealIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RevealIcon");

	AMenu_TrophyAwarded_C_RevealIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpinIcon
// (BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::SpinIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpinIcon");

	AMenu_TrophyAwarded_C_SpinIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ShowModels
// (BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::ShowModels()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ShowModels");

	AMenu_TrophyAwarded_C_ShowModels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ShowInfo
// (BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::ShowInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ShowInfo");

	AMenu_TrophyAwarded_C_ShowInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.MoveRewardMesh
// (BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::MoveRewardMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.MoveRewardMesh");

	AMenu_TrophyAwarded_C_MoveRewardMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RotatePacks
// (BlueprintCallable, BlueprintEvent)
void AMenu_TrophyAwarded_C::RotatePacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RotatePacks");

	AMenu_TrophyAwarded_C_RotatePacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ExecuteUbergraph_Menu_TrophyAwarded
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrophyAwarded_C::ExecuteUbergraph_Menu_TrophyAwarded(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ExecuteUbergraph_Menu_TrophyAwarded");

	AMenu_TrophyAwarded_C_ExecuteUbergraph_Menu_TrophyAwarded_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.TrophyAwardComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllAwardsComplete              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrophyAwarded_C::TrophyAwardComplete__DelegateSignature(bool AllAwardsComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.TrophyAwardComplete__DelegateSignature");

	AMenu_TrophyAwarded_C_TrophyAwardComplete__DelegateSignature_Params params;
	params.AllAwardsComplete = AllAwardsComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
