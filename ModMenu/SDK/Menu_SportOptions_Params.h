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
	 * Function Menu_SportOptions.Menu_SportOptions_C.EnableMenuInput
	 */
	struct AMenu_SportOptions_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.DisableMenuInput
	 */
	struct AMenu_SportOptions_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.RemoveSubMenu
	 */
	struct AMenu_SportOptions_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.HideSubMenu
	 */
	struct AMenu_SportOptions_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.RestoreSubMenu
	 */
	struct AMenu_SportOptions_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.UpdateBowlingButtons
	 */
	struct AMenu_SportOptions_C_UpdateBowlingButtons_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.UpdateTeamColors
	 */
	struct AMenu_SportOptions_C_UpdateTeamColors_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.UpdateBWAiOptions
	 */
	struct AMenu_SportOptions_C_UpdateBWAiOptions_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.Update_TN_PointsButtons
	 */
	struct AMenu_SportOptions_C_Update_TN_PointsButtons_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A9A3[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.Update_BW_FramesButtons
	 */
	struct AMenu_SportOptions_C_Update_BW_FramesButtons_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C6GI[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.SetupBowling
	 */
	struct AMenu_SportOptions_C_SetupBowling_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.SetupTennis
	 */
	struct AMenu_SportOptions_C_SetupTennis_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.SetupBaseball
	 */
	struct AMenu_SportOptions_C_SetupBaseball_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.EnableButtons
	 */
	struct AMenu_SportOptions_C_EnableButtons_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.DisableButtons
	 */
	struct AMenu_SportOptions_C_DisableButtons_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.Initialize
	 */
	struct AMenu_SportOptions_C_Initialize_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.UserConstructionScript
	 */
	struct AMenu_SportOptions_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.ReceiveBeginPlay
	 */
	struct AMenu_SportOptions_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.ReceiveTick
	 */
	struct AMenu_SportOptions_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.ReceiveEndPlay
	 */
	struct AMenu_SportOptions_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.P0Previous
	 */
	struct AMenu_SportOptions_C_P0Previous_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.P0Next
	 */
	struct AMenu_SportOptions_C_P0Next_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.ButtonToggled
	 */
	struct AMenu_SportOptions_C_ButtonToggled_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.P2Previous0
	 */
	struct AMenu_SportOptions_C_P2Previous0_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.P2Next0
	 */
	struct AMenu_SportOptions_C_P2Next0_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.P2Previous1
	 */
	struct AMenu_SportOptions_C_P2Previous1_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.P2Next1
	 */
	struct AMenu_SportOptions_C_P2Next1_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.P2Previous2
	 */
	struct AMenu_SportOptions_C_P2Previous2_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.P2Next2
	 */
	struct AMenu_SportOptions_C_P2Next2_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.P2Previous3
	 */
	struct AMenu_SportOptions_C_P2Previous3_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.P2Next3
	 */
	struct AMenu_SportOptions_C_P2Next3_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_SportOptions.Menu_SportOptions_C.ExecuteUbergraph_Menu_SportOptions
	 */
	struct AMenu_SportOptions_C_ExecuteUbergraph_Menu_SportOptions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
