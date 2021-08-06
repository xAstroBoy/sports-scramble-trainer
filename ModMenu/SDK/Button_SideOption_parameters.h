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

// Function Button_SideOption.Button_SideOption_C.EnableButtons
struct AButton_SideOption_C_EnableButtons_Params
{
};

// Function Button_SideOption.Button_SideOption_C.DisableButtons
struct AButton_SideOption_C_DisableButtons_Params
{
};

// Function Button_SideOption.Button_SideOption_C.Initialize
struct AButton_SideOption_C_Initialize_Params
{
};

// Function Button_SideOption.Button_SideOption_C.UserConstructionScript
struct AButton_SideOption_C_UserConstructionScript_Params
{
};

// Function Button_SideOption.Button_SideOption_C.ReceiveBeginPlay
struct AButton_SideOption_C_ReceiveBeginPlay_Params
{
};

// Function Button_SideOption.Button_SideOption_C.ButtonPressed
struct AButton_SideOption_C_ButtonPressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_SideOption.Button_SideOption_C.ReceiveTick
struct AButton_SideOption_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_SideOption.Button_SideOption_C.ReceiveEndPlay
struct AButton_SideOption_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_SideOption.Button_SideOption_C.ButtonSwapComplete
struct AButton_SideOption_C_ButtonSwapComplete_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_SideOption.Button_SideOption_C.ExecuteUbergraph_Button_SideOption
struct AButton_SideOption_C_ExecuteUbergraph_Button_SideOption_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_SideOption.Button_SideOption_C.OptionChanging__DelegateSignature
struct AButton_SideOption_C_OptionChanging__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_SideOption.Button_SideOption_C.OptionChanged__DelegateSignature
struct AButton_SideOption_C_OptionChanged__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
