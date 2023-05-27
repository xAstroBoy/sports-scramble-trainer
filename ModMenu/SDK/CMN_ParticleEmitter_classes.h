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
	 * BlueprintGeneratedClass CMN_ParticleEmitter.CMN_ParticleEmitter_C
	 * Size -> 0x0022 (FullSize[0x036A] - InheritedSize[0x0348])
	 */
	class ACMN_ParticleEmitter_C : public AScramActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     Template;                                                // 0x0360(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       AutoActivate;                                            // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       DestroyOnFinish;                                         // 0x0369(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnSystemFinished(class UParticleSystemComponent* PSystem);
		void Activate(bool Reset);
		void SetColorParameter(const class FName& Name, const struct FLinearColor& Color);
		void ExecuteUbergraph_CMN_ParticleEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
