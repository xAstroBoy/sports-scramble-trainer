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
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.EnableMenuInput
	 */
	struct AMenu_3dPanelImages_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.DisableMenuInput
	 */
	struct AMenu_3dPanelImages_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.RemoveSubMenu
	 */
	struct AMenu_3dPanelImages_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.HideSubMenu
	 */
	struct AMenu_3dPanelImages_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.RestoreSubMenu
	 */
	struct AMenu_3dPanelImages_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.Initialize
	 */
	struct AMenu_3dPanelImages_C_Initialize_Params
	{	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.UserConstructionScript
	 */
	struct AMenu_3dPanelImages_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveBeginPlay
	 */
	struct AMenu_3dPanelImages_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveTick
	 */
	struct AMenu_3dPanelImages_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.ReceiveEndPlay
	 */
	struct AMenu_3dPanelImages_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.ButtonPressed
	 */
	struct AMenu_3dPanelImages_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.ButtonSwapped
	 */
	struct AMenu_3dPanelImages_C_ButtonSwapped_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.DisableMenu
	 */
	struct AMenu_3dPanelImages_C_DisableMenu_Params
	{	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.ExecuteUbergraph_Menu_3dPanelImages
	 */
	struct AMenu_3dPanelImages_C_ExecuteUbergraph_Menu_3dPanelImages_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.SelectionComplete__DelegateSignature
	 */
	struct AMenu_3dPanelImages_C_SelectionComplete__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_3dPanelImages.Menu_3dPanelImages_C.SelectionStarted__DelegateSignature
	 */
	struct AMenu_3dPanelImages_C_SelectionStarted__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
