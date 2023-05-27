#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BB_Scoreboard.BB_Scoreboard_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBB_Scoreboard_C : public UInterface
	{
	public:
		void BBVideo_StartTimer(int32_t Seconds, bool* complete);
		void BBVideoScoreFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* complete);
		void BBVideo_UpdateScore(const class FText& Text, bool* complete);
		void BBVideo_HideShowScoreAndTimer(ESlateVisibility Visibility, bool* Completed);
		void BBVideo_HideShowCenterText(ESlateVisibility Visibility, bool* Completed);
		void BBVideo_ChangeFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* FontChanged);
		void BB_UpdatePlayerNames(bool PlayerIsHomeTeam, bool* Callback);
		void BBVideo_PlayAnimation(EBB_ScoreboardVideos Animation, bool* AnimationStarted);
		void MG_ClearAllMGText(bool* TextCleared);
		void MG_ClearBottomText(bool* TextCleared);
		void MG_SetBottomText(const class FText& Text, bool* TextSet);
		void MG_ClearCenterText(bool* TextCleared);
		void MG_SetCenterText(const class FText& Text, bool* TextSet);
		void MG_ShowCenterDisplay(bool* DisplayShown);
		void MG_ClearDistanceScore(bool* ScoreHidden);
		void MG_StopCountDown(bool* CountDownStopped);
		void MG_HideCenterDisplay(bool* CenterDisplayHidden);
		void MG_BeginCountDown(int32_t Seconds, bool* CountdownStarted);
		void MG_SetDistanceScore(float Distance, bool* DistanceUpdated);
		void BBGame_UpdateBaserunners(bool RunnerOn1, bool RunnerOn2, bool RunnerOn3, bool* RunnersUpdated);
		void BBGame_UpdateOuts(int32_t Freebees, int32_t Outs, int32_t Strikes, bool* OutsUpdated);
		void BBGame_UpdateGameScore(int32_t Player1Score, int32_t Player2Score, bool* ScoreUpdated);
		void BBGame_Deactivate(bool* BBGameDeactivate);
		void BBGame_Activate(int32_t BallsCount, int32_t StrikesCount, bool* GameActivated);
		void BBGame_NewInning(int32_t Inning, bool Top, bool* InningUpdated);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
