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
	 * Function ScreenErrorUI.ScreenErrorUI_C.DestroyActor?
	 */
	struct AScreenErrorUI_C_DestroyActor_Params
	{	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.Initialize
	 */
	struct AScreenErrorUI_C_Initialize_Params
	{	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.UserConstructionScript
	 */
	struct AScreenErrorUI_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.Timeline_Scale__FinishedFunc
	 */
	struct AScreenErrorUI_C_Timeline_Scale__FinishedFunc_Params
	{	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.Timeline_Scale__UpdateFunc
	 */
	struct AScreenErrorUI_C_Timeline_Scale__UpdateFunc_Params
	{	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.ReceiveBeginPlay
	 */
	struct AScreenErrorUI_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.ShowIcon
	 */
	struct AScreenErrorUI_C_ShowIcon_Params
	{	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.ReceiveTick
	 */
	struct AScreenErrorUI_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.FloaterLoop
	 */
	struct AScreenErrorUI_C_FloaterLoop_Params
	{	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.ShowErrorMessage
	 */
	struct AScreenErrorUI_C_ShowErrorMessage_Params
	{
	public:
		class FText                                                MessageText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.HideMessage
	 */
	struct AScreenErrorUI_C_HideMessage_Params
	{	};

	/**
	 * Function ScreenErrorUI.ScreenErrorUI_C.ExecuteUbergraph_ScreenErrorUI
	 */
	struct AScreenErrorUI_C_ExecuteUbergraph_ScreenErrorUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
