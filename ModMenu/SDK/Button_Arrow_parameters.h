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

// Function Button_Arrow.Button_Arrow_C.SetVisualStatus
struct AButton_Arrow_C_SetVisualStatus_Params
{
	bool                                               Disable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Button_Arrow.Button_Arrow_C.PlayHaptics
struct AButton_Arrow_C_PlayHaptics_Params
{
	class AScramPlayerHand_BP_C*                       Hand;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.SetButtonStatus
struct AButton_Arrow_C_SetButtonStatus_Params
{
	bool                                               DisableTouch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Button_Arrow.Button_Arrow_C.Initialize
struct AButton_Arrow_C_Initialize_Params
{
};

// Function Button_Arrow.Button_Arrow_C.UserConstructionScript
struct AButton_Arrow_C_UserConstructionScript_Params
{
};

// Function Button_Arrow.Button_Arrow_C.Timeline_Scale__FinishedFunc
struct AButton_Arrow_C_Timeline_Scale__FinishedFunc_Params
{
};

// Function Button_Arrow.Button_Arrow_C.Timeline_Scale__UpdateFunc
struct AButton_Arrow_C_Timeline_Scale__UpdateFunc_Params
{
};

// Function Button_Arrow.Button_Arrow_C.Timeline_ButtonMove__FinishedFunc
struct AButton_Arrow_C_Timeline_ButtonMove__FinishedFunc_Params
{
};

// Function Button_Arrow.Button_Arrow_C.Timeline_ButtonMove__UpdateFunc
struct AButton_Arrow_C_Timeline_ButtonMove__UpdateFunc_Params
{
};

// Function Button_Arrow.Button_Arrow_C.Timeline_SpinScale__FinishedFunc
struct AButton_Arrow_C_Timeline_SpinScale__FinishedFunc_Params
{
};

// Function Button_Arrow.Button_Arrow_C.Timeline_SpinScale__UpdateFunc
struct AButton_Arrow_C_Timeline_SpinScale__UpdateFunc_Params
{
};

// Function Button_Arrow.Button_Arrow_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct AButton_Arrow_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.ReceiveTick
struct AButton_Arrow_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.FillStart
struct AButton_Arrow_C_FillStart_Params
{
};

// Function Button_Arrow.Button_Arrow_C.FillStop
struct AButton_Arrow_C_FillStop_Params
{
};

// Function Button_Arrow.Button_Arrow_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AButton_Arrow_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Button_Arrow.Button_Arrow_C.ScaleUp
struct AButton_Arrow_C_ScaleUp_Params
{
};

// Function Button_Arrow.Button_Arrow_C.ScaleDown
struct AButton_Arrow_C_ScaleDown_Params
{
};

// Function Button_Arrow.Button_Arrow_C.PushButton
struct AButton_Arrow_C_PushButton_Params
{
};

// Function Button_Arrow.Button_Arrow_C.ReleaseButton
struct AButton_Arrow_C_ReleaseButton_Params
{
};

// Function Button_Arrow.Button_Arrow_C.DestroyButton
struct AButton_Arrow_C_DestroyButton_Params
{
};

// Function Button_Arrow.Button_Arrow_C.ReceiveBeginPlay
struct AButton_Arrow_C_ReceiveBeginPlay_Params
{
};

// Function Button_Arrow.Button_Arrow_C.SpinScaleUp
struct AButton_Arrow_C_SpinScaleUp_Params
{
};

// Function Button_Arrow.Button_Arrow_C.SpinScaleDown
struct AButton_Arrow_C_SpinScaleDown_Params
{
};

// Function Button_Arrow.Button_Arrow_C.ExternalButtonActivate
struct AButton_Arrow_C_ExternalButtonActivate_Params
{
	class AActor*                                      HandActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.ExternalButtonDeactivate
struct AButton_Arrow_C_ExternalButtonDeactivate_Params
{
	class AActor*                                      HandActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.ReceiveEndPlay
struct AButton_Arrow_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature
struct AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature_Params
{
	class AActor*                                      pInteractor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature
struct AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature_Params
{
	class AActor*                                      pInteractor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature
struct AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature_Params
{
	class AActor*                                      pInteractor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature
struct AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature_Params
{
	class AActor*                                      pInteractor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.DoHaptic
struct AButton_Arrow_C_DoHaptic_Params
{
	class AActor*                                      Hand;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.ExecuteUbergraph_Button_Arrow
struct AButton_Arrow_C_ExecuteUbergraph_Button_Arrow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Arrow.Button_Arrow_C.ButtonPressed__DelegateSignature
struct AButton_Arrow_C_ButtonPressed__DelegateSignature_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
