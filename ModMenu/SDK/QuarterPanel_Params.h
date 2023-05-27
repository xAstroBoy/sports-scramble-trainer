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
	 * Function QuarterPanel.QuarterPanel_C.SetRed
	 */
	struct AQuarterPanel_C_SetRed_Params
	{	};

	/**
	 * Function QuarterPanel.QuarterPanel_C.Initialize
	 */
	struct AQuarterPanel_C_Initialize_Params
	{	};

	/**
	 * Function QuarterPanel.QuarterPanel_C.UpdateLocText
	 */
	struct AQuarterPanel_C_UpdateLocText_Params
	{
	public:
		class FName                                                LocTextName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuarterPanel.QuarterPanel_C.UserConstructionScript
	 */
	struct AQuarterPanel_C_UserConstructionScript_Params
	{	};

	/**
	 * Function QuarterPanel.QuarterPanel_C.ReceiveBeginPlay
	 */
	struct AQuarterPanel_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function QuarterPanel.QuarterPanel_C.ReceiveTick
	 */
	struct AQuarterPanel_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuarterPanel.QuarterPanel_C.ExecuteUbergraph_QuarterPanel
	 */
	struct AQuarterPanel_C_ExecuteUbergraph_QuarterPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
