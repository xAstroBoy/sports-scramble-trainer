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
	 * Function TrainingBase.TrainingBase_C.StopFlashButtons
	 */
	struct ATrainingBase_C_StopFlashButtons_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.FlashButtons
	 */
	struct ATrainingBase_C_FlashButtons_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.HasPlayerCompletedTrainingRoomPreviously
	 */
	struct ATrainingBase_C_HasPlayerCompletedTrainingRoomPreviously_Params
	{
	public:
		bool                                                       AlreadyCompleted;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S7Y4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrainingBase.TrainingBase_C.DestroyAllBalls
	 */
	struct ATrainingBase_C_DestroyAllBalls_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.TrainingBaseInitialize
	 */
	struct ATrainingBase_C_TrainingBaseInitialize_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.CleanUpGameElements
	 */
	struct ATrainingBase_C_CleanUpGameElements_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.SpawnCountDown
	 */
	struct ATrainingBase_C_SpawnCountDown_Params
	{
	public:
		class ACountdown_C*                                        CountdownActor;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrainingBase.TrainingBase_C.SpawnAnnouncerActor
	 */
	struct ATrainingBase_C_SpawnAnnouncerActor_Params
	{
	public:
		TArray<class FName>                                        AnnouncerAudioList;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function TrainingBase.TrainingBase_C.SpawnPopupInfo
	 */
	struct ATrainingBase_C_SpawnPopupInfo_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      DisplayTime;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrainingBase.TrainingBase_C.UserConstructionScript
	 */
	struct ATrainingBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.OnLoaded_D422091D4680C88E550D2CBC371746CD
	 */
	struct ATrainingBase_C_OnLoaded_D422091D4680C88E550D2CBC371746CD_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrainingBase.TrainingBase_C.AnnouncerReady
	 */
	struct ATrainingBase_C_AnnouncerReady_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.ClosingAnnouncerComplete
	 */
	struct ATrainingBase_C_ClosingAnnouncerComplete_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.DisplayStartOfMatchInfo
	 */
	struct ATrainingBase_C_DisplayStartOfMatchInfo_Params
	{
	public:
		bool                                                       FadeInOutMusic;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TrainingBase.TrainingBase_C.ReceiveBeginPlay
	 */
	struct ATrainingBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.EndOfGame
	 */
	struct ATrainingBase_C_EndOfGame_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.MusicFadeOut
	 */
	struct ATrainingBase_C_MusicFadeOut_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.MusicFadeIn
	 */
	struct ATrainingBase_C_MusicFadeIn_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.NotifyTrainingContinue
	 */
	struct ATrainingBase_C_NotifyTrainingContinue_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrainingBase.TrainingBase_C.AnnouncerPairedComplete
	 */
	struct ATrainingBase_C_AnnouncerPairedComplete_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.AnnouncerExitSequenceComplete
	 */
	struct ATrainingBase_C_AnnouncerExitSequenceComplete_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.HandleSuccess
	 */
	struct ATrainingBase_C_HandleSuccess_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.HandleFailure
	 */
	struct ATrainingBase_C_HandleFailure_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.ReceiveEndPlay
	 */
	struct ATrainingBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrainingBase.TrainingBase_C.Play321
	 */
	struct ATrainingBase_C_Play321_Params
	{	};

	/**
	 * Function TrainingBase.TrainingBase_C.ExecuteUbergraph_TrainingBase
	 */
	struct ATrainingBase_C_ExecuteUbergraph_TrainingBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrainingBase.TrainingBase_C.TrainingComplete__DelegateSignature
	 */
	struct ATrainingBase_C_TrainingComplete__DelegateSignature_Params
	{
	public:
		struct FResultsData                                        Results;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
