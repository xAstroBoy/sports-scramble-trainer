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

// BlueprintGeneratedClass BaseballAIPitcher_TrainingNoImbued_Blueprint.BaseballAIPitcher_TrainingNoImbued_Blueprint_C
// 0x002F (FullSize[0x0701] - InheritedSize[0x06D2])
class ABaseballAIPitcher_TrainingNoImbued_Blueprint_C : public ABaseballAIPitcher_Blueprint_C
{
public:
	unsigned char                                      UnknownData_U2PS[0x6];                                     // 0x06D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimelineDespawn_ScaleDown_C7149C0040E1A38C38D2C1A5FB2AEE5B; // 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TimelineDespawn__Direction_C7149C0040E1A38C38D2C1A5FB2AEE5B; // 0x06E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A9HV[0x3];                                     // 0x06E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TimelineDespawn;                                           // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimelineSpawnIn_ScaleUp_B77B037344D1619874D1DA973C0FBEC4;  // 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TimelineSpawnIn__Direction_B77B037344D1619874D1DA973C0FBEC4; // 0x06F4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z2DT[0x3];                                     // 0x06F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TimelineSpawnIn;                                           // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseSpawnDespawnVFX;                                        // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseballAIPitcher_TrainingNoImbued_Blueprint.BaseballAIPitcher_TrainingNoImbued_Blueprint_C");
		return ptr;
	}



	void UserConstructionScript();
	void TimelineSpawnIn__FinishedFunc();
	void TimelineSpawnIn__UpdateFunc();
	void TimelineDespawn__FinishedFunc();
	void TimelineDespawn__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void DespawnPitcher();
	void ExecuteUbergraph_BaseballAIPitcher_TrainingNoImbued_Blueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
