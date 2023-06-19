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
	 * BlueprintGeneratedClass TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C
	 * Size -> 0x0037 (FullSize[0x06F1] - InheritedSize[0x06BA])
	 */
	class ATN_Challenge_05_SemiPro_C : public ATN_Challenge_Base_C
	{
	public:
		unsigned char                                              UnknownData_E9C9[0x6];                                   // 0x06BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Crowd;                                                   // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Scoreboards;                                             // 0x06D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class FName>                                        AnnouncerSequence;                                       // 0x06E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       PlayerHadRacketChange;                                   // 0x06F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetupInfoText();
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void Shutdown(bool* ShutdownBegun);
		void Initialize();
		void UserConstructionScript();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SportManager_MatchComplete(EGameResult Result);
		void NotifyChallengeContinue(class AActor* DestroyedActor);
		void TriggerAlternativeCadence();
		void DelayDestroy();
		void OnInstrumentGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ReceiveBeginPlay();
		void Shortcut();
		void ExecuteUbergraph_TN_Challenge_05_SemiPro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
