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
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.EnableMenuInput
	 */
	struct AMenu_AvatarSetup_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.DisableMenuInput
	 */
	struct AMenu_AvatarSetup_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.RemoveSubMenu
	 */
	struct AMenu_AvatarSetup_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.HideSubMenu
	 */
	struct AMenu_AvatarSetup_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.RestoreSubMenu
	 */
	struct AMenu_AvatarSetup_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateAvatarText
	 */
	struct AMenu_AvatarSetup_C_UpdateAvatarText_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.SetRed
	 */
	struct AMenu_AvatarSetup_C_SetRed_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Shutdown
	 */
	struct AMenu_AvatarSetup_C_Shutdown_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateAvatar
	 */
	struct AMenu_AvatarSetup_C_UpdateAvatar_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateHairColor
	 */
	struct AMenu_AvatarSetup_C_UpdateHairColor_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.UpdateSkinColor
	 */
	struct AMenu_AvatarSetup_C_UpdateSkinColor_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.SaveAvatarLook
	 */
	struct AMenu_AvatarSetup_C_SaveAvatarLook_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Initialize
	 */
	struct AMenu_AvatarSetup_C_Initialize_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.UserConstructionScript
	 */
	struct AMenu_AvatarSetup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_Rotation__FinishedFunc
	 */
	struct AMenu_AvatarSetup_C_Timeline_Rotation__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_Rotation__UpdateFunc
	 */
	struct AMenu_AvatarSetup_C_Timeline_Rotation__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_BackingScale__FinishedFunc
	 */
	struct AMenu_AvatarSetup_C_Timeline_BackingScale__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_BackingScale__UpdateFunc
	 */
	struct AMenu_AvatarSetup_C_Timeline_BackingScale__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_MoveAvatar__FinishedFunc
	 */
	struct AMenu_AvatarSetup_C_Timeline_MoveAvatar__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_MoveAvatar__UpdateFunc
	 */
	struct AMenu_AvatarSetup_C_Timeline_MoveAvatar__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleMesh__FinishedFunc
	 */
	struct AMenu_AvatarSetup_C_Timeline_ScaleMesh__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleMesh__UpdateFunc
	 */
	struct AMenu_AvatarSetup_C_Timeline_ScaleMesh__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleAvatar__FinishedFunc
	 */
	struct AMenu_AvatarSetup_C_Timeline_ScaleAvatar__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Timeline_ScaleAvatar__UpdateFunc
	 */
	struct AMenu_AvatarSetup_C_Timeline_ScaleAvatar__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveBeginPlay
	 */
	struct AMenu_AvatarSetup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveTick
	 */
	struct AMenu_AvatarSetup_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.ReceiveEndPlay
	 */
	struct AMenu_AvatarSetup_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousAvatar
	 */
	struct AMenu_AvatarSetup_C_PreviousAvatar_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextAvatar
	 */
	struct AMenu_AvatarSetup_C_NextAvatar_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousSkin
	 */
	struct AMenu_AvatarSetup_C_PreviousSkin_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextSkin
	 */
	struct AMenu_AvatarSetup_C_NextSkin_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.PreviousHair
	 */
	struct AMenu_AvatarSetup_C_PreviousHair_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.NextHair
	 */
	struct AMenu_AvatarSetup_C_NextHair_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.InitialSetupComplete
	 */
	struct AMenu_AvatarSetup_C_InitialSetupComplete_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.Play_SFX_Avatar_Intro
	 */
	struct AMenu_AvatarSetup_C_Play_SFX_Avatar_Intro_Params
	{	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.ExecuteUbergraph_Menu_AvatarSetup
	 */
	struct AMenu_AvatarSetup_C_ExecuteUbergraph_Menu_AvatarSetup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_AvatarSetup.Menu_AvatarSetup_C.InitialSetupAnimComplete__DelegateSignature
	 */
	struct AMenu_AvatarSetup_C_InitialSetupAnimComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
