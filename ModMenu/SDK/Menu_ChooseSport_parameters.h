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

// Function Menu_ChooseSport.Menu_ChooseSport_C.EnableMenuInput
struct AMenu_ChooseSport_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.DisableMenuInput
struct AMenu_ChooseSport_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.RemoveSubMenu
struct AMenu_ChooseSport_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.HideSubMenu
struct AMenu_ChooseSport_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.RestoreSubMenu
struct AMenu_ChooseSport_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.Initialize
struct AMenu_ChooseSport_C_Initialize_Params
{
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.UserConstructionScript
struct AMenu_ChooseSport_C_UserConstructionScript_Params
{
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.ReceiveBeginPlay
struct AMenu_ChooseSport_C_ReceiveBeginPlay_Params
{
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.ReceiveTick
struct AMenu_ChooseSport_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.ReceiveEndPlay
struct AMenu_ChooseSport_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.ButtonPressed
struct AMenu_ChooseSport_C_ButtonPressed_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.ButtonSwapped
struct AMenu_ChooseSport_C_ButtonSwapped_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.ExecuteUbergraph_Menu_ChooseSport
struct AMenu_ChooseSport_C_ExecuteUbergraph_Menu_ChooseSport_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.SelectionMade__DelegateSignature
struct AMenu_ChooseSport_C_SelectionMade__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_ChooseSport.Menu_ChooseSport_C.SportChosen__DelegateSignature
struct AMenu_ChooseSport_C_SportChosen__DelegateSignature_Params
{
	SportsScramble_EScramSport                         Sport;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
