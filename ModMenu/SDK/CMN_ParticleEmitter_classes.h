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

// BlueprintGeneratedClass CMN_ParticleEmitter.CMN_ParticleEmitter_C
// 0x0022 (FullSize[0x036A] - InheritedSize[0x0348])
class ACMN_ParticleEmitter_C : public AScramActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             Template;                                                  // 0x0360(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               AutoActivate;                                              // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               DestroyOnFinish;                                           // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CMN_ParticleEmitter.CMN_ParticleEmitter_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSystemFinished(class UParticleSystemComponent* PSystem);
	void Activate(bool Reset);
	void Set_Color_Parameter(const struct FName& Name, const struct FLinearColor& Color);
	void ExecuteUbergraph_CMN_ParticleEmitter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
