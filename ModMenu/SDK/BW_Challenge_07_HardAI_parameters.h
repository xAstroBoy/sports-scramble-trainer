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

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.GetTrophyID
struct ABW_Challenge_07_HardAI_C_GetTrophyID_Params
{
	struct FName                                       TrophyID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.InitializeChallengeRoom
struct ABW_Challenge_07_HardAI_C_InitializeChallengeRoom_Params
{
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.SetUpInfoText
struct ABW_Challenge_07_HardAI_C_SetUpInfoText_Params
{
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.UserConstructionScript
struct ABW_Challenge_07_HardAI_C_UserConstructionScript_Params
{
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveBeginPlay
struct ABW_Challenge_07_HardAI_C_ReceiveBeginPlay_Params
{
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.NotifyChallengeContinue
struct ABW_Challenge_07_HardAI_C_NotifyChallengeContinue_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveEndPlay
struct ABW_Challenge_07_HardAI_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.Shortcut
struct ABW_Challenge_07_HardAI_C_Shortcut_Params
{
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.BW_CHG_SportManagerGameEnd
struct ABW_Challenge_07_HardAI_C_BW_CHG_SportManagerGameEnd_Params
{
	TEnumAsByte<GameResult_EGameResult>                MatchResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player1GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2GamesWon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.AnnouncerExitSequenceComplete
struct ABW_Challenge_07_HardAI_C_AnnouncerExitSequenceComplete_Params
{
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.OnScore
struct ABW_Challenge_07_HardAI_C_OnScore_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ExecuteUbergraph_BW_Challenge_07_HardAI
struct ABW_Challenge_07_HardAI_C_ExecuteUbergraph_BW_Challenge_07_HardAI_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
