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

// BlueprintGeneratedClass DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C
// 0x0018 (FullSize[0x0438] - InheritedSize[0x0420])
class ADoubleCross_ParticleTrigger_C : public AScramBallTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FMinMaxFloat                                Kill_Time;                                                 // 0x0430(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnTriggered(class AScramBall* Ball);
	void ExecuteUbergraph_DoubleCross_ParticleTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
