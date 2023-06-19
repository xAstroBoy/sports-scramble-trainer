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
	 * BlueprintGeneratedClass BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C
	 * Size -> 0x0080 (FullSize[0x05B0] - InheritedSize[0x0530])
	 */
	class ABaseballAICatcher_Blueprint_C : public AScramBaseballCatcherAI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Fan_ShadowPlane;                                         // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScaleGlove_Scale_5BBD4A4D4276C8152DD1A5AF5BA7DD6D; // 0x0540(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScaleGlove__Direction_5BBD4A4D4276C8152DD1A5AF5BA7DD6D; // 0x0544(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A8NC[0x3];                                   // 0x0545(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScaleGlove;                                     // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimelineDespawn_ScaleDown_3010BC224C534B24A4000D85086049A8; // 0x0550(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TimelineDespawn__Direction_3010BC224C534B24A4000D85086049A8; // 0x0554(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NLG0[0x3];                                   // 0x0555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TimelineDespawn;                                         // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimelineSpawnIn_ScaleUp_6E932E5C436EB343D593F1A3D23D2B04; // 0x0560(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TimelineSpawnIn__Direction_6E932E5C436EB343D593F1A3D23D2B04; // 0x0564(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T6E5[0x3];                                   // 0x0565(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TimelineSpawnIn;                                         // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundBase*>                                  CatchSounds;                                             // 0x0570(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UMaterialInstance*                                   Material;                                                // 0x0580(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CatcherCaughtBall;                                       // 0x0588(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UMaterialInstance*                                   MittMaterial;                                            // 0x0598(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       UseSpawnDespawnVFX;                                      // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_PXG1[0x7];                                   // 0x05A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastProccessedBall;                                      // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TravelTubeCheck();
		void ApplyMittMaterial();
		void OnRep_MittMaterial();
		void OnRep_Material();
		void ApplyMaterial();
		void SetMaterial(class UMaterialInstance* CatcherMaterial, class UMaterialInstance* MittMaterial);
		void UserConstructionScript();
		void TimelineSpawnIn__FinishedFunc();
		void TimelineSpawnIn__UpdateFunc();
		void TimelineDespawn__FinishedFunc();
		void TimelineDespawn__UpdateFunc();
		void Timeline_ScaleGlove__FinishedFunc();
		void Timeline_ScaleGlove__UpdateFunc();
		void BallCaught(class AActor* Ball, const struct FVector& Position, EBaseballBallType BallType, bool Imbued);
		void ReceiveBeginPlay();
		void DespawnCatcher();
		void CaughtNetCaster(class AActor* Ball, const struct FVector& Position, EBaseballBallType BallType, bool Imbued);
		void RevealMitt(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ShowMitt();
		void HideMitt();
		void ExecuteUbergraph_BaseballAICatcher_Blueprint(int32_t EntryPoint);
		void CatcherCaughtBall__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
