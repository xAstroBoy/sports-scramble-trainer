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
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveGameElement
	 */
	struct ATennisScrambleTargetGroup_C_RemoveGameElement_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6L3P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.FilterScrambleSet
	 */
	struct ATennisScrambleTargetGroup_C_FilterScrambleSet_Params
	{
	public:
		TArray<struct FScramblerTargetSet>                         ScramblerTargetSet;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FScramblerTargetSet>                         FilteredTargetSet;                                       // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificBallActivated
	 */
	struct ATennisScrambleTargetGroup_C_SpecificBallActivated_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificBalls
	 */
	struct ATennisScrambleTargetGroup_C_GetValidSpecificBalls_Params
	{
	public:
		TArray<class UClass*>                                      BallDistibutionList;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpecificInstrumentActivated
	 */
	struct ATennisScrambleTargetGroup_C_SpecificInstrumentActivated_Params
	{
	public:
		class UClass*                                              InstrumentClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetValidSpecificInstruments
	 */
	struct ATennisScrambleTargetGroup_C_GetValidSpecificInstruments_Params
	{
	public:
		TArray<class UClass*>                                      ValidInstruments;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllNetNotifiers
	 */
	struct ATennisScrambleTargetGroup_C_RemoveAllNetNotifiers_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SetSpawnLocsForReinforcements
	 */
	struct ATennisScrambleTargetGroup_C_SetSpawnLocsForReinforcements_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UpdateTennisManagerVars
	 */
	struct ATennisScrambleTargetGroup_C_UpdateTennisManagerVars_Params
	{
	public:
		int32_t                                                    Game;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Point;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveAllTargets
	 */
	struct ATennisScrambleTargetGroup_C_RemoveAllTargets_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetActiveTargetsByClass
	 */
	struct ATennisScrambleTargetGroup_C_GetActiveTargetsByClass_Params
	{
	public:
		class UClass*                                              ScrambleEventClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GetWeightedClassList
	 */
	struct ATennisScrambleTargetGroup_C_GetWeightedClassList_Params
	{
	public:
		TArray<class UClass*>                                      WeightedList;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableScrambleEventType
	 */
	struct ATennisScrambleTargetGroup_C_DisableScrambleEventType_Params
	{
	public:
		class UClass*                                              EventClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RemoveDisabledSpawnLocations
	 */
	struct ATennisScrambleTargetGroup_C_RemoveDisabledSpawnLocations_Params
	{
	public:
		TArray<int32_t>                                            ValidSpawnLocations;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DisableSpawnLocations
	 */
	struct ATennisScrambleTargetGroup_C_DisableSpawnLocations_Params
	{
	public:
		TArray<int32_t>                                            DisabledLocations;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnInitial
	 */
	struct ATennisScrambleTargetGroup_C_SpawnInitial_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnRandom
	 */
	struct ATennisScrambleTargetGroup_C_SpawnRandom_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnTarget
	 */
	struct ATennisScrambleTargetGroup_C_SpawnTarget_Params
	{
	public:
		int32_t                                                    Location;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4CM7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ScrambleClass;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.Initialize
	 */
	struct ATennisScrambleTargetGroup_C_Initialize_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.UserConstructionScript
	 */
	struct ATennisScrambleTargetGroup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveBeginPlay
	 */
	struct ATennisScrambleTargetGroup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.RespawnLoop
	 */
	struct ATennisScrambleTargetGroup_C_RespawnLoop_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetDespawned
	 */
	struct ATennisScrambleTargetGroup_C_TargetDespawned_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ScrambleTargetRemoved
	 */
	struct ATennisScrambleTargetGroup_C_ScrambleTargetRemoved_Params
	{
	public:
		class ATennisScrambleTarget_C*                             TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ScrambleEvent;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.NewServiceReady
	 */
	struct ATennisScrambleTargetGroup_C_NewServiceReady_Params
	{
	public:
		int32_t                                                    Game;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Point;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Player1Serve;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.PointComplete
	 */
	struct ATennisScrambleTargetGroup_C_PointComplete_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.InPlay
	 */
	struct ATennisScrambleTargetGroup_C_InPlay_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawn
	 */
	struct ATennisScrambleTargetGroup_C_GroupSpawn_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.GroupSpawnLoop
	 */
	struct ATennisScrambleTargetGroup_C_GroupSpawnLoop_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.DelayDestroy
	 */
	struct ATennisScrambleTargetGroup_C_DelayDestroy_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.TargetHit
	 */
	struct ATennisScrambleTargetGroup_C_TargetHit_Params
	{
	public:
		class ATennisScrambleTarget_C*                             TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ScrambleEvent;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ID;                                                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.StopTimer
	 */
	struct ATennisScrambleTargetGroup_C_StopTimer_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.QueueReinforcements
	 */
	struct ATennisScrambleTargetGroup_C_QueueReinforcements_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.BallCrossedNet
	 */
	struct ATennisScrambleTargetGroup_C_BallCrossedNet_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.SpawnQueuedTargets
	 */
	struct ATennisScrambleTargetGroup_C_SpawnQueuedTargets_Params
	{	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ReceiveEndPlay
	 */
	struct ATennisScrambleTargetGroup_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TennisScrambleTargetGroup.TennisScrambleTargetGroup_C.ExecuteUbergraph_TennisScrambleTargetGroup
	 */
	struct ATennisScrambleTargetGroup_C_ExecuteUbergraph_TennisScrambleTargetGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
