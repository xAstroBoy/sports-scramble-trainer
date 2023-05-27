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
	 * Function Panel_Feather.Panel_Feather_C.Initialize
	 */
	struct APanel_Feather_C_Initialize_Params
	{	};

	/**
	 * Function Panel_Feather.Panel_Feather_C.UserConstructionScript
	 */
	struct APanel_Feather_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Panel_Feather.Panel_Feather_C.ReceiveBeginPlay
	 */
	struct APanel_Feather_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Panel_Feather.Panel_Feather_C.ReceiveTick
	 */
	struct APanel_Feather_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Feather.Panel_Feather_C.ExecuteUbergraph_Panel_Feather
	 */
	struct APanel_Feather_C_ExecuteUbergraph_Panel_Feather_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Feather.Panel_Feather_C.SelectionConfirmed__DelegateSignature
	 */
	struct APanel_Feather_C_SelectionConfirmed__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Feather.Panel_Feather_C.ButtonPressed__DelegateSignature
	 */
	struct APanel_Feather_C_ButtonPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
