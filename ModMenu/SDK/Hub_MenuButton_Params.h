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
	 * Function Hub_MenuButton.Hub_MenuButton_C.Initialize
	 */
	struct AHub_MenuButton_C_Initialize_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.UserConstructionScript
	 */
	struct AHub_MenuButton_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.Timeline_Scale__FinishedFunc
	 */
	struct AHub_MenuButton_C_Timeline_Scale__FinishedFunc_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.Timeline_Scale__UpdateFunc
	 */
	struct AHub_MenuButton_C_Timeline_Scale__UpdateFunc_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.Timeline_IconRotate__FinishedFunc
	 */
	struct AHub_MenuButton_C_Timeline_IconRotate__FinishedFunc_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.Timeline_IconRotate__UpdateFunc
	 */
	struct AHub_MenuButton_C_Timeline_IconRotate__UpdateFunc_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.Timeline_ButtonMove__FinishedFunc
	 */
	struct AHub_MenuButton_C_Timeline_ButtonMove__FinishedFunc_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.Timeline_ButtonMove__UpdateFunc
	 */
	struct AHub_MenuButton_C_Timeline_ButtonMove__UpdateFunc_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.Timeline_Pulse__FinishedFunc
	 */
	struct AHub_MenuButton_C_Timeline_Pulse__FinishedFunc_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.Timeline_Pulse__UpdateFunc
	 */
	struct AHub_MenuButton_C_Timeline_Pulse__UpdateFunc_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.ReceiveBeginPlay
	 */
	struct AHub_MenuButton_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.ButtonPressed
	 */
	struct AHub_MenuButton_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.ButtonSwapFinished
	 */
	struct AHub_MenuButton_C_ButtonSwapFinished_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.ScaleUp
	 */
	struct AHub_MenuButton_C_ScaleUp_Params
	{
	public:
		bool                                                       DisableTouch;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.ScaleDown
	 */
	struct AHub_MenuButton_C_ScaleDown_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.RemoveButton
	 */
	struct AHub_MenuButton_C_RemoveButton_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.ReceiveEndPlay
	 */
	struct AHub_MenuButton_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.ExecuteUbergraph_Hub_MenuButton
	 */
	struct AHub_MenuButton_C_ExecuteUbergraph_Hub_MenuButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.ButtonPreDestroy__DelegateSignature
	 */
	struct AHub_MenuButton_C_ButtonPreDestroy__DelegateSignature_Params
	{	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.SelectionComplete__DelegateSignature
	 */
	struct AHub_MenuButton_C_SelectionComplete__DelegateSignature_Params
	{
	public:
		EHubMenuChoices                                            Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hub_MenuButton.Hub_MenuButton_C.ButtonSelected__DelegateSignature
	 */
	struct AHub_MenuButton_C_ButtonSelected__DelegateSignature_Params
	{
	public:
		EHubMenuChoices                                            Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
