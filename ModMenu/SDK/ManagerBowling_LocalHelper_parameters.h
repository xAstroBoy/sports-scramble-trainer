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

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayCountdown
struct AManagerBowling_LocalHelper_C_DisplayCountdown_Params
{
	class ACountdown_C*                                CountdownActor;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayInfo
struct AManagerBowling_LocalHelper_C_DisplayInfo_Params
{
	struct FText                                       DisplayText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              DisplayTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Cleanup
struct AManagerBowling_LocalHelper_C_Cleanup_Params
{
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.Initialize
struct AManagerBowling_LocalHelper_C_Initialize_Params
{
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.UserConstructionScript
struct AManagerBowling_LocalHelper_C_UserConstructionScript_Params
{
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_906AE94D4F152913F520DB9BC9980BB7
struct AManagerBowling_LocalHelper_C_OnLoaded_906AE94D4F152913F520DB9BC9980BB7_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7
struct AManagerBowling_LocalHelper_C_OnLoaded_3C8AC52B4B3EDAE31FE29B960E4EBDC7_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAudienceDisappointed
struct AManagerBowling_LocalHelper_C_PlayAudienceDisappointed_Params
{
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.CrowdApplause
struct AManagerBowling_LocalHelper_C_CrowdApplause_Params
{
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveEndPlay
struct AManagerBowling_LocalHelper_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfMatchInfo
struct AManagerBowling_LocalHelper_C_DisplayStartOfMatchInfo_Params
{
	int                                                GamesToWin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayNextGame
struct AManagerBowling_LocalHelper_C_DisplayNextGame_Params
{
	int                                                PreviousGameWinner;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Game;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayMatchOver
struct AManagerBowling_LocalHelper_C_DisplayMatchOver_Params
{
	TEnumAsByte<GameResult_EGameResult>                GameResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerBallChange
struct AManagerBowling_LocalHelper_C_PlayAnnouncerBallChange_Params
{
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlayAnnouncerVO
struct AManagerBowling_LocalHelper_C_PlayAnnouncerVO_Params
{
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ReceiveBeginPlay
struct AManagerBowling_LocalHelper_C_ReceiveBeginPlay_Params
{
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.PlinkoLaunchSFX
struct AManagerBowling_LocalHelper_C_PlinkoLaunchSFX_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayAlternateMatchInfo
struct AManagerBowling_LocalHelper_C_DisplayAlternateMatchInfo_Params
{
	int                                                GamesTo_Win;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnStart
struct AManagerBowling_LocalHelper_C_DisplayPlayerTurnStart_Params
{
	int                                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayPlayerTurnEnd
struct AManagerBowling_LocalHelper_C_DisplayPlayerTurnEnd_Params
{
	int                                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.DisplayStartOfTraditionalMatchInfo
struct AManagerBowling_LocalHelper_C_DisplayStartOfTraditionalMatchInfo_Params
{
	int                                                Frames;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C.ExecuteUbergraph_ManagerBowling_LocalHelper
struct AManagerBowling_LocalHelper_C_ExecuteUbergraph_ManagerBowling_LocalHelper_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
