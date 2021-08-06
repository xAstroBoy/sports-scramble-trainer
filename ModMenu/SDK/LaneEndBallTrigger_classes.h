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

// BlueprintGeneratedClass LaneEndBallTrigger.LaneEndBallTrigger_C
// 0x0028 (FullSize[0x0448] - InheritedSize[0x0420])
class ALaneEndBallTrigger_C : public ABowlingBallTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    TriggeredByBall;                                           // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABowlingAlley_BP_C*                          Alley;                                                     // 0x0440(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LaneEndBallTrigger.LaneEndBallTrigger_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnTriggered(class AScramBall* Ball);
	void ExecuteUbergraph_LaneEndBallTrigger(int EntryPoint);
	void TriggeredByBall__DelegateSignature(class AScramBall* Ball);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
