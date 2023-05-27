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
	 * BlueprintGeneratedClass BaseballPracticeArenaLight.BaseballPracticeArenaLight_C
	 * Size -> 0x00C0 (FullSize[0x04E0] - InheritedSize[0x0420])
	 */
	class ABaseballPracticeArenaLight_C : public AScramBallTrigger
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInstancedMesh*                                      InstancedMesh;                                           // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh_FullLight;                                    // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FlyTextLocation;                                         // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UPrimitiveComponent*>                         StaticMeshList;                                          // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       ShowFlashScore;                                          // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9B26[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         FlashScoreColor;                                         // 0x0468(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    FlashScoreAmount;                                        // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RT66[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABB_Ball_Base_C*                                     BallActor;                                               // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          ScoreText;                                               // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             LightFixtureHitDetected;                                 // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      FlashTime;                                               // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeactivationDelay;                                       // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReactivationDelay;                                       // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DestroyAfterHit;                                         // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZEFD[0x3];                                   // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              GameManager;                                             // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PlayerBrokeLightFixture;                                 // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void FlashScore(int32_t score, const struct FSlateColor& Color, bool* ScoreFlashed);
		void HideBallTarget(bool Instant, bool* Callback);
		void ShowBallTarget(bool Instant, bool* Callback);
		void ResetTarget();
		void DeactivateEverything();
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BreakLightFixture();
		void ScorePlayerHit(class ABB_Ball_Base_C* Ball);
		void CleanupTarget();
		void ResetLightFixture();
		void Deactivate();
		void OnTriggered(class AScramBall* Ball);
		void ExecuteUbergraph_BaseballPracticeArenaLight(int32_t EntryPoint);
		void PlayerBrokeLightFixture__DelegateSignature(class ABB_Ball_Base_C* Ball, int32_t ScoreAmount);
		void LightFixtureHitDetected__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
