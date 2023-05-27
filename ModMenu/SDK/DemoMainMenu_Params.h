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
	 * Function DemoMainMenu.DemoMainMenu_C.ShowMenu
	 */
	struct ADemoMainMenu_C_ShowMenu_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.HideMenu
	 */
	struct ADemoMainMenu_C_HideMenu_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.BindPause
	 */
	struct ADemoMainMenu_C_BindPause_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.RemoveButtons
	 */
	struct ADemoMainMenu_C_RemoveButtons_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.DisableButtonInput
	 */
	struct ADemoMainMenu_C_DisableButtonInput_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.SpawnButton
	 */
	struct ADemoMainMenu_C_SpawnButton_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FUI_ButtonData                                      ButtonDataStart;                                         // 0x0030(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FUI_ButtonData                                      ButtonDataToggled;                                       // 0x0050(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0070(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PPNO[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AButton_Standard_C*                                  Button;                                                  // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.Initialize
	 */
	struct ADemoMainMenu_C_Initialize_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.UserConstructionScript
	 */
	struct ADemoMainMenu_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.ReceiveBeginPlay
	 */
	struct ADemoMainMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.SelectionMade
	 */
	struct ADemoMainMenu_C_SelectionMade_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.CloseMenu
	 */
	struct ADemoMainMenu_C_CloseMenu_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.ReceiveTick
	 */
	struct ADemoMainMenu_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.ButtonSwapped
	 */
	struct ADemoMainMenu_C_ButtonSwapped_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.OpenMenu
	 */
	struct ADemoMainMenu_C_OpenMenu_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.ButtonDestroyed
	 */
	struct ADemoMainMenu_C_ButtonDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.GamePaused
	 */
	struct ADemoMainMenu_C_GamePaused_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.GameUnpaused
	 */
	struct ADemoMainMenu_C_GameUnpaused_Params
	{	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.ExecuteUbergraph_DemoMainMenu
	 */
	struct ADemoMainMenu_C_ExecuteUbergraph_DemoMainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZQ5G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DemoMainMenu.DemoMainMenu_C.ChoiceMade__DelegateSignature
	 */
	struct ADemoMainMenu_C_ChoiceMade__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
