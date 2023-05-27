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
	 * Function Travelcapsule.Travelcapsule_C.SFX_Transition_Out
	 */
	struct ATravelcapsule_C_SFX_Transition_Out_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.SFX_Transition_In
	 */
	struct ATravelcapsule_C_SFX_Transition_In_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.Initialize
	 */
	struct ATravelcapsule_C_Initialize_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.UserConstructionScript
	 */
	struct ATravelcapsule_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.Timeline_ChangeMediaAlpha__FinishedFunc
	 */
	struct ATravelcapsule_C_Timeline_ChangeMediaAlpha__FinishedFunc_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.Timeline_ChangeMediaAlpha__UpdateFunc
	 */
	struct ATravelcapsule_C_Timeline_ChangeMediaAlpha__UpdateFunc_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.Timeline_ColorSwap__FinishedFunc
	 */
	struct ATravelcapsule_C_Timeline_ColorSwap__FinishedFunc_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.Timeline_ColorSwap__UpdateFunc
	 */
	struct ATravelcapsule_C_Timeline_ColorSwap__UpdateFunc_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor__FinishedFunc
	 */
	struct ATravelcapsule_C_Timeline_PulseColor__FinishedFunc_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor__UpdateFunc
	 */
	struct ATravelcapsule_C_Timeline_PulseColor__UpdateFunc_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor2__FinishedFunc
	 */
	struct ATravelcapsule_C_Timeline_PulseColor2__FinishedFunc_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor2__UpdateFunc
	 */
	struct ATravelcapsule_C_Timeline_PulseColor2__UpdateFunc_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.ReceiveBeginPlay
	 */
	struct ATravelcapsule_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.CloseCapsule
	 */
	struct ATravelcapsule_C_CloseCapsule_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.OpenCapsule
	 */
	struct ATravelcapsule_C_OpenCapsule_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.SetColorRed
	 */
	struct ATravelcapsule_C_SetColorRed_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.SetColorBlue
	 */
	struct ATravelcapsule_C_SetColorBlue_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.ReceiveTick
	 */
	struct ATravelcapsule_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.PulseRewardColor
	 */
	struct ATravelcapsule_C_PulseRewardColor_Params
	{
	public:
		bool                                                       Yellow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Red;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.EndPulse
	 */
	struct ATravelcapsule_C_EndPulse_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.ExecuteUbergraph_Travelcapsule
	 */
	struct ATravelcapsule_C_ExecuteUbergraph_Travelcapsule_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.TravelCapsuleClosed__DelegateSignature
	 */
	struct ATravelcapsule_C_TravelCapsuleClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.ColorSwapComplete__DelegateSignature
	 */
	struct ATravelcapsule_C_ColorSwapComplete__DelegateSignature_Params
	{
	public:
		bool                                                       Red;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.TravelCapsuleRemoved__DelegateSignature
	 */
	struct ATravelcapsule_C_TravelCapsuleRemoved__DelegateSignature_Params
	{	};

	/**
	 * Function Travelcapsule.Travelcapsule_C.TravelCapsuleOn__DelegateSignature
	 */
	struct ATravelcapsule_C_TravelCapsuleOn__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
