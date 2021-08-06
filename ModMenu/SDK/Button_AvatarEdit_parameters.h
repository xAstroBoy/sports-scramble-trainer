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

// Function Button_AvatarEdit.Button_AvatarEdit_C.EnableButtons
struct AButton_AvatarEdit_C_EnableButtons_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.PlayWave
struct AButton_AvatarEdit_C_PlayWave_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.SpawnAvatar
struct AButton_AvatarEdit_C_SpawnAvatar_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.PlayLook
struct AButton_AvatarEdit_C_PlayLook_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.PlaySad
struct AButton_AvatarEdit_C_PlaySad_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.PlayHappy
struct AButton_AvatarEdit_C_PlayHappy_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.DisableButtons
struct AButton_AvatarEdit_C_DisableButtons_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.Initialize
struct AButton_AvatarEdit_C_Initialize_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.UserConstructionScript
struct AButton_AvatarEdit_C_UserConstructionScript_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.Timeline_ScaleAvatar__FinishedFunc
struct AButton_AvatarEdit_C_Timeline_ScaleAvatar__FinishedFunc_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.Timeline_ScaleAvatar__UpdateFunc
struct AButton_AvatarEdit_C_Timeline_ScaleAvatar__UpdateFunc_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.ReceiveBeginPlay
struct AButton_AvatarEdit_C_ReceiveBeginPlay_Params
{
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.ButtonPressed
struct AButton_AvatarEdit_C_ButtonPressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.SwapFinished
struct AButton_AvatarEdit_C_SwapFinished_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.ReceiveEndPlay
struct AButton_AvatarEdit_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.ExecuteUbergraph_Button_AvatarEdit
struct AButton_AvatarEdit_C_ExecuteUbergraph_Button_AvatarEdit_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.EditButtonSwapFinished__DelegateSignature
struct AButton_AvatarEdit_C_EditButtonSwapFinished__DelegateSignature_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_AvatarEdit.Button_AvatarEdit_C.EditButtonPressed__DelegateSignature
struct AButton_AvatarEdit_C_EditButtonPressed__DelegateSignature_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
