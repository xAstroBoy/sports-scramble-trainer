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
	 * BlueprintGeneratedClass BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C
	 * Size -> 0x00D8 (FullSize[0x0518] - InheritedSize[0x0440])
	 */
	class ABaseballPitchingTarget_BP_C : public ABaseballPitchingTarget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Icon;                                                    // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleBurst;                                           // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScramTimeLineComponent*                             ScalingAnimation;                                        // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Frame;                                                   // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UStaticMesh*>                                 Frames;                                                  // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FSlateColor                                         ImbuedColor;                                             // 0x0480(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         RegularColor;                                            // 0x04A8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        ImbuedFrameColor;                                        // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        RegularFrameColor;                                       // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          BreakSound;                                              // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UParticleSystem*>                             Particles;                                               // 0x04F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FScriptMulticastDelegate                             PitchingTargetHit;                                       // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ValidateBallTrajectory(class AScramBall* IncomingBall, bool* ValidHit);
		void SetVisibleElements();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnTriggered(class AScramBall* Ball);
		void AutoCleanup();
		void BreakTarget();
		void LocalShow();
		void LocalHide();
		void ChangeTargetVisibility(bool ShowTarget);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BaseballPitchingTarget_BP(int32_t EntryPoint);
		void PitchingTargetHit__DelegateSignature(EBaseballScrambleTargetLocations Location);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
