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

// Function Button_3dPanelImage.Button_3dPanelImage_C.Initialize
struct AButton_3dPanelImage_C_Initialize_Params
{
};

// Function Button_3dPanelImage.Button_3dPanelImage_C.UserConstructionScript
struct AButton_3dPanelImage_C_UserConstructionScript_Params
{
};

// Function Button_3dPanelImage.Button_3dPanelImage_C.ReceiveBeginPlay
struct AButton_3dPanelImage_C_ReceiveBeginPlay_Params
{
};

// Function Button_3dPanelImage.Button_3dPanelImage_C.ButtonPressed
struct AButton_3dPanelImage_C_ButtonPressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_3dPanelImage.Button_3dPanelImage_C.ReceiveTick
struct AButton_3dPanelImage_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_3dPanelImage.Button_3dPanelImage_C.ButtonSwapped
struct AButton_3dPanelImage_C_ButtonSwapped_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_3dPanelImage.Button_3dPanelImage_C.ReceiveEndPlay
struct AButton_3dPanelImage_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_3dPanelImage.Button_3dPanelImage_C.ExecuteUbergraph_Button_3dPanelImage
struct AButton_3dPanelImage_C_ExecuteUbergraph_Button_3dPanelImage_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_3dPanelImage.Button_3dPanelImage_C.PanelImageButtonSwapComplete__DelegateSignature
struct AButton_3dPanelImage_C_PanelImageButtonSwapComplete__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_3dPanelImage.Button_3dPanelImage_C.PanelImageButtonPressed__DelegateSignature
struct AButton_3dPanelImage_C_PanelImageButtonPressed__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
