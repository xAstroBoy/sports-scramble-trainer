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

// Function ScramGameState_BP.ScramGameState_BP_C.UserConstructionScript
struct AScramGameState_BP_C_UserConstructionScript_Params
{
};

// Function ScramGameState_BP.ScramGameState_BP_C.ReceiveBeginPlay
struct AScramGameState_BP_C_ReceiveBeginPlay_Params
{
};

// Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyPause
struct AScramGameState_BP_C_ServerNotifyPause_Params
{
	bool                                               isCalledByHost;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	SportsScramble_EGamePauseReason                    reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyResume
struct AScramGameState_BP_C_ServerNotifyResume_Params
{
	bool                                               isCalledByHost;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	SportsScramble_EGamePauseReason                    reason;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGamePaused
struct AScramGameState_BP_C_BlueprintCall_OnMultiplayerGamePaused_Params
{
	bool                                               isCalledByHost;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	SportsScramble_EGamePauseReason                    reason;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGameResume
struct AScramGameState_BP_C_BlueprintCall_OnMultiplayerGameResume_Params
{
	bool                                               isCalledByHost;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	SportsScramble_EGamePauseReason                    reason;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramGameState_BP.ScramGameState_BP_C.ExecuteUbergraph_ScramGameState_BP
struct AScramGameState_BP_C_ExecuteUbergraph_ScramGameState_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
