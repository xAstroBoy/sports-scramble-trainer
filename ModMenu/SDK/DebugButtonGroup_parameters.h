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

// Function DebugButtonGroup.DebugButtonGroup_C.DestroyButtons
struct ADebugButtonGroup_C_DestroyButtons_Params
{
};

// Function DebugButtonGroup.DebugButtonGroup_C.CreateButtons
struct ADebugButtonGroup_C_CreateButtons_Params
{
};

// Function DebugButtonGroup.DebugButtonGroup_C.UserConstructionScript
struct ADebugButtonGroup_C_UserConstructionScript_Params
{
};

// Function DebugButtonGroup.DebugButtonGroup_C.ReceiveBeginPlay
struct ADebugButtonGroup_C_ReceiveBeginPlay_Params
{
};

// Function DebugButtonGroup.DebugButtonGroup_C.Button Pressed
struct ADebugButtonGroup_C_Button_Pressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugButtonGroup.DebugButtonGroup_C.ChoiceComplete
struct ADebugButtonGroup_C_ChoiceComplete_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugButtonGroup.DebugButtonGroup_C.CloseSelected
struct ADebugButtonGroup_C_CloseSelected_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugButtonGroup.DebugButtonGroup_C.DestroyButtonGroup
struct ADebugButtonGroup_C_DestroyButtonGroup_Params
{
};

// Function DebugButtonGroup.DebugButtonGroup_C.ReceiveTick
struct ADebugButtonGroup_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugButtonGroup.DebugButtonGroup_C.ExecuteUbergraph_DebugButtonGroup
struct ADebugButtonGroup_C_ExecuteUbergraph_DebugButtonGroup_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugButtonGroup.DebugButtonGroup_C.ChoiceMadePreAutoDestroy__DelegateSignature
struct ADebugButtonGroup_C_ChoiceMadePreAutoDestroy__DelegateSignature_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugButtonGroup.DebugButtonGroup_C.ChoiceMade__DelegateSignature
struct ADebugButtonGroup_C_ChoiceMade__DelegateSignature_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
