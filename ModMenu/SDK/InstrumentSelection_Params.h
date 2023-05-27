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
	 * Function InstrumentSelection.InstrumentSelection_C.UpdatePosition
	 */
	struct AInstrumentSelection_C_UpdatePosition_Params
	{	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.DropInstruments
	 */
	struct AInstrumentSelection_C_DropInstruments_Params
	{	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.DestroyInstrumentSelectionObjects
	 */
	struct AInstrumentSelection_C_DestroyInstrumentSelectionObjects_Params
	{	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.CreateInstrumentSelectionObjects
	 */
	struct AInstrumentSelection_C_CreateInstrumentSelectionObjects_Params
	{	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.UserConstructionScript
	 */
	struct AInstrumentSelection_C_UserConstructionScript_Params
	{	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.InpActEvt_A_K2Node_InputActionEvent_2
	 */
	struct AInstrumentSelection_C_InpActEvt_A_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.InpActEvt_A_K2Node_InputActionEvent_1
	 */
	struct AInstrumentSelection_C_InpActEvt_A_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.ReceiveBeginPlay
	 */
	struct AInstrumentSelection_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.OpenSelection
	 */
	struct AInstrumentSelection_C_OpenSelection_Params
	{	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.CloseSelection
	 */
	struct AInstrumentSelection_C_CloseSelection_Params
	{	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.InstrumentSelected
	 */
	struct AInstrumentSelection_C_InstrumentSelected_Params
	{	};

	/**
	 * Function InstrumentSelection.InstrumentSelection_C.ExecuteUbergraph_InstrumentSelection
	 */
	struct AInstrumentSelection_C_ExecuteUbergraph_InstrumentSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
