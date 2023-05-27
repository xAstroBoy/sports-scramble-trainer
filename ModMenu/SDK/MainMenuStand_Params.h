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
	 * Function MainMenuStand.MainMenuStand_C.Initialize
	 */
	struct AMainMenuStand_C_Initialize_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.DisableButtons
	 */
	struct AMainMenuStand_C_DisableButtons_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.SpawnButtons
	 */
	struct AMainMenuStand_C_SpawnButtons_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.UserConstructionScript
	 */
	struct AMainMenuStand_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__FinishedFunc
	 */
	struct AMainMenuStand_C_Timeline_MovePanel__FinishedFunc_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.Timeline_MovePanel__UpdateFunc
	 */
	struct AMainMenuStand_C_Timeline_MovePanel__UpdateFunc_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__FinishedFunc
	 */
	struct AMainMenuStand_C_Timeline_MoveRoot__FinishedFunc_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.Timeline_MoveRoot__UpdateFunc
	 */
	struct AMainMenuStand_C_Timeline_MoveRoot__UpdateFunc_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.ReceiveBeginPlay
	 */
	struct AMainMenuStand_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.ButtonPressed
	 */
	struct AMainMenuStand_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.SwapFinished
	 */
	struct AMainMenuStand_C_SwapFinished_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.ReceiveEndPlay
	 */
	struct AMainMenuStand_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.OpenPanel
	 */
	struct AMainMenuStand_C_OpenPanel_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.ClosePanel
	 */
	struct AMainMenuStand_C_ClosePanel_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.LowerStand
	 */
	struct AMainMenuStand_C_LowerStand_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.ButtonTouched
	 */
	struct AMainMenuStand_C_ButtonTouched_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.ButtonUntouched
	 */
	struct AMainMenuStand_C_ButtonUntouched_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Raise
	 */
	struct AMainMenuStand_C_Play_SFX_Menu_Raise_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.Play_SFX_Menu_Lower
	 */
	struct AMainMenuStand_C_Play_SFX_Menu_Lower_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.ExecuteUbergraph_MainMenuStand
	 */
	struct AMainMenuStand_C_ExecuteUbergraph_MainMenuStand_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.MenuOpened__DelegateSignature
	 */
	struct AMainMenuStand_C_MenuOpened__DelegateSignature_Params
	{	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.SelectionComplete__DelegateSignature
	 */
	struct AMainMenuStand_C_SelectionComplete__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenuStand.MainMenuStand_C.SelectionStarted__DelegateSignature
	 */
	struct AMainMenuStand_C_SelectionStarted__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
