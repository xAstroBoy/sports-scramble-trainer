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
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.EnableMenuInput
	 */
	struct AMenu_Message_SevereError_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.DisableMenuInput
	 */
	struct AMenu_Message_SevereError_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.RemoveSubMenu
	 */
	struct AMenu_Message_SevereError_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.HideSubMenu
	 */
	struct AMenu_Message_SevereError_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.RestoreSubMenu
	 */
	struct AMenu_Message_SevereError_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.Initialize
	 */
	struct AMenu_Message_SevereError_C_Initialize_Params
	{	};

	/**
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.UpdateMaterial
	 */
	struct AMenu_Message_SevereError_C_UpdateMaterial_Params
	{
	public:
		class UCanvas*                                             Canvas;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Width;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.UserConstructionScript
	 */
	struct AMenu_Message_SevereError_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.ReceiveBeginPlay
	 */
	struct AMenu_Message_SevereError_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.Update Target Canvas
	 */
	struct AMenu_Message_SevereError_C_UpdateTargetCanvas_Params
	{
	public:
		class UCanvas*                                             Canvas;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Height;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_Message_SevereError.Menu_Message_SevereError_C.ExecuteUbergraph_Menu_Message_SevereError
	 */
	struct AMenu_Message_SevereError_C_ExecuteUbergraph_Menu_Message_SevereError_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YVG4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
