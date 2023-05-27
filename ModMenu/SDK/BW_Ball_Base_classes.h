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
	 * BlueprintGeneratedClass BW_Ball_Base.BW_Ball_Base_C
	 * Size -> 0x0181 (FullSize[0x0F01] - InheritedSize[0x0D80])
	 */
	class ABW_Ball_Base_C : public ABowlingBall
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScramTimeLineComponent*                             ScramTimeLine;                                           // 0x0D88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioRoll;                                               // 0x0D90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBlobShadowComponent*                                BlobShadow;                                              // 0x0D98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugPrintHitSpeed;                                      // 0x0DA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DisableScramble;                                         // 0x0DA1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       HitByInstrument;                                         // 0x0DA2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PreviousHitByInstrument;                                 // 0x0DA3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BallHitNet;                                              // 0x0DA4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DOU4[0x3];                                   // 0x0DA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     SpawnVFX;                                                // 0x0DA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpawnVFXScale;                                           // 0x0DB0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SHKB[0x4];                                   // 0x0DBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SpawnSFX;                                                // 0x0DC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          DespawnSFX;                                              // 0x0DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ImbuedVFX;                                               // 0x0DD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ImbuedParticle;                                          // 0x0DD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ImbuedVFXScale;                                          // 0x0DE0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M3FL[0x4];                                   // 0x0DEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ChargedHitVFX;                                           // 0x0DF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ChargedVFX;                                              // 0x0DF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ChargedParticle;                                         // 0x0E00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ChargedVFXScale;                                         // 0x0E08(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LPLX[0x4];                                   // 0x0E14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ChargedHitSFX;                                           // 0x0E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     SliceVFX;                                                // 0x0E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            SliceParticle;                                           // 0x0E28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ChargedSliceParticle;                                    // 0x0E30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SliceVFXScale;                                           // 0x0E38(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MF6J[0x4];                                   // 0x0E44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SliceSFX;                                                // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ChargedSliceVFX;                                         // 0x0E50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ChargedSliceVFXScale;                                    // 0x0E58(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D8BE[0x4];                                   // 0x0E64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACMN_Trail_Base_C*                                   CurrentTrail;                                            // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          PinHitSFX;                                               // 0x0E70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EBowlingThrowType, class UClass*>                     TrailMap;                                                // 0x0E78(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      TrailScalar;                                             // 0x0EC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpawnWithDespawnFX;                                      // 0x0ECC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_VARX[0x3];                                   // 0x0ECD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoundVolumeScalar;                                       // 0x0ED0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YO2X[0x4];                                   // 0x0ED4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingAlley_BP_C*                                  Alley;                                                   // 0x0ED8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       Scored;                                                  // 0x0EE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YH36[0x7];                                   // 0x0EE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ThrowChanged;                                            // 0x0EE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USoundCue*                                           BounceSound;                                             // 0x0EF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldScaleUpOnSpawn;                                    // 0x0F00(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UpdateMesh();
		void RemoveBindings();
		void SetBindings();
		void StopAllShotTypeFX();
		void StopChargedSliceFX();
		void PlayChargedSliceFX();
		void StopSliceFX();
		void PlaySliceFX();
		void StopChargedFX();
		void PlayChargedFX();
		void StopImbuedFX();
		void PlayImbuedFX();
		void PlayDespawnFX();
		void PlaySpawnFX(bool SfxOnly);
		void SetTrail(EBowlingThrowType ThrowType);
		void ClearTrail();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void OnThrowChanged();
		void OnFloorResultChanged(EFloorResult newFloorResult);
		void DestroyPrimitive(bool playOut, float Delay);
		void ScaleBall();
		void OnScaleUpFinished(bool Forward);
		void OnHitPin(class ABowlingPin* Pin);
		void OnHitLane(class ABowlingLane* Lane, float bounceSpeed);
		void OnHitFootballBlocker(class ABowlingFootballBlocker* FootballBlocker);
		void ExecuteUbergraph_BW_Ball_Base(int32_t EntryPoint);
		void ThrowChanged__DelegateSignature(const struct FBowlingThrow& ThrowStructure, class ABW_Ball_Base_C* Ball);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
