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

// Function Menu_PnpWinner.Menu_PnpWinner_C.EnableMenuInput
struct AMenu_PnpWinner_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.DisableMenuInput
struct AMenu_PnpWinner_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.RemoveSubMenu
struct AMenu_PnpWinner_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.HideSubMenu
struct AMenu_PnpWinner_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.RestoreSubMenu
struct AMenu_PnpWinner_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.Initialize
struct AMenu_PnpWinner_C_Initialize_Params
{
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.UserConstructionScript
struct AMenu_PnpWinner_C_UserConstructionScript_Params
{
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveBeginPlay
struct AMenu_PnpWinner_C_ReceiveBeginPlay_Params
{
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveTick
struct AMenu_PnpWinner_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveEndPlay
struct AMenu_PnpWinner_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.ExecuteUbergraph_Menu_PnpWinner
struct AMenu_PnpWinner_C_ExecuteUbergraph_Menu_PnpWinner_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PnpWinner.Menu_PnpWinner_C.ResultsScoreComplete__DelegateSignature
struct AMenu_PnpWinner_C_ResultsScoreComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
