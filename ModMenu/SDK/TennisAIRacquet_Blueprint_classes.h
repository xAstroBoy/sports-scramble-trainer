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

// BlueprintGeneratedClass TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C
// 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
class ATennisAIRacquet_Blueprint_C : public AScramMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    SwingParticleSystem;                                       // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AScramTennisAI_Blueprint_C*                  OwnerAI;                                                   // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C");
		return ptr;
	}



	void UserConstructionScript();
	void PlayForehandSwingFX();
	void PlayHitFX();
	void ExecuteUbergraph_TennisAIRacquet_Blueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
