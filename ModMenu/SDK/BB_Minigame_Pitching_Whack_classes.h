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

// BlueprintGeneratedClass BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C
// 0x004F (FullSize[0x0490] - InheritedSize[0x0441])
class ABB_Minigame_Pitching_Whack_C : public ABB_Minigame_Pitching_Base_C
{
public:
	unsigned char                                      UnknownData_TB6U[0x7];                                     // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScramTrajectoryInfluencerRegion*            Influencer;                                                // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACountdown_C*                                CountdownActor;                                            // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentScore;                                              // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OJDV[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABB_GameSelector_C*                          GameSelector;                                              // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WhackDelayBeforeThrow;                                     // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WhackDelayAfterThrow;                                      // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WhackTimeLimit;                                            // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6PBY[0x4];                                     // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABB_Scoreboard_Large_BP_C*                   LargeScoreboard;                                           // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Scoreboard_Training_BP_C*                TrainingScoreboard;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C");
		return ptr;
	}



	void Shutdown(bool* ShutdownBegun);
	void ClearWhackTimer();
	void WhackScoreboardGameOver();
	void InitializeWhack();
	void UpdateWhackScoreboard(int score);
	void WhackTimerCountdownStart(int Seconds);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartCountdown();
	void CountDownComplete();
	void DisableWhackTargets();
	void WhackEquipmentGrabbed();
	void GoMessageReceived();
	void PlayerTeleportComplete();
	void DisableTargets();
	void PitchTargetCreated();
	void UpdateScoreboardScoreValue(int ScoreAmount);
	void NoTeleport();
	void ExecuteUbergraph_BB_Minigame_Pitching_Whack(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
