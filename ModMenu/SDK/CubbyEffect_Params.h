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
	 * Function CubbyEffect.CubbyEffect_C. ToggleLights
	 */
	struct ACubbyEffect_C_ToggleLights_Params
	{
	public:
		bool                                                       isOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CubbyEffect.CubbyEffect_C.UserConstructionScript
	 */
	struct ACubbyEffect_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CubbyEffect.CubbyEffect_C.ReceiveBeginPlay
	 */
	struct ACubbyEffect_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CubbyEffect.CubbyEffect_C.ExecuteUbergraph_CubbyEffect
	 */
	struct ACubbyEffect_C_ExecuteUbergraph_CubbyEffect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
