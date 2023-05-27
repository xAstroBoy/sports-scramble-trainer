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
	 * BlueprintGeneratedClass ServeLocationIndicator.ServeLocationIndicator_C
	 * Size -> 0x0088 (FullSize[0x04A8] - InheritedSize[0x0420])
	 */
	class AServeLocationIndicator_C : public AScramPlayerServeTrigger
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     AttractAudio;                                            // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            AttractParticleSystem;                                   // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     DespawnAudio;                                            // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     SpawnAudio;                                              // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            DespawnParticleSystem;                                   // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            SpawnParticleSystem;                                     // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerEntered;                                           // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UGJ3[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BallGrabbed;                                             // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             BallSpawned;                                             // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ShowOnLocalMachine;                                      // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseAttractAudio;                                         // 0x0489(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_TDU7[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer;                                                   // 0x0490(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldBeVisible;                                         // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q7Q0[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramBall*                                          CurrentBall;                                             // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ResetBall(class AActor* Player);
		void UserConstructionScript();
		void OnLoaded_4D1D00D34A359C869029F29A6612B8F3(class UObject* Loaded);
		void Show();
		void Hide();
		void ServeBallGrabbed(class AScramBall* Ball);
		void ServeBallSpawned(class AScramBall* Ball);
		void OnPlayerEnter(class AScramPlayer* Player);
		void OnPlayerExit(class AScramPlayer* Player);
		void AttractLoop();
		void StopAttract();
		void ExecuteUbergraph_ServeLocationIndicator(int32_t EntryPoint);
		void BallSpawned__DelegateSignature(class AScramBall* Ball);
		void BallGrabbed__DelegateSignature(class AScramBall* Ball);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
