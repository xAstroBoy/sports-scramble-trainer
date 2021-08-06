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

// Function Menu_JoinInvite.Menu_JoinInvite_C.EnableMenuInput
struct AMenu_JoinInvite_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.DisableMenuInput
struct AMenu_JoinInvite_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.RemoveSubMenu
struct AMenu_JoinInvite_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.HideSubMenu
struct AMenu_JoinInvite_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.RestoreSubMenu
struct AMenu_JoinInvite_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.InitializeMenu
struct AMenu_JoinInvite_C_InitializeMenu_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.UpdateView
struct AMenu_JoinInvite_C_UpdateView_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.Initialize
struct AMenu_JoinInvite_C_Initialize_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.UserConstructionScript
struct AMenu_JoinInvite_C_UserConstructionScript_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_MoveMessage__FinishedFunc
struct AMenu_JoinInvite_C_Timeline_MoveMessage__FinishedFunc_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_MoveMessage__UpdateFunc
struct AMenu_JoinInvite_C_Timeline_MoveMessage__UpdateFunc_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_ScaleMenu__FinishedFunc
struct AMenu_JoinInvite_C_Timeline_ScaleMenu__FinishedFunc_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.Timeline_ScaleMenu__UpdateFunc
struct AMenu_JoinInvite_C_Timeline_ScaleMenu__UpdateFunc_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.ReceiveBeginPlay
struct AMenu_JoinInvite_C_ReceiveBeginPlay_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.ReceiveTick
struct AMenu_JoinInvite_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.ReceiveEndPlay
struct AMenu_JoinInvite_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.ButtonPressed
struct AMenu_JoinInvite_C_ButtonPressed_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.PreviousButtonPressed
struct AMenu_JoinInvite_C_PreviousButtonPressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.NextButtonPressed
struct AMenu_JoinInvite_C_NextButtonPressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.ButtonSwappedJoin
struct AMenu_JoinInvite_C_ButtonSwappedJoin_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.DeclineAllSwapped
struct AMenu_JoinInvite_C_DeclineAllSwapped_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.ShowMessage
struct AMenu_JoinInvite_C_ShowMessage_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.ScaleMenu
struct AMenu_JoinInvite_C_ScaleMenu_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.ExecuteUbergraph_Menu_JoinInvite
struct AMenu_JoinInvite_C_ExecuteUbergraph_Menu_JoinInvite_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.DeclineAll__DelegateSignature
struct AMenu_JoinInvite_C_DeclineAll__DelegateSignature_Params
{
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.JoinPlayer__DelegateSignature
struct AMenu_JoinInvite_C_JoinPlayer__DelegateSignature_Params
{
	struct FScramGameInvite                            JoinPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu_JoinInvite.Menu_JoinInvite_C.SelectionStarted__DelegateSignature
struct AMenu_JoinInvite_C_SelectionStarted__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
