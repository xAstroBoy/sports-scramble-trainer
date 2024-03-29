﻿#pragma once

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
	 * Function Menu_QpDetails.Menu_QpDetails_C.EnableMenuInput
	 */
	struct AMenu_QpDetails_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.DisableMenuInput
	 */
	struct AMenu_QpDetails_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.RemoveSubMenu
	 */
	struct AMenu_QpDetails_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.HideSubMenu
	 */
	struct AMenu_QpDetails_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.RestoreSubMenu
	 */
	struct AMenu_QpDetails_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.SpawnButton
	 */
	struct AMenu_QpDetails_C_SpawnButton_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.EnableButtons
	 */
	struct AMenu_QpDetails_C_EnableButtons_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.DisableButtons
	 */
	struct AMenu_QpDetails_C_DisableButtons_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.Initialize
	 */
	struct AMenu_QpDetails_C_Initialize_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.UserConstructionScript
	 */
	struct AMenu_QpDetails_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.TimelineMoveMessage__FinishedFunc
	 */
	struct AMenu_QpDetails_C_TimelineMoveMessage__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.TimelineMoveMessage__UpdateFunc
	 */
	struct AMenu_QpDetails_C_TimelineMoveMessage__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.Timeline_ScaleBox__FinishedFunc
	 */
	struct AMenu_QpDetails_C_Timeline_ScaleBox__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.Timeline_ScaleBox__UpdateFunc
	 */
	struct AMenu_QpDetails_C_Timeline_ScaleBox__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.ReceiveBeginPlay
	 */
	struct AMenu_QpDetails_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.ReceiveTick
	 */
	struct AMenu_QpDetails_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.ReceiveEndPlay
	 */
	struct AMenu_QpDetails_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.ButtonPressed
	 */
	struct AMenu_QpDetails_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.ButtonSwapped
	 */
	struct AMenu_QpDetails_C_ButtonSwapped_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.MoveTitle
	 */
	struct AMenu_QpDetails_C_MoveTitle_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.ShowBox
	 */
	struct AMenu_QpDetails_C_ShowBox_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.ExecuteUbergraph_Menu_QpDetails
	 */
	struct AMenu_QpDetails_C_ExecuteUbergraph_Menu_QpDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.SpawnNavButtons__DelegateSignature
	 */
	struct AMenu_QpDetails_C_SpawnNavButtons__DelegateSignature_Params
	{	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.EditButtonSwapped__DelegateSignature
	 */
	struct AMenu_QpDetails_C_EditButtonSwapped__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_QpDetails.Menu_QpDetails_C.EditButtonPressed__DelegateSignature
	 */
	struct AMenu_QpDetails_C_EditButtonPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
