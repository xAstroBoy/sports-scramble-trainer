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

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.FlashScore
struct ABaseballPracticeArenaLight_C_FlashScore_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ScoreFlashed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.HideBallTarget
struct ABaseballPracticeArenaLight_C_HideBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ShowBallTarget
struct ABaseballPracticeArenaLight_C_ShowBallTarget_Params
{
	bool                                               Instant;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ResetTarget
struct ABaseballPracticeArenaLight_C_ResetTarget_Params
{
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.DeactivateEverything
struct ABaseballPracticeArenaLight_C_DeactivateEverything_Params
{
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.Initialize
struct ABaseballPracticeArenaLight_C_Initialize_Params
{
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.UserConstructionScript
struct ABaseballPracticeArenaLight_C_UserConstructionScript_Params
{
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ReceiveBeginPlay
struct ABaseballPracticeArenaLight_C_ReceiveBeginPlay_Params
{
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.BreakLightFixture
struct ABaseballPracticeArenaLight_C_BreakLightFixture_Params
{
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ScorePlayerHit
struct ABaseballPracticeArenaLight_C_ScorePlayerHit_Params
{
	class ABB_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.CleanupTarget
struct ABaseballPracticeArenaLight_C_CleanupTarget_Params
{
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ResetLightFixture
struct ABaseballPracticeArenaLight_C_ResetLightFixture_Params
{
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.Deactivate
struct ABaseballPracticeArenaLight_C_Deactivate_Params
{
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.OnTriggered
struct ABaseballPracticeArenaLight_C_OnTriggered_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ExecuteUbergraph_BaseballPracticeArenaLight
struct ABaseballPracticeArenaLight_C_ExecuteUbergraph_BaseballPracticeArenaLight_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.PlayerBrokeLightFixture__DelegateSignature
struct ABaseballPracticeArenaLight_C_PlayerBrokeLightFixture__DelegateSignature_Params
{
	class ABB_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScoreAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.LightFixtureHitDetected__DelegateSignature
struct ABaseballPracticeArenaLight_C_LightFixtureHitDetected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
