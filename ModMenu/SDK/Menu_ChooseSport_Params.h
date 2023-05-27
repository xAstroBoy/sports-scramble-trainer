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
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.EnableMenuInput
	 */
	struct AMenu_ChooseSport_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.DisableMenuInput
	 */
	struct AMenu_ChooseSport_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.RemoveSubMenu
	 */
	struct AMenu_ChooseSport_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.HideSubMenu
	 */
	struct AMenu_ChooseSport_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.RestoreSubMenu
	 */
	struct AMenu_ChooseSport_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.Initialize
	 */
	struct AMenu_ChooseSport_C_Initialize_Params
	{	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.UserConstructionScript
	 */
	struct AMenu_ChooseSport_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.ReceiveBeginPlay
	 */
	struct AMenu_ChooseSport_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.ReceiveTick
	 */
	struct AMenu_ChooseSport_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.ReceiveEndPlay
	 */
	struct AMenu_ChooseSport_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.ButtonPressed
	 */
	struct AMenu_ChooseSport_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.ButtonSwapped
	 */
	struct AMenu_ChooseSport_C_ButtonSwapped_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.ExecuteUbergraph_Menu_ChooseSport
	 */
	struct AMenu_ChooseSport_C_ExecuteUbergraph_Menu_ChooseSport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.SelectionMade__DelegateSignature
	 */
	struct AMenu_ChooseSport_C_SelectionMade__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_ChooseSport.Menu_ChooseSport_C.SportChosen__DelegateSignature
	 */
	struct AMenu_ChooseSport_C_SportChosen__DelegateSignature_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
