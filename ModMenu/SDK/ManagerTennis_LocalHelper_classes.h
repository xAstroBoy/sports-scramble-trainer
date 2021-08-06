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

// BlueprintGeneratedClass ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C
// 0x00B2 (FullSize[0x03FA] - InheritedSize[0x0348])
class AManagerTennis_LocalHelper_C : public AScramActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Music_StartOfMatch;                                        // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Umpire_Vox;                                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ATN_NetMatchScoreboard_C*                    NetScoreBoard;                                             // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NetTextDisplayTime;                                        // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WTCK[0x4];                                     // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScorePlayer1;                                              // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScorePlayer2;                                              // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATennisArenaScoreboard_C*>            ArenaScoreboards;                                          // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class USoundBase*                                  SFX_CheerGood;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_CheerBad;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AInfoDisplay_C*                              InfoPanel;                                                 // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_StingerWin;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_StingerLose;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InfoDisplayStingerIntroTime;                               // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocalIsPlayer1;                                            // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Player1WonPoint;                                           // 0x03C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KQJY[0x2];                                     // 0x03C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  SFX_StartOfMatchMusic;                                     // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  SFX_GameOverMusic;                                         // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSpectator;                                               // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_57WG[0x7];                                     // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ServeMessageComplete;                                      // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ATN_NetMatchScoreboard_C*                    NetScoreBoard2;                                            // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TraditionalScoring;                                        // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               ShowAdvantage;                                             // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ManagerTennis_LocalHelper.ManagerTennis_LocalHelper_C");
		return ptr;
	}



	void PlayTradScoreAudio(int ServerScore, int ReceiverScore, bool Advantage_);
	void UpdateAdvantage(bool ShowAdvantage);
	void UpdateArenaScoreboardsServe(bool Player1Serve, bool Player2Serve);
	void DisplayDebugInfo(const struct FString& String);
	void DisplayServeInfo(bool IsLocalPlayerServe, int GameCount, bool OC5Demo);
	void DisplayInfo(const struct FText& Text, float DisplayTime);
	void GetArenaScoreboards();
	void UpdateArenaScoreboards(int Player1Score, int Player2Score, int Player1Games, int Player2Games, bool Player1Serve, bool Player2Serve, bool UpdateScoreOnly);
	void Cleanup();
	void Initialize();
	void UserConstructionScript();
	void OnLoaded_8DC83B8546799256223C67B1B376E3D3(class UObject* Loaded);
	void OnLoaded_211B117B46368DDCD41D0D919D520B4C(class UObject* Loaded);
	void OnLoaded_C0EE7AB1401C402783205A821574D41D(class UObject* Loaded);
	void OnLoaded_02ABBA7E4B958E6EFABDA593DEDA2DE4(class UObject* Loaded);
	void OnLoaded_3C9D51CF4604A9F9201EFE9147CC8940(class UObject* Loaded);
	void OnLoaded_A772A71E43B570E3A370DCA564865ED7(class UObject* Loaded);
	void OnLoaded_E2EAB0BF4C538A76C7EB5A8DF4442684(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void DisplayPointResults(const struct FText& PointType, int NewScoreP1, int NewScoreP2, bool Player1WonPoint, bool TextOnly);
	void DisplayLet();
	void DisplayFault();
	void DisplayStartOfMatchInfo(int GamesToWin, bool Player1Serve, bool OC5Demo);
	void ShowNetPreServeInfo(const struct FText& GameStatusText, bool Player1Serve);
	void HideNetScoreboard();
	void GameComplete(int GameCount, int Player1GamesWon, int Player2GamesWon, bool Player1Serve);
	void MatchCompleted(int Player1GamesWon, int Player2GamesWon, bool OC5Demo);
	void SwitchServeMessage(bool Player1Serve);
	void RestoreResults(const struct FText& PointType, int NewScoreP1, int NewScoreP2, int Player1Games, int Player2Games, bool Player1Serve, bool Player2Serve);
	void PlayAsync2D();
	void ExecuteUbergraph_ManagerTennis_LocalHelper(int EntryPoint);
	void ServeMessageComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
