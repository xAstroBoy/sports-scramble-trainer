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
	 * Function Menu_Feathered.Menu_Feathered_C.EnableMenuInput
	 */
	struct AMenu_Feathered_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O4SN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.DisableMenuInput
	 */
	struct AMenu_Feathered_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M395[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.RemoveSubMenu
	 */
	struct AMenu_Feathered_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.HideSubMenu
	 */
	struct AMenu_Feathered_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.RestoreSubMenu
	 */
	struct AMenu_Feathered_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.Cleanup
	 */
	struct AMenu_Feathered_C_Cleanup_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.GetNewPanelInfo
	 */
	struct AMenu_Feathered_C_GetNewPanelInfo_Params
	{
	public:
		bool                                                       Next;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U3QF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Output1;                                                 // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.FinishRotateL
	 */
	struct AMenu_Feathered_C_FinishRotateL_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.FinishRotateR
	 */
	struct AMenu_Feathered_C_FinishRotateR_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.SpawnPanel
	 */
	struct AMenu_Feathered_C_SpawnPanel_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P9EV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            Texture;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.EnableButtons
	 */
	struct AMenu_Feathered_C_EnableButtons_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.DisableButtons
	 */
	struct AMenu_Feathered_C_DisableButtons_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.Initialize
	 */
	struct AMenu_Feathered_C_Initialize_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.UserConstructionScript
	 */
	struct AMenu_Feathered_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateRight__FinishedFunc
	 */
	struct AMenu_Feathered_C_Timeline_RotateRight__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateRight__UpdateFunc
	 */
	struct AMenu_Feathered_C_Timeline_RotateRight__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateLeft__FinishedFunc
	 */
	struct AMenu_Feathered_C_Timeline_RotateLeft__FinishedFunc_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.Timeline_RotateLeft__UpdateFunc
	 */
	struct AMenu_Feathered_C_Timeline_RotateLeft__UpdateFunc_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.ReceiveBeginPlay
	 */
	struct AMenu_Feathered_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.ReceiveTick
	 */
	struct AMenu_Feathered_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.ReceiveEndPlay
	 */
	struct AMenu_Feathered_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.DecrementCount
	 */
	struct AMenu_Feathered_C_DecrementCount_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.IncrementCount
	 */
	struct AMenu_Feathered_C_IncrementCount_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.SelectionStarted
	 */
	struct AMenu_Feathered_C_SelectionStarted_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.SelectionCompleted
	 */
	struct AMenu_Feathered_C_SelectionCompleted_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.Shift
	 */
	struct AMenu_Feathered_C_Shift_Params
	{
	public:
		bool                                                       Next;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.StartRotateRight
	 */
	struct AMenu_Feathered_C_StartRotateRight_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.StartRotateLeft
	 */
	struct AMenu_Feathered_C_StartRotateLeft_Params
	{	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.ExecuteUbergraph_Menu_Feathered
	 */
	struct AMenu_Feathered_C_ExecuteUbergraph_Menu_Feathered_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.SelectionConfirmed__DelegateSignature
	 */
	struct AMenu_Feathered_C_SelectionConfirmed__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Feathered.Menu_Feathered_C.ButtonPressed__DelegateSignature
	 */
	struct AMenu_Feathered_C_ButtonPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
