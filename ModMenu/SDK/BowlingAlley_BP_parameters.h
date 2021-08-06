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

// Function BowlingAlley_BP.BowlingAlley_BP_C.GetBallReturn
struct ABowlingAlley_BP_C_GetBallReturn_Params
{
	class ABowlingBallReturn*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.GetOverrideLaneName
struct ABowlingAlley_BP_C_GetOverrideLaneName_Params
{
	struct FName                                       LaneName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.SetQueuedBalls
struct ABowlingAlley_BP_C_SetQueuedBalls_Params
{
	TArray<class UClass*>                              QueuedBalls;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.QueueRandomBalls
struct ABowlingAlley_BP_C_QueueRandomBalls_Params
{
	int                                                Num;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              Balls;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.GetLaneManagerFromAlley
struct ABowlingAlley_BP_C_GetLaneManagerFromAlley_Params
{
	class ABowlingLaneManager_C*                       BowlingLaneManager;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.GetCenterScoreboardFromAlley
struct ABowlingAlley_BP_C_GetCenterScoreboardFromAlley_Params
{
	class ABW_CenterScoreboard_C*                      CenterScoreboard;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.DebugDecrementLane
struct ABowlingAlley_BP_C_DebugDecrementLane_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.GetScore
struct ABowlingAlley_BP_C_GetScore_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.SendBowlingEvent
struct ABowlingAlley_BP_C_SendBowlingEvent_Params
{
	SportsScramble_EBowlingEvent                       Bowling_Event;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingBall*                                Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.SetLaneList
struct ABowlingAlley_BP_C_SetLaneList_Params
{
	TArray<struct FName>                               LaneList;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ResetToAll;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateFrameBallCounter
struct ABowlingAlley_BP_C_UpdateFrameBallCounter_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecialBall
struct ABowlingAlley_BP_C_SpawnSpecialBall_Params
{
	TEnumAsByte<SpecialBallType_ESpecialBallType>      NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.IsLocallyControlled
struct ABowlingAlley_BP_C_IsLocallyControlled_Params
{
	bool                                               LocallyControlled;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessAudienceSound
struct ABowlingAlley_BP_C_ProcessAudienceSound_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.CycleThroughLanes
struct ABowlingAlley_BP_C_CycleThroughLanes_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.IsLaneReady
struct ABowlingAlley_BP_C_IsLaneReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ResetScore
struct ABowlingAlley_BP_C_ResetScore_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.DebugIncrementLane
struct ABowlingAlley_BP_C_DebugIncrementLane_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.NewLaneCheck
struct ABowlingAlley_BP_C_NewLaneCheck_Params
{
	bool                                               LaneChangeIncoming;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.GetRandomBall
struct ABowlingAlley_BP_C_GetRandomBall_Params
{
	class UClass*                                      BallClass;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessScore
struct ABowlingAlley_BP_C_ProcessScore_Params
{
	int                                                PinsDown;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingBall*                                BowlingBall;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateScoreBoard
struct ABowlingAlley_BP_C_UpdateScoreBoard_Params
{
	int                                                AddedPoints;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.GetActiveLane
struct ABowlingAlley_BP_C_GetActiveLane_Params
{
	class ABowlingLane*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Cleanup
struct ABowlingAlley_BP_C_Cleanup_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Initialize
struct ABowlingAlley_BP_C_Initialize_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.UserConstructionScript
struct ABowlingAlley_BP_C_UserConstructionScript_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__FinishedFunc
struct ABowlingAlley_BP_C_Timeline_ShowStrike__FinishedFunc_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__UpdateFunc
struct ABowlingAlley_BP_C_Timeline_ShowStrike__UpdateFunc_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__FinishedFunc
struct ABowlingAlley_BP_C_Timeline_ShowSpare__FinishedFunc_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__UpdateFunc
struct ABowlingAlley_BP_C_Timeline_ShowSpare__UpdateFunc_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__FinishedFunc
struct ABowlingAlley_BP_C_Timeline_LargeTrainScore__FinishedFunc_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__UpdateFunc
struct ABowlingAlley_BP_C_Timeline_LargeTrainScore__UpdateFunc_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__FinishedFunc
struct ABowlingAlley_BP_C_Timeline_SmallTrainScore__FinishedFunc_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__UpdateFunc
struct ABowlingAlley_BP_C_Timeline_SmallTrainScore__UpdateFunc_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.CreateDebugButtons
struct ABowlingAlley_BP_C_CreateDebugButtons_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.DebugButtonsSelected
struct ABowlingAlley_BP_C_DebugButtonsSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.NetCreateDebugButtons
struct ABowlingAlley_BP_C_NetCreateDebugButtons_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplayStrike
struct ABowlingAlley_BP_C_NetDisplayStrike_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplaySpare
struct ABowlingAlley_BP_C_NetDisplaySpare_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.RedrawScoreBoard
struct ABowlingAlley_BP_C_RedrawScoreBoard_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.NetRedrawTrainingScoreboard
struct ABowlingAlley_BP_C_NetRedrawTrainingScoreboard_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.NetTrainingScoreFontSize
struct ABowlingAlley_BP_C_NetTrainingScoreFontSize_Params
{
	int                                                NewFontSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ClearTrainingScoreboard
struct ABowlingAlley_BP_C_ClearTrainingScoreboard_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerRedrawTrainingScoreboard
struct ABowlingAlley_BP_C_ServerRedrawTrainingScoreboard_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerUpdateScoreBoard
struct ABowlingAlley_BP_C_ServerUpdateScoreBoard_Params
{
	int                                                AddedPoints;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.NetUpdateScoreBoard
struct ABowlingAlley_BP_C_NetUpdateScoreBoard_Params
{
	int                                                AddedPoints;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplayStrike
struct ABowlingAlley_BP_C_ServerDisplayStrike_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplaySpare
struct ABowlingAlley_BP_C_ServerDisplaySpare_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.PrepRevealTrainingScoreboard
struct ABowlingAlley_BP_C_PrepRevealTrainingScoreboard_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.RevealTrainingScoreboard
struct ABowlingAlley_BP_C_RevealTrainingScoreboard_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveBeginPlay
struct ABowlingAlley_BP_C_ReceiveBeginPlay_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.BallRollComplete
struct ABowlingAlley_BP_C_BallRollComplete_Params
{
	class ABowlingBall*                                Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Scoring;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Out;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               restricted;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.OnBallOut
struct ABowlingAlley_BP_C_OnBallOut_Params
{
	class ABowlingBall*                                Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               pit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               restricted;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwap
struct ABowlingAlley_BP_C_LaneSwap_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.WaitForPinResetComplete
struct ABowlingAlley_BP_C_WaitForPinResetComplete_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwapComplete
struct ABowlingAlley_BP_C_LaneSwapComplete_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveEndPlay
struct ABowlingAlley_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.PindeckHidden
struct ABowlingAlley_BP_C_PindeckHidden_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallCreated
struct ABowlingAlley_BP_C_StandardBallCreated_Params
{
	class ABW_Ball_Base_C*                             NewBall;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.EnableAlley
struct ABowlingAlley_BP_C_EnableAlley_Params
{
	bool                                               EnableDebug;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisableLaneChanges;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Traditional;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.DisableAlley
struct ABowlingAlley_BP_C_DisableAlley_Params
{
	bool                                               ResetLane;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.AdditionalAddedScore
struct ABowlingAlley_BP_C_AdditionalAddedScore_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.FinishLaneReset
struct ABowlingAlley_BP_C_FinishLaneReset_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecificBalls
struct ABowlingAlley_BP_C_SpawnSpecificBalls_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallCreated
struct ABowlingAlley_BP_C_ScrambleBallCreated_Params
{
	class ABW_Ball_Base_C*                             NewBall;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnStandardBalls
struct ABowlingAlley_BP_C_SpawnStandardBalls_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.BallFinishedLane
struct ABowlingAlley_BP_C_BallFinishedLane_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ClearBall
struct ABowlingAlley_BP_C_ClearBall_Params
{
	class ABowlingBall*                                Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.NetPlayerAnnouncerVO
struct ABowlingAlley_BP_C_NetPlayerAnnouncerVO_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SoftSoundIDX;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ResetAnnouncerVO
struct ABowlingAlley_BP_C_ResetAnnouncerVO_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallDestroyed
struct ABowlingAlley_BP_C_StandardBallDestroyed_Params
{
	class AScramPrimitiveActor*                        DestroyedPrimitive;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallDestroyed
struct ABowlingAlley_BP_C_ScrambleBallDestroyed_Params
{
	class AScramPrimitiveActor*                        DestroyedPrimitive;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.InstigatorBallDestroyed
struct ABowlingAlley_BP_C_InstigatorBallDestroyed_Params
{
	class AScramPrimitiveActor*                        DestroyedPrimitive;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBall
struct ABowlingAlley_BP_C_AddInstigatorBall_Params
{
	class ABowlingBall*                                InstigatorBall;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.NotifyGameEnding
struct ABowlingAlley_BP_C_NotifyGameEnding_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnRandomBall
struct ABowlingAlley_BP_C_SpawnRandomBall_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.BeginTraditionalFrame
struct ABowlingAlley_BP_C_BeginTraditionalFrame_Params
{
	bool                                               Solo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.EndTraditionalFrame
struct ABowlingAlley_BP_C_EndTraditionalFrame_Params
{
	bool                                               Solo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LastFrame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ResetLane
struct ABowlingAlley_BP_C_ResetLane_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer1BallThrown
struct ABowlingAlley_BP_C_ServerPlayer1BallThrown_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer2BallThrown
struct ABowlingAlley_BP_C_ServerPlayer2BallThrown_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerCycleThroughLanes
struct ABowlingAlley_BP_C_ServerCycleThroughLanes_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerResetPins
struct ABowlingAlley_BP_C_ServerResetPins_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayerBallCountReset
struct ABowlingAlley_BP_C_ServerPlayerBallCountReset_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerSpawnSpecialBall
struct ABowlingAlley_BP_C_ServerSpawnSpecialBall_Params
{
	TEnumAsByte<SpecialBallType_ESpecialBallType>      NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ServerProcessPinsDown
struct ABowlingAlley_BP_C_ServerProcessPinsDown_Params
{
	int                                                Pins;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.SlideBallReturn
struct ABowlingAlley_BP_C_SlideBallReturn_Params
{
	bool                                               slideForward;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Multi_ResetFrameCounts
struct ABowlingAlley_BP_C_Multi_ResetFrameCounts_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.Server_SpawnSpecificBall
struct ABowlingAlley_BP_C_Server_SpawnSpecificBall_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.PlayerAnnouncerVO
struct ABowlingAlley_BP_C_PlayerAnnouncerVO_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBallCode
struct ABowlingAlley_BP_C_AddInstigatorBallCode_Params
{
	class ABowlingBall*                                Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.NetSetLaneList
struct ABowlingAlley_BP_C_NetSetLaneList_Params
{
	TArray<struct FName>                               LaneList;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ResetToAll;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.MoveBallReturn
struct ABowlingAlley_BP_C_MoveBallReturn_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ExecuteUbergraph_BowlingAlley_BP
struct ABowlingAlley_BP_C_ExecuteUbergraph_BowlingAlley_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessPinsDown__DelegateSignature
struct ABowlingAlley_BP_C_ProcessPinsDown__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Pins;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.LaneReady__DelegateSignature
struct ABowlingAlley_BP_C_LaneReady__DelegateSignature_Params
{
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.SpecialScoring__DelegateSignature
struct ABowlingAlley_BP_C_SpecialScoring__DelegateSignature_Params
{
	int                                                LaneID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SpecialPoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.CurrentLaneScore__DelegateSignature
struct ABowlingAlley_BP_C_CurrentLaneScore__DelegateSignature_Params
{
	int                                                LaneID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingAlley_BP.BowlingAlley_BP_C.BowlingEvent__DelegateSignature
struct ABowlingAlley_BP_C_BowlingEvent__DelegateSignature_Params
{
	int                                                PlayerId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBowlingEvent                       BowlingEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
