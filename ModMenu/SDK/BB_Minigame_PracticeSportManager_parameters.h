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

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnCatcherWithVFX
struct ABB_Minigame_PracticeSportManager_C_SpawnCatcherWithVFX_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnFielders
struct ABB_Minigame_PracticeSportManager_C_SpawnFielders_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnInstrumentSelector
struct ABB_Minigame_PracticeSportManager_C_SpawnInstrumentSelector_Params
{
	bool                                               InstrumentDamageEnabled;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InstrumentSelected
struct ABB_Minigame_PracticeSportManager_C_InstrumentSelected_Params
{
	class ABaseballInstrument*                         SelectedInstrument;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InstrumentBroken
struct ABB_Minigame_PracticeSportManager_C_InstrumentBroken_Params
{
	class ABaseballInstrument*                         Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnPitcher
struct ABB_Minigame_PracticeSportManager_C_SpawnPitcher_Params
{
	class AActor*                                      PitcherActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.EndGameCleanUp
struct ABB_Minigame_PracticeSportManager_C_EndGameCleanUp_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnLocalHelper
struct ABB_Minigame_PracticeSportManager_C_SpawnLocalHelper_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.CleanUpGameElements
struct ABB_Minigame_PracticeSportManager_C_CleanUpGameElements_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.TeleportPlayer
struct ABB_Minigame_PracticeSportManager_C_TeleportPlayer_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.Initialize
struct ABB_Minigame_PracticeSportManager_C_Initialize_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnEquipmentAndAI
struct ABB_Minigame_PracticeSportManager_C_SpawnEquipmentAndAI_Params
{
	bool                                               PlayerBatting;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.Minigame_SpawnStrikezone
struct ABB_Minigame_PracticeSportManager_C_Minigame_SpawnStrikezone_Params
{
	bool                                               ShrinkOnSpawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CatcherPresent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnBatter
struct ABB_Minigame_PracticeSportManager_C_SpawnBatter_Params
{
	class AActor*                                      BattingActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.UserConstructionScript
struct ABB_Minigame_PracticeSportManager_C_UserConstructionScript_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.BaseballEvent
struct ABB_Minigame_PracticeSportManager_C_BaseballEvent_Params
{
	SportsScramble_EBaseballEvent                      BaseballEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ReceiveBeginPlay
struct ABB_Minigame_PracticeSportManager_C_ReceiveBeginPlay_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.NoTeleport
struct ABB_Minigame_PracticeSportManager_C_NoTeleport_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HandleBackOrResetButton
struct ABB_Minigame_PracticeSportManager_C_HandleBackOrResetButton_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.GameSelectorReset
struct ABB_Minigame_PracticeSportManager_C_GameSelectorReset_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ReceiveEndPlay
struct ABB_Minigame_PracticeSportManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.FinishedTeleport
struct ABB_Minigame_PracticeSportManager_C_FinishedTeleport_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SetDominantHand
struct ABB_Minigame_PracticeSportManager_C_SetDominantHand_Params
{
	class AActor*                                      DominantHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Mitt_C*                                  Mitt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.OnInstrumentSelected
struct ABB_Minigame_PracticeSportManager_C_OnInstrumentSelected_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.OnInstrumentBroken
struct ABB_Minigame_PracticeSportManager_C_OnInstrumentBroken_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RemoveCatcher
struct ABB_Minigame_PracticeSportManager_C_RemoveCatcher_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ExecuteUbergraph_BB_Minigame_PracticeSportManager
struct ABB_Minigame_PracticeSportManager_C_ExecuteUbergraph_BB_Minigame_PracticeSportManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RunnersReady__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_RunnersReady__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RunnerHome__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_RunnerHome__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InvalidHit__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_InvalidHit__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ValidHit__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_ValidHit__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitHomerun__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_HitHomerun__DelegateSignature_Params
{
	bool                                               BasesLoaded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitTriple__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_HitTriple__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitDouble__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_HitDouble__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitSingle__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_HitSingle__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitFoul__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_HitFoul__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitCaught__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_HitCaught__DelegateSignature_Params
{
	struct FVector                                     BallLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.CatcherThrow__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_CatcherThrow__DelegateSignature_Params
{
	class ABaseballBall*                               Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchedStrike__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_PitchedStrike__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchedBall__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_PitchedBall__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SwingAndMiss__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_SwingAndMiss__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchHit__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_PitchHit__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitcherPitched__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_PitcherPitched__DelegateSignature_Params
{
};

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitcherReady__DelegateSignature
struct ABB_Minigame_PracticeSportManager_C_PitcherReady__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
