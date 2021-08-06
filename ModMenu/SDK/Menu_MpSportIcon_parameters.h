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

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.EnableMenuInput
struct AMenu_MpSportIcon_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.DisableMenuInput
struct AMenu_MpSportIcon_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.RemoveSubMenu
struct AMenu_MpSportIcon_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.HideSubMenu
struct AMenu_MpSportIcon_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.RestoreSubMenu
struct AMenu_MpSportIcon_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.Initialize
struct AMenu_MpSportIcon_C_Initialize_Params
{
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.UserConstructionScript
struct AMenu_MpSportIcon_C_UserConstructionScript_Params
{
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Rotate__FinishedFunc
struct AMenu_MpSportIcon_C_Timeline_Rotate__FinishedFunc_Params
{
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Rotate__UpdateFunc
struct AMenu_MpSportIcon_C_Timeline_Rotate__UpdateFunc_Params
{
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Scale__FinishedFunc
struct AMenu_MpSportIcon_C_Timeline_Scale__FinishedFunc_Params
{
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Scale__UpdateFunc
struct AMenu_MpSportIcon_C_Timeline_Scale__UpdateFunc_Params
{
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.OnLoaded_F3D473AB41A8445F32AD52AED5A8A8B4
struct AMenu_MpSportIcon_C_OnLoaded_F3D473AB41A8445F32AD52AED5A8A8B4_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveBeginPlay
struct AMenu_MpSportIcon_C_ReceiveBeginPlay_Params
{
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveTick
struct AMenu_MpSportIcon_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveEndPlay
struct AMenu_MpSportIcon_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_MpSportIcon.Menu_MpSportIcon_C.ExecuteUbergraph_Menu_MpSportIcon
struct AMenu_MpSportIcon_C_ExecuteUbergraph_Menu_MpSportIcon_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
