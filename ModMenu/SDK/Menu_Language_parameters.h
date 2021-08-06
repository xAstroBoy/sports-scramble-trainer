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

// Function Menu_Language.Menu_Language_C.RemoveSubMenu
struct AMenu_Language_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Language.Menu_Language_C.HideSubMenu
struct AMenu_Language_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Language.Menu_Language_C.RestoreSubMenu
struct AMenu_Language_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Language.Menu_Language_C.DisableMenuInput
struct AMenu_Language_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Language.Menu_Language_C.EnableMenuInput
struct AMenu_Language_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Language.Menu_Language_C.UpdateTennisScoreboard
struct AMenu_Language_C_UpdateTennisScoreboard_Params
{
};

// Function Menu_Language.Menu_Language_C.UpdatePlayByPlays
struct AMenu_Language_C_UpdatePlayByPlays_Params
{
};

// Function Menu_Language.Menu_Language_C.RedrawWidgets
struct AMenu_Language_C_RedrawWidgets_Params
{
};

// Function Menu_Language.Menu_Language_C.EnableButtons
struct AMenu_Language_C_EnableButtons_Params
{
};

// Function Menu_Language.Menu_Language_C.DisableButtons
struct AMenu_Language_C_DisableButtons_Params
{
};

// Function Menu_Language.Menu_Language_C.Initialize
struct AMenu_Language_C_Initialize_Params
{
};

// Function Menu_Language.Menu_Language_C.UserConstructionScript
struct AMenu_Language_C_UserConstructionScript_Params
{
};

// Function Menu_Language.Menu_Language_C.ReceiveBeginPlay
struct AMenu_Language_C_ReceiveBeginPlay_Params
{
};

// Function Menu_Language.Menu_Language_C.ButtonPressed
struct AMenu_Language_C_ButtonPressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Language.Menu_Language_C.ReceiveTick
struct AMenu_Language_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Language.Menu_Language_C.ReceiveEndPlay
struct AMenu_Language_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Language.Menu_Language_C.ButtonSwapComplete
struct AMenu_Language_C_ButtonSwapComplete_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Language.Menu_Language_C.ExecuteUbergraph_Menu_Language
struct AMenu_Language_C_ExecuteUbergraph_Menu_Language_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Language.Menu_Language_C.OptionChanging__DelegateSignature
struct AMenu_Language_C_OptionChanging__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Language.Menu_Language_C.OptionChanged__DelegateSignature
struct AMenu_Language_C_OptionChanged__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
