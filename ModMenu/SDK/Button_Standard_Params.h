#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Button_Standard.Button_Standard_C.IsPauseCapsuleInTransition
	 */
	struct AButton_Standard_C_IsPauseCapsuleInTransition_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2874[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Button_Standard.Button_Standard_C.ReleaseTouchExclusive
	 */
	struct AButton_Standard_C_ReleaseTouchExclusive_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.CheckMultitouch
	 */
	struct AButton_Standard_C_CheckMultitouch_Params
	{
	public:
		bool                                                       DisallowTouch;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.RotateHex
	 */
	struct AButton_Standard_C_RotateHex_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.PlayHaptics
	 */
	struct AButton_Standard_C_PlayHaptics_Params
	{
	public:
		class AScramPlayerHand_BP_C*                               Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HapticsScale;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BD78[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Button_Standard.Button_Standard_C.DisplayNoninteractable
	 */
	struct AButton_Standard_C_DisplayNoninteractable_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.DisplayInteractable
	 */
	struct AButton_Standard_C_DisplayInteractable_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.InstantToggle
	 */
	struct AButton_Standard_C_InstantToggle_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.SetButtonStatus
	 */
	struct AButton_Standard_C_SetButtonStatus_Params
	{
	public:
		bool                                                       DisableTouch;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.ChangeLook
	 */
	struct AButton_Standard_C_ChangeLook_Params
	{
	public:
		struct FUI_ButtonData                                      ButtonData;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.Initialize
	 */
	struct AButton_Standard_C_Initialize_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.UserConstructionScript
	 */
	struct AButton_Standard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_Scale__FinishedFunc
	 */
	struct AButton_Standard_C_Timeline_Scale__FinishedFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_Scale__UpdateFunc
	 */
	struct AButton_Standard_C_Timeline_Scale__UpdateFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_ButtonMove__FinishedFunc
	 */
	struct AButton_Standard_C_Timeline_ButtonMove__FinishedFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_ButtonMove__UpdateFunc
	 */
	struct AButton_Standard_C_Timeline_ButtonMove__UpdateFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_Rotate__FinishedFunc
	 */
	struct AButton_Standard_C_Timeline_Rotate__FinishedFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_Rotate__UpdateFunc
	 */
	struct AButton_Standard_C_Timeline_Rotate__UpdateFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_Fill__FinishedFunc
	 */
	struct AButton_Standard_C_Timeline_Fill__FinishedFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_Fill__UpdateFunc
	 */
	struct AButton_Standard_C_Timeline_Fill__UpdateFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_SpinScale__FinishedFunc
	 */
	struct AButton_Standard_C_Timeline_SpinScale__FinishedFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_SpinScale__UpdateFunc
	 */
	struct AButton_Standard_C_Timeline_SpinScale__UpdateFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_Unlock__FinishedFunc
	 */
	struct AButton_Standard_C_Timeline_Unlock__FinishedFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_Unlock__UpdateFunc
	 */
	struct AButton_Standard_C_Timeline_Unlock__UpdateFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_BackgroundThrob__FinishedFunc
	 */
	struct AButton_Standard_C_Timeline_BackgroundThrob__FinishedFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.Timeline_BackgroundThrob__UpdateFunc
	 */
	struct AButton_Standard_C_Timeline_BackgroundThrob__UpdateFunc_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.ReceiveBeginPlay
	 */
	struct AButton_Standard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AButton_Standard_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H0IS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AButton_Standard_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.ReceiveTick
	 */
	struct AButton_Standard_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.FillStart
	 */
	struct AButton_Standard_C_FillStart_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.FillStop
	 */
	struct AButton_Standard_C_FillStop_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.ScaleUp
	 */
	struct AButton_Standard_C_ScaleUp_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.ScaleDown
	 */
	struct AButton_Standard_C_ScaleDown_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.PushButton
	 */
	struct AButton_Standard_C_PushButton_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.ReleaseButton
	 */
	struct AButton_Standard_C_ReleaseButton_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.StartSwap
	 */
	struct AButton_Standard_C_StartSwap_Params
	{
	public:
		bool                                                       CallEvents;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.StartRotate
	 */
	struct AButton_Standard_C_StartRotate_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.DestroyButton
	 */
	struct AButton_Standard_C_DestroyButton_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.SpinScaleUp
	 */
	struct AButton_Standard_C_SpinScaleUp_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.SpinScaleDown
	 */
	struct AButton_Standard_C_SpinScaleDown_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.PlayUnlock
	 */
	struct AButton_Standard_C_PlayUnlock_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.PlayUnlockScal
	 */
	struct AButton_Standard_C_PlayUnlockScal_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.StartThrob
	 */
	struct AButton_Standard_C_StartThrob_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.StopThrob
	 */
	struct AButton_Standard_C_StopThrob_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.ReceiveEndPlay
	 */
	struct AButton_Standard_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.ExternalActivateButton
	 */
	struct AButton_Standard_C_ExternalActivateButton_Params
	{
	public:
		class AActor*                                              HandActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.ExternalDeactivateButton
	 */
	struct AButton_Standard_C_ExternalDeactivateButton_Params
	{
	public:
		class AActor*                                              HandActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature
	 */
	struct AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              pInteractor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature
	 */
	struct AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              pInteractor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature
	 */
	struct AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              pInteractor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature
	 */
	struct AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              pInteractor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.DoHaptic
	 */
	struct AButton_Standard_C_DoHaptic_Params
	{
	public:
		class AActor*                                              Hand;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.SendStartPointingAtMessage
	 */
	struct AButton_Standard_C_SendStartPointingAtMessage_Params
	{
	public:
		class AActor*                                              interactor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.TrySetHand
	 */
	struct AButton_Standard_C_TrySetHand_Params
	{
	public:
		class AActor*                                              HandActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.ExecuteUbergraph_Button_Standard
	 */
	struct AButton_Standard_C_ExecuteUbergraph_Button_Standard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.Untouched__DelegateSignature
	 */
	struct AButton_Standard_C_Untouched__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.Touched__DelegateSignature
	 */
	struct AButton_Standard_C_Touched__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.SwapFinished__DelegateSignature
	 */
	struct AButton_Standard_C_SwapFinished__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Standard.Button_Standard_C.ShrinkFinish__DelegateSignature
	 */
	struct AButton_Standard_C_ShrinkFinish__DelegateSignature_Params
	{	};

	/**
	 * Function Button_Standard.Button_Standard_C.ButtonPressed__DelegateSignature
	 */
	struct AButton_Standard_C_ButtonPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
