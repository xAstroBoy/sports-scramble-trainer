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
	 * BlueprintGeneratedClass ScramGameState_BP.ScramGameState_BP_C
	 * Size -> 0x0018 (FullSize[0x0428] - InheritedSize[0x0410])
	 */
	class AScramGameState_BP_C : public AScramGameState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class APauseCapsule_C*                                     PauseCapsuleBP;                                          // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ServerNotifyPause(bool isCalledByHost, EGamePauseReason reason);
		void ServerNotifyResume(bool isCalledByHost, EGamePauseReason reason);
		void BlueprintCall_OnMultiplayerGamePaused(bool isCalledByHost, EGamePauseReason reason);
		void BlueprintCall_OnMultiplayerGameResume(bool isCalledByHost, EGamePauseReason reason);
		void ExecuteUbergraph_ScramGameState_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
