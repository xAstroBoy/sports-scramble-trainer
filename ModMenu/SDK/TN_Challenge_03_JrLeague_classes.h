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
	 * BlueprintGeneratedClass TN_Challenge_03_JrLeague.TN_Challenge_03_JrLeague_C
	 * Size -> 0x0036 (FullSize[0x06F0] - InheritedSize[0x06BA])
	 */
	class ATN_Challenge_03_JrLeague_C : public ATN_Challenge_Base_C
	{
	public:
		unsigned char                                              UnknownData_F0SH[0x6];                                   // 0x06BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Crowd;                                                   // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Scoreboards;                                             // 0x06D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class FName>                                        AnnouncerSequence;                                       // 0x06E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void SetupInfoText();
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void Shutdown(bool* ShutdownBegun);
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void DelayDestroy();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SportManager_MatchComplete(EGameResult Result);
		void NotifyChallengeContinue(class AActor* DestroyedActor);
		void TriggerAlternativeCadence();
		void Shortcut();
		void ExecuteUbergraph_TN_Challenge_03_JrLeague(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
