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
	 * Function BB_Multiplayer.BB_Multiplayer_C.Initialize
	 */
	struct ABB_Multiplayer_C_Initialize_Params
	{	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.UserConstructionScript
	 */
	struct ABB_Multiplayer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.InpActEvt_G_K2Node_InputKeyEvent_1
	 */
	struct ABB_Multiplayer_C_InpActEvt_G_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.ReceiveBeginPlay
	 */
	struct ABB_Multiplayer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.CreateHubButton
	 */
	struct ABB_Multiplayer_C_CreateHubButton_Params
	{	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.ReturnToHub
	 */
	struct ABB_Multiplayer_C_ReturnToHub_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.PlayerExited
	 */
	struct ABB_Multiplayer_C_PlayerExited_Params
	{
	public:
		class AController*                                         ExitingPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSpectator;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.CreateStartButton
	 */
	struct ABB_Multiplayer_C_CreateStartButton_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSpectator;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.GameSelected
	 */
	struct ABB_Multiplayer_C_GameSelected_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.CreateEndGameButton
	 */
	struct ABB_Multiplayer_C_CreateEndGameButton_Params
	{	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.EndGame
	 */
	struct ABB_Multiplayer_C_EndGame_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Multiplayer.BB_Multiplayer_C.ExecuteUbergraph_BB_Multiplayer
	 */
	struct ABB_Multiplayer_C_ExecuteUbergraph_BB_Multiplayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
