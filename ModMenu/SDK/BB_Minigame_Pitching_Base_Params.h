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
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.AddActorToGameElementList
	 */
	struct ABB_Minigame_Pitching_Base_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_97G0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Shutdown
	 */
	struct ABB_Minigame_Pitching_Base_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C8EV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ClearCurrentBall
	 */
	struct ABB_Minigame_Pitching_Base_C_ClearCurrentBall_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GetMaxBounces
	 */
	struct ABB_Minigame_Pitching_Base_C_GetMaxBounces_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Result;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RollingPitch;                                            // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchTargetScoreboard
	 */
	struct ABB_Minigame_Pitching_Base_C_UpdatePitchTargetScoreboard_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ResetPitchingScoreboard
	 */
	struct ABB_Minigame_Pitching_Base_C_ResetPitchingScoreboard_Params
	{
	public:
		bool                                                       ShowBallCount;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CleanupScoreboards
	 */
	struct ABB_Minigame_Pitching_Base_C_CleanupScoreboards_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnGameElements
	 */
	struct ABB_Minigame_Pitching_Base_C_SpawnGameElements_Params
	{
	public:
		bool                                                       UseStrikeZone;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlayStrikezoneSounds;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnTargets;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DisplayStrikezoneText;                                   // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowQuad;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchingScoreboard
	 */
	struct ABB_Minigame_Pitching_Base_C_UpdatePitchingScoreboard_Params
	{
	public:
		bool                                                       ShowBallCount;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HJJT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Initialize
	 */
	struct ABB_Minigame_Pitching_Base_C_Initialize_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UserConstructionScript
	 */
	struct ABB_Minigame_Pitching_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ReceiveBeginPlay
	 */
	struct ABB_Minigame_Pitching_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.DelayDestroy
	 */
	struct ABB_Minigame_Pitching_Base_C_DelayDestroy_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ThrowBallAtPlayer
	 */
	struct ABB_Minigame_Pitching_Base_C_ThrowBallAtPlayer_Params
	{
	public:
		float                                                      delayBeforeThrow;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DelayAfterThrow;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallLaunched
	 */
	struct ABB_Minigame_Pitching_Base_C_BallLaunched_Params
	{
	public:
		class AActor*                                              Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbedByPlayer
	 */
	struct ABB_Minigame_Pitching_Base_C_EquipmentGrabbedByPlayer_Params
	{
	public:
		class AActor*                                              DominantHand;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABB_Mitt_C*                                          Mitt;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.TeleportComplete
	 */
	struct ABB_Minigame_Pitching_Base_C_TeleportComplete_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.NoTeleport
	 */
	struct ABB_Minigame_Pitching_Base_C_NoTeleport_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnEquipmentSet
	 */
	struct ABB_Minigame_Pitching_Base_C_SpawnEquipmentSet_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GameReadyRunOperations
	 */
	struct ABB_Minigame_Pitching_Base_C_GameReadyRunOperations_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallScramHit
	 */
	struct ABB_Minigame_Pitching_Base_C_ActiveBallScramHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallCaughtEvent
	 */
	struct ABB_Minigame_Pitching_Base_C_BallCaughtEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.StrikeZoneHit
	 */
	struct ABB_Minigame_Pitching_Base_C_StrikeZoneHit_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EScramStrikeResult                                         Result;                                                  // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallThrown
	 */
	struct ABB_Minigame_Pitching_Base_C_BallThrown_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CurrentBallInvalidated
	 */
	struct ABB_Minigame_Pitching_Base_C_CurrentBallInvalidated_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallDropped
	 */
	struct ABB_Minigame_Pitching_Base_C_BallDropped_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallDestroyed
	 */
	struct ABB_Minigame_Pitching_Base_C_ActiveBallDestroyed_Params
	{
	public:
		class AScramPrimitiveActor*                                DestroyedPrimitive;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ExecuteUbergraph_BB_Minigame_Pitching_Base
	 */
	struct ABB_Minigame_Pitching_Base_C_ExecuteUbergraph_BB_Minigame_Pitching_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BD3K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbed__DelegateSignature
	 */
	struct ABB_Minigame_Pitching_Base_C_EquipmentGrabbed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
