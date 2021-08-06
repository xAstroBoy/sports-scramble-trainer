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

// Function Menu_Message.Menu_Message_C.EnableMenuInput
struct AMenu_Message_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Message.Menu_Message_C.DisableMenuInput
struct AMenu_Message_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Message.Menu_Message_C.RemoveSubMenu
struct AMenu_Message_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Message.Menu_Message_C.HideSubMenu
struct AMenu_Message_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Message.Menu_Message_C.RestoreSubMenu
struct AMenu_Message_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Message.Menu_Message_C.HideProgressWidget
struct AMenu_Message_C_HideProgressWidget_Params
{
};

// Function Menu_Message.Menu_Message_C.UpdateMessage
struct AMenu_Message_C_UpdateMessage_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu_Message.Menu_Message_C.Initialize
struct AMenu_Message_C_Initialize_Params
{
};

// Function Menu_Message.Menu_Message_C.UserConstructionScript
struct AMenu_Message_C_UserConstructionScript_Params
{
};

// Function Menu_Message.Menu_Message_C.ReceiveBeginPlay
struct AMenu_Message_C_ReceiveBeginPlay_Params
{
};

// Function Menu_Message.Menu_Message_C.ReceiveTick
struct AMenu_Message_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Message.Menu_Message_C.ReceiveEndPlay
struct AMenu_Message_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Message.Menu_Message_C.StartTimer
struct AMenu_Message_C_StartTimer_Params
{
};

// Function Menu_Message.Menu_Message_C.ExecuteUbergraph_Menu_Message
struct AMenu_Message_C_ExecuteUbergraph_Menu_Message_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
