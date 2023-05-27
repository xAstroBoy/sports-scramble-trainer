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
	 * Function Menu_MpReady.Menu_MpReady_C.EnableMenuInput
	 */
	struct AMenu_MpReady_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.DisableMenuInput
	 */
	struct AMenu_MpReady_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.RemoveSubMenu
	 */
	struct AMenu_MpReady_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.HideSubMenu
	 */
	struct AMenu_MpReady_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.RestoreSubMenu
	 */
	struct AMenu_MpReady_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.OpponentReady
	 */
	struct AMenu_MpReady_C_OpponentReady_Params
	{	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.UpdateRemoteAvatar
	 */
	struct AMenu_MpReady_C_UpdateRemoteAvatar_Params
	{	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.Initialize
	 */
	struct AMenu_MpReady_C_Initialize_Params
	{	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.UserConstructionScript
	 */
	struct AMenu_MpReady_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.ReceiveBeginPlay
	 */
	struct AMenu_MpReady_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.ReceiveTick
	 */
	struct AMenu_MpReady_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.ReceiveEndPlay
	 */
	struct AMenu_MpReady_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_MpReady.Menu_MpReady_C.ExecuteUbergraph_Menu_MpReady
	 */
	struct AMenu_MpReady_C_ExecuteUbergraph_Menu_MpReady_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
