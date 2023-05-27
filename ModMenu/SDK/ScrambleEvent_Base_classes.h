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
	 * BlueprintGeneratedClass ScrambleEvent_Base.ScrambleEvent_Base_C
	 * Size -> 0x0058 (FullSize[0x0380] - InheritedSize[0x0328])
	 */
	class AScrambleEvent_Base_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Root;                                                    // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ATN_Ball_Base_C*                                     Ball;                                                    // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FScrambleEvent                                      ScrambleEvent;                                           // 0x0340(0x0028) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              SubsetBallClass;                                         // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              SubsetRacketClass;                                       // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class AScramSportManagerTennis*                            ScramSportManager;                                       // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UClass* GetNewBallType();
		void QueueScrambleEffect(const class FScriptDelegate& BallHitDelegate, const class FScriptDelegate& OnDestroyedDelegate);
		void ActivateScrambleEffect(class ATN_Ball_Base_C* Ball, class AActor* OtherActor, bool* ScrambleEffectSuccess);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void DestroySelf(class AActor* DestroyedActor);
		void PerformScrambleEffect(class ATN_Ball_Base_C* NewBall);
		void CheckEquipmentMatch(class ATN_Ball_Base_C* Ball, bool CheckInstrument, class ATN_Instrument_Base_C* Instrument, bool LocalPlayerInstrument);
		void ExecuteUbergraph_ScrambleEvent_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
