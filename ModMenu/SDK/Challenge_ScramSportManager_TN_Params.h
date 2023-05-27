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
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TN_SportMgr_UnbindEvents
	 */
	struct AChallenge_ScramSportManager_TN_C_TN_SportMgr_UnbindEvents_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SpawnChallengeLocalHelper
	 */
	struct AChallenge_ScramSportManager_TN_C_SpawnChallengeLocalHelper_Params
	{
	public:
		bool                                                       UseScoreboard;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MYRZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindExistingServeLocationIndicator
	 */
	struct AChallenge_ScramSportManager_TN_C_BindExistingServeLocationIndicator_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnRep_ServeLocationIndicator
	 */
	struct AChallenge_ScramSportManager_TN_C_OnRep_ServeLocationIndicator_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BindNewServeLocationIndicator
	 */
	struct AChallenge_ScramSportManager_TN_C_BindNewServeLocationIndicator_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ShowDebugInfo
	 */
	struct AChallenge_ScramSportManager_TN_C_ShowDebugInfo_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateServeLocation
	 */
	struct AChallenge_ScramSportManager_TN_C_CreateServeLocation_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7HXW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.AllowAIServe
	 */
	struct AChallenge_ScramSportManager_TN_C_AllowAIServe_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateReceiveLocation
	 */
	struct AChallenge_ScramSportManager_TN_C_CreateReceiveLocation_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CBOQ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetGameStatus
	 */
	struct AChallenge_ScramSportManager_TN_C_GetGameStatus_Params
	{
	public:
		class FText                                                StatusText;                                              // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GetPointType
	 */
	struct AChallenge_ScramSportManager_TN_C_GetPointType_Params
	{
	public:
		class FText                                                PointType;                                               // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ResetResultBools
	 */
	struct AChallenge_ScramSportManager_TN_C_ResetResultBools_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Cleanup
	 */
	struct AChallenge_ScramSportManager_TN_C_Cleanup_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Initialize
	 */
	struct AChallenge_ScramSportManager_TN_C_Initialize_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.UserConstructionScript
	 */
	struct AChallenge_ScramSportManager_TN_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8
	 */
	struct AChallenge_ScramSportManager_TN_C_OnLoaded_291C6E1E4A36272D407BB6BD1AEACFD8_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_C4FE474944769B8438FACDAFB40F4516
	 */
	struct AChallenge_ScramSportManager_TN_C_OnLoaded_C4FE474944769B8438FACDAFB40F4516_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C
	 */
	struct AChallenge_ScramSportManager_TN_C_OnLoaded_F20EB7244AAFC3B5B43398AC7B7E505C_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveBeginPlay
	 */
	struct AChallenge_ScramSportManager_TN_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.TennisEvent
	 */
	struct AChallenge_ScramSportManager_TN_C_TennisEvent_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETennisEvent                                               TennisEvent;                                             // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ReceiveEndPlay
	 */
	struct AChallenge_ScramSportManager_TN_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointMade
	 */
	struct AChallenge_ScramSportManager_TN_C_PointMade_Params
	{
	public:
		int32_t                                                    P1Score;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P2Score;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LET
	 */
	struct AChallenge_ScramSportManager_TN_C_LET_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.WaitForOpponentServe
	 */
	struct AChallenge_ScramSportManager_TN_C_WaitForOpponentServe_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.InPlay
	 */
	struct AChallenge_ScramSportManager_TN_C_InPlay_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.Fault
	 */
	struct AChallenge_ScramSportManager_TN_C_Fault_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PrePareServe
	 */
	struct AChallenge_ScramSportManager_TN_C_PrePareServe_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallGrabbed
	 */
	struct AChallenge_ScramSportManager_TN_C_BallGrabbed_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallSpawned
	 */
	struct AChallenge_ScramSportManager_TN_C_BallSpawned_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.SendDebugString
	 */
	struct AChallenge_ScramSportManager_TN_C_SendDebugString_Params
	{
	public:
		class FString                                              S;                                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.CreateDebugButton
	 */
	struct AChallenge_ScramSportManager_TN_C_CreateDebugButton_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ToggleDebug
	 */
	struct AChallenge_ScramSportManager_TN_C_ToggleDebug_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayDoubleFaultSFX
	 */
	struct AChallenge_ScramSportManager_TN_C_PlayDoubleFaultSFX_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_DisplayPointResults
	 */
	struct AChallenge_ScramSportManager_TN_C_MC_DisplayPointResults_Params
	{
	public:
		class FText                                                PointType;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    P1Score;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P2Score;                                                 // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Winner;                                           // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TextOnly;                                                // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_MatchComplete
	 */
	struct AChallenge_ScramSportManager_TN_C_MC_MatchComplete_Params
	{
	public:
		bool                                                       OC5Demo;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5YNU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    P1GamesWon;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P2GamesWon;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_GameComplete
	 */
	struct AChallenge_ScramSportManager_TN_C_MC_GameComplete_Params
	{
	public:
		int32_t                                                    GameCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P1GamesWon;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    P2GamesWon;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_ShowPreServeInfo
	 */
	struct AChallenge_ScramSportManager_TN_C_MC_ShowPreServeInfo_Params
	{
	public:
		class FText                                                GameStatusText;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Player1Serve;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MC_CreateStandLocations
	 */
	struct AChallenge_ScramSportManager_TN_C_MC_CreateStandLocations_Params
	{
	public:
		bool                                                       Player1Serve;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PlayPoint
	 */
	struct AChallenge_ScramSportManager_TN_C_PlayPoint_Params
	{
	public:
		bool                                                       UseUmpVox;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ExecuteUbergraph_Challenge_ScramSportManager_TN
	 */
	struct AChallenge_ScramSportManager_TN_C_ExecuteUbergraph_Challenge_ScramSportManager_TN_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.FaultServeResult__DelegateSignature
	 */
	struct AChallenge_ScramSportManager_TN_C_FaultServeResult__DelegateSignature_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.LetServeResult__DelegateSignature
	 */
	struct AChallenge_ScramSportManager_TN_C_LetServeResult__DelegateSignature_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PreServeStart__DelegateSignature
	 */
	struct AChallenge_ScramSportManager_TN_C_PreServeStart__DelegateSignature_Params
	{
	public:
		int32_t                                                    Game;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Point;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.BallInPlay__DelegateSignature
	 */
	struct AChallenge_ScramSportManager_TN_C_BallInPlay__DelegateSignature_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.PointComplete__DelegateSignature
	 */
	struct AChallenge_ScramSportManager_TN_C_PointComplete__DelegateSignature_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.ServeReady__DelegateSignature
	 */
	struct AChallenge_ScramSportManager_TN_C_ServeReady__DelegateSignature_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.GameComplete__DelegateSignature
	 */
	struct AChallenge_ScramSportManager_TN_C_GameComplete__DelegateSignature_Params
	{	};

	/**
	 * Function Challenge_ScramSportManager_TN.Challenge_ScramSportManager_TN_C.MatchComplete__DelegateSignature
	 */
	struct AChallenge_ScramSportManager_TN_C_MatchComplete__DelegateSignature_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
