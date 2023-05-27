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
	 * BlueprintGeneratedClass DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C
	 * Size -> 0x0018 (FullSize[0x0438] - InheritedSize[0x0420])
	 */
	class ADoubleCross_ParticleTrigger_C : public AScramBallTrigger
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FMinMaxFloat                                        KillTime;                                                // 0x0430(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void UserConstructionScript();
		void OnTriggered(class AScramBall* Ball);
		void ExecuteUbergraph_DoubleCross_ParticleTrigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
