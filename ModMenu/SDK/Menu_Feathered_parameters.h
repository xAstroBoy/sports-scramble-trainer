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

// Function Menu_Feathered.Menu_Feathered_C.EnableMenuInput
struct AMenu_Feathered_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Feathered.Menu_Feathered_C.DisableMenuInput
struct AMenu_Feathered_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Feathered.Menu_Feathered_C.RemoveSubMenu
struct AMenu_Feathered_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Feathered.Menu_Feathered_C.HideSubMenu
struct AMenu_Feathered_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Feathered.Menu_Feathered_C.RestoreSubMenu
struct AMenu_Feathered_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Feathered.Menu_Feathered_C.Cleanup
struct AMenu_Feathered_C_Cleanup_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.GetNewPanelInfo
struct AMenu_Feathered_C_GetNewPanelInfo_Params
{
	bool                                               Next;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture*                                    Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Output1;                                                   // (Parm, OutParm)
};

// Function Menu_Feathered.Menu_Feathered_C.FinishRotateL
struct AMenu_Feathered_C_FinishRotateL_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.FinishRotateR
struct AMenu_Feathered_C_FinishRotateR_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.SpawnPanel
struct AMenu_Feathered_C_SpawnPanel_Params
{
	int                                                Slot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                                    Texture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu_Feathered.Menu_Feathered_C.EnableButtons
struct AMenu_Feathered_C_EnableButtons_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.DisableButtons
struct AMenu_Feathered_C_DisableButtons_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.Initialize
struct AMenu_Feathered_C_Initialize_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.UserConstructionScript
struct AMenu_Feathered_C_UserConstructionScript_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateRight__FinishedFunc
struct AMenu_Feathered_C_Timeline_RotateRight__FinishedFunc_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateRight__UpdateFunc
struct AMenu_Feathered_C_Timeline_RotateRight__UpdateFunc_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateLeft__FinishedFunc
struct AMenu_Feathered_C_Timeline_RotateLeft__FinishedFunc_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateLeft__UpdateFunc
struct AMenu_Feathered_C_Timeline_RotateLeft__UpdateFunc_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.ReceiveBeginPlay
struct AMenu_Feathered_C_ReceiveBeginPlay_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.ReceiveTick
struct AMenu_Feathered_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Feathered.Menu_Feathered_C.ReceiveEndPlay
struct AMenu_Feathered_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Feathered.Menu_Feathered_C.DecrementCount
struct AMenu_Feathered_C_DecrementCount_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Feathered.Menu_Feathered_C.IncrementCount
struct AMenu_Feathered_C_IncrementCount_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Feathered.Menu_Feathered_C.SelectionStarted
struct AMenu_Feathered_C_SelectionStarted_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Feathered.Menu_Feathered_C.SelectionCompleted
struct AMenu_Feathered_C_SelectionCompleted_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Feathered.Menu_Feathered_C.Shift
struct AMenu_Feathered_C_Shift_Params
{
	bool                                               Next;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Feathered.Menu_Feathered_C.StartRotateRight
struct AMenu_Feathered_C_StartRotateRight_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.StartRotateLeft
struct AMenu_Feathered_C_StartRotateLeft_Params
{
};

// Function Menu_Feathered.Menu_Feathered_C.ExecuteUbergraph_Menu_Feathered
struct AMenu_Feathered_C_ExecuteUbergraph_Menu_Feathered_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Feathered.Menu_Feathered_C.SelectionConfirmed__DelegateSignature
struct AMenu_Feathered_C_SelectionConfirmed__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Feathered.Menu_Feathered_C.ButtonPressed__DelegateSignature
struct AMenu_Feathered_C_ButtonPressed__DelegateSignature_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
