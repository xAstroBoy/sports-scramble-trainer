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

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.PlayHaptic
struct ABP_TrophyGrabbable_C_PlayHaptic_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.GetTrophyAwardListener
struct ABP_TrophyGrabbable_C_GetTrophyAwardListener_Params
{
	class UClass*                                      TrophyAward;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitializeCubbieMaterial
struct ABP_TrophyGrabbable_C_InitializeCubbieMaterial_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitColor
struct ABP_TrophyGrabbable_C_InitColor_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitializeWidget
struct ABP_TrophyGrabbable_C_InitializeWidget_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SpawnTrophyProp
struct ABP_TrophyGrabbable_C_SpawnTrophyProp_Params
{
	bool                                               wasCreated;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SpawnHighlighters
struct ABP_TrophyGrabbable_C_SpawnHighlighters_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SetTrophyInstanceVisibility
struct ABP_TrophyGrabbable_C_SetTrophyInstanceVisibility_Params
{
	bool                                               instanceVisible;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.GetIntegerRowInDataTable
struct ABP_TrophyGrabbable_C_GetIntegerRowInDataTable_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Order;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.DoRespawn
struct ABP_TrophyGrabbable_C_DoRespawn_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.CheckTrophyEarned
struct ABP_TrophyGrabbable_C_CheckTrophyEarned_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.HideDisplay
struct ABP_TrophyGrabbable_C_HideDisplay_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.ShowInfoOnDisplay
struct ABP_TrophyGrabbable_C_ShowInfoOnDisplay_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SetHighlight
struct ABP_TrophyGrabbable_C_SetHighlight_Params
{
	bool                                               lightOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.InitializeDataTable
struct ABP_TrophyGrabbable_C_InitializeDataTable_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.UserConstructionScript
struct ABP_TrophyGrabbable_C_UserConstructionScript_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Timeline_0_0__FinishedFunc
struct ABP_TrophyGrabbable_C_Timeline_0_0__FinishedFunc_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Timeline_0_0__UpdateFunc
struct ABP_TrophyGrabbable_C_Timeline_0_0__UpdateFunc_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnStopPointingAt
struct ABP_TrophyGrabbable_C_OnStopPointingAt_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnStartPointingAt
struct ABP_TrophyGrabbable_C_OnStartPointingAt_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.SetVisibility
struct ABP_TrophyGrabbable_C_SetVisibility_Params
{
	bool                                               visible;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnTrophyRespawnToOriginalPosition
struct ABP_TrophyGrabbable_C_OnTrophyRespawnToOriginalPosition_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnTrophyReleased
struct ABP_TrophyGrabbable_C_OnTrophyReleased_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Play_SFX_Highlight
struct ABP_TrophyGrabbable_C_Play_SFX_Highlight_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Init
struct ABP_TrophyGrabbable_C_Init_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.Play_Grab_SFX
struct ABP_TrophyGrabbable_C_Play_Grab_SFX_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.DestroyTrophy
struct ABP_TrophyGrabbable_C_DestroyTrophy_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.OnTrophyGrabbed
struct ABP_TrophyGrabbable_C_OnTrophyGrabbed_Params
{
};

// Function BP_TrophyGrabbable.BP_TrophyGrabbable_C.ExecuteUbergraph_BP_TrophyGrabbable
struct ABP_TrophyGrabbable_C_ExecuteUbergraph_BP_TrophyGrabbable_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
