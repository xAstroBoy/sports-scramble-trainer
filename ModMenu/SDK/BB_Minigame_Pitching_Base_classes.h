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
	 * BlueprintGeneratedClass BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C
	 * Size -> 0x0119 (FullSize[0x0441] - InheritedSize[0x0328])
	 */
	class ABB_Minigame_Pitching_Base_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      GameElements;                                            // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_Strikezone_C*                                    strikeZone;                                              // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Strikes;                                                 // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Balls;                                                   // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_PitchTarget_C*                                   PitchTarget;                                             // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowBallCount;                                           // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ResetScoreOnBall;                                        // 0x0369(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UpdateScoreBoard;                                        // 0x036A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V0DJ[0x5];                                   // 0x036B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABallLauncher_C*                                     BallLauncher;                                            // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      delayBeforeThrow;                                        // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4WSY[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CurrentBallInPlay;                                       // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABB_Equipment_Set_C*                                 EquipmentSet;                                            // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             EquipmentGrabbed;                                        // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      DelayAfterThrow;                                         // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LauncherCanLaunch;                                       // 0x03A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QMIG[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TargetsHit;                                              // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UpdateTargetsHitScore;                                   // 0x03AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6YIJ[0x3];                                   // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentBallMaxBounces;                                   // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentBallBounces;                                      // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Player;                                                  // 0x03B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R701[0xC];                                   // 0x03C4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PitchingLocation;                                        // 0x03D0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBox                                                PitchingMinArea;                                         // 0x0400(0x001C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FBox                                                PitchingMaxArea;                                         // 0x041C(0x001C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABB_PitchingPropManager_C*                           PitchingPropManager;                                     // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CurrentBallRollingPitch;                                 // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AddActorToGameElementList(class AActor* Actor, bool* Callback);
		void Shutdown(bool* ShutdownBegun);
		void ClearCurrentBall();
		void GetMaxBounces(class AActor* Actor, int32_t* Result, bool* RollingPitch);
		void UpdatePitchTargetScoreboard();
		void ResetPitchingScoreboard(bool ShowBallCount);
		void CleanupScoreboards();
		void SpawnGameElements(bool UseStrikeZone, bool PlayStrikezoneSounds, bool SpawnTargets, bool DisplayStrikezoneText, bool ShowQuad);
		void UpdatePitchingScoreboard(bool ShowBallCount);
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void DelayDestroy();
		void ThrowBallAtPlayer(float delayBeforeThrow, float DelayAfterThrow);
		void BallLaunched(class AActor* Ball);
		void EquipmentGrabbedByPlayer(class AActor* DominantHand, class ABB_Mitt_C* Mitt);
		void TeleportComplete();
		void NoTeleport();
		void SpawnEquipmentSet();
		void GameReadyRunOperations();
		void ActiveBallScramHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void BallCaughtEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void StrikeZoneHit(class ABaseballBall* Ball, EScramStrikeResult Result);
		void BallThrown(class ABaseballBall* Ball);
		void CurrentBallInvalidated(class UObject* WorldContextObject);
		void BallDropped(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ActiveBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive);
		void ExecuteUbergraph_BB_Minigame_Pitching_Base(int32_t EntryPoint);
		void EquipmentGrabbed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
