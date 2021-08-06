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

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.HideSlowConnection
struct AScramPlayerController_BP_C_HideSlowConnection_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.ShowSlowConnection
struct AScramPlayerController_BP_C_ShowSlowConnection_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnUIFloater
struct AScramPlayerController_BP_C_SpawnUIFloater_Params
{
	bool                                               NoPause;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Error;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SlowConnection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsMultiplayerQueued
struct AScramPlayerController_BP_C_IsMultiplayerQueued_Params
{
	bool                                               MultiplayerQueued;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.DoesPauseManagerExist?
struct AScramPlayerController_BP_C_DoesPauseManagerExist__Params
{
	bool                                               Exists;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsPauseRestricted
struct AScramPlayerController_BP_C_IsPauseRestricted_Params
{
	bool                                               restricted;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnNoPause
struct AScramPlayerController_BP_C_SpawnNoPause_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.Initialize
struct AScramPlayerController_BP_C_Initialize_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.UserConstructionScript
struct AScramPlayerController_BP_C_UserConstructionScript_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.InpActEvt_Pause_K2Node_InputActionEvent_1
struct AScramPlayerController_BP_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseGame
struct AScramPlayerController_BP_C_PauseGame_Params
{
	bool                                               CheckIfPausedAllowed;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveBeginPlay
struct AScramPlayerController_BP_C_ReceiveBeginPlay_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.UnpauseGame
struct AScramPlayerController_BP_C_UnpauseGame_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEndNotify
struct AScramPlayerController_BP_C_PauseEndNotify_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStartNotify
struct AScramPlayerController_BP_C_PauseStartNotify_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedPauseGame
struct AScramPlayerController_BP_C_QueuedPauseGame_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedUnpauseGame
struct AScramPlayerController_BP_C_QueuedUnpauseGame_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanStartTravel
struct AScramPlayerController_BP_C_Server_ClientCanStartTravel_Params
{
	class AGameHandlerOnline_C*                        GameHandler;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanBeginMatch
struct AScramPlayerController_BP_C_Server_ClientCanBeginMatch_Params
{
	class AGameHandlerOnline_C*                        Game_Handler;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.UpdateSlowConnectionDisplay
struct AScramPlayerController_BP_C_UpdateSlowConnectionDisplay_Params
{
	bool                                               isOverThreshold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveEndPlay
struct AScramPlayerController_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.ExecuteUbergraph_ScramPlayerController_BP
struct AScramPlayerController_BP_C_ExecuteUbergraph_ScramPlayerController_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEnd__DelegateSignature
struct AScramPlayerController_BP_C_PauseEnd__DelegateSignature_Params
{
};

// Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStart__DelegateSignature
struct AScramPlayerController_BP_C_PauseStart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
