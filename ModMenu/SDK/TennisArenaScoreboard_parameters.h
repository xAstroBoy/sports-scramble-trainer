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

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateWidgetOnCultureChange
struct ATennisArenaScoreboard_C_UpdateWidgetOnCultureChange_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.SetLocText
struct ATennisArenaScoreboard_C_SetLocText_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnBallIndicator
struct ATennisArenaScoreboard_C_SpawnBallIndicator_Params
{
	bool                                               LeftSide;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateNetworkNames
struct ATennisArenaScoreboard_C_UpdateNetworkNames_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateRuleType
struct ATennisArenaScoreboard_C_UpdateRuleType_Params
{
	bool                                               TraditionalScoring;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateServeIndicator
struct ATennisArenaScoreboard_C_UpdateServeIndicator_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Player2Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateScore
struct ATennisArenaScoreboard_C_UpdateScore_Params
{
	int                                                Player1Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Player2Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdateScoreOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.Initialize
struct ATennisArenaScoreboard_C_Initialize_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UserConstructionScript
struct ATennisArenaScoreboard_C_UserConstructionScript_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover1__FinishedFunc
struct ATennisArenaScoreboard_C_Timeline_Cover1__FinishedFunc_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover1__UpdateFunc
struct ATennisArenaScoreboard_C_Timeline_Cover1__UpdateFunc_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover2__FinishedFunc
struct ATennisArenaScoreboard_C_Timeline_Cover2__FinishedFunc_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover2__UpdateFunc
struct ATennisArenaScoreboard_C_Timeline_Cover2__UpdateFunc_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ReceiveBeginPlay
struct ATennisArenaScoreboard_C_ReceiveBeginPlay_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowP1Serve
struct ATennisArenaScoreboard_C_ShowP1Serve_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.HideP1Serve
struct ATennisArenaScoreboard_C_HideP1Serve_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowP2Serve
struct ATennisArenaScoreboard_C_ShowP2Serve_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.HideP2Serve
struct ATennisArenaScoreboard_C_HideP2Serve_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowLeftSideServe
struct ATennisArenaScoreboard_C_ShowLeftSideServe_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.RightSideDestroyed
struct ATennisArenaScoreboard_C_RightSideDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowRightSideServe
struct ATennisArenaScoreboard_C_ShowRightSideServe_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.LeftSideDestroyed
struct ATennisArenaScoreboard_C_LeftSideDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnRight
struct ATennisArenaScoreboard_C_SpawnRight_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnLeft
struct ATennisArenaScoreboard_C_SpawnLeft_Params
{
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ReceiveEndPlay
struct ATennisArenaScoreboard_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.TravelCapsuleOpen
struct ATennisArenaScoreboard_C_TravelCapsuleOpen_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ExecuteUbergraph_TennisArenaScoreboard
struct ATennisArenaScoreboard_C_ExecuteUbergraph_TennisArenaScoreboard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
