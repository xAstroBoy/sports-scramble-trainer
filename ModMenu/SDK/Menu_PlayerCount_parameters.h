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

// Function Menu_PlayerCount.Menu_PlayerCount_C.EnableMenuInput
struct AMenu_PlayerCount_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.DisableMenuInput
struct AMenu_PlayerCount_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.RemoveSubMenu
struct AMenu_PlayerCount_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.HideSubMenu
struct AMenu_PlayerCount_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.RestoreSubMenu
struct AMenu_PlayerCount_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.UpdateDisplay
struct AMenu_PlayerCount_C_UpdateDisplay_Params
{
	int                                                PlayerCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.Initialize
struct AMenu_PlayerCount_C_Initialize_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.UserConstructionScript
struct AMenu_PlayerCount_C_UserConstructionScript_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale3__FinishedFunc
struct AMenu_PlayerCount_C_Timeline_Scale3__FinishedFunc_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale3__UpdateFunc
struct AMenu_PlayerCount_C_Timeline_Scale3__UpdateFunc_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale4__FinishedFunc
struct AMenu_PlayerCount_C_Timeline_Scale4__FinishedFunc_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale4__UpdateFunc
struct AMenu_PlayerCount_C_Timeline_Scale4__UpdateFunc_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveBeginPlay
struct AMenu_PlayerCount_C_ReceiveBeginPlay_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveTick
struct AMenu_PlayerCount_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveEndPlay
struct AMenu_PlayerCount_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.DecrementCount
struct AMenu_PlayerCount_C_DecrementCount_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.IncrementCount
struct AMenu_PlayerCount_C_IncrementCount_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.DisableMenu
struct AMenu_PlayerCount_C_DisableMenu_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.Show3
struct AMenu_PlayerCount_C_Show3_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.Show4
struct AMenu_PlayerCount_C_Show4_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.Hide3
struct AMenu_PlayerCount_C_Hide3_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.Hide4
struct AMenu_PlayerCount_C_Hide4_Params
{
};

// Function Menu_PlayerCount.Menu_PlayerCount_C.ExecuteUbergraph_Menu_PlayerCount
struct AMenu_PlayerCount_C_ExecuteUbergraph_Menu_PlayerCount_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
