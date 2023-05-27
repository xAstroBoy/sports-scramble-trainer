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
	 * Function BW_Train_Base.BW_Train_Base_C.AddActorToGameElementList
	 */
	struct ABW_Train_Base_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.Shutdown
	 */
	struct ABW_Train_Base_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.ToggleLaneChanging
	 */
	struct ABW_Train_Base_C_ToggleLaneChanging_Params
	{
	public:
		bool                                                       DisableLaneChanges;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.ShowScoreboard
	 */
	struct ABW_Train_Base_C_ShowScoreboard_Params
	{	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.CalculateEndScore
	 */
	struct ABW_Train_Base_C_CalculateEndScore_Params
	{	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.ResetLane
	 */
	struct ABW_Train_Base_C_ResetLane_Params
	{
	public:
		bool                                                       ResetScore;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetPins;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetBallCounter;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.DestroyAllBalls_1
	 */
	struct ABW_Train_Base_C_DestroyAllBalls_1_Params
	{	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.Initialize
	 */
	struct ABW_Train_Base_C_Initialize_Params
	{	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.UserConstructionScript
	 */
	struct ABW_Train_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.OnLoaded_B645D8DE43A43D6A03D922BF743B0B01
	 */
	struct ABW_Train_Base_C_OnLoaded_B645D8DE43A43D6A03D922BF743B0B01_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.ReceiveBeginPlay
	 */
	struct ABW_Train_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.BowlingEvent
	 */
	struct ABW_Train_Base_C_BowlingEvent_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBowlingEvent                                              BowlingEvent;                                            // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.SpecificBallCreated
	 */
	struct ABW_Train_Base_C_SpecificBallCreated_Params
	{
	public:
		class ABW_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.RandomBallCreated
	 */
	struct ABW_Train_Base_C_RandomBallCreated_Params
	{
	public:
		class ABW_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.GetCurrentLaneScore
	 */
	struct ABW_Train_Base_C_GetCurrentLaneScore_Params
	{
	public:
		int32_t                                                    LaneID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentScore;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.EndOfGame
	 */
	struct ABW_Train_Base_C_EndOfGame_Params
	{	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.SpecialScoreEvent
	 */
	struct ABW_Train_Base_C_SpecialScoreEvent_Params
	{
	public:
		int32_t                                                    LaneID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Points;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.PlayAudio_Countdown
	 */
	struct ABW_Train_Base_C_PlayAudio_Countdown_Params
	{	};

	/**
	 * Function BW_Train_Base.BW_Train_Base_C.ExecuteUbergraph_BW_Train_Base
	 */
	struct ABW_Train_Base_C_ExecuteUbergraph_BW_Train_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
