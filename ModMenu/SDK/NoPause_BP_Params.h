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
	 * Function NoPause_BP.NoPause_BP_C.Initialize
	 */
	struct ANoPause_BP_C_Initialize_Params
	{	};

	/**
	 * Function NoPause_BP.NoPause_BP_C.UserConstructionScript
	 */
	struct ANoPause_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function NoPause_BP.NoPause_BP_C.Timeline_Scale__FinishedFunc
	 */
	struct ANoPause_BP_C_Timeline_Scale__FinishedFunc_Params
	{	};

	/**
	 * Function NoPause_BP.NoPause_BP_C.Timeline_Scale__UpdateFunc
	 */
	struct ANoPause_BP_C_Timeline_Scale__UpdateFunc_Params
	{	};

	/**
	 * Function NoPause_BP.NoPause_BP_C.ReceiveBeginPlay
	 */
	struct ANoPause_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NoPause_BP.NoPause_BP_C.Refresh
	 */
	struct ANoPause_BP_C_Refresh_Params
	{	};

	/**
	 * Function NoPause_BP.NoPause_BP_C.ReceiveTick
	 */
	struct ANoPause_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NoPause_BP.NoPause_BP_C.ExecuteUbergraph_NoPause_BP
	 */
	struct ANoPause_BP_C_ExecuteUbergraph_NoPause_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
