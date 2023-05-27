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
	 * Function PitcherAvatar_BP.PitcherAvatar_BP_C.GetGlobalColor
	 */
	struct APitcherAvatar_BP_C_GetGlobalColor_Params
	{
	public:
		class FName                                                globalColorName;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PitcherAvatar_BP.PitcherAvatar_BP_C.UserConstructionScript
	 */
	struct APitcherAvatar_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PitcherAvatar_BP.PitcherAvatar_BP_C.Timeline_0__FinishedFunc
	 */
	struct APitcherAvatar_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function PitcherAvatar_BP.PitcherAvatar_BP_C.Timeline_0__UpdateFunc
	 */
	struct APitcherAvatar_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function PitcherAvatar_BP.PitcherAvatar_BP_C.ReceiveBeginPlay
	 */
	struct APitcherAvatar_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PitcherAvatar_BP.PitcherAvatar_BP_C.TryInitializeMaterial
	 */
	struct APitcherAvatar_BP_C_TryInitializeMaterial_Params
	{	};

	/**
	 * Function PitcherAvatar_BP.PitcherAvatar_BP_C.RevealAvatar_BP
	 */
	struct APitcherAvatar_BP_C_RevealAvatar_BP_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PitcherAvatar_BP.PitcherAvatar_BP_C.ScaleUp
	 */
	struct APitcherAvatar_BP_C_ScaleUp_Params
	{	};

	/**
	 * Function PitcherAvatar_BP.PitcherAvatar_BP_C.ExecuteUbergraph_PitcherAvatar_BP
	 */
	struct APitcherAvatar_BP_C_ExecuteUbergraph_PitcherAvatar_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8YH0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
