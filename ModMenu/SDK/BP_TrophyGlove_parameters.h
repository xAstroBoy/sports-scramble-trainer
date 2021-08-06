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

// Function BP_TrophyGlove.BP_TrophyGlove_C.RemoveTrophy
struct ABP_TrophyGlove_C_RemoveTrophy_Params
{
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.HideGlove
struct ABP_TrophyGlove_C_HideGlove_Params
{
	bool                                               shouldHide;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.SetMenuInstrumentVisibility
struct ABP_TrophyGlove_C_SetMenuInstrumentVisibility_Params
{
	bool                                               visible;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.SpawnFX
struct ABP_TrophyGlove_C_SpawnFX_Params
{
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.ToggleEnable
struct ABP_TrophyGlove_C_ToggleEnable_Params
{
	bool                                               canGrab;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               hasTrophy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.SetRotation
struct ABP_TrophyGlove_C_SetRotation_Params
{
	float                                              LerpIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrophyGrabbable*                            Trophy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.SetTrophyPosition
struct ABP_TrophyGlove_C_SetTrophyPosition_Params
{
	float                                              LerpIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrophyGrabbable*                            Trophy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.SetScale
struct ABP_TrophyGlove_C_SetScale_Params
{
	float                                              LerpIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrophyGrabbable*                            Trophy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.UserConstructionScript
struct ABP_TrophyGlove_C_UserConstructionScript_Params
{
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.ReceiveBeginPlay
struct ABP_TrophyGlove_C_ReceiveBeginPlay_Params
{
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.OnShouldGrab
struct ABP_TrophyGlove_C_OnShouldGrab_Params
{
	class ATrophyGrabbable*                            Trophy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyGlove.BP_TrophyGlove_C.ExecuteUbergraph_BP_TrophyGlove
struct ABP_TrophyGlove_C_ExecuteUbergraph_BP_TrophyGlove_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
