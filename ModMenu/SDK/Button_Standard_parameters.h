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

// Function Button_Standard.Button_Standard_C.IsPauseCapsuleInTransition
struct AButton_Standard_C_IsPauseCapsuleInTransition_Params
{
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Button_Standard.Button_Standard_C.ReleaseTouchExclusive
struct AButton_Standard_C_ReleaseTouchExclusive_Params
{
};

// Function Button_Standard.Button_Standard_C.CheckMultitouch
struct AButton_Standard_C_CheckMultitouch_Params
{
	bool                                               DisallowTouch;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Button_Standard.Button_Standard_C.RotateHex
struct AButton_Standard_C_RotateHex_Params
{
};

// Function Button_Standard.Button_Standard_C.PlayHaptics
struct AButton_Standard_C_PlayHaptics_Params
{
	class AScramPlayerHand_BP_C*                       Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HapticsScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.DisplayNoninteractable
struct AButton_Standard_C_DisplayNoninteractable_Params
{
};

// Function Button_Standard.Button_Standard_C.DisplayInteractable
struct AButton_Standard_C_DisplayInteractable_Params
{
};

// Function Button_Standard.Button_Standard_C.InstantToggle
struct AButton_Standard_C_InstantToggle_Params
{
};

// Function Button_Standard.Button_Standard_C.SetButtonStatus
struct AButton_Standard_C_SetButtonStatus_Params
{
	bool                                               DisableTouch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Button_Standard.Button_Standard_C.ChangeLook
struct AButton_Standard_C_ChangeLook_Params
{
	struct FUI_ButtonData                              ButtonData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.Initialize
struct AButton_Standard_C_Initialize_Params
{
};

// Function Button_Standard.Button_Standard_C.UserConstructionScript
struct AButton_Standard_C_UserConstructionScript_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_Scale__FinishedFunc
struct AButton_Standard_C_Timeline_Scale__FinishedFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_Scale__UpdateFunc
struct AButton_Standard_C_Timeline_Scale__UpdateFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_ButtonMove__FinishedFunc
struct AButton_Standard_C_Timeline_ButtonMove__FinishedFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_ButtonMove__UpdateFunc
struct AButton_Standard_C_Timeline_ButtonMove__UpdateFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_Rotate__FinishedFunc
struct AButton_Standard_C_Timeline_Rotate__FinishedFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_Rotate__UpdateFunc
struct AButton_Standard_C_Timeline_Rotate__UpdateFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_Fill__FinishedFunc
struct AButton_Standard_C_Timeline_Fill__FinishedFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_Fill__UpdateFunc
struct AButton_Standard_C_Timeline_Fill__UpdateFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_SpinScale__FinishedFunc
struct AButton_Standard_C_Timeline_SpinScale__FinishedFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_SpinScale__UpdateFunc
struct AButton_Standard_C_Timeline_SpinScale__UpdateFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_Unlock__FinishedFunc
struct AButton_Standard_C_Timeline_Unlock__FinishedFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_Unlock__UpdateFunc
struct AButton_Standard_C_Timeline_Unlock__UpdateFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_BackgroundThrob__FinishedFunc
struct AButton_Standard_C_Timeline_BackgroundThrob__FinishedFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.Timeline_BackgroundThrob__UpdateFunc
struct AButton_Standard_C_Timeline_BackgroundThrob__UpdateFunc_Params
{
};

// Function Button_Standard.Button_Standard_C.ReceiveBeginPlay
struct AButton_Standard_C_ReceiveBeginPlay_Params
{
};

// Function Button_Standard.Button_Standard_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AButton_Standard_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Button_Standard.Button_Standard_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct AButton_Standard_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.ReceiveTick
struct AButton_Standard_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.FillStart
struct AButton_Standard_C_FillStart_Params
{
};

// Function Button_Standard.Button_Standard_C.FillStop
struct AButton_Standard_C_FillStop_Params
{
};

// Function Button_Standard.Button_Standard_C.ScaleUp
struct AButton_Standard_C_ScaleUp_Params
{
};

// Function Button_Standard.Button_Standard_C.ScaleDown
struct AButton_Standard_C_ScaleDown_Params
{
};

// Function Button_Standard.Button_Standard_C.PushButton
struct AButton_Standard_C_PushButton_Params
{
};

// Function Button_Standard.Button_Standard_C.ReleaseButton
struct AButton_Standard_C_ReleaseButton_Params
{
};

// Function Button_Standard.Button_Standard_C.StartSwap
struct AButton_Standard_C_StartSwap_Params
{
	bool                                               CallEvents;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Button_Standard.Button_Standard_C.StartRotate
struct AButton_Standard_C_StartRotate_Params
{
};

// Function Button_Standard.Button_Standard_C.DestroyButton
struct AButton_Standard_C_DestroyButton_Params
{
};

// Function Button_Standard.Button_Standard_C.SpinScaleUp
struct AButton_Standard_C_SpinScaleUp_Params
{
};

// Function Button_Standard.Button_Standard_C.SpinScaleDown
struct AButton_Standard_C_SpinScaleDown_Params
{
};

// Function Button_Standard.Button_Standard_C.PlayUnlock
struct AButton_Standard_C_PlayUnlock_Params
{
};

// Function Button_Standard.Button_Standard_C.PlayUnlockScal
struct AButton_Standard_C_PlayUnlockScal_Params
{
};

// Function Button_Standard.Button_Standard_C.StartThrob
struct AButton_Standard_C_StartThrob_Params
{
};

// Function Button_Standard.Button_Standard_C.StopThrob
struct AButton_Standard_C_StopThrob_Params
{
};

// Function Button_Standard.Button_Standard_C.ReceiveEndPlay
struct AButton_Standard_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.ExternalActivateButton
struct AButton_Standard_C_ExternalActivateButton_Params
{
	class AActor*                                      HandActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.ExternalDeactivateButton
struct AButton_Standard_C_ExternalDeactivateButton_Params
{
	class AActor*                                      HandActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature
struct AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature_Params
{
	class AActor*                                      pInteractor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature
struct AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature_Params
{
	class AActor*                                      pInteractor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature
struct AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature_Params
{
	class AActor*                                      pInteractor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature
struct AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature_Params
{
	class AActor*                                      pInteractor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.DoHaptic
struct AButton_Standard_C_DoHaptic_Params
{
	class AActor*                                      Hand;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.SendStartPointingAtMessage
struct AButton_Standard_C_SendStartPointingAtMessage_Params
{
	class AActor*                                      interactor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.TrySetHand
struct AButton_Standard_C_TrySetHand_Params
{
	class AActor*                                      HandActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.ExecuteUbergraph_Button_Standard
struct AButton_Standard_C_ExecuteUbergraph_Button_Standard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.Untouched__DelegateSignature
struct AButton_Standard_C_Untouched__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.Touched__DelegateSignature
struct AButton_Standard_C_Touched__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.SwapFinished__DelegateSignature
struct AButton_Standard_C_SwapFinished__DelegateSignature_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Button_Standard.Button_Standard_C.ShrinkFinish__DelegateSignature
struct AButton_Standard_C_ShrinkFinish__DelegateSignature_Params
{
};

// Function Button_Standard.Button_Standard_C.ButtonPressed__DelegateSignature
struct AButton_Standard_C_ButtonPressed__DelegateSignature_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
