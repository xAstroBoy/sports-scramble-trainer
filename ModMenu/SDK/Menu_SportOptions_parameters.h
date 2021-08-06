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

// Function Menu_SportOptions.Menu_SportOptions_C.EnableMenuInput
struct AMenu_SportOptions_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_SportOptions.Menu_SportOptions_C.DisableMenuInput
struct AMenu_SportOptions_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_SportOptions.Menu_SportOptions_C.RemoveSubMenu
struct AMenu_SportOptions_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_SportOptions.Menu_SportOptions_C.HideSubMenu
struct AMenu_SportOptions_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_SportOptions.Menu_SportOptions_C.RestoreSubMenu
struct AMenu_SportOptions_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_SportOptions.Menu_SportOptions_C.UpdateBowlingButtons
struct AMenu_SportOptions_C_UpdateBowlingButtons_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.UpdateTeamColors
struct AMenu_SportOptions_C_UpdateTeamColors_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.UpdateBWAiOptions
struct AMenu_SportOptions_C_UpdateBWAiOptions_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.Update_TN_PointsButtons
struct AMenu_SportOptions_C_Update_TN_PointsButtons_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_SportOptions.Menu_SportOptions_C.Update_BW_FramesButtons
struct AMenu_SportOptions_C_Update_BW_FramesButtons_Params
{
	bool                                               Show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_SportOptions.Menu_SportOptions_C.SetupBowling
struct AMenu_SportOptions_C_SetupBowling_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.SetupTennis
struct AMenu_SportOptions_C_SetupTennis_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.SetupBaseball
struct AMenu_SportOptions_C_SetupBaseball_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.EnableButtons
struct AMenu_SportOptions_C_EnableButtons_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.DisableButtons
struct AMenu_SportOptions_C_DisableButtons_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.Initialize
struct AMenu_SportOptions_C_Initialize_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.UserConstructionScript
struct AMenu_SportOptions_C_UserConstructionScript_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.ReceiveBeginPlay
struct AMenu_SportOptions_C_ReceiveBeginPlay_Params
{
};

// Function Menu_SportOptions.Menu_SportOptions_C.ReceiveTick
struct AMenu_SportOptions_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.ReceiveEndPlay
struct AMenu_SportOptions_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.P0Previous
struct AMenu_SportOptions_C_P0Previous_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.P0Next
struct AMenu_SportOptions_C_P0Next_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.ButtonToggled
struct AMenu_SportOptions_C_ButtonToggled_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.P2Previous0
struct AMenu_SportOptions_C_P2Previous0_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.P2Next0
struct AMenu_SportOptions_C_P2Next0_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.P2Previous1
struct AMenu_SportOptions_C_P2Previous1_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.P2Next1
struct AMenu_SportOptions_C_P2Next1_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.P2Previous2
struct AMenu_SportOptions_C_P2Previous2_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.P2Next2
struct AMenu_SportOptions_C_P2Next2_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.P2Previous3
struct AMenu_SportOptions_C_P2Previous3_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.P2Next3
struct AMenu_SportOptions_C_P2Next3_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_SportOptions.Menu_SportOptions_C.ExecuteUbergraph_Menu_SportOptions
struct AMenu_SportOptions_C_ExecuteUbergraph_Menu_SportOptions_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
