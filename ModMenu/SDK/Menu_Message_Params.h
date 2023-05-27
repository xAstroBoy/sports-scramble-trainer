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
	 * Function Menu_Message.Menu_Message_C.EnableMenuInput
	 */
	struct AMenu_Message_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Message.Menu_Message_C.DisableMenuInput
	 */
	struct AMenu_Message_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Message.Menu_Message_C.RemoveSubMenu
	 */
	struct AMenu_Message_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Message.Menu_Message_C.HideSubMenu
	 */
	struct AMenu_Message_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Message.Menu_Message_C.RestoreSubMenu
	 */
	struct AMenu_Message_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Message.Menu_Message_C.HideProgressWidget
	 */
	struct AMenu_Message_C_HideProgressWidget_Params
	{	};

	/**
	 * Function Menu_Message.Menu_Message_C.UpdateMessage
	 */
	struct AMenu_Message_C_UpdateMessage_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Menu_Message.Menu_Message_C.Initialize
	 */
	struct AMenu_Message_C_Initialize_Params
	{	};

	/**
	 * Function Menu_Message.Menu_Message_C.UserConstructionScript
	 */
	struct AMenu_Message_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_Message.Menu_Message_C.ReceiveBeginPlay
	 */
	struct AMenu_Message_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_Message.Menu_Message_C.ReceiveTick
	 */
	struct AMenu_Message_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Message.Menu_Message_C.ReceiveEndPlay
	 */
	struct AMenu_Message_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Message.Menu_Message_C.StartTimer
	 */
	struct AMenu_Message_C_StartTimer_Params
	{	};

	/**
	 * Function Menu_Message.Menu_Message_C.ExecuteUbergraph_Menu_Message
	 */
	struct AMenu_Message_C_ExecuteUbergraph_Menu_Message_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
