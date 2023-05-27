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
	 * BlueprintGeneratedClass BB_BatProgression.BB_BatProgression_C
	 * Size -> 0x002C (FullSize[0x0354] - InheritedSize[0x0328])
	 */
	class ABB_BatProgression_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BatProgressionBatSwap;                                   // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EBaseballInstrumentType                                    LastBatSwap;                                             // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBaseballInstrumentType                                    ScrambleBatChange;                                       // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PBP_Pending;                                             // 0x0352(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PBP_Enabled;                                             // 0x0353(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ClearPlayByPlay();
		void SwapBat(class AScramPlayerHand* BattingPlayerHand, class ABaseballAIBatter_Blueprint_C* BattingAI, EBaseballInstrumentType newBatType);
		void UpdateProgression(class AScramPlayerHand* BattingPlayerHand, class ABaseballAIBatter_Blueprint_C* BattingAI, class ABaseballInstrument* Bat);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnBaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ProcessPlayByPlay(EBaseballInstrumentType newBatType);
		void QueuScramblePBP(EBaseballInstrumentType ScrambleBatType);
		void ExecuteUbergraph_BB_BatProgression(int32_t EntryPoint);
		void BatProgressionBatSwap__DelegateSignature(EBaseballInstrumentType newBatType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
