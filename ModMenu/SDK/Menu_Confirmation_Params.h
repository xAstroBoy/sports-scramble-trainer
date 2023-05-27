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
	 * Function Menu_Confirmation.Menu_Confirmation_C.EnableMenuInput
	 */
	struct AMenu_Confirmation_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.DisableMenuInput
	 */
	struct AMenu_Confirmation_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.RemoveSubMenu
	 */
	struct AMenu_Confirmation_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.HideSubMenu
	 */
	struct AMenu_Confirmation_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.RestoreSubMenu
	 */
	struct AMenu_Confirmation_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.EnableButtons
	 */
	struct AMenu_Confirmation_C_EnableButtons_Params
	{	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.DisableButtons
	 */
	struct AMenu_Confirmation_C_DisableButtons_Params
	{	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.Initialize
	 */
	struct AMenu_Confirmation_C_Initialize_Params
	{	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.UserConstructionScript
	 */
	struct AMenu_Confirmation_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.ReceiveBeginPlay
	 */
	struct AMenu_Confirmation_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.ReceiveTick
	 */
	struct AMenu_Confirmation_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.ReceiveEndPlay
	 */
	struct AMenu_Confirmation_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.ButtonPressed
	 */
	struct AMenu_Confirmation_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.ButtonSwapped
	 */
	struct AMenu_Confirmation_C_ButtonSwapped_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.ExecuteUbergraph_Menu_Confirmation
	 */
	struct AMenu_Confirmation_C_ExecuteUbergraph_Menu_Confirmation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.SelectionCompleted__DelegateSignature
	 */
	struct AMenu_Confirmation_C_SelectionCompleted__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Confirmation.Menu_Confirmation_C.SelectionStarted__DelegateSignature
	 */
	struct AMenu_Confirmation_C_SelectionStarted__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
