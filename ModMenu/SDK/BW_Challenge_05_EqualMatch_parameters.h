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

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.GetTrophyID
struct ABW_Challenge_05_EqualMatch_C_GetTrophyID_Params
{
	struct FName                                       TrophyID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.InitializeChallengeRoom
struct ABW_Challenge_05_EqualMatch_C_InitializeChallengeRoom_Params
{
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.SetUpInfoText
struct ABW_Challenge_05_EqualMatch_C_SetUpInfoText_Params
{
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.UserConstructionScript
struct ABW_Challenge_05_EqualMatch_C_UserConstructionScript_Params
{
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.ReceiveBeginPlay
struct ABW_Challenge_05_EqualMatch_C_ReceiveBeginPlay_Params
{
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.NotifyChallengeContinue
struct ABW_Challenge_05_EqualMatch_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.ReceiveEndPlay
struct ABW_Challenge_05_EqualMatch_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.Shortcut
struct ABW_Challenge_05_EqualMatch_C_Shortcut_Params
{
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.BW_CHG_SportManagerGameEnd
struct ABW_Challenge_05_EqualMatch_C_BW_CHG_SportManagerGameEnd_Params
{
	TEnumAsByte<GameResult_EGameResult>                MatchResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.AnnouncerExitSequenceComplete
struct ABW_Challenge_05_EqualMatch_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.OnScore
struct ABW_Challenge_05_EqualMatch_C_OnScore_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_05_EqualMatch.BW_Challenge_05_EqualMatch_C.ExecuteUbergraph_BW_Challenge_05_EqualMatch
struct ABW_Challenge_05_EqualMatch_C_ExecuteUbergraph_BW_Challenge_05_EqualMatch_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
