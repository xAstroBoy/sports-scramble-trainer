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
	 * Function DebugString_BP.DebugString_BP_C.Initialize
	 */
	struct ADebugString_BP_C_Initialize_Params
	{	};

	/**
	 * Function DebugString_BP.DebugString_BP_C.UserConstructionScript
	 */
	struct ADebugString_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DebugString_BP.DebugString_BP_C.ReceiveBeginPlay
	 */
	struct ADebugString_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DebugString_BP.DebugString_BP_C.UpdateText
	 */
	struct ADebugString_BP_C_UpdateText_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      LifeTime;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugString_BP.DebugString_BP_C.ReceiveTick
	 */
	struct ADebugString_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugString_BP.DebugString_BP_C.ExecuteUbergraph_DebugString_BP
	 */
	struct ADebugString_BP_C_ExecuteUbergraph_DebugString_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
