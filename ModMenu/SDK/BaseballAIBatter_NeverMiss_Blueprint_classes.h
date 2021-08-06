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

// BlueprintGeneratedClass BaseballAIBatter_NeverMiss_Blueprint.BaseballAIBatter_NeverMiss_Blueprint_C
// 0x002E (FullSize[0x0F00] - InheritedSize[0x0ED2])
class ABaseballAIBatter_NeverMiss_Blueprint_C : public ABaseballAIBatter_Blueprint_C
{
public:
	unsigned char                                      UnknownData_U8SY[0x6];                                     // 0x0ED2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_Despawn_ScaleDown_836063B241ED5321CD12ED921E9C5443; // 0x0EE0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Despawn__Direction_836063B241ED5321CD12ED921E9C5443; // 0x0EE4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HU6P[0x3];                                     // 0x0EE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Despawn;                                          // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_SpawnIn_ScaleUp_B00324104C60191ACA939C9AED4D5762; // 0x0EF0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_SpawnIn__Direction_B00324104C60191ACA939C9AED4D5762; // 0x0EF4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MAA6[0x3];                                     // 0x0EF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_SpawnIn;                                          // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseballAIBatter_NeverMiss_Blueprint.BaseballAIBatter_NeverMiss_Blueprint_C");
		return ptr;
	}



	void UserConstructionScript();
	void Timeline_SpawnIn__FinishedFunc();
	void Timeline_SpawnIn__UpdateFunc();
	void Timeline_Despawn__FinishedFunc();
	void Timeline_Despawn__UpdateFunc();
	void ReceiveBeginPlay();
	void DespawnHitter();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BaseballAIBatter_NeverMiss_Blueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
