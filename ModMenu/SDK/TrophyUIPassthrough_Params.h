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
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.PlayHaptic
	 */
	struct ATrophyUIPassthrough_C_PlayHaptic_Params
	{	};

	/**
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.Initialize
	 */
	struct ATrophyUIPassthrough_C_Initialize_Params
	{
	public:
		class AButton_Standard_C*                                  Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.TriggerPressed
	 */
	struct ATrophyUIPassthrough_C_TriggerPressed_Params
	{
	public:
		class ABP_TrophyGlove_C*                                   TrophyGlove;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.UserConstructionScript
	 */
	struct ATrophyUIPassthrough_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.ReceiveBeginPlay
	 */
	struct ATrophyUIPassthrough_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnStopPointingAt
	 */
	struct ATrophyUIPassthrough_C_OnStopPointingAt_Params
	{	};

	/**
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnStartPointingAt
	 */
	struct ATrophyUIPassthrough_C_OnStartPointingAt_Params
	{	};

	/**
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnTrophyGrabbed
	 */
	struct ATrophyUIPassthrough_C_OnTrophyGrabbed_Params
	{	};

	/**
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnGrabbableActivated
	 */
	struct ATrophyUIPassthrough_C_OnGrabbableActivated_Params
	{	};

	/**
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.ReceiveTick
	 */
	struct ATrophyUIPassthrough_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrophyUIPassthrough.TrophyUIPassthrough_C.ExecuteUbergraph_TrophyUIPassthrough
	 */
	struct ATrophyUIPassthrough_C_ExecuteUbergraph_TrophyUIPassthrough_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
