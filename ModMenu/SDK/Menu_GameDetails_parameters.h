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

// Function Menu_GameDetails.Menu_GameDetails_C.EnableMenuInput
struct AMenu_GameDetails_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_GameDetails.Menu_GameDetails_C.DisableMenuInput
struct AMenu_GameDetails_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_GameDetails.Menu_GameDetails_C.RemoveSubMenu
struct AMenu_GameDetails_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_GameDetails.Menu_GameDetails_C.HideSubMenu
struct AMenu_GameDetails_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_GameDetails.Menu_GameDetails_C.RestoreSubMenu
struct AMenu_GameDetails_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_GameDetails.Menu_GameDetails_C.GetIndex
struct AMenu_GameDetails_C_GetIndex_Params
{
	SportsScramble_EScramSport                         Sport;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GameIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_GameDetails.Menu_GameDetails_C.SetInfoTrophyIconLocation
struct AMenu_GameDetails_C_SetInfoTrophyIconLocation_Params
{
};

// Function Menu_GameDetails.Menu_GameDetails_C.Initialize
struct AMenu_GameDetails_C_Initialize_Params
{
};

// Function Menu_GameDetails.Menu_GameDetails_C.UserConstructionScript
struct AMenu_GameDetails_C_UserConstructionScript_Params
{
};

// Function Menu_GameDetails.Menu_GameDetails_C.Timeline_MenuScale__FinishedFunc
struct AMenu_GameDetails_C_Timeline_MenuScale__FinishedFunc_Params
{
};

// Function Menu_GameDetails.Menu_GameDetails_C.Timeline_MenuScale__UpdateFunc
struct AMenu_GameDetails_C_Timeline_MenuScale__UpdateFunc_Params
{
};

// Function Menu_GameDetails.Menu_GameDetails_C.ReceiveBeginPlay
struct AMenu_GameDetails_C_ReceiveBeginPlay_Params
{
};

// Function Menu_GameDetails.Menu_GameDetails_C.ReceiveTick
struct AMenu_GameDetails_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_GameDetails.Menu_GameDetails_C.ReceiveEndPlay
struct AMenu_GameDetails_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_GameDetails.Menu_GameDetails_C.ToggleInfo
struct AMenu_GameDetails_C_ToggleInfo_Params
{
};

// Function Menu_GameDetails.Menu_GameDetails_C.ExecuteUbergraph_Menu_GameDetails
struct AMenu_GameDetails_C_ExecuteUbergraph_Menu_GameDetails_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_GameDetails.Menu_GameDetails_C.ResultsScoreComplete__DelegateSignature
struct AMenu_GameDetails_C_ResultsScoreComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
