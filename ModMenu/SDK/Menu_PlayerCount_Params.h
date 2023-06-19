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
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.EnableMenuInput
	 */
	struct AMenu_PlayerCount_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OXTE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.DisableMenuInput
	 */
	struct AMenu_PlayerCount_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2TZG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.RemoveSubMenu
	 */
	struct AMenu_PlayerCount_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.HideSubMenu
	 */
	struct AMenu_PlayerCount_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.RestoreSubMenu
	 */
	struct AMenu_PlayerCount_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.UpdateDisplay
	 */
	struct AMenu_PlayerCount_C_UpdateDisplay_Params
	{
	public:
		int32_t                                                    PlayerCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.Initialize
	 */
	struct AMenu_PlayerCount_C_Initialize_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.UserConstructionScript
	 */
	struct AMenu_PlayerCount_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale3__FinishedFunc
	 */
	struct AMenu_PlayerCount_C_Timeline_Scale3__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale3__UpdateFunc
	 */
	struct AMenu_PlayerCount_C_Timeline_Scale3__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale4__FinishedFunc
	 */
	struct AMenu_PlayerCount_C_Timeline_Scale4__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.Timeline_Scale4__UpdateFunc
	 */
	struct AMenu_PlayerCount_C_Timeline_Scale4__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveBeginPlay
	 */
	struct AMenu_PlayerCount_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveTick
	 */
	struct AMenu_PlayerCount_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.ReceiveEndPlay
	 */
	struct AMenu_PlayerCount_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.DecrementCount
	 */
	struct AMenu_PlayerCount_C_DecrementCount_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.IncrementCount
	 */
	struct AMenu_PlayerCount_C_IncrementCount_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.DisableMenu
	 */
	struct AMenu_PlayerCount_C_DisableMenu_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.Show3
	 */
	struct AMenu_PlayerCount_C_Show3_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.Show4
	 */
	struct AMenu_PlayerCount_C_Show4_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.Hide3
	 */
	struct AMenu_PlayerCount_C_Hide3_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.Hide4
	 */
	struct AMenu_PlayerCount_C_Hide4_Params
	{	};

	/**
	 * Function Menu_PlayerCount.Menu_PlayerCount_C.ExecuteUbergraph_Menu_PlayerCount
	 */
	struct AMenu_PlayerCount_C_ExecuteUbergraph_Menu_PlayerCount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
