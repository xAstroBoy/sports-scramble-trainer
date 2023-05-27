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
	 * Function InfoDisplay.InfoDisplay_C.RemoveFireAndForgetActor
	 */
	struct AInfoDisplay_C_RemoveFireAndForgetActor_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Removed;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.Initialize
	 */
	struct AInfoDisplay_C_Initialize_Params
	{	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.UserConstructionScript
	 */
	struct AInfoDisplay_C_UserConstructionScript_Params
	{	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.Timeline_ScaleUp__FinishedFunc
	 */
	struct AInfoDisplay_C_Timeline_ScaleUp__FinishedFunc_Params
	{	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.Timeline_ScaleUp__UpdateFunc
	 */
	struct AInfoDisplay_C_Timeline_ScaleUp__UpdateFunc_Params
	{	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.ReceiveBeginPlay
	 */
	struct AInfoDisplay_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.ScaleUp
	 */
	struct AInfoDisplay_C_ScaleUp_Params
	{	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.ScaleDown
	 */
	struct AInfoDisplay_C_ScaleDown_Params
	{	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.UpdateText
	 */
	struct AInfoDisplay_C_UpdateText_Params
	{
	public:
		float                                                      DisplayTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3FM6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DisplayText;                                             // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.ResetDisplayTime
	 */
	struct AInfoDisplay_C_ResetDisplayTime_Params
	{	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.ExecuteUbergraph_InfoDisplay
	 */
	struct AInfoDisplay_C_ExecuteUbergraph_InfoDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InfoDisplay.InfoDisplay_C.CountdownComplete__DelegateSignature
	 */
	struct AInfoDisplay_C_CountdownComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
