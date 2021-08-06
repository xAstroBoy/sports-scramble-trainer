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

// BlueprintGeneratedClass BB_Scoreboard.BB_Scoreboard_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBB_Scoreboard_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Scoreboard.BB_Scoreboard_C");
		return ptr;
	}



	void BBVideo_StartTimer(int Seconds, bool* complete);
	void BBVideoScoreFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* complete);
	void BBVideo_UpdateScore(const struct FText& Text, bool* complete);
	void BBVideo_HideShowScoreAndTimer(UMG_ESlateVisibility Visibility, bool* Completed);
	void BBVideo_HideShowCenterText(UMG_ESlateVisibility Visibility, bool* Completed);
	void BBVideo_ChangeFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* FontChanged);
	void BB_UpdatePlayerNames(bool PlayerIsHomeTeam, bool* Callback);
	void BBVideo_PlayAnimation(TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation, bool* AnimationStarted);
	void MG_ClearAllMGText(bool* TextCleared);
	void MG_ClearBottomText(bool* TextCleared);
	void MG_SetBottomText(const struct FText& Text, bool* TextSet);
	void MG_ClearCenterText(bool* TextCleared);
	void MG_SetCenterText(const struct FText& Text, bool* TextSet);
	void MG_ShowCenterDisplay(bool* DisplayShown);
	void MG_ClearDistanceScore(bool* ScoreHidden);
	void MG_StopCountDown(bool* CountDownStopped);
	void MG_HideCenterDisplay(bool* CenterDisplayHidden);
	void MG_BeginCountDown(int Seconds, bool* CountdownStarted);
	void MG_SetDistanceScore(float Distance, bool* DistanceUpdated);
	void BBGame_UpdateBaserunners(bool RunnerOn1, bool RunnerOn2, bool RunnerOn3, bool* RunnersUpdated);
	void BBGame_UpdateOuts(int Freebees, int Outs, int Strikes, bool* OutsUpdated);
	void BBGame_UpdateGameScore(int Player1Score, int Player2Score, bool* ScoreUpdated);
	void BBGame_Deactivate(bool* BBGameDeactivate);
	void BBGame_Activate(int BallsCount, int StrikesCount, bool* GameActivated);
	void BBGame_NewInning(int Inning, bool Top, bool* InningUpdated);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
