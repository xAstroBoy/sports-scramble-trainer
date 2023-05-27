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
	 * Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.IsVisible
	 */
	struct AScramPlayerHand_BP_C_IsVisible_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_42C5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UpdateButtonFlashMesh
	 */
	struct AScramPlayerHand_BP_C_UpdateButtonFlashMesh_Params
	{	};

	/**
	 * Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.PlayHaptics
	 */
	struct AScramPlayerHand_BP_C_PlayHaptics_Params
	{
	public:
		class UHapticFeedbackEffect_Base*                          HapticsEffect;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HapticsScale;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UserConstructionScript
	 */
	struct AScramPlayerHand_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveBeginPlay
	 */
	struct AScramPlayerHand_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveTick
	 */
	struct AScramPlayerHand_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.FlashButtons
	 */
	struct AScramPlayerHand_BP_C_FlashButtons_Params
	{	};

	/**
	 * Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.StopFlashButtons
	 */
	struct AScramPlayerHand_BP_C_StopFlashButtons_Params
	{	};

	/**
	 * Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ExecuteUbergraph_ScramPlayerHand_BP
	 */
	struct AScramPlayerHand_BP_C_ExecuteUbergraph_ScramPlayerHand_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
