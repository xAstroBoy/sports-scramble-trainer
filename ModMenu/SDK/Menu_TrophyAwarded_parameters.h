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

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.EnableMenuInput
struct AMenu_TrophyAwarded_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DisableMenuInput
struct AMenu_TrophyAwarded_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RemoveSubMenu
struct AMenu_TrophyAwarded_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.HideSubMenu
struct AMenu_TrophyAwarded_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RestoreSubMenu
struct AMenu_TrophyAwarded_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnHairPack
struct AMenu_TrophyAwarded_C_SpawnHairPack_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnSkinPack
struct AMenu_TrophyAwarded_C_SpawnSkinPack_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugHairPackData
struct AMenu_TrophyAwarded_C_DebugHairPackData_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugSkinPackData
struct AMenu_TrophyAwarded_C_DebugSkinPackData_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.DebugAvatarData
struct AMenu_TrophyAwarded_C_DebugAvatarData_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.GetDate
struct AMenu_TrophyAwarded_C_GetDate_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnAvatar
struct AMenu_TrophyAwarded_C_SpawnAvatar_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpawnTrophy
struct AMenu_TrophyAwarded_C_SpawnTrophy_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Initialize
struct AMenu_TrophyAwarded_C_Initialize_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.UserConstructionScript
struct AMenu_TrophyAwarded_C_UserConstructionScript_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveTitle__FinishedFunc
struct AMenu_TrophyAwarded_C_Timeline_MoveTitle__FinishedFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveTitle__UpdateFunc
struct AMenu_TrophyAwarded_C_Timeline_MoveTitle__UpdateFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleIcon__FinishedFunc
struct AMenu_TrophyAwarded_C_Timeline_ScaleIcon__FinishedFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleIcon__UpdateFunc
struct AMenu_TrophyAwarded_C_Timeline_ScaleIcon__UpdateFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleModels__FinishedFunc
struct AMenu_TrophyAwarded_C_Timeline_ScaleModels__FinishedFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleModels__UpdateFunc
struct AMenu_TrophyAwarded_C_Timeline_ScaleModels__UpdateFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleInfo__FinishedFunc
struct AMenu_TrophyAwarded_C_Timeline_ScaleInfo__FinishedFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_ScaleInfo__UpdateFunc
struct AMenu_TrophyAwarded_C_Timeline_ScaleInfo__UpdateFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_SpinIcon__FinishedFunc
struct AMenu_TrophyAwarded_C_Timeline_SpinIcon__FinishedFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_SpinIcon__UpdateFunc
struct AMenu_TrophyAwarded_C_Timeline_SpinIcon__UpdateFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_HideIcon__FinishedFunc
struct AMenu_TrophyAwarded_C_Timeline_HideIcon__FinishedFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_HideIcon__UpdateFunc
struct AMenu_TrophyAwarded_C_Timeline_HideIcon__UpdateFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveModel__FinishedFunc
struct AMenu_TrophyAwarded_C_Timeline_MoveModel__FinishedFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_MoveModel__UpdateFunc
struct AMenu_TrophyAwarded_C_Timeline_MoveModel__UpdateFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_RotatePacks__FinishedFunc
struct AMenu_TrophyAwarded_C_Timeline_RotatePacks__FinishedFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.Timeline_RotatePacks__UpdateFunc
struct AMenu_TrophyAwarded_C_Timeline_RotatePacks__UpdateFunc_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveBeginPlay
struct AMenu_TrophyAwarded_C_ReceiveBeginPlay_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveTick
struct AMenu_TrophyAwarded_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ReceiveEndPlay
struct AMenu_TrophyAwarded_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.TrophyMenuGo
struct AMenu_TrophyAwarded_C_TrophyMenuGo_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RevealIcon
struct AMenu_TrophyAwarded_C_RevealIcon_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.SpinIcon
struct AMenu_TrophyAwarded_C_SpinIcon_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ShowModels
struct AMenu_TrophyAwarded_C_ShowModels_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ShowInfo
struct AMenu_TrophyAwarded_C_ShowInfo_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.MoveRewardMesh
struct AMenu_TrophyAwarded_C_MoveRewardMesh_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.RotatePacks
struct AMenu_TrophyAwarded_C_RotatePacks_Params
{
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.ExecuteUbergraph_Menu_TrophyAwarded
struct AMenu_TrophyAwarded_C_ExecuteUbergraph_Menu_TrophyAwarded_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_TrophyAwarded.Menu_TrophyAwarded_C.TrophyAwardComplete__DelegateSignature
struct AMenu_TrophyAwarded_C_TrophyAwardComplete__DelegateSignature_Params
{
	bool                                               AllAwardsComplete;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
