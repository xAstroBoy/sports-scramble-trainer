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
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneTimeScales
	 */
	struct ABB_Challenge_06_3rdBase_C_SetZoneTimeScales_Params
	{
	public:
		struct FMinMaxFloat                                        PopFlyTimeScale;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FMinMaxFloat                                        SweetSpotTimeScale;                                      // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FMinMaxFloat                                        LineDriveTimeScale;                                      // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FMinMaxFloat                                        GroundBallTimeScale;                                     // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GetNextBallClass
	 */
	struct ABB_Challenge_06_3rdBase_C_GetNextBallClass_Params
	{
	public:
		class UClass*                                              NextBallClass;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetupInfoText
	 */
	struct ABB_Challenge_06_3rdBase_C_SetupInfoText_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneChances
	 */
	struct ABB_Challenge_06_3rdBase_C_SetZoneChances_Params
	{
	public:
		float                                                      PopFlyChance;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SweetSpotChance;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LineDriveChance;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GroundBallChance;                                        // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetParameters
	 */
	struct ABB_Challenge_06_3rdBase_C_SetParameters_Params
	{
	public:
		float                                                      TimeBetweenBalls;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BombChance;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GoldenBallChance;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Initialized3rdBase
	 */
	struct ABB_Challenge_06_3rdBase_C_Initialized3rdBase_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Cleanup
	 */
	struct ABB_Challenge_06_3rdBase_C_Cleanup_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.UserConstructionScript
	 */
	struct ABB_Challenge_06_3rdBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_25CCB05E4E04939CC232B8BB23AB186B
	 */
	struct ABB_Challenge_06_3rdBase_C_OnLoaded_25CCB05E4E04939CC232B8BB23AB186B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_70510E9640399C2A919A79A38EF129A0
	 */
	struct ABB_Challenge_06_3rdBase_C_OnLoaded_70510E9640399C2A919A79A38EF129A0_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_32444B0A4E135437E255DFAB39579AF8
	 */
	struct ABB_Challenge_06_3rdBase_C_OnLoaded_32444B0A4E135437E255DFAB39579AF8_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_49C6C46244429E83F6C5859C5D9D417C
	 */
	struct ABB_Challenge_06_3rdBase_C_OnLoaded_49C6C46244429E83F6C5859C5D9D417C_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPaused
	 */
	struct ABB_Challenge_06_3rdBase_C_AnnouncerPaused_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPresenting
	 */
	struct ABB_Challenge_06_3rdBase_C_AnnouncerPresenting_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPlayingSequence
	 */
	struct ABB_Challenge_06_3rdBase_C_AnnouncerPlayingSequence_Params
	{
	public:
		class FName                                                SequenceName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveBeginPlay
	 */
	struct ABB_Challenge_06_3rdBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.NotifyChallengeContinue
	 */
	struct ABB_Challenge_06_3rdBase_C_NotifyChallengeContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BallHit
	 */
	struct ABB_Challenge_06_3rdBase_C_BallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveEndPlay
	 */
	struct ABB_Challenge_06_3rdBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BaseballEvent
	 */
	struct ABB_Challenge_06_3rdBase_C_BaseballEvent_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.FireLoop
	 */
	struct ABB_Challenge_06_3rdBase_C_FireLoop_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Start_Challenge
	 */
	struct ABB_Challenge_06_3rdBase_C_Start_Challenge_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerExitSequenceComplete
	 */
	struct ABB_Challenge_06_3rdBase_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BB_TriggerCountdown
	 */
	struct ABB_Challenge_06_3rdBase_C_BB_TriggerCountdown_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GameEnd
	 */
	struct ABB_Challenge_06_3rdBase_C_GameEnd_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Shortcut
	 */
	struct ABB_Challenge_06_3rdBase_C_Shortcut_Params
	{	};

	/**
	 * Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ExecuteUbergraph_BB_Challenge_06_3rdBase
	 */
	struct ABB_Challenge_06_3rdBase_C_ExecuteUbergraph_BB_Challenge_06_3rdBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O7YC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
