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
	 * Function FloaterUi.FloaterUi_C.ShowSlowIcon2
	 */
	struct AFloaterUi_C_ShowSlowIcon2_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.ShowSlowIcon1
	 */
	struct AFloaterUi_C_ShowSlowIcon1_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.DestroyActor?
	 */
	struct AFloaterUi_C_DestroyActor_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.Initialize
	 */
	struct AFloaterUi_C_Initialize_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.UserConstructionScript
	 */
	struct AFloaterUi_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.Timeline_Scale__FinishedFunc
	 */
	struct AFloaterUi_C_Timeline_Scale__FinishedFunc_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.Timeline_Scale__UpdateFunc
	 */
	struct AFloaterUi_C_Timeline_Scale__UpdateFunc_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.Timeline_CollapseSlow__FinishedFunc
	 */
	struct AFloaterUi_C_Timeline_CollapseSlow__FinishedFunc_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.Timeline_CollapseSlow__UpdateFunc
	 */
	struct AFloaterUi_C_Timeline_CollapseSlow__UpdateFunc_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.Timeline_MoveSlow__FinishedFunc
	 */
	struct AFloaterUi_C_Timeline_MoveSlow__FinishedFunc_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.Timeline_MoveSlow__UpdateFunc
	 */
	struct AFloaterUi_C_Timeline_MoveSlow__UpdateFunc_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.Timeline_ScaleSlow__FinishedFunc
	 */
	struct AFloaterUi_C_Timeline_ScaleSlow__FinishedFunc_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.Timeline_ScaleSlow__UpdateFunc
	 */
	struct AFloaterUi_C_Timeline_ScaleSlow__UpdateFunc_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.ReceiveBeginPlay
	 */
	struct AFloaterUi_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.ShowIcon
	 */
	struct AFloaterUi_C_ShowIcon_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.ReceiveTick
	 */
	struct AFloaterUi_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FloaterUi.FloaterUi_C.FloaterLoop
	 */
	struct AFloaterUi_C_FloaterLoop_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.ShowErrorMessage
	 */
	struct AFloaterUi_C_ShowErrorMessage_Params
	{
	public:
		class FText                                                MessageText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function FloaterUi.FloaterUi_C.HideMessage
	 */
	struct AFloaterUi_C_HideMessage_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.ShowSlow
	 */
	struct AFloaterUi_C_ShowSlow_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.HideSlow
	 */
	struct AFloaterUi_C_HideSlow_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.AnimateSlow
	 */
	struct AFloaterUi_C_AnimateSlow_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.ScaleUpSlow
	 */
	struct AFloaterUi_C_ScaleUpSlow_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.InitialShowSlow
	 */
	struct AFloaterUi_C_InitialShowSlow_Params
	{	};

	/**
	 * Function FloaterUi.FloaterUi_C.ExecuteUbergraph_FloaterUi
	 */
	struct AFloaterUi_C_ExecuteUbergraph_FloaterUi_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
