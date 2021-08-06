#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function HubMenu.HubMenu_C.SpawnBeacons
struct AHubMenu_C_SpawnBeacons_Params
{
	TEnumAsByte<HubMenuChoices_EHubMenuChoices>        SingleBeacon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HubMenu.HubMenu_C.ResetMenus
struct AHubMenu_C_ResetMenus_Params
{
};

// Function HubMenu.HubMenu_C.CleanUpSelectors
struct AHubMenu_C_CleanUpSelectors_Params
{
	TEnumAsByte<HubMenuChoices_EHubMenuChoices>        KeepSelection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HubMenu.HubMenu_C.UserConstructionScript
struct AHubMenu_C_UserConstructionScript_Params
{
};

// Function HubMenu.HubMenu_C.OnLoaded_6E812D6A4C2B1D45191638BB6B95DD0B
struct AHubMenu_C_OnLoaded_6E812D6A4C2B1D45191638BB6B95DD0B_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HubMenu.HubMenu_C.OnLoaded_60C27ADA4102D7006D437F83B3BE4A75
struct AHubMenu_C_OnLoaded_60C27ADA4102D7006D437F83B3BE4A75_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature
struct AHubMenu_C_BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature_Params
{
};

// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature
struct AHubMenu_C_BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature_Params
{
};

// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_Baseball_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature
struct AHubMenu_C_BndEvt__ScramLookAtActivator_Baseball_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature_Params
{
};

// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_Bowling_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature
struct AHubMenu_C_BndEvt__ScramLookAtActivator_Bowling_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature_Params
{
};

// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_BASEBALL_K2Node_ComponentBoundEvent_2_ScramLookAtActivatorDelegate__DelegateSignature
struct AHubMenu_C_BndEvt__ScramLookAtActivator_BASEBALL_K2Node_ComponentBoundEvent_2_ScramLookAtActivatorDelegate__DelegateSignature_Params
{
};

// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_BOWLING_K2Node_ComponentBoundEvent_3_ScramLookAtActivatorDelegate__DelegateSignature
struct AHubMenu_C_BndEvt__ScramLookAtActivator_BOWLING_K2Node_ComponentBoundEvent_3_ScramLookAtActivatorDelegate__DelegateSignature_Params
{
};

// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_4_ScramLookAtActivatorDelegate__DelegateSignature
struct AHubMenu_C_BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_4_ScramLookAtActivatorDelegate__DelegateSignature_Params
{
};

// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_5_ScramLookAtActivatorDelegate__DelegateSignature
struct AHubMenu_C_BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_5_ScramLookAtActivatorDelegate__DelegateSignature_Params
{
};

// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_6_ScramLookAtActivatorDelegate__DelegateSignature
struct AHubMenu_C_BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_6_ScramLookAtActivatorDelegate__DelegateSignature_Params
{
};

// Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_7_ScramLookAtActivatorDelegate__DelegateSignature
struct AHubMenu_C_BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_7_ScramLookAtActivatorDelegate__DelegateSignature_Params
{
};

// Function HubMenu.HubMenu_C.SelectionMade
struct AHubMenu_C_SelectionMade_Params
{
	TEnumAsByte<HubMenuChoices_EHubMenuChoices>        Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HubMenu.HubMenu_C.ReceiveBeginPlay
struct AHubMenu_C_ReceiveBeginPlay_Params
{
};

// Function HubMenu.HubMenu_C.SpawnTennis
struct AHubMenu_C_SpawnTennis_Params
{
};

// Function HubMenu.HubMenu_C.SpawnBaseball
struct AHubMenu_C_SpawnBaseball_Params
{
};

// Function HubMenu.HubMenu_C.SpawnBowling
struct AHubMenu_C_SpawnBowling_Params
{
};

// Function HubMenu.HubMenu_C.SpawnMultiplayer
struct AHubMenu_C_SpawnMultiplayer_Params
{
};

// Function HubMenu.HubMenu_C.SpawnTrophy
struct AHubMenu_C_SpawnTrophy_Params
{
};

// Function HubMenu.HubMenu_C.SelectionFinished
struct AHubMenu_C_SelectionFinished_Params
{
	TEnumAsByte<HubMenuChoices_EHubMenuChoices>        Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HubMenu.HubMenu_C.EndNux
struct AHubMenu_C_EndNux_Params
{
};

// Function HubMenu.HubMenu_C.ShutDownMenuExternal
struct AHubMenu_C_ShutDownMenuExternal_Params
{
};

// Function HubMenu.HubMenu_C.PlaySelectionAudio
struct AHubMenu_C_PlaySelectionAudio_Params
{
	TEnumAsByte<HubMenuChoices_EHubMenuChoices>        Choice;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HubMenu.HubMenu_C.BeaconsRaised
struct AHubMenu_C_BeaconsRaised_Params
{
};

// Function HubMenu.HubMenu_C.ActivateLookAt
struct AHubMenu_C_ActivateLookAt_Params
{
};

// Function HubMenu.HubMenu_C.TennisButtonDestroyed
struct AHubMenu_C_TennisButtonDestroyed_Params
{
};

// Function HubMenu.HubMenu_C.BaseballButtonDestroyed
struct AHubMenu_C_BaseballButtonDestroyed_Params
{
};

// Function HubMenu.HubMenu_C.BowlingButtonDestroyed
struct AHubMenu_C_BowlingButtonDestroyed_Params
{
};

// Function HubMenu.HubMenu_C.MultiplayerButtonDestroyed
struct AHubMenu_C_MultiplayerButtonDestroyed_Params
{
};

// Function HubMenu.HubMenu_C.TrophyButtonDestroyed
struct AHubMenu_C_TrophyButtonDestroyed_Params
{
};

// Function HubMenu.HubMenu_C.ExecuteUbergraph_HubMenu
struct AHubMenu_C_ExecuteUbergraph_HubMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HubMenu.HubMenu_C.SelectionStarted__DelegateSignature
struct AHubMenu_C_SelectionStarted__DelegateSignature_Params
{
	TEnumAsByte<HubMenuChoices_EHubMenuChoices>        Choice;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Angle;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HubMenu.HubMenu_C.HubMenuSelection__DelegateSignature
struct AHubMenu_C_HubMenuSelection__DelegateSignature_Params
{
	TEnumAsByte<HubMenuChoices_EHubMenuChoices>        Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
