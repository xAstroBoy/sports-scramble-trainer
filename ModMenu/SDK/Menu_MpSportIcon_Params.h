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
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.EnableMenuInput
	 */
	struct AMenu_MpSportIcon_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.DisableMenuInput
	 */
	struct AMenu_MpSportIcon_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.RemoveSubMenu
	 */
	struct AMenu_MpSportIcon_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.HideSubMenu
	 */
	struct AMenu_MpSportIcon_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.RestoreSubMenu
	 */
	struct AMenu_MpSportIcon_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.Initialize
	 */
	struct AMenu_MpSportIcon_C_Initialize_Params
	{	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.UserConstructionScript
	 */
	struct AMenu_MpSportIcon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Rotate__FinishedFunc
	 */
	struct AMenu_MpSportIcon_C_Timeline_Rotate__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Rotate__UpdateFunc
	 */
	struct AMenu_MpSportIcon_C_Timeline_Rotate__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Scale__FinishedFunc
	 */
	struct AMenu_MpSportIcon_C_Timeline_Scale__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.Timeline_Scale__UpdateFunc
	 */
	struct AMenu_MpSportIcon_C_Timeline_Scale__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.OnLoaded_F3D473AB41A8445F32AD52AED5A8A8B4
	 */
	struct AMenu_MpSportIcon_C_OnLoaded_F3D473AB41A8445F32AD52AED5A8A8B4_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveBeginPlay
	 */
	struct AMenu_MpSportIcon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveTick
	 */
	struct AMenu_MpSportIcon_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.ReceiveEndPlay
	 */
	struct AMenu_MpSportIcon_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_MpSportIcon.Menu_MpSportIcon_C.ExecuteUbergraph_Menu_MpSportIcon
	 */
	struct AMenu_MpSportIcon_C_ExecuteUbergraph_Menu_MpSportIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_11EQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
