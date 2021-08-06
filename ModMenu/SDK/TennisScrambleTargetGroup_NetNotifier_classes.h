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

// BlueprintGeneratedClass TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C
// 0x0020 (FullSize[0x0440] - InheritedSize[0x0420])
class ATennisScrambleTargetGroup_NetNotifier_C : public AScramBallTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    TriggeredByBall;                                           // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnTriggered(class AScramBall* Ball);
	void ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier(int EntryPoint);
	void TriggeredByBall__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
