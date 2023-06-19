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
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnCatcherWithVFX
	 */
	struct ABB_Minigame_PracticeSportManager_C_SpawnCatcherWithVFX_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnFielders
	 */
	struct ABB_Minigame_PracticeSportManager_C_SpawnFielders_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnInstrumentSelector
	 */
	struct ABB_Minigame_PracticeSportManager_C_SpawnInstrumentSelector_Params
	{
	public:
		bool                                                       InstrumentDamageEnabled;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_07Y3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InstrumentSelected
	 */
	struct ABB_Minigame_PracticeSportManager_C_InstrumentSelected_Params
	{
	public:
		class ABaseballInstrument*                                 SelectedInstrument;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InstrumentBroken
	 */
	struct ABB_Minigame_PracticeSportManager_C_InstrumentBroken_Params
	{
	public:
		class ABaseballInstrument*                                 Instrument;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnPitcher
	 */
	struct ABB_Minigame_PracticeSportManager_C_SpawnPitcher_Params
	{
	public:
		class AActor*                                              PitcherActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XL9T[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.EndGameCleanUp
	 */
	struct ABB_Minigame_PracticeSportManager_C_EndGameCleanUp_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnLocalHelper
	 */
	struct ABB_Minigame_PracticeSportManager_C_SpawnLocalHelper_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.CleanUpGameElements
	 */
	struct ABB_Minigame_PracticeSportManager_C_CleanUpGameElements_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.TeleportPlayer
	 */
	struct ABB_Minigame_PracticeSportManager_C_TeleportPlayer_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.Initialize
	 */
	struct ABB_Minigame_PracticeSportManager_C_Initialize_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnEquipmentAndAI
	 */
	struct ABB_Minigame_PracticeSportManager_C_SpawnEquipmentAndAI_Params
	{
	public:
		bool                                                       PlayerBatting;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9UEN[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.Minigame_SpawnStrikezone
	 */
	struct ABB_Minigame_PracticeSportManager_C_Minigame_SpawnStrikezone_Params
	{
	public:
		bool                                                       ShrinkOnSpawn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CatcherPresent;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6JBR[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnBatter
	 */
	struct ABB_Minigame_PracticeSportManager_C_SpawnBatter_Params
	{
	public:
		class AActor*                                              BattingActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P3M9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.UserConstructionScript
	 */
	struct ABB_Minigame_PracticeSportManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.BaseballEvent
	 */
	struct ABB_Minigame_PracticeSportManager_C_BaseballEvent_Params
	{
	public:
		EBaseballEvent                                             BaseballEvent;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5I18[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ReceiveBeginPlay
	 */
	struct ABB_Minigame_PracticeSportManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.NoTeleport
	 */
	struct ABB_Minigame_PracticeSportManager_C_NoTeleport_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HandleBackOrResetButton
	 */
	struct ABB_Minigame_PracticeSportManager_C_HandleBackOrResetButton_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.GameSelectorReset
	 */
	struct ABB_Minigame_PracticeSportManager_C_GameSelectorReset_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ReceiveEndPlay
	 */
	struct ABB_Minigame_PracticeSportManager_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.FinishedTeleport
	 */
	struct ABB_Minigame_PracticeSportManager_C_FinishedTeleport_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SetDominantHand
	 */
	struct ABB_Minigame_PracticeSportManager_C_SetDominantHand_Params
	{
	public:
		class AActor*                                              DominantHand;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABB_Mitt_C*                                          Mitt;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.OnInstrumentSelected
	 */
	struct ABB_Minigame_PracticeSportManager_C_OnInstrumentSelected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.OnInstrumentBroken
	 */
	struct ABB_Minigame_PracticeSportManager_C_OnInstrumentBroken_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RemoveCatcher
	 */
	struct ABB_Minigame_PracticeSportManager_C_RemoveCatcher_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ExecuteUbergraph_BB_Minigame_PracticeSportManager
	 */
	struct ABB_Minigame_PracticeSportManager_C_ExecuteUbergraph_BB_Minigame_PracticeSportManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QKYV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RunnersReady__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_RunnersReady__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RunnerHome__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_RunnerHome__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InvalidHit__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_InvalidHit__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ValidHit__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_ValidHit__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitHomerun__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_HitHomerun__DelegateSignature_Params
	{
	public:
		bool                                                       BasesLoaded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitTriple__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_HitTriple__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitDouble__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_HitDouble__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitSingle__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_HitSingle__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitFoul__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_HitFoul__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitCaught__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_HitCaught__DelegateSignature_Params
	{
	public:
		struct FVector                                             BallLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.CatcherThrow__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_CatcherThrow__DelegateSignature_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchedStrike__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_PitchedStrike__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchedBall__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_PitchedBall__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SwingAndMiss__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_SwingAndMiss__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchHit__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_PitchHit__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitcherPitched__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_PitcherPitched__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitcherReady__DelegateSignature
	 */
	struct ABB_Minigame_PracticeSportManager_C_PitcherReady__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
