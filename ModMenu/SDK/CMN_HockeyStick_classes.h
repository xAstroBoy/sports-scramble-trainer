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

// BlueprintGeneratedClass CMN_HockeyStick.CMN_HockeyStick_C
// 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
class ACMN_HockeyStick_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CMN_Racket_HockeyStick;                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CMN_HockeyStick.CMN_HockeyStick_C");
		return ptr;
	}



	void PlaySpawnFX();
	void UserConstructionScript();
	void SpawnEffect();
	void ExecuteUbergraph_CMN_HockeyStick(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
