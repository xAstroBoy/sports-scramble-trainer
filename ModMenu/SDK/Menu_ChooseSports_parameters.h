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

// Function Menu_ChooseSports.Menu_ChooseSports_C.EnableMenuInput
struct AMenu_ChooseSports_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.DisableMenuInput
struct AMenu_ChooseSports_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.RemoveSubMenu
struct AMenu_ChooseSports_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.HideSubMenu
struct AMenu_ChooseSports_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.RestoreSubMenu
struct AMenu_ChooseSports_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.Initialize
struct AMenu_ChooseSports_C_Initialize_Params
{
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.UserConstructionScript
struct AMenu_ChooseSports_C_UserConstructionScript_Params
{
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveBeginPlay
struct AMenu_ChooseSports_C_ReceiveBeginPlay_Params
{
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveTick
struct AMenu_ChooseSports_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveEndPlay
struct AMenu_ChooseSports_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.ButtonPressed
struct AMenu_ChooseSports_C_ButtonPressed_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.ButtonSwapped
struct AMenu_ChooseSports_C_ButtonSwapped_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.CheckButtonState
struct AMenu_ChooseSports_C_CheckButtonState_Params
{
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.ExecuteUbergraph_Menu_ChooseSports
struct AMenu_ChooseSports_C_ExecuteUbergraph_Menu_ChooseSports_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSports.Menu_ChooseSports_C.UpdateNextButtonState__DelegateSignature
struct AMenu_ChooseSports_C_UpdateNextButtonState__DelegateSignature_Params
{
	bool                                               EnableButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
