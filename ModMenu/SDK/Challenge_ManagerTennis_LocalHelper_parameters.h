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

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateAdvantage
struct AChallenge_ManagerTennis_LocalHelper_C_UpdateAdvantage_Params
{
	bool                                               ShowAdvantage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateArenaScoreboardsServe
struct AChallenge_ManagerTennis_LocalHelper_C_UpdateArenaScoreboardsServe_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Player2Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayDebugInfo
struct AChallenge_ManagerTennis_LocalHelper_C_DisplayDebugInfo_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayServeInfo
struct AChallenge_ManagerTennis_LocalHelper_C_DisplayServeInfo_Params
{
	bool                                               IsLocalPlayerServe;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                GameCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OC5Demo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayInfo
struct AChallenge_ManagerTennis_LocalHelper_C_DisplayInfo_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.GetArenaScoreboards
struct AChallenge_ManagerTennis_LocalHelper_C_GetArenaScoreboards_Params
{
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UpdateArenaScoreboards
struct AChallenge_ManagerTennis_LocalHelper_C_UpdateArenaScoreboards_Params
{
	int                                                Player1Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Player2Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdateScoreOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.Cleanup
struct AChallenge_ManagerTennis_LocalHelper_C_Cleanup_Params
{
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.Initialize
struct AChallenge_ManagerTennis_LocalHelper_C_Initialize_Params
{
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.UserConstructionScript
struct AChallenge_ManagerTennis_LocalHelper_C_UserConstructionScript_Params
{
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.OnLoaded_63A9BB3F41B233AA34B75781E6359008
struct AChallenge_ManagerTennis_LocalHelper_C_OnLoaded_63A9BB3F41B233AA34B75781E6359008_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.OnLoaded_E86737B344F9B9A0CD9174A6DABCCAF8
struct AChallenge_ManagerTennis_LocalHelper_C_OnLoaded_E86737B344F9B9A0CD9174A6DABCCAF8_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.OnLoaded_FE19C6B44A7684430914DDB436E76BB3
struct AChallenge_ManagerTennis_LocalHelper_C_OnLoaded_FE19C6B44A7684430914DDB436E76BB3_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.OnLoaded_6E7ED6D943EA6E0D3176389AF4D6BA37
struct AChallenge_ManagerTennis_LocalHelper_C_OnLoaded_6E7ED6D943EA6E0D3176389AF4D6BA37_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ReceiveBeginPlay
struct AChallenge_ManagerTennis_LocalHelper_C_ReceiveBeginPlay_Params
{
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ReceiveEndPlay
struct AChallenge_ManagerTennis_LocalHelper_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayPointResults
struct AChallenge_ManagerTennis_LocalHelper_C_DisplayPointResults_Params
{
	struct FText                                       PointType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                NewScoreP1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewScoreP2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1WonPoint;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TextOnly;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayLet
struct AChallenge_ManagerTennis_LocalHelper_C_DisplayLet_Params
{
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayFault
struct AChallenge_ManagerTennis_LocalHelper_C_DisplayFault_Params
{
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.DisplayStartOfMatchInfo
struct AChallenge_ManagerTennis_LocalHelper_C_DisplayStartOfMatchInfo_Params
{
	int                                                GamesToWin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OC5Demo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ShowNetPreServeInfo
struct AChallenge_ManagerTennis_LocalHelper_C_ShowNetPreServeInfo_Params
{
	struct FText                                       GameStatusText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.HideNetScoreboard
struct AChallenge_ManagerTennis_LocalHelper_C_HideNetScoreboard_Params
{
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.GameComplete
struct AChallenge_ManagerTennis_LocalHelper_C_GameComplete_Params
{
	int                                                GameCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.MatchCompleted
struct AChallenge_ManagerTennis_LocalHelper_C_MatchCompleted_Params
{
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OC5Demo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.SwitchServeMessage
struct AChallenge_ManagerTennis_LocalHelper_C_SwitchServeMessage_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ExecuteUbergraph_Challenge_ManagerTennis_LocalHelper
struct AChallenge_ManagerTennis_LocalHelper_C_ExecuteUbergraph_Challenge_ManagerTennis_LocalHelper_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Challenge_ManagerTennis_LocalHelper.Challenge_ManagerTennis_LocalHelper_C.ServeMessageComplete__DelegateSignature
struct AChallenge_ManagerTennis_LocalHelper_C_ServeMessageComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
