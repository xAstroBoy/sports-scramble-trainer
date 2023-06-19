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
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateWidgetOnCultureChange
	 */
	struct ATennisArenaScoreboard_C_UpdateWidgetOnCultureChange_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.SetLocText
	 */
	struct ATennisArenaScoreboard_C_SetLocText_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnBallIndicator
	 */
	struct ATennisArenaScoreboard_C_SpawnBallIndicator_Params
	{
	public:
		bool                                                       LeftSide;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateNetworkNames
	 */
	struct ATennisArenaScoreboard_C_UpdateNetworkNames_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateRuleType
	 */
	struct ATennisArenaScoreboard_C_UpdateRuleType_Params
	{
	public:
		bool                                                       TraditionalScoring;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6R91[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateServeIndicator
	 */
	struct ATennisArenaScoreboard_C_UpdateServeIndicator_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Player2Serve;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateScore
	 */
	struct ATennisArenaScoreboard_C_UpdateScore_Params
	{
	public:
		int32_t                                                    Player1Score;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Score;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player1Games;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Games;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Player2Serve;                                            // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdateScoreOnly;                                         // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.Initialize
	 */
	struct ATennisArenaScoreboard_C_Initialize_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.UserConstructionScript
	 */
	struct ATennisArenaScoreboard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover1__FinishedFunc
	 */
	struct ATennisArenaScoreboard_C_Timeline_Cover1__FinishedFunc_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover1__UpdateFunc
	 */
	struct ATennisArenaScoreboard_C_Timeline_Cover1__UpdateFunc_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover2__FinishedFunc
	 */
	struct ATennisArenaScoreboard_C_Timeline_Cover2__FinishedFunc_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover2__UpdateFunc
	 */
	struct ATennisArenaScoreboard_C_Timeline_Cover2__UpdateFunc_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.ReceiveBeginPlay
	 */
	struct ATennisArenaScoreboard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowP1Serve
	 */
	struct ATennisArenaScoreboard_C_ShowP1Serve_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.HideP1Serve
	 */
	struct ATennisArenaScoreboard_C_HideP1Serve_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowP2Serve
	 */
	struct ATennisArenaScoreboard_C_ShowP2Serve_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.HideP2Serve
	 */
	struct ATennisArenaScoreboard_C_HideP2Serve_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowLeftSideServe
	 */
	struct ATennisArenaScoreboard_C_ShowLeftSideServe_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.RightSideDestroyed
	 */
	struct ATennisArenaScoreboard_C_RightSideDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowRightSideServe
	 */
	struct ATennisArenaScoreboard_C_ShowRightSideServe_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.LeftSideDestroyed
	 */
	struct ATennisArenaScoreboard_C_LeftSideDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnRight
	 */
	struct ATennisArenaScoreboard_C_SpawnRight_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnLeft
	 */
	struct ATennisArenaScoreboard_C_SpawnLeft_Params
	{	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.ReceiveEndPlay
	 */
	struct ATennisArenaScoreboard_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.TravelCapsuleOpen
	 */
	struct ATennisArenaScoreboard_C_TravelCapsuleOpen_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisArenaScoreboard.TennisArenaScoreboard_C.ExecuteUbergraph_TennisArenaScoreboard
	 */
	struct ATennisArenaScoreboard_C_ExecuteUbergraph_TennisArenaScoreboard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D8VP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
