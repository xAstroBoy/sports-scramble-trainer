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
	 * Function Menu_Results.Menu_Results_C.EnableMenuInput
	 */
	struct AMenu_Results_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Results.Menu_Results_C.DisableMenuInput
	 */
	struct AMenu_Results_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Results.Menu_Results_C.RemoveSubMenu
	 */
	struct AMenu_Results_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Results.Menu_Results_C.HideSubMenu
	 */
	struct AMenu_Results_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Results.Menu_Results_C.RestoreSubMenu
	 */
	struct AMenu_Results_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Results.Menu_Results_C.SwapToRed
	 */
	struct AMenu_Results_C_SwapToRed_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.RevealHighScore
	 */
	struct AMenu_Results_C_RevealHighScore_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.AvatarsReact
	 */
	struct AMenu_Results_C_AvatarsReact_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.SpawnAvatars
	 */
	struct AMenu_Results_C_SpawnAvatars_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.ShowTrophyIcon
	 */
	struct AMenu_Results_C_ShowTrophyIcon_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.SwapToGold
	 */
	struct AMenu_Results_C_SwapToGold_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.GetTitleText
	 */
	struct AMenu_Results_C_GetTitleText_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Menu_Results.Menu_Results_C.Initialize
	 */
	struct AMenu_Results_C_Initialize_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.UserConstructionScript
	 */
	struct AMenu_Results_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ScaleBox__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_ScaleBox__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ScaleBox__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_ScaleBox__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_SwapBoxText__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_SwapBoxText__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_SwapBoxText__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_SwapBoxText__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ShowHighScore__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_ShowHighScore__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ShowHighScore__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_ShowHighScore__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_MoveTitle__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_MoveTitle__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_MoveTitle__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_MoveTitle__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ShowInnerMessage__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_ShowInnerMessage__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ShowInnerMessage__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_ShowInnerMessage__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_SwapBoxBump__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_SwapBoxBump__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_SwapBoxBump__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_SwapBoxBump__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ScaleAvatars__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_ScaleAvatars__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ScaleAvatars__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_ScaleAvatars__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_MoveAvatars__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_MoveAvatars__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_MoveAvatars__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_MoveAvatars__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ScaleMessage__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_ScaleMessage__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ScaleMessage__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_ScaleMessage__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_SwapBox__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_SwapBox__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_SwapBox__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_SwapBox__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ScaleBoxBump__FinishedFunc
	 */
	struct AMenu_Results_C_Timeline_ScaleBoxBump__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.Timeline_ScaleBoxBump__UpdateFunc
	 */
	struct AMenu_Results_C_Timeline_ScaleBoxBump__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.ReceiveBeginPlay
	 */
	struct AMenu_Results_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.ReceiveTick
	 */
	struct AMenu_Results_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Results.Menu_Results_C.ReceiveEndPlay
	 */
	struct AMenu_Results_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Results.Menu_Results_C.RevealBox
	 */
	struct AMenu_Results_C_RevealBox_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.ShowScore
	 */
	struct AMenu_Results_C_ShowScore_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.ShowHighScore
	 */
	struct AMenu_Results_C_ShowHighScore_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.MoveMessage
	 */
	struct AMenu_Results_C_MoveMessage_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.ShowInnerMessage
	 */
	struct AMenu_Results_C_ShowInnerMessage_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.ShowFinalMessage
	 */
	struct AMenu_Results_C_ShowFinalMessage_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.FinishFinalMessage
	 */
	struct AMenu_Results_C_FinishFinalMessage_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.BeginResultsDisplay
	 */
	struct AMenu_Results_C_BeginResultsDisplay_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.MoveAvatars
	 */
	struct AMenu_Results_C_MoveAvatars_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.DisplayMessage
	 */
	struct AMenu_Results_C_DisplayMessage_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.PlayFX
	 */
	struct AMenu_Results_C_PlayFX_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.PlayRedFX
	 */
	struct AMenu_Results_C_PlayRedFX_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.DelayedYellowPulse
	 */
	struct AMenu_Results_C_DelayedYellowPulse_Params
	{	};

	/**
	 * Function Menu_Results.Menu_Results_C.ExecuteUbergraph_Menu_Results
	 */
	struct AMenu_Results_C_ExecuteUbergraph_Menu_Results_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Results.Menu_Results_C.ResultsDisplayComplete__DelegateSignature
	 */
	struct AMenu_Results_C_ResultsDisplayComplete__DelegateSignature_Params
	{
	public:
		bool                                                       WideNextButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
