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

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HasScrambleOption
struct ABaseballBallSelector_BP_C_HasScrambleOption_Params
{
	class ABaseballMitt*                               Mitt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasOption;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_Training_GetBallVO
struct ABaseballBallSelector_BP_C_BB_Training_GetBallVO_Params
{
	class UClass*                                      Ball_Class;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetIconLocations
struct ABaseballBallSelector_BP_C_GetIconLocations_Params
{
	bool                                               TL;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TR;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BL;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BR;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetImbuingOdds
struct ABaseballBallSelector_BP_C_GetImbuingOdds_Params
{
	struct FChance                                     Imbue_Chance;                                              // (Parm, OutParm, NoDestructor)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Show All Target
struct ABaseballBallSelector_BP_C_Show_All_Target_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetNumToSpawn
struct ABaseballBallSelector_BP_C_GetNumToSpawn_Params
{
	int                                                Spawn_Number;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CanSpawnBalls
struct ABaseballBallSelector_BP_C_CanSpawnBalls_Params
{
	bool                                               Can_Spawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.UserConstructionScript
struct ABaseballBallSelector_BP_C_UserConstructionScript_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3
struct ABaseballBallSelector_BP_C_OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_SpawnBlankTargets
struct ABaseballBallSelector_BP_C_BB_TNG_SpawnBlankTargets_Params
{
	bool                                               BindOnHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_BlinkTargets
struct ABaseballBallSelector_BP_C_BB_TNG_BlinkTargets_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_CleanUpDemoTargets
struct ABaseballBallSelector_BP_C_BB_TNG_CleanUpDemoTargets_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_01
struct ABaseballBallSelector_BP_C_HitTrainingTarget_01_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_TrackTargetHits
struct ABaseballBallSelector_BP_C_BB_TNG_TrackTargetHits_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_02
struct ABaseballBallSelector_BP_C_HitTrainingTarget_02_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_03
struct ABaseballBallSelector_BP_C_HitTrainingTarget_03_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_04
struct ABaseballBallSelector_BP_C_HitTrainingTarget_04_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SpawnInitialIcons
struct ABaseballBallSelector_BP_C_BB_TNG_RM03_SpawnInitialIcons_Params
{
	class UClass*                                      BB_BallClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBaseballBallType                   BB_BallType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  BB_BallIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              imbueChance;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_CleanUpAllButFrisbee
struct ABaseballBallSelector_BP_C_BB_TNG_RM03_CleanUpAllButFrisbee_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CustomEvent
struct ABaseballBallSelector_BP_C_CustomEvent_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_GiveMittScrambleBall
struct ABaseballBallSelector_BP_C_BB_TNG_GiveMittScrambleBall_Params
{
	class UClass*                                      Ball_Class;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Imbued;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SingleIcon
struct ABaseballBallSelector_BP_C_BB_TNG_RM03_SingleIcon_Params
{
	class UClass*                                      BB_BallClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBaseballBallType                   BB_BallType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  BB_BallIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              imbueChance;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBaseballScrambleTargetLocations    Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.IndividualTargetHit
struct ABaseballBallSelector_BP_C_IndividualTargetHit_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveBeginPlay
struct ABaseballBallSelector_BP_C_ReceiveBeginPlay_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReadyBalls
struct ABaseballBallSelector_BP_C_ReadyBalls_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Change Round
struct ABaseballBallSelector_BP_C_Change_Round_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ResolveAndClear
struct ABaseballBallSelector_BP_C_ResolveAndClear_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.SendThroughBall
struct ABaseballBallSelector_BP_C_SendThroughBall_Params
{
	class ABaseballPitchingTarget*                     NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveEndPlay
struct ABaseballBallSelector_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.PlayAsync2D
struct ABaseballBallSelector_BP_C_PlayAsync2D_Params
{
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ExecuteUbergraph_BaseballBallSelector_BP
struct ABaseballBallSelector_BP_C_ExecuteUbergraph_BaseballBallSelector_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TrainingTargetHit__DelegateSignature
struct ABaseballBallSelector_BP_C_TrainingTargetHit__DelegateSignature_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TargetsUpdated__DelegateSignature
struct ABaseballBallSelector_BP_C_TargetsUpdated__DelegateSignature_Params
{
	bool                                               TL;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TR;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BL;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BR;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
