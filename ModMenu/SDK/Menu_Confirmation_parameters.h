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

// Function Menu_Confirmation.Menu_Confirmation_C.EnableMenuInput
struct AMenu_Confirmation_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Confirmation.Menu_Confirmation_C.DisableMenuInput
struct AMenu_Confirmation_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Confirmation.Menu_Confirmation_C.RemoveSubMenu
struct AMenu_Confirmation_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Confirmation.Menu_Confirmation_C.HideSubMenu
struct AMenu_Confirmation_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Confirmation.Menu_Confirmation_C.RestoreSubMenu
struct AMenu_Confirmation_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Confirmation.Menu_Confirmation_C.EnableButtons
struct AMenu_Confirmation_C_EnableButtons_Params
{
};

// Function Menu_Confirmation.Menu_Confirmation_C.DisableButtons
struct AMenu_Confirmation_C_DisableButtons_Params
{
};

// Function Menu_Confirmation.Menu_Confirmation_C.Initialize
struct AMenu_Confirmation_C_Initialize_Params
{
};

// Function Menu_Confirmation.Menu_Confirmation_C.UserConstructionScript
struct AMenu_Confirmation_C_UserConstructionScript_Params
{
};

// Function Menu_Confirmation.Menu_Confirmation_C.ReceiveBeginPlay
struct AMenu_Confirmation_C_ReceiveBeginPlay_Params
{
};

// Function Menu_Confirmation.Menu_Confirmation_C.ReceiveTick
struct AMenu_Confirmation_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Confirmation.Menu_Confirmation_C.ReceiveEndPlay
struct AMenu_Confirmation_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Confirmation.Menu_Confirmation_C.ButtonPressed
struct AMenu_Confirmation_C_ButtonPressed_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Confirmation.Menu_Confirmation_C.ButtonSwapped
struct AMenu_Confirmation_C_ButtonSwapped_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Confirmation.Menu_Confirmation_C.ExecuteUbergraph_Menu_Confirmation
struct AMenu_Confirmation_C_ExecuteUbergraph_Menu_Confirmation_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Confirmation.Menu_Confirmation_C.SelectionCompleted__DelegateSignature
struct AMenu_Confirmation_C_SelectionCompleted__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Confirmation.Menu_Confirmation_C.SelectionStarted__DelegateSignature
struct AMenu_Confirmation_C_SelectionStarted__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
