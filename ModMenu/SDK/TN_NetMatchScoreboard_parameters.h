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

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateNewText
struct ATN_NetMatchScoreboard_C_UpdateNewText_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateRuleType
struct ATN_NetMatchScoreboard_C_UpdateRuleType_Params
{
	bool                                               TraditionalScoring;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Initialize
struct ATN_NetMatchScoreboard_C_Initialize_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UserConstructionScript
struct ATN_NetMatchScoreboard_C_UserConstructionScript_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Pop__FinishedFunc
struct ATN_NetMatchScoreboard_C_Timeline_Pop__FinishedFunc_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Pop__UpdateFunc
struct ATN_NetMatchScoreboard_C_Timeline_Pop__UpdateFunc_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Scores__FinishedFunc
struct ATN_NetMatchScoreboard_C_Timeline_Reveal_Scores__FinishedFunc_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Scores__UpdateFunc
struct ATN_NetMatchScoreboard_C_Timeline_Reveal_Scores__UpdateFunc_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Text__FinishedFunc
struct ATN_NetMatchScoreboard_C_Timeline_Reveal_Text__FinishedFunc_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.Timeline_Reveal_Text__UpdateFunc
struct ATN_NetMatchScoreboard_C_Timeline_Reveal_Text__UpdateFunc_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowHideDebug__FinishedFunc
struct ATN_NetMatchScoreboard_C_ShowHideDebug__FinishedFunc_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowHideDebug__UpdateFunc
struct ATN_NetMatchScoreboard_C_ShowHideDebug__UpdateFunc_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ReceiveBeginPlay
struct ATN_NetMatchScoreboard_C_ReceiveBeginPlay_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateScore
struct ATN_NetMatchScoreboard_C_UpdateScore_Params
{
	int                                                Player1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.DisplayScoreboard
struct ATN_NetMatchScoreboard_C_DisplayScoreboard_Params
{
	struct FText                                       TextMajor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TextMinor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UpdateScoreOnDelay;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewScoreP1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewScoreP2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideScoreBoard
struct ATN_NetMatchScoreboard_C_HideScoreBoard_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.SetScoreToZero
struct ATN_NetMatchScoreboard_C_SetScoreToZero_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.UpdateText
struct ATN_NetMatchScoreboard_C_UpdateText_Params
{
	struct FText                                       TopText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       BottomText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.SpawnScoreVFX
struct ATN_NetMatchScoreboard_C_SpawnScoreVFX_Params
{
	bool                                               P1;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.DisplayDebugText
struct ATN_NetMatchScoreboard_C_DisplayDebugText_Params
{
	struct FText                                       DebugText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideNormalTennisScoring
struct ATN_NetMatchScoreboard_C_HideNormalTennisScoring_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowScores
struct ATN_NetMatchScoreboard_C_ShowScores_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideScores
struct ATN_NetMatchScoreboard_C_HideScores_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ShowText
struct ATN_NetMatchScoreboard_C_ShowText_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideText
struct ATN_NetMatchScoreboard_C_HideText_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.RevealDebugText
struct ATN_NetMatchScoreboard_C_RevealDebugText_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.HideDebugText
struct ATN_NetMatchScoreboard_C_HideDebugText_Params
{
};

// Function TN_NetMatchScoreboard.TN_NetMatchScoreboard_C.ExecuteUbergraph_TN_NetMatchScoreboard
struct ATN_NetMatchScoreboard_C_ExecuteUbergraph_TN_NetMatchScoreboard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
