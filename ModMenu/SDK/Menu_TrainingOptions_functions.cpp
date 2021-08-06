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

// Function Menu_TrainingOptions.Menu_TrainingOptions_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrainingOptions_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.EnableMenuInput");

	AMenu_TrainingOptions_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrainingOptions_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.DisableMenuInput");

	AMenu_TrainingOptions_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrainingOptions_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.RemoveSubMenu");

	AMenu_TrainingOptions_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrainingOptions_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.HideSubMenu");

	AMenu_TrainingOptions_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrainingOptions_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.RestoreSubMenu");

	AMenu_TrainingOptions_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBbBallMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             StaticMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::GetBbBallMesh(class UClass* Class, class UStaticMesh** StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBbBallMesh");

	AMenu_TrainingOptions_C_GetBbBallMesh_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBbInstrumentSkeleton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           Skeleton                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::GetBbInstrumentSkeleton(class UClass* Class, class USkeletalMesh** Skeleton, class UClass** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBbInstrumentSkeleton");

	AMenu_TrainingOptions_C_GetBbInstrumentSkeleton_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skeleton != nullptr)
		*Skeleton = params.Skeleton;
	if (Anim != nullptr)
		*Anim = params.Anim;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBbInstrumentMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             StaticMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::GetBbInstrumentMesh(class UClass* Class, class UStaticMesh** StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBbInstrumentMesh");

	AMenu_TrainingOptions_C_GetBbInstrumentMesh_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBwBallMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             StaticMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::GetBwBallMesh(class UClass* Class, class UStaticMesh** StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetBwBallMesh");

	AMenu_TrainingOptions_C_GetBwBallMesh_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetTnInstrumentSkeleton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*           Skeleton                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Anim                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::GetTnInstrumentSkeleton(class UClass* Class, class USkeletalMesh** Skeleton, class UClass** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetTnInstrumentSkeleton");

	AMenu_TrainingOptions_C_GetTnInstrumentSkeleton_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skeleton != nullptr)
		*Skeleton = params.Skeleton;
	if (Anim != nullptr)
		*Anim = params.Anim;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetTnInstrumentMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             StaticMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::GetTnInstrumentMesh(class UClass* Class, class UStaticMesh** StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetTnInstrumentMesh");

	AMenu_TrainingOptions_C_GetTnInstrumentMesh_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetTnBallMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*             StaticMesh                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::GetTnBallMesh(class UClass* Class, class UStaticMesh** StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.GetTnBallMesh");

	AMenu_TrainingOptions_C_GetTnBallMesh_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateLauncherType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateLauncherType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateLauncherType");

	AMenu_TrainingOptions_C_UpdateLauncherType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBattingTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateBattingTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBattingTargets");

	AMenu_TrainingOptions_C_UpdateBattingTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdatePitchingTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdatePitchingTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdatePitchingTargets");

	AMenu_TrainingOptions_C_UpdatePitchingTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBatBaseball
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateBatBaseball()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBatBaseball");

	AMenu_TrainingOptions_C_UpdateBatBaseball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBallBaseball
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateBallBaseball()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBallBaseball");

	AMenu_TrainingOptions_C_UpdateBallBaseball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Baseball
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pitching                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_TrainingOptions_C::Init_Baseball(bool Pitching)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Baseball");

	AMenu_TrainingOptions_C_Init_Baseball_Params params;
	params.Pitching = Pitching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateLane
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateLane");

	AMenu_TrainingOptions_C_UpdateLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBallSelectionBowling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateBallSelectionBowling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBallSelectionBowling");

	AMenu_TrainingOptions_C_UpdateBallSelectionBowling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Bowling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::Init_Bowling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Bowling");

	AMenu_TrainingOptions_C_Init_Bowling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateServeStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateServeStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateServeStyle");

	AMenu_TrainingOptions_C_UpdateServeStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Serve
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::Init_Serve()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Serve");

	AMenu_TrainingOptions_C_Init_Serve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateShotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotType");

	AMenu_TrainingOptions_C_UpdateShotType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateShotDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotDirection");

	AMenu_TrainingOptions_C_UpdateShotDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateRacketSelectionTennis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateRacketSelectionTennis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateRacketSelectionTennis");

	AMenu_TrainingOptions_C_UpdateRacketSelectionTennis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBallSelectionTennis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UpdateBallSelectionTennis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateBallSelectionTennis");

	AMenu_TrainingOptions_C_UpdateBallSelectionTennis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Volley
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::Init_Volley()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.Init_Volley");

	AMenu_TrainingOptions_C_Init_Volley_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.SetRed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::SetRed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.SetRed");

	AMenu_TrainingOptions_C_SetRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.Initialize");

	AMenu_TrainingOptions_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UserConstructionScript");

	AMenu_TrainingOptions_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateBallMesh__FinishedFunc
// (BlueprintEvent)
void AMenu_TrainingOptions_C::Timeline_RotateBallMesh__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateBallMesh__FinishedFunc");

	AMenu_TrainingOptions_C_Timeline_RotateBallMesh__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateBallMesh__UpdateFunc
// (BlueprintEvent)
void AMenu_TrainingOptions_C::Timeline_RotateBallMesh__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateBallMesh__UpdateFunc");

	AMenu_TrainingOptions_C_Timeline_RotateBallMesh__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateInstrument__FinishedFunc
// (BlueprintEvent)
void AMenu_TrainingOptions_C::Timeline_RotateInstrument__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateInstrument__FinishedFunc");

	AMenu_TrainingOptions_C_Timeline_RotateInstrument__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateInstrument__UpdateFunc
// (BlueprintEvent)
void AMenu_TrainingOptions_C::Timeline_RotateInstrument__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.Timeline_RotateInstrument__UpdateFunc");

	AMenu_TrainingOptions_C_Timeline_RotateInstrument__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_TrainingOptions_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.ReceiveBeginPlay");

	AMenu_TrainingOptions_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.ReceiveTick");

	AMenu_TrainingOptions_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.ReceiveEndPlay");

	AMenu_TrainingOptions_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::ButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.ButtonPressed");

	AMenu_TrainingOptions_C_ButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisBallPrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::TennisBallPrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisBallPrev");

	AMenu_TrainingOptions_C_TennisBallPrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisBallNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::TennisBallNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisBallNext");

	AMenu_TrainingOptions_C_TennisBallNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisRacketPrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::TennisRacketPrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisRacketPrev");

	AMenu_TrainingOptions_C_TennisRacketPrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisRacketNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::TennisRacketNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.TennisRacketNext");

	AMenu_TrainingOptions_C_TennisRacketNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotDirPrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::UpdateShotDirPrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotDirPrev");

	AMenu_TrainingOptions_C_UpdateShotDirPrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotDirNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::UpdateShotDirNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotDirNext");

	AMenu_TrainingOptions_C_UpdateShotDirNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotTypePrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::UpdateShotTypePrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotTypePrev");

	AMenu_TrainingOptions_C_UpdateShotTypePrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotTypeNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::UpdateShotTypeNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateShotTypeNext");

	AMenu_TrainingOptions_C_UpdateShotTypeNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateServeStylePrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::UpdateServeStylePrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateServeStylePrev");

	AMenu_TrainingOptions_C_UpdateServeStylePrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateServeStyleNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::UpdateServeStyleNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.UpdateServeStyleNext");

	AMenu_TrainingOptions_C_UpdateServeStyleNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.LanePrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::LanePrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.LanePrev");

	AMenu_TrainingOptions_C_LanePrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.LaneNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::LaneNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.LaneNext");

	AMenu_TrainingOptions_C_LaneNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.BowlingBallPrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::BowlingBallPrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.BowlingBallPrev");

	AMenu_TrainingOptions_C_BowlingBallPrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.BowlingBallNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::BowlingBallNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.BowlingBallNext");

	AMenu_TrainingOptions_C_BowlingBallNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBallPrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::BaseballBallPrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBallPrev");

	AMenu_TrainingOptions_C_BaseballBallPrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBallNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::BaseballBallNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBallNext");

	AMenu_TrainingOptions_C_BaseballBallNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBatPrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::BaseballBatPrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBatPrev");

	AMenu_TrainingOptions_C_BaseballBatPrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBatNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::BaseballBatNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.BaseballBatNext");

	AMenu_TrainingOptions_C_BaseballBatNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.PitchTargetPrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::PitchTargetPrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.PitchTargetPrev");

	AMenu_TrainingOptions_C_PitchTargetPrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.PitchTargetNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::PitchTargetNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.PitchTargetNext");

	AMenu_TrainingOptions_C_PitchTargetNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingLauncherPrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::BattingLauncherPrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingLauncherPrev");

	AMenu_TrainingOptions_C_BattingLauncherPrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingLauncherNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::BattingLauncherNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingLauncherNext");

	AMenu_TrainingOptions_C_BattingLauncherNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingTargetPrev
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::BattingTargetPrev(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingTargetPrev");

	AMenu_TrainingOptions_C_BattingTargetPrev_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingTargetNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::BattingTargetNext(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.BattingTargetNext");

	AMenu_TrainingOptions_C_BattingTargetNext_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.RotateBallMesh
// (BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::RotateBallMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.RotateBallMesh");

	AMenu_TrainingOptions_C_RotateBallMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.StopBallMeshRotate
// (BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::StopBallMeshRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.StopBallMeshRotate");

	AMenu_TrainingOptions_C_StopBallMeshRotate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.FixFuckedUpShit
// (BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::FixFuckedUpShit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.FixFuckedUpShit");

	AMenu_TrainingOptions_C_FixFuckedUpShit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.ExecuteUbergraph_Menu_TrainingOptions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_TrainingOptions_C::ExecuteUbergraph_Menu_TrainingOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.ExecuteUbergraph_Menu_TrainingOptions");

	AMenu_TrainingOptions_C_ExecuteUbergraph_Menu_TrainingOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_TrainingOptions.Menu_TrainingOptions_C.AssetsLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMenu_TrainingOptions_C::AssetsLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_TrainingOptions.Menu_TrainingOptions_C.AssetsLoaded__DelegateSignature");

	AMenu_TrainingOptions_C_AssetsLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
