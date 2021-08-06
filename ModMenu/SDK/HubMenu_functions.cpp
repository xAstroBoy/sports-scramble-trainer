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

// Function HubMenu.HubMenu_C.SpawnBeacons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> SingleBeacon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHubMenu_C::SpawnBeacons(TEnumAsByte<HubMenuChoices_EHubMenuChoices> SingleBeacon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnBeacons");

	AHubMenu_C_SpawnBeacons_Params params;
	params.SingleBeacon = SingleBeacon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.ResetMenus
// (Public, BlueprintCallable, BlueprintEvent)
void AHubMenu_C::ResetMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.ResetMenus");

	AHubMenu_C_ResetMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.CleanUpSelectors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> KeepSelection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHubMenu_C::CleanUpSelectors(TEnumAsByte<HubMenuChoices_EHubMenuChoices> KeepSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.CleanUpSelectors");

	AHubMenu_C_CleanUpSelectors_Params params;
	params.KeepSelection = KeepSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHubMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.UserConstructionScript");

	AHubMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.OnLoaded_6E812D6A4C2B1D45191638BB6B95DD0B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHubMenu_C::OnLoaded_6E812D6A4C2B1D45191638BB6B95DD0B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.OnLoaded_6E812D6A4C2B1D45191638BB6B95DD0B");

	AHubMenu_C_OnLoaded_6E812D6A4C2B1D45191638BB6B95DD0B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.OnLoaded_60C27ADA4102D7006D437F83B3BE4A75
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHubMenu_C::OnLoaded_60C27ADA4102D7006D437F83B3BE4A75(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.OnLoaded_60C27ADA4102D7006D437F83B3BE4A75");

	AHubMenu_C_OnLoaded_60C27ADA4102D7006D437F83B3BE4A75_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void AHubMenu_C::BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature");

	AHubMenu_C_BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void AHubMenu_C::BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature");

	AHubMenu_C_BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_Baseball_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void AHubMenu_C::BndEvt__ScramLookAtActivator_Baseball_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_Baseball_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature");

	AHubMenu_C_BndEvt__ScramLookAtActivator_Baseball_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_Bowling_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void AHubMenu_C::BndEvt__ScramLookAtActivator_Bowling_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_Bowling_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature");

	AHubMenu_C_BndEvt__ScramLookAtActivator_Bowling_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_BASEBALL_K2Node_ComponentBoundEvent_2_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void AHubMenu_C::BndEvt__ScramLookAtActivator_BASEBALL_K2Node_ComponentBoundEvent_2_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_BASEBALL_K2Node_ComponentBoundEvent_2_ScramLookAtActivatorDelegate__DelegateSignature");

	AHubMenu_C_BndEvt__ScramLookAtActivator_BASEBALL_K2Node_ComponentBoundEvent_2_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_BOWLING_K2Node_ComponentBoundEvent_3_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void AHubMenu_C::BndEvt__ScramLookAtActivator_BOWLING_K2Node_ComponentBoundEvent_3_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_BOWLING_K2Node_ComponentBoundEvent_3_ScramLookAtActivatorDelegate__DelegateSignature");

	AHubMenu_C_BndEvt__ScramLookAtActivator_BOWLING_K2Node_ComponentBoundEvent_3_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_4_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void AHubMenu_C::BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_4_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_4_ScramLookAtActivatorDelegate__DelegateSignature");

	AHubMenu_C_BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_4_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_5_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void AHubMenu_C::BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_5_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_5_ScramLookAtActivatorDelegate__DelegateSignature");

	AHubMenu_C_BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_5_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_6_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void AHubMenu_C::BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_6_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_6_ScramLookAtActivatorDelegate__DelegateSignature");

	AHubMenu_C_BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_6_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_7_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void AHubMenu_C::BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_7_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_7_ScramLookAtActivatorDelegate__DelegateSignature");

	AHubMenu_C_BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_7_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.SelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHubMenu_C::SelectionMade(TEnumAsByte<HubMenuChoices_EHubMenuChoices> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SelectionMade");

	AHubMenu_C_SelectionMade_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHubMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.ReceiveBeginPlay");

	AHubMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.SpawnTennis
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::SpawnTennis()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnTennis");

	AHubMenu_C_SpawnTennis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.SpawnBaseball
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::SpawnBaseball()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnBaseball");

	AHubMenu_C_SpawnBaseball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.SpawnBowling
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::SpawnBowling()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnBowling");

	AHubMenu_C_SpawnBowling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.SpawnMultiplayer
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::SpawnMultiplayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnMultiplayer");

	AHubMenu_C_SpawnMultiplayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.SpawnTrophy
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::SpawnTrophy()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnTrophy");

	AHubMenu_C_SpawnTrophy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.SelectionFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHubMenu_C::SelectionFinished(TEnumAsByte<HubMenuChoices_EHubMenuChoices> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SelectionFinished");

	AHubMenu_C_SelectionFinished_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.EndNux
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::EndNux()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.EndNux");

	AHubMenu_C_EndNux_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.ShutDownMenuExternal
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::ShutDownMenuExternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.ShutDownMenuExternal");

	AHubMenu_C_ShutDownMenuExternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.PlaySelectionAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHubMenu_C::PlaySelectionAudio(TEnumAsByte<HubMenuChoices_EHubMenuChoices> Choice)
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.PlaySelectionAudio");

	AHubMenu_C_PlaySelectionAudio_Params params;
	params.Choice = Choice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BeaconsRaised
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::BeaconsRaised()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BeaconsRaised");

	AHubMenu_C_BeaconsRaised_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.ActivateLookAt
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::ActivateLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.ActivateLookAt");

	AHubMenu_C_ActivateLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.TennisButtonDestroyed
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::TennisButtonDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.TennisButtonDestroyed");

	AHubMenu_C_TennisButtonDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BaseballButtonDestroyed
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::BaseballButtonDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BaseballButtonDestroyed");

	AHubMenu_C_BaseballButtonDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.BowlingButtonDestroyed
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::BowlingButtonDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BowlingButtonDestroyed");

	AHubMenu_C_BowlingButtonDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.MultiplayerButtonDestroyed
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::MultiplayerButtonDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.MultiplayerButtonDestroyed");

	AHubMenu_C_MultiplayerButtonDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.TrophyButtonDestroyed
// (BlueprintCallable, BlueprintEvent)
void AHubMenu_C::TrophyButtonDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.TrophyButtonDestroyed");

	AHubMenu_C_TrophyButtonDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.ExecuteUbergraph_HubMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHubMenu_C::ExecuteUbergraph_HubMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.ExecuteUbergraph_HubMenu");

	AHubMenu_C_ExecuteUbergraph_HubMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.SelectionStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> Choice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHubMenu_C::SelectionStarted__DelegateSignature(TEnumAsByte<HubMenuChoices_EHubMenuChoices> Choice, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SelectionStarted__DelegateSignature");

	AHubMenu_C_SelectionStarted__DelegateSignature_Params params;
	params.Choice = Choice;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HubMenu.HubMenu_C.HubMenuSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<HubMenuChoices_EHubMenuChoices> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHubMenu_C::HubMenuSelection__DelegateSignature(TEnumAsByte<HubMenuChoices_EHubMenuChoices> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.HubMenuSelection__DelegateSignature");

	AHubMenu_C_HubMenuSelection__DelegateSignature_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
