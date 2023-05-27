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
	 * Function SwapIndicator_BP.SwapIndicator_BP_C.SetRiftMeshes
	 */
	struct ASwapIndicator_BP_C_SetRiftMeshes_Params
	{	};

	/**
	 * Function SwapIndicator_BP.SwapIndicator_BP_C.UserConstructionScript
	 */
	struct ASwapIndicator_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SwapIndicator_BP.SwapIndicator_BP_C.OnBeginSwap
	 */
	struct ASwapIndicator_BP_C_OnBeginSwap_Params
	{	};

	/**
	 * Function SwapIndicator_BP.SwapIndicator_BP_C.OnConfirmSwap
	 */
	struct ASwapIndicator_BP_C_OnConfirmSwap_Params
	{	};

	/**
	 * Function SwapIndicator_BP.SwapIndicator_BP_C.ReceiveBeginPlay
	 */
	struct ASwapIndicator_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SwapIndicator_BP.SwapIndicator_BP_C.OnHandednessSet
	 */
	struct ASwapIndicator_BP_C_OnHandednessSet_Params
	{
	public:
		EScramHandedness                                           Handedness;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SwapIndicator_BP.SwapIndicator_BP_C.ExecuteUbergraph_SwapIndicator_BP
	 */
	struct ASwapIndicator_BP_C_ExecuteUbergraph_SwapIndicator_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
