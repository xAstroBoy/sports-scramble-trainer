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
	 * Function DebugHandButton.DebugHandButton_C.Initialize
	 */
	struct ADebugHandButton_C_Initialize_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.UserConstructionScript
	 */
	struct ADebugHandButton_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.Timeline_ScaleUp__FinishedFunc
	 */
	struct ADebugHandButton_C_Timeline_ScaleUp__FinishedFunc_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.Timeline_ScaleUp__UpdateFunc
	 */
	struct ADebugHandButton_C_Timeline_ScaleUp__UpdateFunc_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.Timeline_ScaleDown__FinishedFunc
	 */
	struct ADebugHandButton_C_Timeline_ScaleDown__FinishedFunc_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.Timeline_ScaleDown__UpdateFunc
	 */
	struct ADebugHandButton_C_Timeline_ScaleDown__UpdateFunc_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.Touched__FinishedFunc
	 */
	struct ADebugHandButton_C_Touched__FinishedFunc_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.Touched__UpdateFunc
	 */
	struct ADebugHandButton_C_Touched__UpdateFunc_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.Timeline_ScaleDownTouched__FinishedFunc
	 */
	struct ADebugHandButton_C_Timeline_ScaleDownTouched__FinishedFunc_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.Timeline_ScaleDownTouched__UpdateFunc
	 */
	struct ADebugHandButton_C_Timeline_ScaleDownTouched__UpdateFunc_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.DebugButtonPressed
	 */
	struct ADebugHandButton_C_DebugButtonPressed_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ADebugHandButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ANL7[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.ReceiveBeginPlay
	 */
	struct ADebugHandButton_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.ScaleUp
	 */
	struct ADebugHandButton_C_ScaleUp_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.ScaleDown
	 */
	struct ADebugHandButton_C_ScaleDown_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.ReceiveActorEndOverlap
	 */
	struct ADebugHandButton_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.ScaleTouch
	 */
	struct ADebugHandButton_C_ScaleTouch_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.ScaleNoTouch
	 */
	struct ADebugHandButton_C_ScaleNoTouch_Params
	{	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.ReceiveTick
	 */
	struct ADebugHandButton_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature
	 */
	struct ADebugHandButton_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              pInteractor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.ExecuteUbergraph_DebugHandButton
	 */
	struct ADebugHandButton_C_ExecuteUbergraph_DebugHandButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5LUB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugHandButton.DebugHandButton_C.DebugHandButton_Touched__DelegateSignature
	 */
	struct ADebugHandButton_C_DebugHandButton_Touched__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
