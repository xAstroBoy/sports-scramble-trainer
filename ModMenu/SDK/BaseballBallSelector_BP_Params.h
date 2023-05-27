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
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HasScrambleOption
	 */
	struct ABaseballBallSelector_BP_C_HasScrambleOption_Params
	{
	public:
		class ABaseballMitt*                                       Mitt;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasOption;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_Training_GetBallVO
	 */
	struct ABaseballBallSelector_BP_C_BB_Training_GetBallVO_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetIconLocations
	 */
	struct ABaseballBallSelector_BP_C_GetIconLocations_Params
	{
	public:
		bool                                                       TL;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TR;                                                      // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BL;                                                      // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BR;                                                      // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetImbuingOdds
	 */
	struct ABaseballBallSelector_BP_C_GetImbuingOdds_Params
	{
	public:
		struct FChance                                             ImbueChance;                                             // 0x0000(0x0004)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Show All Target
	 */
	struct ABaseballBallSelector_BP_C_ShowAllTarget_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.GetNumToSpawn
	 */
	struct ABaseballBallSelector_BP_C_GetNumToSpawn_Params
	{
	public:
		int32_t                                                    SpawnNumber;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CanSpawnBalls
	 */
	struct ABaseballBallSelector_BP_C_CanSpawnBalls_Params
	{
	public:
		bool                                                       CanSpawn;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.UserConstructionScript
	 */
	struct ABaseballBallSelector_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3
	 */
	struct ABaseballBallSelector_BP_C_OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_SpawnBlankTargets
	 */
	struct ABaseballBallSelector_BP_C_BB_TNG_SpawnBlankTargets_Params
	{
	public:
		bool                                                       BindOnHit;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_BlinkTargets
	 */
	struct ABaseballBallSelector_BP_C_BB_TNG_BlinkTargets_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_CleanUpDemoTargets
	 */
	struct ABaseballBallSelector_BP_C_BB_TNG_CleanUpDemoTargets_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_01
	 */
	struct ABaseballBallSelector_BP_C_HitTrainingTarget_01_Params
	{
	public:
		EBaseballScrambleTargetLocations                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_TrackTargetHits
	 */
	struct ABaseballBallSelector_BP_C_BB_TNG_TrackTargetHits_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_02
	 */
	struct ABaseballBallSelector_BP_C_HitTrainingTarget_02_Params
	{
	public:
		EBaseballScrambleTargetLocations                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_03
	 */
	struct ABaseballBallSelector_BP_C_HitTrainingTarget_03_Params
	{
	public:
		EBaseballScrambleTargetLocations                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.HitTrainingTarget_04
	 */
	struct ABaseballBallSelector_BP_C_HitTrainingTarget_04_Params
	{
	public:
		EBaseballScrambleTargetLocations                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SpawnInitialIcons
	 */
	struct ABaseballBallSelector_BP_C_BB_TNG_RM03_SpawnInitialIcons_Params
	{
	public:
		class UClass*                                              BB_BallClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBaseballBallType                                          BB_BallType;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OHUY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          BB_BallIcon;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      imbueChance;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_CleanUpAllButFrisbee
	 */
	struct ABaseballBallSelector_BP_C_BB_TNG_RM03_CleanUpAllButFrisbee_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.CustomEvent
	 */
	struct ABaseballBallSelector_BP_C_CustomEvent_Params
	{
	public:
		EBaseballScrambleTargetLocations                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_GiveMittScrambleBall
	 */
	struct ABaseballBallSelector_BP_C_BB_TNG_GiveMittScrambleBall_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Imbued;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.BB_TNG_RM03_SingleIcon
	 */
	struct ABaseballBallSelector_BP_C_BB_TNG_RM03_SingleIcon_Params
	{
	public:
		class UClass*                                              BB_BallClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBaseballBallType                                          BB_BallType;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MFE2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          BB_BallIcon;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      imbueChance;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBaseballScrambleTargetLocations                           Location;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.IndividualTargetHit
	 */
	struct ABaseballBallSelector_BP_C_IndividualTargetHit_Params
	{
	public:
		EBaseballScrambleTargetLocations                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveBeginPlay
	 */
	struct ABaseballBallSelector_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReadyBalls
	 */
	struct ABaseballBallSelector_BP_C_ReadyBalls_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.Change Round
	 */
	struct ABaseballBallSelector_BP_C_ChangeRound_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ResolveAndClear
	 */
	struct ABaseballBallSelector_BP_C_ResolveAndClear_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.SendThroughBall
	 */
	struct ABaseballBallSelector_BP_C_SendThroughBall_Params
	{
	public:
		class ABaseballPitchingTarget*                             NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ReceiveEndPlay
	 */
	struct ABaseballBallSelector_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.PlayAsync2D
	 */
	struct ABaseballBallSelector_BP_C_PlayAsync2D_Params
	{	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.ExecuteUbergraph_BaseballBallSelector_BP
	 */
	struct ABaseballBallSelector_BP_C_ExecuteUbergraph_BaseballBallSelector_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1K6Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TrainingTargetHit__DelegateSignature
	 */
	struct ABaseballBallSelector_BP_C_TrainingTargetHit__DelegateSignature_Params
	{
	public:
		EBaseballScrambleTargetLocations                           Location;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballBallSelector_BP.BaseballBallSelector_BP_C.TargetsUpdated__DelegateSignature
	 */
	struct ABaseballBallSelector_BP_C_TargetsUpdated__DelegateSignature_Params
	{
	public:
		bool                                                       TL;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TR;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BL;                                                      // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BR;                                                      // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
