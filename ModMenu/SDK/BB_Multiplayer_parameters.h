#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BB_Multiplayer.BB_Multiplayer_C.Initialize
struct ABB_Multiplayer_C_Initialize_Params
{
};

// Function BB_Multiplayer.BB_Multiplayer_C.UserConstructionScript
struct ABB_Multiplayer_C_UserConstructionScript_Params
{
};

// Function BB_Multiplayer.BB_Multiplayer_C.InpActEvt_G_K2Node_InputKeyEvent_1
struct ABB_Multiplayer_C_InpActEvt_G_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BB_Multiplayer.BB_Multiplayer_C.ReceiveBeginPlay
struct ABB_Multiplayer_C_ReceiveBeginPlay_Params
{
};

// Function BB_Multiplayer.BB_Multiplayer_C.CreateHubButton
struct ABB_Multiplayer_C_CreateHubButton_Params
{
};

// Function BB_Multiplayer.BB_Multiplayer_C.ReturnToHub
struct ABB_Multiplayer_C_ReturnToHub_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Multiplayer.BB_Multiplayer_C.PlayerExited
struct ABB_Multiplayer_C_PlayerExited_Params
{
	class AController*                                 ExitingPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSpectator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Multiplayer.BB_Multiplayer_C.CreateStartButton
struct ABB_Multiplayer_C_CreateStartButton_Params
{
	class APlayerController*                           NewPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSpectator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Multiplayer.BB_Multiplayer_C.GameSelected
struct ABB_Multiplayer_C_GameSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Multiplayer.BB_Multiplayer_C.CreateEndGameButton
struct ABB_Multiplayer_C_CreateEndGameButton_Params
{
};

// Function BB_Multiplayer.BB_Multiplayer_C.EndGame
struct ABB_Multiplayer_C_EndGame_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Multiplayer.BB_Multiplayer_C.ExecuteUbergraph_BB_Multiplayer
struct ABB_Multiplayer_C_ExecuteUbergraph_BB_Multiplayer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
