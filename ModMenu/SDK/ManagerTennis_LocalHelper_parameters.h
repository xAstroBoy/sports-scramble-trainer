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

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.PlayTradScoreAudio
struct AManagerTennis_LocalHelper_C_PlayTradScoreAudio_Params
{
	int                                                ServerScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReceiverScore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Advantage_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateAdvantage
struct AManagerTennis_LocalHelper_C_UpdateAdvantage_Params
{
	bool                                               ShowAdvantage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateArenaScoreboardsServe
struct AManagerTennis_LocalHelper_C_UpdateArenaScoreboardsServe_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Player2Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayDebugInfo
struct AManagerTennis_LocalHelper_C_DisplayDebugInfo_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayServeInfo
struct AManagerTennis_LocalHelper_C_DisplayServeInfo_Params
{
	bool                                               IsLocalPlayerServe;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                GameCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OC5Demo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayInfo
struct AManagerTennis_LocalHelper_C_DisplayInfo_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.GetArenaScoreboards
struct AManagerTennis_LocalHelper_C_GetArenaScoreboards_Params
{
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UpdateArenaScoreboards
struct AManagerTennis_LocalHelper_C_UpdateArenaScoreboards_Params
{
	int                                                Player1Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Player2Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UpdateScoreOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.Cleanup
struct AManagerTennis_LocalHelper_C_Cleanup_Params
{
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.Initialize
struct AManagerTennis_LocalHelper_C_Initialize_Params
{
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.UserConstructionScript
struct AManagerTennis_LocalHelper_C_UserConstructionScript_Params
{
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_8DC83B8546799256223C67B1B376E3D3
struct AManagerTennis_LocalHelper_C_OnLoaded_8DC83B8546799256223C67B1B376E3D3_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_211B117B46368DDCD41D0D919D520B4C
struct AManagerTennis_LocalHelper_C_OnLoaded_211B117B46368DDCD41D0D919D520B4C_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_C0EE7AB1401C402783205A821574D41D
struct AManagerTennis_LocalHelper_C_OnLoaded_C0EE7AB1401C402783205A821574D41D_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_02ABBA7E4B958E6EFABDA593DEDA2DE4
struct AManagerTennis_LocalHelper_C_OnLoaded_02ABBA7E4B958E6EFABDA593DEDA2DE4_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_3C9D51CF4604A9F9201EFE9147CC8940
struct AManagerTennis_LocalHelper_C_OnLoaded_3C9D51CF4604A9F9201EFE9147CC8940_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_A772A71E43B570E3A370DCA564865ED7
struct AManagerTennis_LocalHelper_C_OnLoaded_A772A71E43B570E3A370DCA564865ED7_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.OnLoaded_E2EAB0BF4C538A76C7EB5A8DF4442684
struct AManagerTennis_LocalHelper_C_OnLoaded_E2EAB0BF4C538A76C7EB5A8DF4442684_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ReceiveBeginPlay
struct AManagerTennis_LocalHelper_C_ReceiveBeginPlay_Params
{
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ReceiveEndPlay
struct AManagerTennis_LocalHelper_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayPointResults
struct AManagerTennis_LocalHelper_C_DisplayPointResults_Params
{
	struct FText                                       PointType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                NewScoreP1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewScoreP2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1WonPoint;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TextOnly;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayLet
struct AManagerTennis_LocalHelper_C_DisplayLet_Params
{
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayFault
struct AManagerTennis_LocalHelper_C_DisplayFault_Params
{
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.DisplayStartOfMatchInfo
struct AManagerTennis_LocalHelper_C_DisplayStartOfMatchInfo_Params
{
	int                                                GamesToWin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OC5Demo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ShowNetPreServeInfo
struct AManagerTennis_LocalHelper_C_ShowNetPreServeInfo_Params
{
	struct FText                                       GameStatusText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.HideNetScoreboard
struct AManagerTennis_LocalHelper_C_HideNetScoreboard_Params
{
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.GameComplete
struct AManagerTennis_LocalHelper_C_GameComplete_Params
{
	int                                                GameCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.MatchCompleted
struct AManagerTennis_LocalHelper_C_MatchCompleted_Params
{
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OC5Demo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.SwitchServeMessage
struct AManagerTennis_LocalHelper_C_SwitchServeMessage_Params
{
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.RestoreResults
struct AManagerTennis_LocalHelper_C_RestoreResults_Params
{
	struct FText                                       PointType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                NewScoreP1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewScoreP2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Games;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Player1Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Player2Serve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.PlayAsync2D
struct AManagerTennis_LocalHelper_C_PlayAsync2D_Params
{
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ExecuteUbergraph_ManagerTennis_LocalHelper
struct AManagerTennis_LocalHelper_C_ExecuteUbergraph_ManagerTennis_LocalHelper_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C.ServeMessageComplete__DelegateSignature
struct AManagerTennis_LocalHelper_C_ServeMessageComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
