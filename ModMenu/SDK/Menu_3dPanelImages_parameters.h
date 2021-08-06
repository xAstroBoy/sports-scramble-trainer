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

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.EnableMenuInput
struct AMenu_3dPanelImages_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.DisableMenuInput
struct AMenu_3dPanelImages_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.RemoveSubMenu
struct AMenu_3dPanelImages_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.HideSubMenu
struct AMenu_3dPanelImages_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.RestoreSubMenu
struct AMenu_3dPanelImages_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.Initialize
struct AMenu_3dPanelImages_C_Initialize_Params
{
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.UserConstructionScript
struct AMenu_3dPanelImages_C_UserConstructionScript_Params
{
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveBeginPlay
struct AMenu_3dPanelImages_C_ReceiveBeginPlay_Params
{
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveTick
struct AMenu_3dPanelImages_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveEndPlay
struct AMenu_3dPanelImages_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ButtonPressed
struct AMenu_3dPanelImages_C_ButtonPressed_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ButtonSwapped
struct AMenu_3dPanelImages_C_ButtonSwapped_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.DisableMenu
struct AMenu_3dPanelImages_C_DisableMenu_Params
{
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.ExecuteUbergraph_Menu_3dPanelImages
struct AMenu_3dPanelImages_C_ExecuteUbergraph_Menu_3dPanelImages_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.SelectionComplete__DelegateSignature
struct AMenu_3dPanelImages_C_SelectionComplete__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_3dPanelImages.Menu_3dPanelImages_C.SelectionStarted__DelegateSignature
struct AMenu_3dPanelImages_C_SelectionStarted__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
