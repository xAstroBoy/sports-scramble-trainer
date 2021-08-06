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

// Function Menu_TextTwo.Menu_TextTwo_C.EnableMenuInput
struct AMenu_TextTwo_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_TextTwo.Menu_TextTwo_C.DisableMenuInput
struct AMenu_TextTwo_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_TextTwo.Menu_TextTwo_C.RemoveSubMenu
struct AMenu_TextTwo_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_TextTwo.Menu_TextTwo_C.HideSubMenu
struct AMenu_TextTwo_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_TextTwo.Menu_TextTwo_C.RestoreSubMenu
struct AMenu_TextTwo_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_TextTwo.Menu_TextTwo_C.EnableButtons
struct AMenu_TextTwo_C_EnableButtons_Params
{
};

// Function Menu_TextTwo.Menu_TextTwo_C.DisableButtons
struct AMenu_TextTwo_C_DisableButtons_Params
{
};

// Function Menu_TextTwo.Menu_TextTwo_C.Initialize
struct AMenu_TextTwo_C_Initialize_Params
{
};

// Function Menu_TextTwo.Menu_TextTwo_C.UserConstructionScript
struct AMenu_TextTwo_C_UserConstructionScript_Params
{
};

// Function Menu_TextTwo.Menu_TextTwo_C.ReceiveBeginPlay
struct AMenu_TextTwo_C_ReceiveBeginPlay_Params
{
};

// Function Menu_TextTwo.Menu_TextTwo_C.ReceiveTick
struct AMenu_TextTwo_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_TextTwo.Menu_TextTwo_C.ReceiveEndPlay
struct AMenu_TextTwo_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_TextTwo.Menu_TextTwo_C.ButtonPressed
struct AMenu_TextTwo_C_ButtonPressed_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_TextTwo.Menu_TextTwo_C.ButtonSwapped
struct AMenu_TextTwo_C_ButtonSwapped_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_TextTwo.Menu_TextTwo_C.ExecuteUbergraph_Menu_TextTwo
struct AMenu_TextTwo_C_ExecuteUbergraph_Menu_TextTwo_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_TextTwo.Menu_TextTwo_C.SelectionCompleted__DelegateSignature
struct AMenu_TextTwo_C_SelectionCompleted__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_TextTwo.Menu_TextTwo_C.SelectionStarted__DelegateSignature
struct AMenu_TextTwo_C_SelectionStarted__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
