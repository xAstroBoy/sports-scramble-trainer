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
	 * Function MainMenu.MainMenu_C.SpawnButton
	 */
	struct AMainMenu_C_SpawnButton_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FUI_ButtonData                                      ButtonDataStart;                                         // 0x0030(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FUI_ButtonData                                      ButtonDataToggled;                                       // 0x0050(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0070(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5E61[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AButton_Standard_C*                                  Button;                                                  // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.DestroyMainMenu
	 */
	struct AMainMenu_C_DestroyMainMenu_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.Initialize
	 */
	struct AMainMenu_C_Initialize_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.UserConstructionScript
	 */
	struct AMainMenu_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.ReceiveBeginPlay
	 */
	struct AMainMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.SelectionMade
	 */
	struct AMainMenu_C_SelectionMade_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.ButtonSwapped
	 */
	struct AMainMenu_C_ButtonSwapped_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.ButtonDestroyed
	 */
	struct AMainMenu_C_ButtonDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.ButtonTouched
	 */
	struct AMainMenu_C_ButtonTouched_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.ButtonUntouched
	 */
	struct AMainMenu_C_ButtonUntouched_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.CreateMenu
	 */
	struct AMainMenu_C_CreateMenu_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	 */
	struct AMainMenu_C_ExecuteUbergraph_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VGVZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainMenu.MainMenu_C.MainMenuSelectionMade__DelegateSignature
	 */
	struct AMainMenu_C_MainMenuSelectionMade__DelegateSignature_Params
	{
	public:
		EMainMenuChoices                                           Choice;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.TopMenuDeactivated__DelegateSignature
	 */
	struct AMainMenu_C_TopMenuDeactivated__DelegateSignature_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.TopMenuActivated__DelegateSignature
	 */
	struct AMainMenu_C_TopMenuActivated__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
