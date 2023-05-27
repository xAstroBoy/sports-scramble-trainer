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
	 * Function TurnAround.TurnAround_C.Initialize
	 */
	struct ATurnAround_C_Initialize_Params
	{	};

	/**
	 * Function TurnAround.TurnAround_C.UserConstructionScript
	 */
	struct ATurnAround_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TurnAround.TurnAround_C.Timeline_MenuScale__FinishedFunc
	 */
	struct ATurnAround_C_Timeline_MenuScale__FinishedFunc_Params
	{	};

	/**
	 * Function TurnAround.TurnAround_C.Timeline_MenuScale__UpdateFunc
	 */
	struct ATurnAround_C_Timeline_MenuScale__UpdateFunc_Params
	{	};

	/**
	 * Function TurnAround.TurnAround_C.ReceiveBeginPlay
	 */
	struct ATurnAround_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TurnAround.TurnAround_C.ButtonPressed
	 */
	struct ATurnAround_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TurnAround.TurnAround_C.ScaleUp
	 */
	struct ATurnAround_C_ScaleUp_Params
	{	};

	/**
	 * Function TurnAround.TurnAround_C.ReceiveEndPlay
	 */
	struct ATurnAround_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TurnAround.TurnAround_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature
	 */
	struct ATurnAround_C_BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TurnAround.TurnAround_C.ExecuteUbergraph_TurnAround
	 */
	struct ATurnAround_C_ExecuteUbergraph_TurnAround_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
