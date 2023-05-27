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
	 * BlueprintGeneratedClass GutterTracker_BP.GutterTracker_BP_C
	 * Size -> 0x0088 (FullSize[0x0308] - InheritedSize[0x0280])
	 */
	class UGutterTracker_BP_C : public UBowlingGutterTracker
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_E8C6[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LeftParticleTransform;                                   // 0x0290(0x0030) Edit, BlueprintVisible, Net, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class UParticleSystem*                                     ParticleTemplate;                                        // 0x02C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ACMN_ParticleEmitter_C*                              LeftParticleActor;                                       // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FTransform                                          RightParticleTransform;                                  // 0x02D0(0x0030) Edit, BlueprintVisible, Net, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class ACMN_ParticleEmitter_C*                              RightParticleActor;                                      // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void FireLeftParticle();
		void FireRightParticle();
		void LeftNetMultiCast();
		void RightNetMulticast();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void LeftServerCallup();
		void RightServerCallup();
		void ExecuteUbergraph_GutterTracker_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
