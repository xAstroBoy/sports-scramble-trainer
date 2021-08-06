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

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.DidLocalPlayerWinGame
struct ABP_TrophyAward_BaseballBase_C_DidLocalPlayerWinGame_Params
{
	bool                                               won;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.NewFunction_1_1
struct ABP_TrophyAward_BaseballBase_C_NewFunction_1_1_Params
{
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CheckBBPlayer
struct ABP_TrophyAward_BaseballBase_C_CheckBBPlayer_Params
{
	bool                                               IsPlayerBatting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isThisPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CheckPlayer
struct ABP_TrophyAward_BaseballBase_C_CheckPlayer_Params
{
	int                                                PlayerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLocalPlayer;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.GetLocalPlayer
struct ABP_TrophyAward_BaseballBase_C_GetLocalPlayer_Params
{
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.UserConstructionScript
struct ABP_TrophyAward_BaseballBase_C_UserConstructionScript_Params
{
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Initialize
struct ABP_TrophyAward_BaseballBase_C_Initialize_Params
{
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.DebugEarn
struct ABP_TrophyAward_BaseballBase_C_DebugEarn_Params
{
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.ReceiveEndPlay
struct ABP_TrophyAward_BaseballBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Baseball
struct ABP_TrophyAward_BaseballBase_C_Baseball_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Strike
struct ABP_TrophyAward_BaseballBase_C_Strike_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.HomeRun
struct ABP_TrophyAward_BaseballBase_C_HomeRun_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.RunnerHome
struct ABP_TrophyAward_BaseballBase_C_RunnerHome_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.AirCatchEvent
struct ABP_TrophyAward_BaseballBase_C_AirCatchEvent_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.TakeBase
struct ABP_TrophyAward_BaseballBase_C_TakeBase_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.SwingAndMiss
struct ABP_TrophyAward_BaseballBase_C_SwingAndMiss_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.Freebee
struct ABP_TrophyAward_BaseballBase_C_Freebee_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.CatchEvent
struct ABP_TrophyAward_BaseballBase_C_CatchEvent_Params
{
	struct FVector                                     FielderPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.GameEnd
struct ABP_TrophyAward_BaseballBase_C_GameEnd_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.PitchEvent
struct ABP_TrophyAward_BaseballBase_C_PitchEvent_Params
{
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.WalkEvent
struct ABP_TrophyAward_BaseballBase_C_WalkEvent_Params
{
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.BadPitch
struct ABP_TrophyAward_BaseballBase_C_BadPitch_Params
{
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.BallEvent
struct ABP_TrophyAward_BaseballBase_C_BallEvent_Params
{
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.OnHit
struct ABP_TrophyAward_BaseballBase_C_OnHit_Params
{
};

// Function BP_TrophyAward_BaseballBase.BP_TrophyAward_BaseballBase_C.ExecuteUbergraph_BP_TrophyAward_BaseballBase
struct ABP_TrophyAward_BaseballBase_C_ExecuteUbergraph_BP_TrophyAward_BaseballBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
