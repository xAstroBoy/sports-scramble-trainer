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

// BlueprintGeneratedClass TN_ChallengeBall_Base.TN_ChallengeBall_Base_C
// 0x0031 (FullSize[0x1189] - InheritedSize[0x1158])
class ATN_ChallengeBall_Base_C : public ATN_Ball_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1158(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    TN_Ball_Glow;                                              // 0x1160(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRacketImpulse_1;                                        // 0x1168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinRacketImpulse_1;                                        // 0x116C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             CelebrationParticle;                                       // 0x1170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMinMaxFloat                                CelebrateScale;                                            // 0x1178(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class USoundBase*                                  CelebrationSound;                                          // 0x1180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_ETennisShotType                     LastType;                                                  // 0x1188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_ChallengeBall_Base.TN_ChallengeBall_Base_C");
		return ptr;
	}



	void UserConstructionScript();
	void Challenge_Change_Trail_Color();
	void Challenge_Pomp___Destruction(float TimeDelay);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ChallengeHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void SetTrail(SportsScramble_ETennisShotType ShotType, bool NoHitSFX);
	void UpdateMesh();
	void ExecuteUbergraph_TN_ChallengeBall_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
