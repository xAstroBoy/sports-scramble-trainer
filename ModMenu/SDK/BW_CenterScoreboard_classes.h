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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BW_CenterScoreboard.BW_CenterScoreboard_C
	 * Size -> 0x01CC (FullSize[0x04F4] - InheritedSize[0x0328])
	 */
	class ABW_CenterScoreboard_C : public ABowlingCenterScoreboard
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Widget;                                                  // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RightCarApproxLoc;                                       // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     LeftCarApproxLoc;                                        // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_RaceLoop;                                          // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_TestingFinishLine_Alpha_FB6A87CC417F15E9BB00669E4F20428C; // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_TestingFinishLine__Direction_FB6A87CC417F15E9BB00669E4F20428C; // 0x0364(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8739[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_TestingFinishLine;                              // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnAnimRedCar_Scale_0FC331A146A64495FDDE6C9E649EB4B3;  // 0x0370(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SpawnAnimRedCar__Direction_0FC331A146A64495FDDE6C9E649EB4B3; // 0x0374(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4VWL[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SpawnAnimRedCar;                                         // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnAnimBlueCar_Scale_ECBC1058453256C17CDBB280405E0F36; // 0x0380(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SpawnAnimBlueCar__Direction_ECBC1058453256C17CDBB280405E0F36; // 0x0384(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FGIW[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SpawnAnimBlueCar;                                        // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScaleStartingLine_Scale_9592E09F4D17E6EB1B2821A4C7DBD836; // 0x0390(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         ScaleStartingLine__Direction_9592E09F4D17E6EB1B2821A4C7DBD836; // 0x0394(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z90A[0x3];                                   // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ScaleStartingLine;                                       // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimateRedCarY_Alpha_241480C245094855A9F62B8EB681DD3E;   // 0x03A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         AnimateRedCarY__Direction_241480C245094855A9F62B8EB681DD3E; // 0x03A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N25G[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  AnimateRedCarY;                                          // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimateBlueCarY_Alpha_42F2830D4E8C8CA0C900E8AA767C470A;  // 0x03B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         AnimateBlueCarY__Direction_42F2830D4E8C8CA0C900E8AA767C470A; // 0x03B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G15M[0x3];                                   // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  AnimateBlueCarY;                                         // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RedCarDriveAway_Alpha_CAA53B964ED3A3DD7A41D5B9878A5391;  // 0x03C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         RedCarDriveAway__Direction_CAA53B964ED3A3DD7A41D5B9878A5391; // 0x03C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DYOL[0x3];                                   // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RedCarDriveAway;                                         // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlueCarDriveAway_Alpha_454847AA41D4E82BBFB8889886D12E6E; // 0x03D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         BlueCarDriveAway__Direction_454847AA41D4E82BBFB8889886D12E6E; // 0x03D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L4U2[0x3];                                   // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BlueCarDriveAway;                                        // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimateStartingLine_Alpha_CBD30F5343564ED655FB4BB921819119; // 0x03E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         AnimateStartingLine__Direction_CBD30F5343564ED655FB4BB921819119; // 0x03E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XLHA[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  AnimateStartingLine;                                     // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimateFinishLine_Alpha_D8513A9D4B3B7E4C4566B69D9A4521AD; // 0x03F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         AnimateFinishLine__Direction_D8513A9D4B3B7E4C4566B69D9A4521AD; // 0x03F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_80IK[0x3];                                   // 0x03F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  AnimateFinishLine;                                       // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RedCarDriftTimeline_CarDrift_7124E77849688CFEAD0DED800FCE2168; // 0x0400(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         RedCarDriftTimeline__Direction_7124E77849688CFEAD0DED800FCE2168; // 0x0404(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AG5Q[0x3];                                   // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  RedCarDriftTimeline;                                     // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlueCarDriftTimeline_CarDrift_141DCA414C31615EC2EAFFAE488601C9; // 0x0410(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         BlueCarDriftTimeline__Direction_141DCA414C31615EC2EAFFAE488601C9; // 0x0414(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZE22[0x3];                                   // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  BlueCarDriftTimeline;                                    // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartRoad_RoadSpeed_57B5F01041DED99992587EA39C0E8845;    // 0x0420(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         StartRoad__Direction_57B5F01041DED99992587EA39C0E8845;   // 0x0424(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OCAZ[0x3];                                   // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  StartRoad;                                               // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBW_CenterScoreboard_Widget_C*                       ScoreboardWidget;                                        // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TimerActive;                                             // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RALZ[0x3];                                   // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimerSecondsRemaining;                                   // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            RoadMaterial;                                            // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialStartLineX;                                       // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialFinishLineX;                                      // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialCarStartX;                                        // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentBlueCarX;                                         // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentRedCarX;                                          // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentRoadSpeed;                                        // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceTraveled;                                        // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialBlueCarStartY;                                    // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialRedCarStartY;                                     // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           CarInitialScale;                                         // 0x046C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentBlueBlurX;                                        // 0x0474(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentRedBlurX;                                         // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialBlurX;                                            // 0x047C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialBlueBlurY;                                        // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialRedBlurY;                                         // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CarYMovementSpeed;                                       // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           StartLineScale;                                          // 0x048C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EV8W[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TimerChange;                                             // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UScramGameInstance_C*                                GameInstance;                                            // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FinalFinishLineX_Normal;                                 // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FinalFinishLineX_Training;                               // 0x04B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FinalFinishLineX;                                        // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrainingTimer;                                           // 0x04BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CBTT[0x3];                                   // 0x04BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         PositionVsTime;                                          // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UCurveFloat*                                         PositionVsRelativeScore;                                 // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BlueScore;                                               // 0x04D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RedScore;                                                // 0x04D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimerMaxSeconds;                                         // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ExternalDecriment;                                       // 0x04DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_80AR[0x3];                                   // 0x04DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialBlurWidth;                                        // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitialTrainingFinishLineX;                              // 0x04E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FinalTrainingFinishLineX;                                // 0x04E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETN_RuleTypes                                              Ruleset;                                                 // 0x04EC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_85IF[0x3];                                   // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WaitCounter;                                             // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetBlurTranslationAndScale(float CarX, float* Translation, float* Scale);
		void GetCarPosition(bool Red, float* CarPosition);
		void GetAbsoluteCarPosition(float* CarPosition);
		void GetRelativeCarPosition(bool Red, float* RelativePosition);
		void InitializeTraditionalActors();
		void UpdateVideoScoreboardActor(bool Traditional, bool* ActorFound);
		int32_t GetTimeRemaining();
		void InitializeRoadActors();
		void Initialize();
		void UserConstructionScript();
		void StartRoad__FinishedFunc();
		void StartRoad__UpdateFunc();
		void BlueCarDriftTimeline__FinishedFunc();
		void BlueCarDriftTimeline__UpdateFunc();
		void RedCarDriftTimeline__FinishedFunc();
		void RedCarDriftTimeline__UpdateFunc();
		void AnimateFinishLine__FinishedFunc();
		void AnimateFinishLine__UpdateFunc();
		void AnimateStartingLine__FinishedFunc();
		void AnimateStartingLine__UpdateFunc();
		void BlueCarDriveAway__FinishedFunc();
		void BlueCarDriveAway__UpdateFunc();
		void RedCarDriveAway__FinishedFunc();
		void RedCarDriveAway__UpdateFunc();
		void AnimateBlueCarY__FinishedFunc();
		void AnimateBlueCarY__UpdateFunc();
		void AnimateRedCarY__FinishedFunc();
		void AnimateRedCarY__UpdateFunc();
		void ScaleStartingLine__FinishedFunc();
		void ScaleStartingLine__UpdateFunc();
		void SpawnAnimBlueCar__FinishedFunc();
		void SpawnAnimBlueCar__UpdateFunc();
		void SpawnAnimRedCar__FinishedFunc();
		void SpawnAnimRedCar__UpdateFunc();
		void Timeline_TestingFinishLine__FinishedFunc();
		void Timeline_TestingFinishLine__UpdateFunc();
		void ReceiveBeginPlay();
		void BW_StartTimer(int32_t Count);
		void TimerLoop();
		void ClearTimer();
		void PlayerBall1Thrown(int32_t AlleyID);
		void PlayerBall2Thrown(int32_t AlleyID);
		void PlayerBallCountReset(int32_t AlleyID);
		void StartRaceTrack();
		void StopMovingRoad();
		void BlueCarDrift();
		void RedCarDrift();
		void ShowFinishLine(bool TrainingTimer);
		void HideFinishLine();
		void ResetStartLine();
		void BlueCarExit();
		void RedCarExit();
		void ReceiveTick(float DeltaSeconds);
		void UpdateCarFromScore(int32_t Player, int32_t NewScore);
		void UpdateBlueCarPosition();
		void UpdateRedCarPosition();
		void CarsExitScoreboard();
		void ResetBlueCar();
		void ResetRedCar();
		void ResetCars();
		void StartRaceSounds();
		void StopRaceLoop();
		void BW_StartTimerNoRace(int32_t Value);
		void BW_SetInitialTimer(int32_t InitialTime, bool TrainingTimer);
		void ShowTrainingFinishLine();
		void HideTrainingFinishLine();
		void UpdateMatchScore(int32_t Player1GamesWon, int32_t Player2GamesWon);
		void TravelCapsuleOpening(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ExecuteUbergraph_BW_CenterScoreboard(int32_t EntryPoint);
		void TimerChange__DelegateSignature(int32_t TimeLeft);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
