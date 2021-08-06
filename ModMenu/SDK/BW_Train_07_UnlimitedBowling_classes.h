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

// BlueprintGeneratedClass BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C
// 0x00AA (FullSize[0x051C] - InheritedSize[0x0472])
class ABW_Train_07_UnlimitedBowling_C : public ABW_Train_Base_C
{
public:
	unsigned char                                      UnknownData_2MY2[0x6];                                     // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      BallClass;                                                 // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomBall;                                                // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KPVP[0x7];                                     // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LaneClass[0x28];                                           // 0x0489(0x0028) UNKNOWN PROPERTY: SoftClassProperty BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.LaneClass
	bool                                               RandomLane;                                                // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TYVP[0x7];                                     // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              BallClassList;                                             // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRandomActorTable                           TutorialBallTable;                                         // 0x04D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBW_LaneData>                        RandomLaneList;                                            // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DelayAfterGO;                                              // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NMAA[0x4];                                     // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      RandomLaneClassList[0x10];                                 // 0x0504(0x0010) UNKNOWN PROPERTY: ArrayProperty BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C.RandomLaneClassList
	int                                                LaneIndex;                                                 // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Train_07_UnlimitedBowling.BW_Train_07_UnlimitedBowling_C");
		return ptr;
	}



	void GetNextRandomLaneRef();
	void UpdateOptions();
	void InitializeTrainingRoom();
	void UserConstructionScript();
	void OnLoaded_4BFEE13A4C44A361BB83B39438BC711B(class UObject* Loaded);
	void OnLoaded_D837615244B3F303E1BC4BBE5AAAB6CE(class UObject* Loaded);
	void ReceiveBeginPlay();
	void CountDownCompleted();
	void StartBowling();
	void GetNextRandomLane();
	void ListenForBowlingEvent(int PlayerId, SportsScramble_EBowlingEvent BowlingEvent);
	void Unpaused();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BW_Train_07_UnlimitedBowling(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
