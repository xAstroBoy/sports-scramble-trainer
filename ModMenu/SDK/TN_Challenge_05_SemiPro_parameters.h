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

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.SetUpInfoText
struct ATN_Challenge_05_SemiPro_C_SetUpInfoText_Params
{
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.AddActorToGameElementList
struct ATN_Challenge_05_SemiPro_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Shutdown
struct ATN_Challenge_05_SemiPro_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Initialize
struct ATN_Challenge_05_SemiPro_C_Initialize_Params
{
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.UserConstructionScript
struct ATN_Challenge_05_SemiPro_C_UserConstructionScript_Params
{
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ReceiveEndPlay
struct ATN_Challenge_05_SemiPro_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.SportManager_MatchComplete
struct ATN_Challenge_05_SemiPro_C_SportManager_MatchComplete_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.NotifyChallengeContinue
struct ATN_Challenge_05_SemiPro_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.TriggerAlternativeCadence
struct ATN_Challenge_05_SemiPro_C_TriggerAlternativeCadence_Params
{
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.DelayDestroy
struct ATN_Challenge_05_SemiPro_C_DelayDestroy_Params
{
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.OnInstrumentGrabbed
struct ATN_Challenge_05_SemiPro_C_OnInstrumentGrabbed_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ReceiveBeginPlay
struct ATN_Challenge_05_SemiPro_C_ReceiveBeginPlay_Params
{
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Shortcut
struct ATN_Challenge_05_SemiPro_C_Shortcut_Params
{
};

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ExecuteUbergraph_TN_Challenge_05_SemiPro
struct ATN_Challenge_05_SemiPro_C_ExecuteUbergraph_TN_Challenge_05_SemiPro_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
