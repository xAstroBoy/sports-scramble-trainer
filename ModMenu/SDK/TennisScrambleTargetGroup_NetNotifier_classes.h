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
	 * BlueprintGeneratedClass TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C
	 * Size -> 0x0020 (FullSize[0x0440] - InheritedSize[0x0420])
	 */
	class ATennisScrambleTargetGroup_NetNotifier_C : public AScramBallTrigger
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             TriggeredByBall;                                         // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UserConstructionScript();
		void OnTriggered(class AScramBall* Ball);
		void ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier(int32_t EntryPoint);
		void TriggeredByBall__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
