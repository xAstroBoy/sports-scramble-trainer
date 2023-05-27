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
	 * Function InfoScreen.InfoScreen_C.EnableMenuInput
	 */
	struct AInfoScreen_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.DisableMenuInput
	 */
	struct AInfoScreen_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.RestoreSubMenu
	 */
	struct AInfoScreen_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.HideSubMenu
	 */
	struct AInfoScreen_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.RemoveSubMenu
	 */
	struct AInfoScreen_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.SwapToNewText
	 */
	struct AInfoScreen_C_SwapToNewText_Params
	{
	public:
		class FName                                                LocTextBody;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.DisableButtons
	 */
	struct AInfoScreen_C_DisableButtons_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.SpawnOkButton
	 */
	struct AInfoScreen_C_SpawnOkButton_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.SpawnCancelButton
	 */
	struct AInfoScreen_C_SpawnCancelButton_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.UpdateMenuVisiblilty
	 */
	struct AInfoScreen_C_UpdateMenuVisiblilty_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.SpawnHeader
	 */
	struct AInfoScreen_C_SpawnHeader_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.UpdateBodyText
	 */
	struct AInfoScreen_C_UpdateBodyText_Params
	{
	public:
		class FName                                                LocText;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.Initialize
	 */
	struct AInfoScreen_C_Initialize_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.UserConstructionScript
	 */
	struct AInfoScreen_C_UserConstructionScript_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.Timeline_ScaleMenu__FinishedFunc
	 */
	struct AInfoScreen_C_Timeline_ScaleMenu__FinishedFunc_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.Timeline_ScaleMenu__UpdateFunc
	 */
	struct AInfoScreen_C_Timeline_ScaleMenu__UpdateFunc_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.ReceiveBeginPlay
	 */
	struct AInfoScreen_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.ReceiveTick
	 */
	struct AInfoScreen_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.FirstMenu
	 */
	struct AInfoScreen_C_FirstMenu_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.HeaderClosing
	 */
	struct AInfoScreen_C_HeaderClosing_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.DestroyMenu
	 */
	struct AInfoScreen_C_DestroyMenu_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.OpenMenu
	 */
	struct AInfoScreen_C_OpenMenu_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.CloseMenu
	 */
	struct AInfoScreen_C_CloseMenu_Params
	{	};

	/**
	 * Function InfoScreen.InfoScreen_C.ButtonPressed
	 */
	struct AInfoScreen_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.ButtonSelected
	 */
	struct AInfoScreen_C_ButtonSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.ReceiveEndPlay
	 */
	struct AInfoScreen_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.ExecuteUbergraph_InfoScreen
	 */
	struct AInfoScreen_C_ExecuteUbergraph_InfoScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.MenuClosed__DelegateSignature
	 */
	struct AInfoScreen_C_MenuClosed__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InfoScreen.InfoScreen_C.ChoiceMade__DelegateSignature
	 */
	struct AInfoScreen_C_ChoiceMade__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
