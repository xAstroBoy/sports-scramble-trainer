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
	 * BlueprintGeneratedClass BB_Train_05_BatBreaking.BB_Train_05_BatBreaking_C
	 * Size -> 0x0078 (FullSize[0x0698] - InheritedSize[0x0620])
	 */
	class ABB_Train_05_BatBreaking_C : public ABB_Train_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Crowd;                                                   // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog08;                                          // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog15;                                          // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog14;                                          // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog13;                                          // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog12;                                          // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog11;                                          // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog10;                                          // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Dialog09;                                          // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      PauseBetweenVO;                                          // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBaseballBatterPreferences                          OriginalBattingPreferences;                              // 0x0674(0x0003) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_RF9D[0x1];                                   // 0x0677(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_BatProgression_C*                                BatProgression;                                          // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AnnouncerClosingSequence;                                // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6I9Q[0x7];                                   // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FinalAnnouncerSequence;                                  // 0x0688(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void DespawnRunners();
		void StopPlayingAudioComponents();
		void SetupInfoText();
		void BB_TRN_Initialize();
		void UserConstructionScript();
		void OnLoaded_902486BC4516CAA8D49FB4B8117064F9(class UObject* Loaded);
		void OnLoaded_902486BC4516CAA8D49FB4B848C13925(class UObject* Loaded);
		void OnLoaded_902486BC4516CAA8D49FB4B82FA9C270(class UObject* Loaded);
		void OnLoaded_902486BC4516CAA8D49FB4B8CC6527D2(class UObject* Loaded);
		void OnLoaded_902486BC4516CAA8D49FB4B8E758EFF1(class UObject* Loaded);
		void OnLoaded_902486BC4516CAA8D49FB4B824099FEE(class UObject* Loaded);
		void OnLoaded_902486BC4516CAA8D49FB4B887F26B4E(class UObject* Loaded);
		void OnLoaded_902486BC4516CAA8D49FB4B8BDA0DDBD(class UObject* Loaded);
		void OnLoaded_782C11CD4E28483574C084A1F774ED59(class UObject* Loaded);
		void OnLoaded_725E0CF4435E7AB78701108C6327F75A(class UObject* Loaded);
		void OnLoaded_5A1B26DD40EB8B53D5E38A9FBC5E794F(class UObject* Loaded);
		void OnLoaded_DFB8B8EB44F77542734FA8A47C66BD81(class UObject* Loaded);
		void ReceiveBeginPlay();
		void ReadyForTraining();
		void Tutorial_Step_01();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void Tutorial_Step_02();
		void NotifyTrainingContinue(class AActor* DestroyedActor);
		void CalculateScore();
		void CountDownCompleted();
		void TrainingStart();
		void AnnouncerExitSequenceComplete();
		void BatSwapped(EBaseballInstrumentType NewBat);
		void ScorePlayer();
		void BindSportMgrEvents();
		void HitCaught(const struct FVector& BallLocation);
		void HitFoul();
		void HitSingle();
		void HitDouble();
		void HitTriple();
		void HitHomerun(bool BasesLoaded);
		void UnbindEvents();
		void RunnersReady();
		void OpenTravelCapsule(float Delay);
		void AudioFinished_02();
		void CustomEvent();
		void CustomEvent_2();
		void CustomEvent_3();
		void CustomEvent_4();
		void CustomEvent_5();
		void CustomEvent_6();
		void CustomEvent_7();
		void CustomEvent_8();
		void CustomEvent_9();
		void CustomEvent_10();
		void CustomEvent_11();
		void ExecuteUbergraph_BB_Train_05_BatBreaking(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
