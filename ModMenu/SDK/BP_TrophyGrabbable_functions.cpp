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

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.PlayHaptic
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::PlayHaptic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.PlayHaptic");

	ABP_TrophyGrabbable_C_PlayHaptic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.GetTrophyAwardListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  TrophyAward                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyGrabbable_C::GetTrophyAwardListener(class UClass* TrophyAward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.GetTrophyAwardListener");

	ABP_TrophyGrabbable_C_GetTrophyAwardListener_Params params;
	params.TrophyAward = TrophyAward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitializeCubbieMaterial
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::InitializeCubbieMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitializeCubbieMaterial");

	ABP_TrophyGrabbable_C_InitializeCubbieMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitColor
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::InitColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitColor");

	ABP_TrophyGrabbable_C_InitColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitializeWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::InitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitializeWidget");

	ABP_TrophyGrabbable_C_InitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SpawnTrophyProp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           wasCreated                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyGrabbable_C::SpawnTrophyProp(bool* wasCreated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SpawnTrophyProp");

	ABP_TrophyGrabbable_C_SpawnTrophyProp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (wasCreated != nullptr)
		*wasCreated = params.wasCreated;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SpawnHighlighters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::SpawnHighlighters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SpawnHighlighters");

	ABP_TrophyGrabbable_C_SpawnHighlighters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SetTrophyInstanceVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           instanceVisible                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyGrabbable_C::SetTrophyInstanceVisibility(bool instanceVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SetTrophyInstanceVisibility");

	ABP_TrophyGrabbable_C_SetTrophyInstanceVisibility_Params params;
	params.instanceVisible = instanceVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.GetIntegerRowInDataTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Order                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyGrabbable_C::GetIntegerRowInDataTable(const struct FName& Name, int* Order)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.GetIntegerRowInDataTable");

	ABP_TrophyGrabbable_C_GetIntegerRowInDataTable_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Order != nullptr)
		*Order = params.Order;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.DoRespawn
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::DoRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.DoRespawn");

	ABP_TrophyGrabbable_C_DoRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.CheckTrophyEarned
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::CheckTrophyEarned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.CheckTrophyEarned");

	ABP_TrophyGrabbable_C_CheckTrophyEarned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.HideDisplay
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::HideDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.HideDisplay");

	ABP_TrophyGrabbable_C_HideDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.ShowInfoOnDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::ShowInfoOnDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.ShowInfoOnDisplay");

	ABP_TrophyGrabbable_C_ShowInfoOnDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SetHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           lightOn                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyGrabbable_C::SetHighlight(bool lightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SetHighlight");

	ABP_TrophyGrabbable_C_SetHighlight_Params params;
	params.lightOn = lightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitializeDataTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::InitializeDataTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitializeDataTable");

	ABP_TrophyGrabbable_C_InitializeDataTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.UserConstructionScript");

	ABP_TrophyGrabbable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Timeline_0_0__FinishedFunc
// (BlueprintEvent)
void ABP_TrophyGrabbable_C::Timeline_0_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Timeline_0_0__FinishedFunc");

	ABP_TrophyGrabbable_C_Timeline_0_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Timeline_0_0__UpdateFunc
// (BlueprintEvent)
void ABP_TrophyGrabbable_C::Timeline_0_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Timeline_0_0__UpdateFunc");

	ABP_TrophyGrabbable_C_Timeline_0_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnStopPointingAt
// (Event, Public, BlueprintEvent)
void ABP_TrophyGrabbable_C::OnStopPointingAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnStopPointingAt");

	ABP_TrophyGrabbable_C_OnStopPointingAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnStartPointingAt
// (Event, Public, BlueprintEvent)
void ABP_TrophyGrabbable_C::OnStartPointingAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnStartPointingAt");

	ABP_TrophyGrabbable_C_OnStartPointingAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyGrabbable_C::SetVisibility(bool visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SetVisibility");

	ABP_TrophyGrabbable_C_SetVisibility_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnTrophyRespawnToOriginalPosition
// (Event, Public, BlueprintEvent)
void ABP_TrophyGrabbable_C::OnTrophyRespawnToOriginalPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnTrophyRespawnToOriginalPosition");

	ABP_TrophyGrabbable_C_OnTrophyRespawnToOriginalPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnTrophyReleased
// (Event, Public, BlueprintEvent)
void ABP_TrophyGrabbable_C::OnTrophyReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnTrophyReleased");

	ABP_TrophyGrabbable_C_OnTrophyReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Play_SFX_Highlight
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::Play_SFX_Highlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Play_SFX_Highlight");

	ABP_TrophyGrabbable_C_Play_SFX_Highlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Init
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Init");

	ABP_TrophyGrabbable_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Play_Grab_SFX
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::Play_Grab_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Play_Grab_SFX");

	ABP_TrophyGrabbable_C_Play_Grab_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.DestroyTrophy
// (BlueprintCallable, BlueprintEvent)
void ABP_TrophyGrabbable_C::DestroyTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.DestroyTrophy");

	ABP_TrophyGrabbable_C_DestroyTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnTrophyGrabbed
// (Event, Public, BlueprintEvent)
void ABP_TrophyGrabbable_C::OnTrophyGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnTrophyGrabbed");

	ABP_TrophyGrabbable_C_OnTrophyGrabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.ExecuteUbergraph_BP_TrophyGrabbable
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyGrabbable_C::ExecuteUbergraph_BP_TrophyGrabbable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.ExecuteUbergraph_BP_TrophyGrabbable");

	ABP_TrophyGrabbable_C_ExecuteUbergraph_BP_TrophyGrabbable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
