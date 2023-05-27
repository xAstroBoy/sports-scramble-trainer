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
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetBlurTranslationAndScale
	 */
	struct ABW_CenterScoreboard_C_GetBlurTranslationAndScale_Params
	{
	public:
		float                                                      CarX;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Translation;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetCarPosition
	 */
	struct ABW_CenterScoreboard_C_GetCarPosition_Params
	{
	public:
		bool                                                       Red;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L7OD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CarPosition;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetAbsoluteCarPosition
	 */
	struct ABW_CenterScoreboard_C_GetAbsoluteCarPosition_Params
	{
	public:
		float                                                      CarPosition;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetRelativeCarPosition
	 */
	struct ABW_CenterScoreboard_C_GetRelativeCarPosition_Params
	{
	public:
		bool                                                       Red;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3JR6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RelativePosition;                                        // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeTraditionalActors
	 */
	struct ABW_CenterScoreboard_C_InitializeTraditionalActors_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateVideoScoreboardActor
	 */
	struct ABW_CenterScoreboard_C_UpdateVideoScoreboardActor_Params
	{
	public:
		bool                                                       Traditional;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ActorFound;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S7PN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetTimeRemaining
	 */
	struct ABW_CenterScoreboard_C_GetTimeRemaining_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeRoadActors
	 */
	struct ABW_CenterScoreboard_C_InitializeRoadActors_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.Initialize
	 */
	struct ABW_CenterScoreboard_C_Initialize_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.UserConstructionScript
	 */
	struct ABW_CenterScoreboard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_StartRoad__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_StartRoad__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_BlueCarDriftTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_BlueCarDriftTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_RedCarDriftTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_RedCarDriftTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_AnimateFinishLine__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_AnimateFinishLine__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_AnimateStartingLine__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_AnimateStartingLine__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_BlueCarDriveAway__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_BlueCarDriveAway__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_RedCarDriveAway__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_RedCarDriveAway__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_AnimateBlueCarY__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_AnimateBlueCarY__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_AnimateRedCarY__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_AnimateRedCarY__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_ScaleStartingLine__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_ScaleStartingLine__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_SpawnAnimBlueCar__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_SpawnAnimBlueCar__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_SpawnAnimRedCar__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_SpawnAnimRedCar__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__FinishedFunc
	 */
	struct ABW_CenterScoreboard_C_Timeline_TestingFinishLine__FinishedFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__UpdateFunc
	 */
	struct ABW_CenterScoreboard_C_Timeline_TestingFinishLine__UpdateFunc_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveBeginPlay
	 */
	struct ABW_CenterScoreboard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimer
	 */
	struct ABW_CenterScoreboard_C_BW_StartTimer_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerLoop
	 */
	struct ABW_CenterScoreboard_C_TimerLoop_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ClearTimer
	 */
	struct ABW_CenterScoreboard_C_ClearTimer_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall1Thrown
	 */
	struct ABW_CenterScoreboard_C_PlayerBall1Thrown_Params
	{
	public:
		int32_t                                                    AlleyID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall2Thrown
	 */
	struct ABW_CenterScoreboard_C_PlayerBall2Thrown_Params
	{
	public:
		int32_t                                                    AlleyID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBallCountReset
	 */
	struct ABW_CenterScoreboard_C_PlayerBallCountReset_Params
	{
	public:
		int32_t                                                    AlleyID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceTrack
	 */
	struct ABW_CenterScoreboard_C_StartRaceTrack_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopMovingRoad
	 */
	struct ABW_CenterScoreboard_C_StopMovingRoad_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDrift
	 */
	struct ABW_CenterScoreboard_C_BlueCarDrift_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDrift
	 */
	struct ABW_CenterScoreboard_C_RedCarDrift_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowFinishLine
	 */
	struct ABW_CenterScoreboard_C_ShowFinishLine_Params
	{
	public:
		bool                                                       TrainingTimer;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideFinishLine
	 */
	struct ABW_CenterScoreboard_C_HideFinishLine_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetStartLine
	 */
	struct ABW_CenterScoreboard_C_ResetStartLine_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarExit
	 */
	struct ABW_CenterScoreboard_C_BlueCarExit_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarExit
	 */
	struct ABW_CenterScoreboard_C_RedCarExit_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveTick
	 */
	struct ABW_CenterScoreboard_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateCarFromScore
	 */
	struct ABW_CenterScoreboard_C_UpdateCarFromScore_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewScore;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateBlueCarPosition
	 */
	struct ABW_CenterScoreboard_C_UpdateBlueCarPosition_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateRedCarPosition
	 */
	struct ABW_CenterScoreboard_C_UpdateRedCarPosition_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.CarsExitScoreboard
	 */
	struct ABW_CenterScoreboard_C_CarsExitScoreboard_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetBlueCar
	 */
	struct ABW_CenterScoreboard_C_ResetBlueCar_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetRedCar
	 */
	struct ABW_CenterScoreboard_C_ResetRedCar_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetCars
	 */
	struct ABW_CenterScoreboard_C_ResetCars_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceSounds
	 */
	struct ABW_CenterScoreboard_C_StartRaceSounds_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopRaceLoop
	 */
	struct ABW_CenterScoreboard_C_StopRaceLoop_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimerNoRace
	 */
	struct ABW_CenterScoreboard_C_BW_StartTimerNoRace_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_SetInitialTimer
	 */
	struct ABW_CenterScoreboard_C_BW_SetInitialTimer_Params
	{
	public:
		int32_t                                                    InitialTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TrainingTimer;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowTrainingFinishLine
	 */
	struct ABW_CenterScoreboard_C_ShowTrainingFinishLine_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideTrainingFinishLine
	 */
	struct ABW_CenterScoreboard_C_HideTrainingFinishLine_Params
	{	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateMatchScore
	 */
	struct ABW_CenterScoreboard_C_UpdateMatchScore_Params
	{
	public:
		int32_t                                                    Player1GamesWon;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2GamesWon;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.TravelCapsuleOpening
	 */
	struct ABW_CenterScoreboard_C_TravelCapsuleOpening_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.ExecuteUbergraph_BW_CenterScoreboard
	 */
	struct ABW_CenterScoreboard_C_ExecuteUbergraph_BW_CenterScoreboard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerChange__DelegateSignature
	 */
	struct ABW_CenterScoreboard_C_TimerChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    TimeLeft;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
