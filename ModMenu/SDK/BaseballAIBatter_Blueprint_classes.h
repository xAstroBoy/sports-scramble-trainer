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

// BlueprintGeneratedClass BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C
// 0x005A (FullSize[0x0ED2] - InheritedSize[0x0E78])
class ABaseballAIBatter_Blueprint_C : public AScramBaseballBatterAI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E78(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABB_InstrumentSelector_C*                    BatSelector;                                               // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HomeTeam;                                                  // 0x0E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_GPL7[0x7];                                     // 0x0E91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAvatarLook                                 PresetLook;                                                // 0x0E98(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               RandomizeAvatar;                                           // 0x0EB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_CM2A[0x7];                                     // 0x0EB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    LookRandomzied;                                            // 0x0EC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               UseRemotePlayerLook;                                       // 0x0ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               HandHidden;                                                // 0x0ED1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C");
		return ptr;
	}



	void SetLook();
	void RandomizeLook();
	void ClearBat();
	void SetBat(class UClass* BatClass, bool PlayEffects);
	void SetTeamColor(bool Home);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayBatSound(class ABaseballBall* Ball, float BallSpeed);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BaseballAIBatter_Blueprint(int EntryPoint);
	void LookRandomzied__DelegateSignature(const struct FAvatarLook& AvatarLook);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
