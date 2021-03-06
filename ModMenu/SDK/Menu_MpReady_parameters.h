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

// Function Menu_MpReady.Menu_MpReady_C.EnableMenuInput
struct AMenu_MpReady_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MpReady.Menu_MpReady_C.DisableMenuInput
struct AMenu_MpReady_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MpReady.Menu_MpReady_C.RemoveSubMenu
struct AMenu_MpReady_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MpReady.Menu_MpReady_C.HideSubMenu
struct AMenu_MpReady_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MpReady.Menu_MpReady_C.RestoreSubMenu
struct AMenu_MpReady_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MpReady.Menu_MpReady_C.OpponentReady
struct AMenu_MpReady_C_OpponentReady_Params
{
};

// Function Menu_MpReady.Menu_MpReady_C.UpdateRemoteAvatar
struct AMenu_MpReady_C_UpdateRemoteAvatar_Params
{
};

// Function Menu_MpReady.Menu_MpReady_C.Initialize
struct AMenu_MpReady_C_Initialize_Params
{
};

// Function Menu_MpReady.Menu_MpReady_C.UserConstructionScript
struct AMenu_MpReady_C_UserConstructionScript_Params
{
};

// Function Menu_MpReady.Menu_MpReady_C.ReceiveBeginPlay
struct AMenu_MpReady_C_ReceiveBeginPlay_Params
{
};

// Function Menu_MpReady.Menu_MpReady_C.ReceiveTick
struct AMenu_MpReady_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_MpReady.Menu_MpReady_C.ReceiveEndPlay
struct AMenu_MpReady_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_MpReady.Menu_MpReady_C.ExecuteUbergraph_Menu_MpReady
struct AMenu_MpReady_C_ExecuteUbergraph_Menu_MpReady_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
