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

// BlueprintGeneratedClass BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C
// 0x0027 (FullSize[0x0568] - InheritedSize[0x0541])
class ABW_Challenge_07_HardAI_C : public ABW_Challenge_Base_C
{
public:
	unsigned char                                      UnknownData_2MZK[0x7];                                     // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Crowd;                                                     // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               PrimaryAudioList;                                          // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C");
		return ptr;
	}



	void GetTrophyID(struct FName* TrophyID);
	void InitializeChallengeRoom();
	void SetUpInfoText();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void NotifyChallengeContinue(class AActor* DestroyedActor);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Shortcut();
	void BW_CHG_SportManagerGameEnd(TEnumAsByte<GameResult_EGameResult> MatchResult, int Player1GamesWon, int Player2GamesWon);
	void AnnouncerExitSequenceComplete();
	void OnScore(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ExecuteUbergraph_BW_Challenge_07_HardAI(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
