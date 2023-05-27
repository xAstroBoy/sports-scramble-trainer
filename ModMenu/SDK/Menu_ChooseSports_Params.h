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
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.EnableMenuInput
	 */
	struct AMenu_ChooseSports_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.DisableMenuInput
	 */
	struct AMenu_ChooseSports_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.RemoveSubMenu
	 */
	struct AMenu_ChooseSports_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.HideSubMenu
	 */
	struct AMenu_ChooseSports_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.RestoreSubMenu
	 */
	struct AMenu_ChooseSports_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.Initialize
	 */
	struct AMenu_ChooseSports_C_Initialize_Params
	{	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.UserConstructionScript
	 */
	struct AMenu_ChooseSports_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveBeginPlay
	 */
	struct AMenu_ChooseSports_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveTick
	 */
	struct AMenu_ChooseSports_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.ReceiveEndPlay
	 */
	struct AMenu_ChooseSports_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.ButtonPressed
	 */
	struct AMenu_ChooseSports_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.ButtonSwapped
	 */
	struct AMenu_ChooseSports_C_ButtonSwapped_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.CheckButtonState
	 */
	struct AMenu_ChooseSports_C_CheckButtonState_Params
	{	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.ExecuteUbergraph_Menu_ChooseSports
	 */
	struct AMenu_ChooseSports_C_ExecuteUbergraph_Menu_ChooseSports_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CCO9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_ChooseSports.Menu_ChooseSports_C.UpdateNextButtonState__DelegateSignature
	 */
	struct AMenu_ChooseSports_C_UpdateNextButtonState__DelegateSignature_Params
	{
	public:
		bool                                                       EnableButton;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
