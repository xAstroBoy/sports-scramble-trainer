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
	 * Function Button_Arrow.Button_Arrow_C.SetVisualStatus
	 */
	struct AButton_Arrow_C_SetVisualStatus_Params
	{
	public:
		bool                                                       Disable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.PlayHaptics
	 */
	struct AButton_Arrow_C_PlayHaptics_Params
	{
	public:
		class AScramPlayerHand_BP_C*                               Hand;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZJ5D[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.SetButtonStatus
	 */
	struct AButton_Arrow_C_SetButtonStatus_Params
	{
	public:
		bool                                                       DisableTouch;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.Initialize
	 */
	struct AButton_Arrow_C_Initialize_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.UserConstructionScript
	 */
	struct AButton_Arrow_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.Timeline_Scale__FinishedFunc
	 */
	struct AButton_Arrow_C_Timeline_Scale__FinishedFunc_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.Timeline_Scale__UpdateFunc
	 */
	struct AButton_Arrow_C_Timeline_Scale__UpdateFunc_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.Timeline_ButtonMove__FinishedFunc
	 */
	struct AButton_Arrow_C_Timeline_ButtonMove__FinishedFunc_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.Timeline_ButtonMove__UpdateFunc
	 */
	struct AButton_Arrow_C_Timeline_ButtonMove__UpdateFunc_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.Timeline_SpinScale__FinishedFunc
	 */
	struct AButton_Arrow_C_Timeline_SpinScale__FinishedFunc_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.Timeline_SpinScale__UpdateFunc
	 */
	struct AButton_Arrow_C_Timeline_SpinScale__UpdateFunc_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AButton_Arrow_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.ReceiveTick
	 */
	struct AButton_Arrow_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.FillStart
	 */
	struct AButton_Arrow_C_FillStart_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.FillStop
	 */
	struct AButton_Arrow_C_FillStop_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AButton_Arrow_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C2EJ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.ScaleUp
	 */
	struct AButton_Arrow_C_ScaleUp_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.ScaleDown
	 */
	struct AButton_Arrow_C_ScaleDown_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.PushButton
	 */
	struct AButton_Arrow_C_PushButton_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.ReleaseButton
	 */
	struct AButton_Arrow_C_ReleaseButton_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.DestroyButton
	 */
	struct AButton_Arrow_C_DestroyButton_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.ReceiveBeginPlay
	 */
	struct AButton_Arrow_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.SpinScaleUp
	 */
	struct AButton_Arrow_C_SpinScaleUp_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.SpinScaleDown
	 */
	struct AButton_Arrow_C_SpinScaleDown_Params
	{	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.ExternalButtonActivate
	 */
	struct AButton_Arrow_C_ExternalButtonActivate_Params
	{
	public:
		class AActor*                                              HandActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.ExternalButtonDeactivate
	 */
	struct AButton_Arrow_C_ExternalButtonDeactivate_Params
	{
	public:
		class AActor*                                              HandActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.ReceiveEndPlay
	 */
	struct AButton_Arrow_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature
	 */
	struct AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              pInteractor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature
	 */
	struct AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              pInteractor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature
	 */
	struct AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              pInteractor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature
	 */
	struct AButton_Arrow_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              pInteractor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.DoHaptic
	 */
	struct AButton_Arrow_C_DoHaptic_Params
	{
	public:
		class AActor*                                              Hand;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.ExecuteUbergraph_Button_Arrow
	 */
	struct AButton_Arrow_C_ExecuteUbergraph_Button_Arrow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RGHI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Button_Arrow.Button_Arrow_C.ButtonPressed__DelegateSignature
	 */
	struct AButton_Arrow_C_ButtonPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
