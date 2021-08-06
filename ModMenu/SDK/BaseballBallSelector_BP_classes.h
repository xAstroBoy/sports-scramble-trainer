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

// BlueprintGeneratedClass BaseballBallSelector_BP.BaseballBallSelector_BP_C
// 0x02BD (FullSize[0x070D] - InheritedSize[0x0450])
class ABaseballBallSelector_BP_C : public ABaseballBallSelector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             UI_Menu_Snap_V2_Cue;                                       // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<SportsScramble_EBaseballScrambleTargetLocations> Valid_Positions;                                           // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FoundCollision;                                            // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4WDS[0x7];                                     // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABaseballPitchingTarget*                     EarnedBall;                                                // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        numToSpawn;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LastSpawnRegister;                                         // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Misses;                                                    // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxMisses;                                                 // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5GVD[0x4];                                     // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    TargetsUpdated;                                            // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    TrainingTargetHit;                                         // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                TrainingHits;                                              // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RespawnTrainingTargets;                                    // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C0PQ[0xB];                                     // 0x04C5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBaseballBallScrambleProperties             BeachBall;                                                 // 0x04D0(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBaseballBallScrambleProperties             Frisbee;                                                   // 0x0550(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBaseballBallScrambleProperties             BowlingBall;                                               // 0x05D0(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBaseballBallScrambleProperties             HockeyPuck;                                                // 0x0650(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBB_BallAnnouncerVO>                 BallVOList;                                                // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               UseIconBallVO;                                             // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NJQ1[0x7];                                     // 0x06E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BB_BallClass;                                              // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBaseballBallType                   BB_BallType;                                               // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_19FZ[0x7];                                     // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  BB_BallIcon;                                               // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseballMitt*                               TrainingPitchersMitt;                                      // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              imbueChance;                                               // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBaseballScrambleTargetLocations    Valid_Positions_1;                                         // 0x070C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseballBallSelector_BP.BaseballBallSelector_BP_C");
		return ptr;
	}



	void HasScrambleOption(class ABaseballMitt* Mitt, class UClass* BallClass, bool* HasOption);
	void BB_Training_GetBallVO(class UClass* Ball_Class);
	void GetIconLocations(bool* TL, bool* TR, bool* BL, bool* BR);
	void GetImbuingOdds(struct FChance* Imbue_Chance);
	void Show_All_Target();
	void GetNumToSpawn(int* Spawn_Number);
	void CanSpawnBalls(bool* Can_Spawn);
	void UserConstructionScript();
	void OnLoaded_C88ED7EB47D91559C0BE5B867C4A90A3(class UObject* Loaded);
	void BB_TNG_SpawnBlankTargets(bool BindOnHit);
	void BB_TNG_BlinkTargets();
	void BB_TNG_CleanUpDemoTargets();
	void HitTrainingTarget_01(SportsScramble_EBaseballScrambleTargetLocations Location);
	void BB_TNG_TrackTargetHits();
	void HitTrainingTarget_02(SportsScramble_EBaseballScrambleTargetLocations Location);
	void HitTrainingTarget_03(SportsScramble_EBaseballScrambleTargetLocations Location);
	void HitTrainingTarget_04(SportsScramble_EBaseballScrambleTargetLocations Location);
	void BB_TNG_RM03_SpawnInitialIcons(class UClass* BB_BallClass, SportsScramble_EBaseballBallType BB_BallType, class UTexture2D* BB_BallIcon, float imbueChance);
	void BB_TNG_RM03_CleanUpAllButFrisbee();
	void CustomEvent(SportsScramble_EBaseballScrambleTargetLocations Location);
	void BB_TNG_GiveMittScrambleBall(class UClass* Ball_Class, bool Imbued);
	void BB_TNG_RM03_SingleIcon(class UClass* BB_BallClass, SportsScramble_EBaseballBallType BB_BallType, class UTexture2D* BB_BallIcon, float imbueChance, SportsScramble_EBaseballScrambleTargetLocations Location);
	void IndividualTargetHit(SportsScramble_EBaseballScrambleTargetLocations Location);
	void ReceiveBeginPlay();
	void ReadyBalls();
	void Change_Round();
	void ResolveAndClear();
	void SendThroughBall(class ABaseballPitchingTarget* NewParam);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void PlayAsync2D();
	void ExecuteUbergraph_BaseballBallSelector_BP(int EntryPoint);
	void TrainingTargetHit__DelegateSignature(SportsScramble_EBaseballScrambleTargetLocations Location);
	void TargetsUpdated__DelegateSignature(bool TL, bool TR, bool BL, bool BR);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
