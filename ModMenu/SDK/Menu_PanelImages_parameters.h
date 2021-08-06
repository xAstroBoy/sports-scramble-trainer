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

// Function Menu_PanelImages.Menu_PanelImages_C.EnableMenuInput
struct AMenu_PanelImages_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PanelImages.Menu_PanelImages_C.DisableMenuInput
struct AMenu_PanelImages_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PanelImages.Menu_PanelImages_C.RemoveSubMenu
struct AMenu_PanelImages_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PanelImages.Menu_PanelImages_C.HideSubMenu
struct AMenu_PanelImages_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PanelImages.Menu_PanelImages_C.RestoreSubMenu
struct AMenu_PanelImages_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_PanelImages.Menu_PanelImages_C.Initialize
struct AMenu_PanelImages_C_Initialize_Params
{
};

// Function Menu_PanelImages.Menu_PanelImages_C.UserConstructionScript
struct AMenu_PanelImages_C_UserConstructionScript_Params
{
};

// Function Menu_PanelImages.Menu_PanelImages_C.ReceiveBeginPlay
struct AMenu_PanelImages_C_ReceiveBeginPlay_Params
{
};

// Function Menu_PanelImages.Menu_PanelImages_C.ReceiveTick
struct AMenu_PanelImages_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PanelImages.Menu_PanelImages_C.ReceiveEndPlay
struct AMenu_PanelImages_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PanelImages.Menu_PanelImages_C.ButtonPressed
struct AMenu_PanelImages_C_ButtonPressed_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PanelImages.Menu_PanelImages_C.ButtonSwapped
struct AMenu_PanelImages_C_ButtonSwapped_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PanelImages.Menu_PanelImages_C.DisableMenu
struct AMenu_PanelImages_C_DisableMenu_Params
{
};

// Function Menu_PanelImages.Menu_PanelImages_C.ExecuteUbergraph_Menu_PanelImages
struct AMenu_PanelImages_C_ExecuteUbergraph_Menu_PanelImages_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PanelImages.Menu_PanelImages_C.SelectionComplete__DelegateSignature
struct AMenu_PanelImages_C_SelectionComplete__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_PanelImages.Menu_PanelImages_C.SelectionStarted__DelegateSignature
struct AMenu_PanelImages_C_SelectionStarted__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
