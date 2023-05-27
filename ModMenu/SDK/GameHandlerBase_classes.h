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
	 * BlueprintGeneratedClass GameHandlerBase.GameHandlerBase_C
	 * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
	 */
	class AGameHandlerBase_C : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             GameOver;                                                // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             TeleportThePlayArea;                                     // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void PreMenuCleanup(bool* emptyreturn);
		void QuitGame();
		void UserConstructionScript();
		void TeleportThePlayArea__DelegateSignature(EScramSport Sport, bool TrainingLevel, const class FName& LevelOverride);
		void GameOver__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
