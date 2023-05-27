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
	 * BlueprintGeneratedClass MenuInstrument_BP.MenuInstrument_BP_C
	 * Size -> 0x00F0 (FullSize[0x0EC0] - InheritedSize[0x0DD0])
	 */
	class AMenuInstrument_BP_C : public AMenuInstrument
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0DD0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0DD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScramBounceLighting*                                ScramBounceLighting;                                     // 0x0DE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioBallHit;                                            // 0x0DE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Grow_Scale_61819E8F4E07DB4681EC91BBF006FC19;             // 0x0DF0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Grow__Direction_61819E8F4E07DB4681EC91BBF006FC19;        // 0x0DF4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V93Y[0x3];                                   // 0x0DF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Grow;                                                    // 0x0DF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Shrink_Scale_DEDFDBCC4D6B1597559199BE40D459C2;           // 0x0E00(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Shrink__Direction_DEDFDBCC4D6B1597559199BE40D459C2;      // 0x0E04(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8SVC[0x3];                                   // 0x0E05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Shrink;                                                  // 0x0E08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InitialScale;                                            // 0x0E10(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H1F5[0x4];                                   // 0x0E1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          DefaultBallHItSFX;                                       // 0x0E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          DefaultBallHItHardSFX;                                   // 0x0E28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HardHitSpeedThreshold;                                   // 0x0E30(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumHitSpeedThreshold;                                // 0x0E34(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FInstrumentSFXOverride>                      SFXOverrides;                                            // 0x0E38(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       InitialPhysicsOff;                                       // 0x0E48(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		EScramInstrumentHitPhysics                                 OldHitPhysics;                                           // 0x0E49(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9Q8T[0x2];                                   // 0x0E4A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MotionBlurScale;                                         // 0x0E4C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ActivateLeftSFX;                                         // 0x0E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ActivateRightSFX;                                        // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color1;                                                  // 0x0E70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color2;                                                  // 0x0E80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RightHandPointerOffset;                                  // 0x0E90(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LefthandPointerOffset;                                   // 0x0E9C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Rift_RightHandOffset;                                    // 0x0EA8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Rift_LeftHandOffset;                                     // 0x0EB4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback);
		void GetHand(class AScramPlayerHand** Hand);
		void InitializeMaterial();
		void PlayActivateSound();
		void PrepareMotionBlur();
		void PlaySpawnFX();
		void SetSFXOverride(class UClass* BallClass, bool HardHit);
		void PlayBallHitSound(float BallSpeed, class UClass* BallClass);
		void InitInstrument();
		void UserConstructionScript();
		void Grow__FinishedFunc();
		void Grow__UpdateFunc();
		void Shrink__FinishedFunc();
		void Shrink__UpdateFunc();
		void ShowInstrument();
		void ShrinkRemoveInstrument();
		void InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void DestroyPrimitive(bool playOut, float Delay);
		void SpawnEffect(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void DisableSpawnFX();
		void OnChangePointerType();
		void ReceiveBeginPlay();
		void AdjustMenuPointer();
		void InitializeMenuPointer();
		void OnNotifyInputPress();
		void ExecuteUbergraph_MenuInstrument_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
