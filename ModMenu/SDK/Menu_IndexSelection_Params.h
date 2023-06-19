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
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.EnableMenuInput
	 */
	struct AMenu_IndexSelection_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WNC2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.DisableMenuInput
	 */
	struct AMenu_IndexSelection_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A826[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.RestoreSubMenu
	 */
	struct AMenu_IndexSelection_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.HideSubMenu
	 */
	struct AMenu_IndexSelection_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.RemoveSubMenu
	 */
	struct AMenu_IndexSelection_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.ShouldButtonBeLocked
	 */
	struct AMenu_IndexSelection_C_ShouldButtonBeLocked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUI_ButtonState                                            ButtonState;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowTrophy;                                              // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3QD7[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.SpawnButtons
	 */
	struct AMenu_IndexSelection_C_SpawnButtons_Params
	{	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.Initialize
	 */
	struct AMenu_IndexSelection_C_Initialize_Params
	{	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.UserConstructionScript
	 */
	struct AMenu_IndexSelection_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.InpActEvt_DebugButton_K2Node_InputActionEvent_1
	 */
	struct AMenu_IndexSelection_C_InpActEvt_DebugButton_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveBeginPlay
	 */
	struct AMenu_IndexSelection_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionMade
	 */
	struct AMenu_IndexSelection_C_SelectionMade_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveTick
	 */
	struct AMenu_IndexSelection_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.ReceiveEndPlay
	 */
	struct AMenu_IndexSelection_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionStarted
	 */
	struct AMenu_IndexSelection_C_SelectionStarted_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.ExecuteUbergraph_Menu_IndexSelection
	 */
	struct AMenu_IndexSelection_C_ExecuteUbergraph_Menu_IndexSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1C98[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.SelectionComplete__DelegateSignature
	 */
	struct AMenu_IndexSelection_C_SelectionComplete__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PDB8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                GameName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_IndexSelection.Menu_IndexSelection_C.ChoiceStarted__DelegateSignature
	 */
	struct AMenu_IndexSelection_C_ChoiceStarted__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
