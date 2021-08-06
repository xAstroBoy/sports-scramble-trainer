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

// Function Menu_IndexSelection.Menu_IndexSelection_C.EnableMenuInput
struct AMenu_IndexSelection_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.DisableMenuInput
struct AMenu_IndexSelection_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.RestoreSubMenu
struct AMenu_IndexSelection_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.HideSubMenu
struct AMenu_IndexSelection_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.RemoveSubMenu
struct AMenu_IndexSelection_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.ShouldButtonBeLocked
struct AMenu_IndexSelection_C_ShouldButtonBeLocked_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<UI_ButtonState_EUI_ButtonState>        ButtonState;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowTrophy;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.SpawnButtons
struct AMenu_IndexSelection_C_SpawnButtons_Params
{
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.Initialize
struct AMenu_IndexSelection_C_Initialize_Params
{
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.UserConstructionScript
struct AMenu_IndexSelection_C_UserConstructionScript_Params
{
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.InpActEvt_DebugButton_K2Node_InputActionEvent_1
struct AMenu_IndexSelection_C_InpActEvt_DebugButton_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveBeginPlay
struct AMenu_IndexSelection_C_ReceiveBeginPlay_Params
{
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionMade
struct AMenu_IndexSelection_C_SelectionMade_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveTick
struct AMenu_IndexSelection_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveEndPlay
struct AMenu_IndexSelection_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionStarted
struct AMenu_IndexSelection_C_SelectionStarted_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.ExecuteUbergraph_Menu_IndexSelection
struct AMenu_IndexSelection_C_ExecuteUbergraph_Menu_IndexSelection_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionComplete__DelegateSignature
struct AMenu_IndexSelection_C_SelectionComplete__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       GameName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_IndexSelection.Menu_IndexSelection_C.ChoiceStarted__DelegateSignature
struct AMenu_IndexSelection_C_ChoiceStarted__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
