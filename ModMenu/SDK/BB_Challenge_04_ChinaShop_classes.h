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
	 * BlueprintGeneratedClass BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C
	 * Size -> 0x004C (FullSize[0x05CC] - InheritedSize[0x0580])
	 */
	class ABB_Challenge_04_ChinaShop_C : public ABB_Challenge_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABB_BallLauncher_C*                                  BallLauncher;                                            // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_StadiumWindowSpawner_C*                          WindowSpawner;                                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LaunchSpeed_Min;                                         // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LaunchSpeed_Max;                                         // 0x059C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        PrimaryAudioList;                                        // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       GameRunning;                                             // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AUE7[0x3];                                   // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LaunchDelay;                                             // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScramSportManagerBaseball*                          SportManager;                                            // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeadSpeed;                                               // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WindowScore;                                             // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightFixtureScore;                                       // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetupInfoText();
		void LaunchBall();
		void UpdateLauncherSpeeds();
		void UpdateBallType();
		void UpdateScoreAndBoard(int32_t AdditionalScore);
		void GrabInstrument();
		void SpawnElements();
		void Cleanup();
		void UserConstructionScript();
		void OnLoaded_047EFD2642655A33283F9C92F0F88C04(class UObject* Loaded);
		void OnLoaded_8C015A1644FF34F0E0844D9314767423(class UObject* Loaded);
		void OnLoaded_377666D14B3A393649660C81600EBD05(class UObject* Loaded);
		void BallLaunched(class AActor* NewBallActor);
		void ActorBroken(class ABB_Ball_Base_C* Baseball, int32_t WindowScore);
		void GameLoop();
		void OnBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void AnnouncerPaused();
		void AnnouncerPresenting();
		void AnnouncerPlayingSequence(const class FName& SequenceName);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BB_TriggerCountdown();
		void EndGame();
		void Start_Game();
		void AnnouncerExitSequenceComplete();
		void Shortcut();
		void ExecuteUbergraph_BB_Challenge_04_ChinaShop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
