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

// Function BP_TrophyGlove.BP_TrophyGlove_C.RemoveTrophy
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGlove_C::RemoveTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.RemoveTrophy");

	ABP_TrophyGlove_C_RemoveTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.HideGlove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyGlove_C::HideGlove(bool shouldHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.HideGlove");

	ABP_TrophyGlove_C_HideGlove_Params params;
	params.shouldHide = shouldHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.SetMenuInstrumentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyGlove_C::SetMenuInstrumentVisibility(bool visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.SetMenuInstrumentVisibility");

	ABP_TrophyGlove_C_SetMenuInstrumentVisibility_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.SpawnFX
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGlove_C::SpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.SpawnFX");

	ABP_TrophyGlove_C_SpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.ToggleEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           canGrab                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           hasTrophy                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TrophyGlove_C::ToggleEnable(bool canGrab, bool* hasTrophy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.ToggleEnable");

	ABP_TrophyGlove_C_ToggleEnable_Params params;
	params.canGrab = canGrab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (hasTrophy != nullptr)
		*hasTrophy = params.hasTrophy;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.SetRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LerpIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATrophyGrabbable*        Trophy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyGlove_C::SetRotation(float LerpIndex, class ATrophyGrabbable* Trophy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.SetRotation");

	ABP_TrophyGlove_C_SetRotation_Params params;
	params.LerpIndex = LerpIndex;
	params.Trophy = Trophy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.SetTrophyPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LerpIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATrophyGrabbable*        Trophy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyGlove_C::SetTrophyPosition(float LerpIndex, class ATrophyGrabbable* Trophy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.SetTrophyPosition");

	ABP_TrophyGlove_C_SetTrophyPosition_Params params;
	params.LerpIndex = LerpIndex;
	params.Trophy = Trophy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LerpIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATrophyGrabbable*        Trophy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyGlove_C::SetScale(float LerpIndex, class ATrophyGrabbable* Trophy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.SetScale");

	ABP_TrophyGlove_C_SetScale_Params params;
	params.LerpIndex = LerpIndex;
	params.Trophy = Trophy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyGlove_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.UserConstructionScript");

	ABP_TrophyGlove_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TrophyGlove_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.ReceiveBeginPlay");

	ABP_TrophyGlove_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.OnShouldGrab
// (Event, Public, BlueprintEvent)
// Parameters:
// class ATrophyGrabbable*        Trophy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyGlove_C::OnShouldGrab(class ATrophyGrabbable* Trophy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.OnShouldGrab");

	ABP_TrophyGlove_C_OnShouldGrab_Params params;
	params.Trophy = Trophy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyGlove.BP_TrophyGlove_C.ExecuteUbergraph_BP_TrophyGlove
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyGlove_C::ExecuteUbergraph_BP_TrophyGlove(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyGlove.BP_TrophyGlove_C.ExecuteUbergraph_BP_TrophyGlove");

	ABP_TrophyGlove_C_ExecuteUbergraph_BP_TrophyGlove_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
