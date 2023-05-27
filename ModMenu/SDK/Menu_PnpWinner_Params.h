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
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.EnableMenuInput
	 */
	struct AMenu_PnpWinner_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.DisableMenuInput
	 */
	struct AMenu_PnpWinner_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.RemoveSubMenu
	 */
	struct AMenu_PnpWinner_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.HideSubMenu
	 */
	struct AMenu_PnpWinner_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.RestoreSubMenu
	 */
	struct AMenu_PnpWinner_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.Initialize
	 */
	struct AMenu_PnpWinner_C_Initialize_Params
	{	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.UserConstructionScript
	 */
	struct AMenu_PnpWinner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveBeginPlay
	 */
	struct AMenu_PnpWinner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveTick
	 */
	struct AMenu_PnpWinner_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.ReceiveEndPlay
	 */
	struct AMenu_PnpWinner_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.ExecuteUbergraph_Menu_PnpWinner
	 */
	struct AMenu_PnpWinner_C_ExecuteUbergraph_Menu_PnpWinner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_PnpWinner.Menu_PnpWinner_C.ResultsScoreComplete__DelegateSignature
	 */
	struct AMenu_PnpWinner_C_ResultsScoreComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
