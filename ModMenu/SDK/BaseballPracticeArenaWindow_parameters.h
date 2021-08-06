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

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.FlashScore
struct ABaseballPracticeArenaWindow_C_FlashScore_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ScoreFlashed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.HideBallTarget
struct ABaseballPracticeArenaWindow_C_HideBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ShowBallTarget
struct ABaseballPracticeArenaWindow_C_ShowBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetTarget
struct ABaseballPracticeArenaWindow_C_ResetTarget_Params
{
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.DeactivateEverything
struct ABaseballPracticeArenaWindow_C_DeactivateEverything_Params
{
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Initialize
struct ABaseballPracticeArenaWindow_C_Initialize_Params
{
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.UserConstructionScript
struct ABaseballPracticeArenaWindow_C_UserConstructionScript_Params
{
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ReceiveBeginPlay
struct ABaseballPracticeArenaWindow_C_ReceiveBeginPlay_Params
{
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.BreakWindow
struct ABaseballPracticeArenaWindow_C_BreakWindow_Params
{
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ScorePlayerHit
struct ABaseballPracticeArenaWindow_C_ScorePlayerHit_Params
{
	class ABB_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.CleanupTarget
struct ABaseballPracticeArenaWindow_C_CleanupTarget_Params
{
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetWindow
struct ABaseballPracticeArenaWindow_C_ResetWindow_Params
{
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Deactivate
struct ABaseballPracticeArenaWindow_C_Deactivate_Params
{
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.OnTriggered
struct ABaseballPracticeArenaWindow_C_OnTriggered_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ExecuteUbergraph_BaseballPracticeArenaWindow
struct ABaseballPracticeArenaWindow_C_ExecuteUbergraph_BaseballPracticeArenaWindow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.PlayerBrokeWindow__DelegateSignature
struct ABaseballPracticeArenaWindow_C_PlayerBrokeWindow__DelegateSignature_Params
{
	class ABB_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.WindowOverlapDetected__DelegateSignature
struct ABaseballPracticeArenaWindow_C_WindowOverlapDetected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
