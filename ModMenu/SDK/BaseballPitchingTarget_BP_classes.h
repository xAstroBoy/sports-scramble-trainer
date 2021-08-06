#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C
// 0x00D8 (FullSize[0x0518] - InheritedSize[0x0440])
class ABaseballPitchingTarget_BP_C : public ABaseballPitchingTarget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Icon;                                                      // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleBurst;                                             // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScramTimeLineComponent*                     ScalingAnimation;                                          // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Frame;                                                     // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         Frames;                                                    // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FSlateColor                                 Imbued_Color;                                              // 0x0480(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 RegularColor;                                              // 0x04A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                Imbued_Frame_Color;                                        // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Regular_Frame_Color;                                       // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Break_Sound;                                               // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystem*>                     Particles;                                                 // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    PitchingTargetHit;                                         // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C");
		return ptr;
	}



	void ValidateBallTrajectory(class AScramBall* Incoming_Ball, bool* Valid_Hit);
	void SetVisibleElements();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnTriggered(class AScramBall* Ball);
	void AutoCleanup();
	void Break_Target();
	void LocalShow();
	void LocalHide();
	void ChangeTargetVisibility(bool ShowTarget);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BaseballPitchingTarget_BP(int EntryPoint);
	void PitchingTargetHit__DelegateSignature(SportsScramble_EBaseballScrambleTargetLocations Location);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
