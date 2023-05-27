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
	 * Function Menu_GameDetails.Menu_GameDetails_C.EnableMenuInput
	 */
	struct AMenu_GameDetails_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.DisableMenuInput
	 */
	struct AMenu_GameDetails_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.RemoveSubMenu
	 */
	struct AMenu_GameDetails_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.HideSubMenu
	 */
	struct AMenu_GameDetails_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.RestoreSubMenu
	 */
	struct AMenu_GameDetails_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.GetIndex
	 */
	struct AMenu_GameDetails_C_GetIndex_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MISH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    GameIndex;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.SetInfoTrophyIconLocation
	 */
	struct AMenu_GameDetails_C_SetInfoTrophyIconLocation_Params
	{	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.Initialize
	 */
	struct AMenu_GameDetails_C_Initialize_Params
	{	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.UserConstructionScript
	 */
	struct AMenu_GameDetails_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.Timeline_MenuScale__FinishedFunc
	 */
	struct AMenu_GameDetails_C_Timeline_MenuScale__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.Timeline_MenuScale__UpdateFunc
	 */
	struct AMenu_GameDetails_C_Timeline_MenuScale__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.ReceiveBeginPlay
	 */
	struct AMenu_GameDetails_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.ReceiveTick
	 */
	struct AMenu_GameDetails_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.ReceiveEndPlay
	 */
	struct AMenu_GameDetails_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.ToggleInfo
	 */
	struct AMenu_GameDetails_C_ToggleInfo_Params
	{	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.ExecuteUbergraph_Menu_GameDetails
	 */
	struct AMenu_GameDetails_C_ExecuteUbergraph_Menu_GameDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_GameDetails.Menu_GameDetails_C.ResultsScoreComplete__DelegateSignature
	 */
	struct AMenu_GameDetails_C_ResultsScoreComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
