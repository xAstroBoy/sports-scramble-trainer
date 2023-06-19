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
	 * BlueprintGeneratedClass TN_Ball_Base.TN_Ball_Base_C
	 * Size -> 0x0248 (FullSize[0x1158] - InheritedSize[0x0F10])
	 */
	class ATN_Ball_Base_C : public ATennisBall
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0F10(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScramBounceLighting*                                ScramBounceLighting;                                     // 0x0F18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBlobShadowComponent*                                BlobShadow;                                              // 0x0F20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugPrintHitSpeed;                                      // 0x0F28(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DisableScramble;                                         // 0x0F29(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       PreviousHitByInstrument;                                 // 0x0F2A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_119Y[0x5];                                   // 0x0F2B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     SpawnVFX;                                                // 0x0F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpawnVFXScale;                                           // 0x0F38(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2VMB[0x4];                                   // 0x0F44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SpawnSFX;                                                // 0x0F48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          DespawnSFX;                                              // 0x0F50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ImbuedVFX;                                               // 0x0F58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACMN_Imbued_Base_C*                                  ImbuedParticle;                                          // 0x0F60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ImbuedVFXScale;                                          // 0x0F68(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QKRK[0x4];                                   // 0x0F74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ChargedHitVFX;                                           // 0x0F78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ChargedVFX;                                              // 0x0F80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ChargedParticle;                                         // 0x0F88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ChargedVFXScale;                                         // 0x0F90(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZUID[0x4];                                   // 0x0F9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ChargedHitSFX;                                           // 0x0FA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     SliceVFX;                                                // 0x0FA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            SliceParticle;                                           // 0x0FB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ChargedSliceParticle;                                    // 0x0FB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SliceVFXScale;                                           // 0x0FC0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XGU8[0x4];                                   // 0x0FCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SliceSFX;                                                // 0x0FD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ChargedSliceVFX;                                         // 0x0FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ChargedSliceVFXScale;                                    // 0x0FE0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9HLN[0x4];                                   // 0x0FEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ChargedSliceHitSFX;                                      // 0x0FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACMN_Trail_Base_C*                                   CurrentTrail;                                            // 0x0FF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     SliceBounceVFX;                                          // 0x1000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BounceVFXScale;                                          // 0x1008(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A7AM[0x4];                                   // 0x1014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     NormalBounceVFX;                                         // 0x1018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ChargeBounceVFX;                                         // 0x1020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          BounceSFX;                                               // 0x1028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          BounceSliceSFX;                                          // 0x1030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          BounceChargedSFX;                                        // 0x1038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          BounceChargedSliceSFX;                                   // 0x1040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TrailScalar;                                             // 0x1048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_04XO[0x4];                                   // 0x104C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ETennisShotType, class UClass*>                       TrailMap;                                                // 0x1050(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<ETennisShotType, float>                               TrailScaleMap;                                           // 0x10A0(0x0050) Edit, BlueprintVisible, ZeroConstructor
		float                                                      ChargePitchMultiplier;                                   // 0x10F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1MX9[0x4];                                   // 0x10F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     NormalHitVFX;                                            // 0x10F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SFX_HitNet;                                              // 0x1100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          NewBounceSound;                                          // 0x1108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     LocalPlayerHitVFX;                                       // 0x1110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     SliceHitVFX;                                             // 0x1118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BallShotTypeChange;                                      // 0x1120(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        ImbuedTrailColor;                                        // 0x1130(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Imbued;                                                  // 0x1140(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECrossPlayType                                             CrossPlayRestriction;                                    // 0x1141(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K9BO[0x6];                                   // 0x1142(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            LocalHitParticle;                                        // 0x1148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            HitParticle;                                             // 0x1150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateMesh();
		void StopLocalNormalHitFX();
		void StopNormalHitFX();
		void PlaySliceSound();
		void PlayHitNetSound();
		void PlayEnvironmentBounceSound(const struct FVector& Normal);
		void LocalPlayerInstrumentImpactFX();
		void PlayNormalHitFX(class AActor* GrabberActor);
		void PlayChargeSliceBounceFX(const struct FVector& Normal, const struct FVector& Location);
		void PlayNormalBounceFX(const struct FVector& Normal, const struct FVector& Location);
		void PlayChargeBounceFX(const struct FVector& Normal, const struct FVector& Location);
		void PlaySliceBounceFX(const struct FVector& Normal, const struct FVector& Location);
		void StopAllShotTypeFX();
		void StopChargedSliceFX();
		void PlayChargedSliceFX();
		void StopSliceFX();
		void PlaySliceFX();
		void StopChargedFX();
		void PlayChargedFX(bool NoHitSFX);
		void StopImbuedFX();
		void PlayImbuedFX();
		void PlayDespawnFX();
		void PlaySpawnFX();
		void SetTrail(ETennisShotType ShotType, bool NoHitSFX);
		void ClearTrail(bool snap);
		void BallVanish(bool playOut);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void BallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void OnShotChanged();
		void ReceiveTick(float DeltaSeconds);
		void DestroyPrimitive(bool playOut, float Delay);
		void NetPlayImbuedFX();
		void NetStopImbuedFX();
		void ExecuteUbergraph_TN_Ball_Base(int32_t EntryPoint);
		void BallShotTypeChange__DelegateSignature(ETennisShotType ShotType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
