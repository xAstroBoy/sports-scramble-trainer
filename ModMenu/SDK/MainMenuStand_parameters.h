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

// Function MainMenuStand.MainMenuStand_C.Initialize
struct AMainMenuStand_C_Initialize_Params
{
};

// Function MainMenuStand.MainMenuStand_C.DisableButtons
struct AMainMenuStand_C_DisableButtons_Params
{
};

// Function MainMenuStand.MainMenuStand_C.SpawnButtons
struct AMainMenuStand_C_SpawnButtons_Params
{
};

// Function MainMenuStand.MainMenuStand_C.UserConstructionScript
struct AMainMenuStand_C_UserConstructionScript_Params
{
};

// Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__FinishedFunc
struct AMainMenuStand_C_Timeline_MovePanel__FinishedFunc_Params
{
};

// Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__UpdateFunc
struct AMainMenuStand_C_Timeline_MovePanel__UpdateFunc_Params
{
};

// Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__FinishedFunc
struct AMainMenuStand_C_Timeline_MoveRoot__FinishedFunc_Params
{
};

// Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__UpdateFunc
struct AMainMenuStand_C_Timeline_MoveRoot__UpdateFunc_Params
{
};

// Function MainMenuStand.MainMenuStand_C.ReceiveBeginPlay
struct AMainMenuStand_C_ReceiveBeginPlay_Params
{
};

// Function MainMenuStand.MainMenuStand_C.ButtonPressed
struct AMainMenuStand_C_ButtonPressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuStand.MainMenuStand_C.SwapFinished
struct AMainMenuStand_C_SwapFinished_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuStand.MainMenuStand_C.ReceiveEndPlay
struct AMainMenuStand_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuStand.MainMenuStand_C.OpenPanel
struct AMainMenuStand_C_OpenPanel_Params
{
};

// Function MainMenuStand.MainMenuStand_C.ClosePanel
struct AMainMenuStand_C_ClosePanel_Params
{
};

// Function MainMenuStand.MainMenuStand_C.LowerStand
struct AMainMenuStand_C_LowerStand_Params
{
};

// Function MainMenuStand.MainMenuStand_C.ButtonTouched
struct AMainMenuStand_C_ButtonTouched_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuStand.MainMenuStand_C.ButtonUntouched
struct AMainMenuStand_C_ButtonUntouched_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Raise
struct AMainMenuStand_C_Play_SFX_Menu_Raise_Params
{
};

// Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Lower
struct AMainMenuStand_C_Play_SFX_Menu_Lower_Params
{
};

// Function MainMenuStand.MainMenuStand_C.ExecuteUbergraph_MainMenuStand
struct AMainMenuStand_C_ExecuteUbergraph_MainMenuStand_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuStand.MainMenuStand_C.MenuOpened__DelegateSignature
struct AMainMenuStand_C_MenuOpened__DelegateSignature_Params
{
};

// Function MainMenuStand.MainMenuStand_C.SelectionComplete__DelegateSignature
struct AMainMenuStand_C_SelectionComplete__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenuStand.MainMenuStand_C.SelectionStarted__DelegateSignature
struct AMainMenuStand_C_SelectionStarted__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
