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
	 * BlueprintGeneratedClass TennisScrambleTarget.TennisScrambleTarget_C
	 * Size -> 0x0600 (FullSize[0x0A20] - InheritedSize[0x0420])
	 */
	class ATennisScrambleTarget_C : public AScrambleTarget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     TN_ScrambleTarget_Shrink_Cue;                            // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     TN_ScrambleTarget_Grow_Cue;                              // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                RadialPulse;                                             // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MeshFrame;                                               // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MeshCannon;                                              // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MeshParent;                                              // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScramTrajectoryInfluencerRegion*                    Target_Influencer;                                       // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetFront;                                             // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetBack;                                              // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Widgets;                                                 // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_Size_Change_Scale_F1EB380E44B6E2915355239A2DA4BAEF; // 0x0480(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_Size_Change__Direction_F1EB380E44B6E2915355239A2DA4BAEF; // 0x0484(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GNHH[0x3];                                   // 0x0485(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_Size_Change;                                    // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_SpinCannon_Spin_B762EAD0498082E4E063F7BD77F2E690; // 0x0490(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_SpinCannon__Direction_B762EAD0498082E4E063F7BD77F2E690; // 0x0494(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AK2W[0x3];                                   // 0x0495(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_SpinCannon;                                     // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_RotateCannon_Alpha_922D06A3440FEC72145F35BE60A37592; // 0x04A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_RotateCannon__Direction_922D06A3440FEC72145F35BE60A37592; // 0x04A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PKPE[0x3];                                   // 0x04A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_RotateCannon;                                   // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InstrumentHitBallsOnly;                                  // 0x04B0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_XB5Q[0x7];                                   // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ScrambleEvent;                                           // 0x04B8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UTennisScrambleWidget_C*                             FrontIcon;                                               // 0x04C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTennisScrambleWidget_C*                             BackIcon;                                                // 0x04C8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ScrambleTargetRemoved;                                   // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    ID;                                                      // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector                                             InitialScale;                                            // 0x04E4(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EffectEnabled;                                           // 0x04F0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MSWO[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SubsetBallClass;                                         // 0x04F8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              SubsetInstrumentClass;                                   // 0x0500(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TryMatchChance;                                          // 0x0508(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VRJY[0x4];                                   // 0x050C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Texture;                                                 // 0x0510(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Shrinking;                                               // 0x0518(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VM5W[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATN_Ball_Base_C*                                     OldBall;                                                 // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1KC2[0x8];                                   // 0x0528(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          OldBallTransform;                                        // 0x0530(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AScramSportManagerTennis_Blueprint_C*                SportManager;                                            // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              OldBallClass;                                            // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BallIsInPlay;                                            // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N31R[0x7];                                   // 0x0571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NewBallClass;                                            // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScrambleEvent_Base_C*                               ScrambleEventActor;                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATennisScrambleTarget_Launcher_C*                    Launcher;                                                // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReturnToHitter;                                          // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XHI6[0xF];                                   // 0x0591(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScramTrajectory                                    OldTrajectory;                                           // 0x05A0(0x01F0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      FireDelay;                                               // 0x0790(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            InitialRotation;                                         // 0x0794(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            EndRotation;                                             // 0x07A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HXVS[0x4];                                   // 0x07AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     SpawnVFX;                                                // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IG7C[0x8];                                   // 0x07B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          VFXOffset;                                               // 0x07C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             ScrambleTargetHit;                                       // 0x07F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector                                             LaunchLocation;                                          // 0x0800(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q4GU[0x4];                                   // 0x080C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScramTrajectory                                    NewTrajectory;                                           // 0x0810(0x01F0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             InitialLocation;                                         // 0x0A00(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HVarience;                                               // 0x0A0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BallFiredFromTarget;                                     // 0x0A10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void RemoveGameElement(bool* Removed);
		void SpawnScrambleEffect(class ATN_Ball_Base_C* Ball);
		void SetupNewTarget();
		void DisableIcon();
		void RemoveOldBall(class ATN_Ball_Base_C* Ball);
		void GetExistingSubclasses(TArray<class UClass*>* ActiveBallClasses, TArray<class UClass*>* ActiveInstrumentClasses);
		void GetAiValue(EScrambleTargetAiValue* Value);
		void GetRandomRacketType(class UTexture2D** ScrambleIcon);
		void GetRandomBallType(class UTexture2D** ScrambleIcon);
		void Initialize();
		void UserConstructionScript();
		void Timeline_Size_Change__FinishedFunc();
		void Timeline_Size_Change__UpdateFunc();
		void Timeline_RotateCannon__FinishedFunc();
		void Timeline_RotateCannon__UpdateFunc();
		void Timeline_SpinCannon__FinishedFunc();
		void Timeline_SpinCannon__UpdateFunc();
		void ReceiveBeginPlay();
		void Grow();
		void Shrink();
		void OnTriggered(class AScramBall* Ball);
		void SetupCannon();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void FireCannon();
		void RotateCannon();
		void SpinCannon();
		void FireFX();
		void ApplyCannonRotation(const struct FScramTrajectory& trajectory);
		void SetCannonRotation(const struct FRotator& Rotation);
		void ExecuteUbergraph_TennisScrambleTarget(int32_t EntryPoint);
		void BallFiredFromTarget__DelegateSignature(class ATN_Ball_Base_C* BallFired);
		void ScrambleTargetHit__DelegateSignature(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int32_t ID);
		void ScrambleTargetRemoved__DelegateSignature(class ATennisScrambleTarget_C* TargetActor, class UClass* ScrambleEvent, int32_t ID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
