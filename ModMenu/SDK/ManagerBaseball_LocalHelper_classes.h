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

// BlueprintGeneratedClass ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C
// 0x0129 (FullSize[0x0471] - InheritedSize[0x0348])
class AManagerBaseball_LocalHelper_C : public AScramActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_FireworksRight;                                        // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_FireworksLeft;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_CheerGood;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_CheerBad;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInfoDisplay_C*                              InfoPanel;                                                 // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_StingerWin;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_StingerLose;                                           // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InfoDisplayStingerIntroTime;                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocalIsPlayer1;                                            // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Player1WonPoint;                                           // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3ECX[0x2];                                     // 0x039E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    FinishedReadyMessage;                                      // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       GameEndText;                                               // 0x03B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  GameEndSound;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_TeleportMusic;                                         // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_MittCatch;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TopOrBottomText;                                           // 0x03E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InningText;                                                // 0x03F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      SFX_BatBrokenAnnouncement[0x28];                           // 0x0410(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.SFX_BatBrokenAnnouncement
	unsigned char                                      SFX_PickNewBatAnnouncement[0x28];                          // 0x0438(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C.SFX_PickNewBatAnnouncement
	TArray<struct FBB_SoundQueueStruct>                QueuedSounds;                                              // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ManagerBaseball_LocalHelper.ManagerBaseball_LocalHelper_C");
		return ptr;
	}



	void DisplayPitchOrBatIntro(bool IsLocalPlayerServe, int GameCount);
	void DisplayInfo(const struct FText& Text, float DisplayTime);
	void Initialize();
	void UserConstructionScript();
	void OnLoaded_9AF1D1854A0B9357B6791496B725ADF6(class UObject* Loaded);
	void OnLoaded_3890D687487FEB0D1EDBBC8BE058DC5F(class UObject* Loaded);
	void OnLoaded_D2FDE2E74EA6D2152CE1689603F28F27(class UObject* Loaded);
	void OnLoaded_1F57E9574DC02CD15BE99AB426D2A98B(class UObject* Loaded);
	void OnLoaded_6E693B1C42D93C86D3C8EE8E9DEB3A8E(class UObject* Loaded);
	void OnLoaded_BB6239F84093F01A9D07E6B6AF75EF63(class UObject* Loaded);
	void OnLoaded_412CFADB484B48F8A3FA7FBE5A1F24EC(class UObject* Loaded);
	void OnLoaded_7AD360D44A7E5E6004F46CBC7F5FD0D8(class UObject* Loaded);
	void OnLoaded_C3F1FE164937D123C0840F8FAE251B2F(class UObject* Loaded);
	void OnLoaded_49C2FF904AD95FE758C251AF6BED34DB(class UObject* Loaded);
	void OnLoaded_490F3BC7426E93276687429B8BD532FD(class UObject* Loaded);
	void OnLoaded_070704E542F03EA32F155AA0881820FB(class UObject* Loaded);
	void OnLoaded_D298D72C44B01EC8A25476A0D64B7449(class UObject* Loaded);
	void OnLoaded_B62CF2B54F0AA50AA1BA2A9AA289C2B2(class UObject* Loaded);
	void OnLoaded_7F54BA66460B58CB0D42C1B2770F8BB8(class UObject* Loaded);
	void OnLoaded_894F8D744B4441FFEBD509B474CA5A7D(class UObject* Loaded);
	void OnLoaded_0FEEA2804EF0DDF9626EC7A5F5528810(class UObject* Loaded);
	void OnLoaded_451E97A046A886C1735F819F904A8BAB(class UObject* Loaded);
	void OnLoaded_B72F5FA04E31CB710ACC09BDB94C4A47(class UObject* Loaded);
	void OnLoaded_10DC37674F33EA0F5C11C78EFCD60172(class UObject* Loaded);
	void OnLoaded_924C889C4AF5F76E6B907789E3070FD6(class UObject* Loaded);
	void PlayBatterScoreSound(bool IsLocalPlayerBatting);
	void PlayPitcherScoreSound(bool IsLocalPlayerBatting);
	void PlayBatterSingleSound(bool IsLocalPlayerBatting);
	void PlayBatterDoubleSound(bool IsLocalPlayerBatting);
	void PlayBatterTripleSound(bool IsLocalPlayerBatting);
	void PlayBatterHomerunSound(bool IsLocalPlayerBatting, bool GrandSlam);
	void OutOneSound(bool IsLocalPlayerBatting);
	void OutTwoSound(bool IsLocalPlayerBatting);
	void OutThreeSound(bool IsLocalPlayerBatting);
	void GetReadyText(bool IsLocalPlayerBatting, float DisplayTime, bool TopOfTheInning, int Inning);
	void AnnounceWinner(bool LocalPlayerIsHomeTeam, int WinnerInt);
	void TeleportMusic();
	void PlayBallSound();
	void DisplayStartOfMatchInfo(int Innings, bool IsLocalPlayerBatting);
	void FoulBallSound();
	void UmpireOut();
	void MIttCatchSound(const struct FVector& BallLocation);
	void BallSound();
	void HereThePitchSFX();
	void UmpireStrikeSound();
	void BrokenBatAnnouncement();
	void GetNewBatAnnouncement(bool IsLocalPlayerBatting);
	void SwitchSidesSound(float DisplayTime);
	void MoveToFootIndicators(bool IsLocalPlayerBatting);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void QueueSound(const struct FBB_SoundQueueStruct& SoundParams);
	void QueuePlayNext();
	void HomeRun_Fireworks_VFX();
	void ReceiveBeginPlay();
	void AnnouncerStrike(int Strike);
	void ExecuteUbergraph_ManagerBaseball_LocalHelper(int EntryPoint);
	void FinishedReadyMessage__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
