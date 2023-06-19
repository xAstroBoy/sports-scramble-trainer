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
	 * BlueprintGeneratedClass TN_Instrument_Base.TN_Instrument_Base_C
	 * Size -> 0x0128 (FullSize[0x0FB8] - InheritedSize[0x0E90])
	 */
	class ATN_Instrument_Base_C : public ATennisInstrument
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E90(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            SwingParticleSystem;                                     // 0x0E98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScramBounceLighting*                                ScramBounceLighting;                                     // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioBallHit;                                            // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_Emissive_alpha_5D9A1EFE49C3E85973EAE3A186FC7413; // 0x0EB0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_Emissive__Direction_5D9A1EFE49C3E85973EAE3A186FC7413; // 0x0EB4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AJWG[0x3];                                   // 0x0EB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_Emissive;                                       // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Grow_Scale_02DB3B08431413463BEFE6A1532DF421;             // 0x0EC0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Grow__Direction_02DB3B08431413463BEFE6A1532DF421;        // 0x0EC4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S5FA[0x3];                                   // 0x0EC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Grow;                                                    // 0x0EC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Shrink_Scale_00D980264E5F46E73667E1A03F355299;           // 0x0ED0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Shrink__Direction_00D980264E5F46E73667E1A03F355299;      // 0x0ED4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P8LE[0x3];                                   // 0x0ED5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Shrink;                                                  // 0x0ED8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InitialScale;                                            // 0x0EE0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IEDN[0x4];                                   // 0x0EEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          DefaultBallHItSFX;                                       // 0x0EF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          DefaultBallHItHardSFX;                                   // 0x0EF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HardHitSpeedThreshold;                                   // 0x0F00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumHitSpeedThreshold;                                // 0x0F04(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FInstrumentSFXOverride>                      SFXOverrides;                                            // 0x0F08(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       InitialPhysicsOff;                                       // 0x0F18(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		EScramInstrumentHitPhysics                                 OldHitPhysics;                                           // 0x0F19(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0OCZ[0x2];                                   // 0x0F1A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MotionBlurScale;                                         // 0x0F1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EmmisiveSlot;                                            // 0x0F28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseEmissiveTint;                                         // 0x0F2C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S5JA[0x3];                                   // 0x0F2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DefaultTint;                                             // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DefaultSweepColor;                                       // 0x0F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultIntensity;                                        // 0x0F50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        NormalHitColor;                                          // 0x0F54(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SliceHitColor;                                           // 0x0F64(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ChargeHitColor;                                          // 0x0F74(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ChargeSliceHitColor;                                     // 0x0F84(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETennisShotType                                            ShotType;                                                // 0x0F94(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_55J7[0x3];                                   // 0x0F95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            EmmissiveMaterial;                                       // 0x0F98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECrossPlayType                                             CrossPlayRestriction;                                    // 0x0FA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KQUV[0x3];                                   // 0x0FA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrossPlayKillTime;                                       // 0x0FA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AcceleratorColor;                                        // 0x0FA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback);
		void UpdateMesh();
		void InitializeColorsMaterial();
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
		void Timeline_Emissive__FinishedFunc();
		void Timeline_Emissive__UpdateFunc();
		void ShowInstrument();
		void ShrinkRemoveInstrument();
		void ReceiveBeginPlay();
		void InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void DestroyPrimitive(bool playOut, float Delay);
		void SpawnEffect(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void DisableSpawnFX();
		void PlayHitShaderFX(ETennisShotType ShotType, ETennisBallType BallType);
		void TN_PlayAvatarSwingVFX();
		void TN_PlayAvatarHitVFX();
		void ExecuteUbergraph_TN_Instrument_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
