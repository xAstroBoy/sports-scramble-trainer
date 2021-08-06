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

// Function DebugHandButton.DebugHandButton_C.Initialize
struct ADebugHandButton_C_Initialize_Params
{
};

// Function DebugHandButton.DebugHandButton_C.UserConstructionScript
struct ADebugHandButton_C_UserConstructionScript_Params
{
};

// Function DebugHandButton.DebugHandButton_C.Timeline_ScaleUp__FinishedFunc
struct ADebugHandButton_C_Timeline_ScaleUp__FinishedFunc_Params
{
};

// Function DebugHandButton.DebugHandButton_C.Timeline_ScaleUp__UpdateFunc
struct ADebugHandButton_C_Timeline_ScaleUp__UpdateFunc_Params
{
};

// Function DebugHandButton.DebugHandButton_C.Timeline_ScaleDown__FinishedFunc
struct ADebugHandButton_C_Timeline_ScaleDown__FinishedFunc_Params
{
};

// Function DebugHandButton.DebugHandButton_C.Timeline_ScaleDown__UpdateFunc
struct ADebugHandButton_C_Timeline_ScaleDown__UpdateFunc_Params
{
};

// Function DebugHandButton.DebugHandButton_C.Touched__FinishedFunc
struct ADebugHandButton_C_Touched__FinishedFunc_Params
{
};

// Function DebugHandButton.DebugHandButton_C.Touched__UpdateFunc
struct ADebugHandButton_C_Touched__UpdateFunc_Params
{
};

// Function DebugHandButton.DebugHandButton_C.Timeline_ScaleDownTouched__FinishedFunc
struct ADebugHandButton_C_Timeline_ScaleDownTouched__FinishedFunc_Params
{
};

// Function DebugHandButton.DebugHandButton_C.Timeline_ScaleDownTouched__UpdateFunc
struct ADebugHandButton_C_Timeline_ScaleDownTouched__UpdateFunc_Params
{
};

// Function DebugHandButton.DebugHandButton_C.DebugButtonPressed
struct ADebugHandButton_C_DebugButtonPressed_Params
{
};

// Function DebugHandButton.DebugHandButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ADebugHandButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function DebugHandButton.DebugHandButton_C.ReceiveBeginPlay
struct ADebugHandButton_C_ReceiveBeginPlay_Params
{
};

// Function DebugHandButton.DebugHandButton_C.ScaleUp
struct ADebugHandButton_C_ScaleUp_Params
{
};

// Function DebugHandButton.DebugHandButton_C.ScaleDown
struct ADebugHandButton_C_ScaleDown_Params
{
};

// Function DebugHandButton.DebugHandButton_C.ReceiveActorEndOverlap
struct ADebugHandButton_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugHandButton.DebugHandButton_C.ScaleTouch
struct ADebugHandButton_C_ScaleTouch_Params
{
};

// Function DebugHandButton.DebugHandButton_C.ScaleNoTouch
struct ADebugHandButton_C_ScaleNoTouch_Params
{
};

// Function DebugHandButton.DebugHandButton_C.ReceiveTick
struct ADebugHandButton_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugHandButton.DebugHandButton_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature
struct ADebugHandButton_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature_Params
{
	class AActor*                                      pInteractor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugHandButton.DebugHandButton_C.ExecuteUbergraph_DebugHandButton
struct ADebugHandButton_C_ExecuteUbergraph_DebugHandButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugHandButton.DebugHandButton_C.DebugHandButton_Touched__DelegateSignature
struct ADebugHandButton_C_DebugHandButton_Touched__DelegateSignature_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
