#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.GetBallReturn
	 */
	struct ABowlingAlley_BP_C_GetBallReturn_Params
	{
	public:
		class ABowlingBallReturn*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.GetOverrideLaneName
	 */
	struct ABowlingAlley_BP_C_GetOverrideLaneName_Params
	{
	public:
		class FName                                                LaneName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.SetQueuedBalls
	 */
	struct ABowlingAlley_BP_C_SetQueuedBalls_Params
	{
	public:
		TArray<class UClass*>                                      QueuedBalls;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.QueueRandomBalls
	 */
	struct ABowlingAlley_BP_C_QueueRandomBalls_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_52J6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UClass*>                                      Balls;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.GetLaneManagerFromAlley
	 */
	struct ABowlingAlley_BP_C_GetLaneManagerFromAlley_Params
	{
	public:
		class ABowlingLaneManager_C*                               BowlingLaneManager;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.GetCenterScoreboardFromAlley
	 */
	struct ABowlingAlley_BP_C_GetCenterScoreboardFromAlley_Params
	{
	public:
		class ABW_CenterScoreboard_C*                              CenterScoreboard;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.DebugDecrementLane
	 */
	struct ABowlingAlley_BP_C_DebugDecrementLane_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.GetScore
	 */
	struct ABowlingAlley_BP_C_GetScore_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.SendBowlingEvent
	 */
	struct ABowlingAlley_BP_C_SendBowlingEvent_Params
	{
	public:
		EBowlingEvent                                              BowlingEvent;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SRSU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABowlingBall*                                        Ball;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.SetLaneList
	 */
	struct ABowlingAlley_BP_C_SetLaneList_Params
	{
	public:
		TArray<class FName>                                        LaneList;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       ResetToAll;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZBEJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateFrameBallCounter
	 */
	struct ABowlingAlley_BP_C_UpdateFrameBallCounter_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecialBall
	 */
	struct ABowlingAlley_BP_C_SpawnSpecialBall_Params
	{
	public:
		ESpecialBallType                                           NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LL2A[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.IsLocallyControlled
	 */
	struct ABowlingAlley_BP_C_IsLocallyControlled_Params
	{
	public:
		bool                                                       LocallyControlled;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KX07[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessAudienceSound
	 */
	struct ABowlingAlley_BP_C_ProcessAudienceSound_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.CycleThroughLanes
	 */
	struct ABowlingAlley_BP_C_CycleThroughLanes_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.IsLaneReady
	 */
	struct ABowlingAlley_BP_C_IsLaneReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9QKG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ResetScore
	 */
	struct ABowlingAlley_BP_C_ResetScore_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.DebugIncrementLane
	 */
	struct ABowlingAlley_BP_C_DebugIncrementLane_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.NewLaneCheck
	 */
	struct ABowlingAlley_BP_C_NewLaneCheck_Params
	{
	public:
		bool                                                       LaneChangeIncoming;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.GetRandomBall
	 */
	struct ABowlingAlley_BP_C_GetRandomBall_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QZMQ[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessScore
	 */
	struct ABowlingAlley_BP_C_ProcessScore_Params
	{
	public:
		int32_t                                                    PinsDown;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DMAS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABowlingBall*                                        BowlingBall;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateScoreBoard
	 */
	struct ABowlingAlley_BP_C_UpdateScoreBoard_Params
	{
	public:
		int32_t                                                    AddedPoints;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.GetActiveLane
	 */
	struct ABowlingAlley_BP_C_GetActiveLane_Params
	{
	public:
		class ABowlingLane*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Cleanup
	 */
	struct ABowlingAlley_BP_C_Cleanup_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Initialize
	 */
	struct ABowlingAlley_BP_C_Initialize_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.UserConstructionScript
	 */
	struct ABowlingAlley_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__FinishedFunc
	 */
	struct ABowlingAlley_BP_C_Timeline_ShowStrike__FinishedFunc_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__UpdateFunc
	 */
	struct ABowlingAlley_BP_C_Timeline_ShowStrike__UpdateFunc_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__FinishedFunc
	 */
	struct ABowlingAlley_BP_C_Timeline_ShowSpare__FinishedFunc_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__UpdateFunc
	 */
	struct ABowlingAlley_BP_C_Timeline_ShowSpare__UpdateFunc_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__FinishedFunc
	 */
	struct ABowlingAlley_BP_C_Timeline_LargeTrainScore__FinishedFunc_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__UpdateFunc
	 */
	struct ABowlingAlley_BP_C_Timeline_LargeTrainScore__UpdateFunc_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__FinishedFunc
	 */
	struct ABowlingAlley_BP_C_Timeline_SmallTrainScore__FinishedFunc_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__UpdateFunc
	 */
	struct ABowlingAlley_BP_C_Timeline_SmallTrainScore__UpdateFunc_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.CreateDebugButtons
	 */
	struct ABowlingAlley_BP_C_CreateDebugButtons_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.DebugButtonsSelected
	 */
	struct ABowlingAlley_BP_C_DebugButtonsSelected_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.NetCreateDebugButtons
	 */
	struct ABowlingAlley_BP_C_NetCreateDebugButtons_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplayStrike
	 */
	struct ABowlingAlley_BP_C_NetDisplayStrike_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplaySpare
	 */
	struct ABowlingAlley_BP_C_NetDisplaySpare_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.RedrawScoreBoard
	 */
	struct ABowlingAlley_BP_C_RedrawScoreBoard_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.NetRedrawTrainingScoreboard
	 */
	struct ABowlingAlley_BP_C_NetRedrawTrainingScoreboard_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.NetTrainingScoreFontSize
	 */
	struct ABowlingAlley_BP_C_NetTrainingScoreFontSize_Params
	{
	public:
		int32_t                                                    NewFontSize;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ClearTrainingScoreboard
	 */
	struct ABowlingAlley_BP_C_ClearTrainingScoreboard_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerRedrawTrainingScoreboard
	 */
	struct ABowlingAlley_BP_C_ServerRedrawTrainingScoreboard_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerUpdateScoreBoard
	 */
	struct ABowlingAlley_BP_C_ServerUpdateScoreBoard_Params
	{
	public:
		int32_t                                                    AddedPoints;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.NetUpdateScoreBoard
	 */
	struct ABowlingAlley_BP_C_NetUpdateScoreBoard_Params
	{
	public:
		int32_t                                                    AddedPoints;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplayStrike
	 */
	struct ABowlingAlley_BP_C_ServerDisplayStrike_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplaySpare
	 */
	struct ABowlingAlley_BP_C_ServerDisplaySpare_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.PrepRevealTrainingScoreboard
	 */
	struct ABowlingAlley_BP_C_PrepRevealTrainingScoreboard_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.RevealTrainingScoreboard
	 */
	struct ABowlingAlley_BP_C_RevealTrainingScoreboard_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveBeginPlay
	 */
	struct ABowlingAlley_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.BallRollComplete
	 */
	struct ABowlingAlley_BP_C_BallRollComplete_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Scoring;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Out;                                                     // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       restricted;                                              // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.OnBallOut
	 */
	struct ABowlingAlley_BP_C_OnBallOut_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       pit;                                                     // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       restricted;                                              // 0x0009(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwap
	 */
	struct ABowlingAlley_BP_C_LaneSwap_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.WaitForPinResetComplete
	 */
	struct ABowlingAlley_BP_C_WaitForPinResetComplete_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwapComplete
	 */
	struct ABowlingAlley_BP_C_LaneSwapComplete_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveEndPlay
	 */
	struct ABowlingAlley_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.PindeckHidden
	 */
	struct ABowlingAlley_BP_C_PindeckHidden_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallCreated
	 */
	struct ABowlingAlley_BP_C_StandardBallCreated_Params
	{
	public:
		class ABW_Ball_Base_C*                                     NewBall;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.EnableAlley
	 */
	struct ABowlingAlley_BP_C_EnableAlley_Params
	{
	public:
		bool                                                       EnableDebug;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DisableLaneChanges;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Traditional;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.DisableAlley
	 */
	struct ABowlingAlley_BP_C_DisableAlley_Params
	{
	public:
		bool                                                       ResetLane;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.AdditionalAddedScore
	 */
	struct ABowlingAlley_BP_C_AdditionalAddedScore_Params
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AddedScore;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.FinishLaneReset
	 */
	struct ABowlingAlley_BP_C_FinishLaneReset_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecificBalls
	 */
	struct ABowlingAlley_BP_C_SpawnSpecificBalls_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallCreated
	 */
	struct ABowlingAlley_BP_C_ScrambleBallCreated_Params
	{
	public:
		class ABW_Ball_Base_C*                                     NewBall;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnStandardBalls
	 */
	struct ABowlingAlley_BP_C_SpawnStandardBalls_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.BallFinishedLane
	 */
	struct ABowlingAlley_BP_C_BallFinishedLane_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ClearBall
	 */
	struct ABowlingAlley_BP_C_ClearBall_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.NetPlayerAnnouncerVO
	 */
	struct ABowlingAlley_BP_C_NetPlayerAnnouncerVO_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SoftSoundIDX;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ResetAnnouncerVO
	 */
	struct ABowlingAlley_BP_C_ResetAnnouncerVO_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallDestroyed
	 */
	struct ABowlingAlley_BP_C_StandardBallDestroyed_Params
	{
	public:
		class AScramPrimitiveActor*                                DestroyedPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallDestroyed
	 */
	struct ABowlingAlley_BP_C_ScrambleBallDestroyed_Params
	{
	public:
		class AScramPrimitiveActor*                                DestroyedPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.InstigatorBallDestroyed
	 */
	struct ABowlingAlley_BP_C_InstigatorBallDestroyed_Params
	{
	public:
		class AScramPrimitiveActor*                                DestroyedPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBall
	 */
	struct ABowlingAlley_BP_C_AddInstigatorBall_Params
	{
	public:
		class ABowlingBall*                                        InstigatorBall;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.NotifyGameEnding
	 */
	struct ABowlingAlley_BP_C_NotifyGameEnding_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnRandomBall
	 */
	struct ABowlingAlley_BP_C_SpawnRandomBall_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.BeginTraditionalFrame
	 */
	struct ABowlingAlley_BP_C_BeginTraditionalFrame_Params
	{
	public:
		bool                                                       Solo;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.EndTraditionalFrame
	 */
	struct ABowlingAlley_BP_C_EndTraditionalFrame_Params
	{
	public:
		bool                                                       Solo;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LastFrame;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ResetLane
	 */
	struct ABowlingAlley_BP_C_ResetLane_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer1BallThrown
	 */
	struct ABowlingAlley_BP_C_ServerPlayer1BallThrown_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer2BallThrown
	 */
	struct ABowlingAlley_BP_C_ServerPlayer2BallThrown_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerCycleThroughLanes
	 */
	struct ABowlingAlley_BP_C_ServerCycleThroughLanes_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerResetPins
	 */
	struct ABowlingAlley_BP_C_ServerResetPins_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayerBallCountReset
	 */
	struct ABowlingAlley_BP_C_ServerPlayerBallCountReset_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerSpawnSpecialBall
	 */
	struct ABowlingAlley_BP_C_ServerSpawnSpecialBall_Params
	{
	public:
		ESpecialBallType                                           NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ServerProcessPinsDown
	 */
	struct ABowlingAlley_BP_C_ServerProcessPinsDown_Params
	{
	public:
		int32_t                                                    Pins;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.SlideBallReturn
	 */
	struct ABowlingAlley_BP_C_SlideBallReturn_Params
	{
	public:
		bool                                                       slideForward;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Multi_ResetFrameCounts
	 */
	struct ABowlingAlley_BP_C_Multi_ResetFrameCounts_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.Server_SpawnSpecificBall
	 */
	struct ABowlingAlley_BP_C_Server_SpawnSpecificBall_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.PlayerAnnouncerVO
	 */
	struct ABowlingAlley_BP_C_PlayerAnnouncerVO_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3GE1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBallCode
	 */
	struct ABowlingAlley_BP_C_AddInstigatorBallCode_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.NetSetLaneList
	 */
	struct ABowlingAlley_BP_C_NetSetLaneList_Params
	{
	public:
		TArray<class FName>                                        LaneList;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       ResetToAll;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.MoveBallReturn
	 */
	struct ABowlingAlley_BP_C_MoveBallReturn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ExecuteUbergraph_BowlingAlley_BP
	 */
	struct ABowlingAlley_BP_C_ExecuteUbergraph_BowlingAlley_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessPinsDown__DelegateSignature
	 */
	struct ABowlingAlley_BP_C_ProcessPinsDown__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Pins;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.LaneReady__DelegateSignature
	 */
	struct ABowlingAlley_BP_C_LaneReady__DelegateSignature_Params
	{	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.SpecialScoring__DelegateSignature
	 */
	struct ABowlingAlley_BP_C_SpecialScoring__DelegateSignature_Params
	{
	public:
		int32_t                                                    LaneID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SpecialPoints;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.CurrentLaneScore__DelegateSignature
	 */
	struct ABowlingAlley_BP_C_CurrentLaneScore__DelegateSignature_Params
	{
	public:
		int32_t                                                    LaneID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentScore;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BowlingAlley_BP.BowlingAlley_BP_C.BowlingEvent__DelegateSignature
	 */
	struct ABowlingAlley_BP_C_BowlingEvent__DelegateSignature_Params
	{
	public:
		int32_t                                                    PlayerId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBowlingEvent                                              BowlingEvent;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
