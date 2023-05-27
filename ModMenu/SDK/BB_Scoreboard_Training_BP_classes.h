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
	 * BlueprintGeneratedClass BB_Scoreboard_Training_BP.BB_Scoreboard_Training_BP_C
	 * Size -> 0x0154 (FullSize[0x047C] - InheritedSize[0x0328])
	 */
	class ABB_Scoreboard_Training_BP_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     AudioStrikeout;                                          // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioHomerun;                                            // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MediaMesh;                                               // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_5_Baseball_01_Movement_1AB085C74BC0E7ED6F2FF1B172696372; // 0x0358(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_5_Baseball_02_Movement_1AB085C74BC0E7ED6F2FF1B172696372; // 0x0364(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_5__Direction_1AB085C74BC0E7ED6F2FF1B172696372;  // 0x0370(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IZF5[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_6;                                              // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_4_Transition_96ED5D6D418A3E00A6EF34AEE292DEDE;  // 0x0380(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_4__Direction_96ED5D6D418A3E00A6EF34AEE292DEDE;  // 0x0384(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FB42[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_5;                                              // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_3_Large_Star_02_Scale_1A2B51E7476161B719C35481929B2687; // 0x0390(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_3_Action_Lines_01_Scale_1A2B51E7476161B719C35481929B2687; // 0x0394(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_3_Baseball_01_Scale__1A2B51E7476161B719C35481929B2687; // 0x0398(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_3_Large_Star_01_Scale_1A2B51E7476161B719C35481929B2687; // 0x039C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_3__Direction_1A2B51E7476161B719C35481929B2687;  // 0x03A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XBJ2[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_4;                                              // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_2_Line_01_Movement_30BE4E0C4192769E247ECAB5F82480DD; // 0x03B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_2_Line_02_Movement_30BE4E0C4192769E247ECAB5F82480DD; // 0x03BC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_2_Line_03_Movement_30BE4E0C4192769E247ECAB5F82480DD; // 0x03C8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_2_Out_Movement_30BE4E0C4192769E247ECAB5F82480DD; // 0x03D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_2_Strike_Movement_30BE4E0C4192769E247ECAB5F82480DD; // 0x03D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_2__Direction_30BE4E0C4192769E247ECAB5F82480DD;  // 0x03DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z8OL[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_Borders_7A03DF6740D6D9C71DDE5E9F8D5EB975;     // 0x03E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_7A03DF6740D6D9C71DDE5E9F8D5EB975;  // 0x03EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0YBE[0x3];                                   // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Logo_Scale_B2B18ACA4987669D3D3D699CDAB8EF73;  // 0x03F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Transition_Large_Bars_B2B18ACA4987669D3D3D699CDAB8EF73; // 0x03FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Transition_Scrolling_Word_Bars_B2B18ACA4987669D3D3D699CDAB8EF73; // 0x0400(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_B2B18ACA4987669D3D3D699CDAB8EF73;  // 0x0404(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0Y43[0x3];                                   // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            VideoMaterial;                                           // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             MediaComplete;                                           // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             MediaSequenceComplete;                                   // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CurrentTime;                                             // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ClockActive;                                             // 0x043C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5T47[0x3];                                   // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TimerCountdownComplete;                                  // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBB_Scoreboard_Training_Widget_C*                    ScoreboardWidget;                                        // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBB_ScoreboardVideos                                       ActiveVideo;                                             // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBB_ScoreboardVideos                                       OldVideo;                                                // 0x0459(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KLNH[0x6];                                   // 0x045A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TimerDisplayReady;                                       // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       GrandSlam;                                               // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TimerActive;                                             // 0x0471(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UD6E[0x2];                                   // 0x0472(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Timer;                                                   // 0x0474(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PixelGridScale;                                          // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BBVideo_StartTimer(int32_t Seconds, bool* complete);
		void BBVideoScoreFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* complete);
		void BBVideo_UpdateScore(const class FText& Text, bool* complete);
		void BBVideo_HideShowScoreAndTimer(ESlateVisibility Visibility, bool* Completed);
		void BBVideo_HideShowCenterText(ESlateVisibility Visibility, bool* Completed);
		void BBVideo_ChangeFontAndMaterial(class UMaterialInterface* Material, const struct FSlateFontInfo& Font, bool* FontChanged);
		void BB_UpdatePlayerNames(bool PlayerIsHomeTeam, bool* Callback);
		void BBVideo_PlayAnimation(EBB_ScoreboardVideos Animation, bool* AnimationStarted);
		void BBGame_UpdateGameScore(int32_t Player1Score, int32_t Player2Score, bool* ScoreUpdated);
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
		void BBGame_UpdateOuts(int32_t Freebees, int32_t Outs, int32_t Strikes, bool* OutsUpdated);
		void BBGame_UpdateBaserunners(bool RunnerOn1, bool RunnerOn2, bool RunnerOn3, bool* RunnersUpdated);
		void BBGame_Deactivate(bool* BBGameDeactivate);
		void BBGame_Activate(int32_t BallsCount, int32_t StrikesCount, bool* GameActivated);
		void BBGame_NewInning(int32_t Inning, bool Top, bool* InningUpdated);
		void SetTimer(int32_t Seconds);
		void SetCountDownTime(int32_t Seconds);
		void Initialize();
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_2__FinishedFunc();
		void Timeline_2__UpdateFunc();
		void Timeline_3__FinishedFunc();
		void Timeline_3__UpdateFunc();
		void Timeline_4__FinishedFunc();
		void Timeline_4__UpdateFunc();
		void Timeline_5__FinishedFunc();
		void Timeline_5__UpdateFunc();
		void PlayVideo(EBB_ScoreboardVideos Video);
		void EnterLogo();
		void EnterCountdown();
		void ExitLogo();
		void NextVideoSwap();
		void ExitCountdown();
		void PlayStrikeoutTimeline();
		void PlayHomerunIntroTimeline();
		void PlayGrandSlamIntroTimeline();
		void ReceiveBeginPlay();
		void BeginCountdown(int32_t Seconds);
		void ScoreTimer(int32_t Seconds);
		void ExecuteUbergraph_BB_Scoreboard_Training_BP(int32_t EntryPoint);
		void TimerDisplayReady__DelegateSignature();
		void TimerCountdownComplete__DelegateSignature();
		void MediaSequenceComplete__DelegateSignature();
		void MediaComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
