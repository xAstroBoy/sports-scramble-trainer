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
	 * Function MultiplayerMenu.MultiplayerMenu_C.UserConstructionScript
	 */
	struct AMultiplayerMenu_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.ReceiveBeginPlay
	 */
	struct AMultiplayerMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.SessionsFound
	 */
	struct AMultiplayerMenu_C_SessionsFound_Params
	{
	public:
		TArray<class FString>                                      SessionsFound;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.NoSessionsFound
	 */
	struct AMultiplayerMenu_C_NoSessionsFound_Params
	{	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.UnbindFromInstance
	 */
	struct AMultiplayerMenu_C_UnbindFromInstance_Params
	{	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.CreateButtons
	 */
	struct AMultiplayerMenu_C_CreateButtons_Params
	{	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.ChoiceMade
	 */
	struct AMultiplayerMenu_C_ChoiceMade_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.JoinFailed
	 */
	struct AMultiplayerMenu_C_JoinFailed_Params
	{	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.JoinSuccess
	 */
	struct AMultiplayerMenu_C_JoinSuccess_Params
	{	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.GameSelected
	 */
	struct AMultiplayerMenu_C_GameSelected_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.SpawnTypeSelectionMenu
	 */
	struct AMultiplayerMenu_C_SpawnTypeSelectionMenu_Params
	{	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.GetSessions
	 */
	struct AMultiplayerMenu_C_GetSessions_Params
	{	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.CreateSportButtons
	 */
	struct AMultiplayerMenu_C_CreateSportButtons_Params
	{	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.SportChosen
	 */
	struct AMultiplayerMenu_C_SportChosen_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.ReceiveTick
	 */
	struct AMultiplayerMenu_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.AvatarDone
	 */
	struct AMultiplayerMenu_C_AvatarDone_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.ExecuteUbergraph_MultiplayerMenu
	 */
	struct AMultiplayerMenu_C_ExecuteUbergraph_MultiplayerMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MRNT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MultiplayerMenu.MultiplayerMenu_C.BackButtonSelected__DelegateSignature
	 */
	struct AMultiplayerMenu_C_BackButtonSelected__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
