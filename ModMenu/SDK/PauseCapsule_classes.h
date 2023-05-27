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
	 * BlueprintGeneratedClass PauseCapsule.PauseCapsule_C
	 * Size -> 0x0070 (FullSize[0x03C8] - InheritedSize[0x0358])
	 */
	class APauseCapsule_C : public AScramPauseCapsule
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Root;                                                    // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_BlackPulse_PulseFraction_888B747745B5438B170A658880780761; // 0x0368(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_BlackPulse__Direction_888B747745B5438B170A658880780761; // 0x036C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LFRR[0x3];                                   // 0x036D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_BlackPulse;                                     // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CapsuleAlreadyExisted;                                   // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RYE2[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APauseMenu_C*                                        PauseMenu;                                               // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             TransitionReady;                                         // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AScramPlayerController_BP_C*                         PlayerController;                                        // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlackPulseDuration;                                      // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W0KX[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramGameState_BP_C*                                GameState;                                               // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PulseEnd;                                                // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void Cleanup();
		void SpawnPauseMenu();
		void Initialize();
		void UserConstructionScript();
		void Timeline_BlackPulse__FinishedFunc();
		void Timeline_BlackPulse__UpdateFunc();
		void ReceiveBeginPlay();
		void ShowCapsule();
		void Unpause(bool KeepCapsule);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BlackPulse();
		void BlackPulseOff();
		void CreateCapsule();
		void RemoveCapsule();
		void ReceiveTick(float DeltaSeconds);
		void RemoveThisActor();
		void DemoUnpause(bool KeepCapsule, bool ReenablePause);
		void BeginUnpause();
		void QueuedRemoveCapsule();
		void ExecuteUbergraph_PauseCapsule(int32_t EntryPoint);
		void PulseEnd__DelegateSignature();
		void TransitionReady__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
