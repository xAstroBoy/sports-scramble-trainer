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
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveGameElement
	 */
	struct ATennisTrainingScrambleTargetGroup_C_RemoveGameElement_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveAllDemoTargets
	 */
	struct ATennisTrainingScrambleTargetGroup_C_RemoveAllDemoTargets_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TennisTrainingSingleScrambleTarget
	 */
	struct ATennisTrainingScrambleTargetGroup_C_TennisTrainingSingleScrambleTarget_Params
	{
	public:
		class UClass*                                              TargetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETN_Training_ScrambleTargets                               TargetLocation;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4K12[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemovePairTargets
	 */
	struct ATennisTrainingScrambleTargetGroup_C_RemovePairTargets_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTrainingTargetPair
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTrainingTargetPair_Params
	{
	public:
		class UClass*                                              TargetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCR1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETN_Training_ScrambleTargets                               Position;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTrainingTargetClass
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTrainingTargetClass_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class UClass*                                              TargetClass;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_08JQ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.FilterScrambleSet
	 */
	struct ATennisTrainingScrambleTargetGroup_C_FilterScrambleSet_Params
	{
	public:
		TArray<struct FScramblerTargetSet>                         ScramblerTargetSet;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FScramblerTargetSet>                         FilteredTargetSet;                                       // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpecificBallActivated
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpecificBallActivated_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetValidSpecificBalls
	 */
	struct ATennisTrainingScrambleTargetGroup_C_GetValidSpecificBalls_Params
	{
	public:
		TArray<class UClass*>                                      BallDistibutionList;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpecificInstrumentActivated
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpecificInstrumentActivated_Params
	{
	public:
		class UClass*                                              InstrumentClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetValidSpecificInstruments
	 */
	struct ATennisTrainingScrambleTargetGroup_C_GetValidSpecificInstruments_Params
	{
	public:
		TArray<class UClass*>                                      ValidInstruments;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveAllNetNotifiers
	 */
	struct ATennisTrainingScrambleTargetGroup_C_RemoveAllNetNotifiers_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SetSpawnLocsForReinforcements
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SetSpawnLocsForReinforcements_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.UpdateTennisManagerVars
	 */
	struct ATennisTrainingScrambleTargetGroup_C_UpdateTennisManagerVars_Params
	{
	public:
		int32_t                                                    Game;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Point;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveAllTargets
	 */
	struct ATennisTrainingScrambleTargetGroup_C_RemoveAllTargets_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetActiveTargetsByClass
	 */
	struct ATennisTrainingScrambleTargetGroup_C_GetActiveTargetsByClass_Params
	{
	public:
		class UClass*                                              ScrambleEventClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.GetWeightedClassList
	 */
	struct ATennisTrainingScrambleTargetGroup_C_GetWeightedClassList_Params
	{
	public:
		TArray<class UClass*>                                      WeightedList;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.DisableScrambleEventType
	 */
	struct ATennisTrainingScrambleTargetGroup_C_DisableScrambleEventType_Params
	{
	public:
		class UClass*                                              EventClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RemoveDisabledSpawnLocations
	 */
	struct ATennisTrainingScrambleTargetGroup_C_RemoveDisabledSpawnLocations_Params
	{
	public:
		TArray<int32_t>                                            ValidSpawnLocations;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.DisableSpawnLocations
	 */
	struct ATennisTrainingScrambleTargetGroup_C_DisableSpawnLocations_Params
	{
	public:
		TArray<int32_t>                                            DisabledLocations;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnInitial
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnInitial_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnRandom
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnRandom_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTarget
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTarget_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		int32_t                                                    ID;                                                      // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QDZN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ScrambleClass;                                           // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.Initialize
	 */
	struct ATennisTrainingScrambleTargetGroup_C_Initialize_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.UserConstructionScript
	 */
	struct ATennisTrainingScrambleTargetGroup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.RespawnLoop
	 */
	struct ATennisTrainingScrambleTargetGroup_C_RespawnLoop_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetDespawned
	 */
	struct ATennisTrainingScrambleTargetGroup_C_TargetDespawned_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ScrambleTargetRemoved
	 */
	struct ATennisTrainingScrambleTargetGroup_C_ScrambleTargetRemoved_Params
	{
	public:
		class ATennisScrambleTarget_C*                             TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ScrambleEvent;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetHit
	 */
	struct ATennisTrainingScrambleTargetGroup_C_TargetHit_Params
	{
	public:
		class ATennisScrambleTarget_C*                             TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ScrambleEvent;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Basketball
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_Basketball_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_RandRacket
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_RandRacket_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_NetRaise
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetCenter_NetRaise_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_Basketball
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_Basketball_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_SoccerBall
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_SoccerBall_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_GolfBall
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_GolfBall_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Chicken
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_Chicken_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_Basketball
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_Basketball_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Bat
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_Bat_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetFiredBall
	 */
	struct ATennisTrainingScrambleTargetGroup_C_TargetFiredBall_Params
	{
	public:
		class ATN_Ball_Base_C*                                     BallFired;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_PoolNoodle
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_PoolNoodle_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_FoamFinger
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_FoamFinger_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_FloppyFish
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_FloppyFish_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnOneOfScrambleTargetPair
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnOneOfScrambleTargetPair_Params
	{
	public:
		class UClass*                                              TargetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LR3X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETN_Training_ScrambleTargets                               Position;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_Baseball
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_Baseball_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_Bat
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_Bat_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Baseball
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_Baseball_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_FoamFinger
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_FoamFinger_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_BeachBall
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_BeachBall_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_Paddle
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_Paddle_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetLeft_PingPongBall
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetLeft_PingPongBall_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_PoolNoodle
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_PoolNoodle_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ReceiveEndPlay
	 */
	struct ATennisTrainingScrambleTargetGroup_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_HockeyStick
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_HockeyStick_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_GolfClub
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetCenter_GolfClub_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnTargetRight_TennisRacket
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnTargetRight_TennisRacket_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_TennisRacket
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_TennisRacket_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetRight_HockeyStick
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetRight_HockeyStick_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ReceiveBeginPlay
	 */
	struct ATennisTrainingScrambleTargetGroup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_Basketball
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetCenter_Basketball_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_Frisbee
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_Frisbee_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetRight_PingPongBall
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetRight_PingPongBall_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetRight_Frisbee
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetRight_Frisbee_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_PingPongBall
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_PingPongBall_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetCenter_TennisBall
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetCenter_TennisBall_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.SpawnDemoTargetLeft_HockeyPuck
	 */
	struct ATennisTrainingScrambleTargetGroup_C_SpawnDemoTargetLeft_HockeyPuck_Params
	{	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.ExecuteUbergraph_TennisTrainingScrambleTargetGroup
	 */
	struct ATennisTrainingScrambleTargetGroup_C_ExecuteUbergraph_TennisTrainingScrambleTargetGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GYXT[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.TargetHasBeenHit__DelegateSignature
	 */
	struct ATennisTrainingScrambleTargetGroup_C_TargetHasBeenHit__DelegateSignature_Params
	{
	public:
		class ATennisScrambleTarget_C*                             TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              EventClass;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetID;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisTrainingScrambleTargetGroup.TennisTrainingScrambleTargetGroup_C.BallHasBeenFiredByTarget__DelegateSignature
	 */
	struct ATennisTrainingScrambleTargetGroup_C_BallHasBeenFiredByTarget__DelegateSignature_Params
	{
	public:
		class ATN_Ball_Base_C*                                     LaunchedBall;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
