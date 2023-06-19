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
	 * BlueprintGeneratedClass BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C
	 * Size -> 0x0161 (FullSize[0x0489] - InheritedSize[0x0328])
	 */
	class ABB_Scoreboard_Large_BP_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Scene_TrainingScoreboard;                                // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioStrikeout;                                          // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioHomerun;                                            // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MediaMesh;                                               // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_HR3_Transition_3A0DC63E4539D32002B71AAA175AB29B; // 0x0370(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_HR3__Direction_3A0DC63E4539D32002B71AAA175AB29B; // 0x0374(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YA55[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_HR3;                                            // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_StrikeOut_Line_01_Movement_35D11F164F908DE5057C8AA334ABB667; // 0x0380(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_StrikeOut_Line_02_Movement_35D11F164F908DE5057C8AA334ABB667; // 0x038C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_StrikeOut_Line_03_Movement_35D11F164F908DE5057C8AA334ABB667; // 0x0398(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_StrikeOut_Out_Movement_35D11F164F908DE5057C8AA334ABB667; // 0x03A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_StrikeOut_Strike_Movement_35D11F164F908DE5057C8AA334ABB667; // 0x03A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_StrikeOut__Direction_35D11F164F908DE5057C8AA334ABB667; // 0x03AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OOUJ[0x3];                                   // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_StrikeOut;                                      // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_HR2_Baseball_01_Movement_9ECB57EF46779AAC6E6CA586BF7D35E9; // 0x03B8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_HR2_Baseball_02_Movement_9ECB57EF46779AAC6E6CA586BF7D35E9; // 0x03C4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_HR2__Direction_9ECB57EF46779AAC6E6CA586BF7D35E9; // 0x03D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JGCI[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_HR2;                                            // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_HR1_Large_Star_02_Scale_72707CA746396C7A172F708FAEC620F6; // 0x03E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_HR1_Action_Lines_01_Scale_72707CA746396C7A172F708FAEC620F6; // 0x03E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_HR1_Baseball_01_Scale__72707CA746396C7A172F708FAEC620F6; // 0x03E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_HR1_Large_Star_01_Scale_72707CA746396C7A172F708FAEC620F6; // 0x03EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_HR1__Direction_72707CA746396C7A172F708FAEC620F6; // 0x03F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WML3[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_HR1;                                            // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_Countdown_Borders_3C65ABE44B68A0D2543FF6A0F8FF5755; // 0x0400(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_Countdown__Direction_3C65ABE44B68A0D2543FF6A0F8FF5755; // 0x0404(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ABM3[0x3];                                   // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_Countdown;                                      // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_LogoLoop_Logo_Scale_586729284716A549C7882DB1C1382F3B; // 0x0410(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_LogoLoop_Transition_Large_Bars_586729284716A549C7882DB1C1382F3B; // 0x0414(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_LogoLoop_Transition_Scrolling_Word_Bars_586729284716A549C7882DB1C1382F3B; // 0x0418(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_LogoLoop__Direction_586729284716A549C7882DB1C1382F3B; // 0x041C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NV0B[0x3];                                   // 0x041D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_LogoLoop;                                       // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            VideoMaterial;                                           // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             MediaComplete;                                           // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             MediaSequenceComplete;                                   // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBB_Scoreboard_Large_Widget_C*                       ScoreboardWidget;                                        // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTime;                                             // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ClockActive;                                             // 0x045C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WO3D[0x3];                                   // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TimerCountdownComplete;                                  // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EBB_ScoreboardVideos                                       ActiveVideo;                                             // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBB_ScoreboardVideos                                       OldVideo;                                                // 0x0471(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TLA7[0x6];                                   // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TimerDisplayReady;                                       // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       GrandSlam;                                               // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

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
		void SetCountDownTime(int32_t Seconds);
		void Initialize();
		void UserConstructionScript();
		void Timeline_LogoLoop__FinishedFunc();
		void Timeline_LogoLoop__UpdateFunc();
		void Timeline_Countdown__FinishedFunc();
		void Timeline_Countdown__UpdateFunc();
		void Timeline_StrikeOut__FinishedFunc();
		void Timeline_StrikeOut__UpdateFunc();
		void Timeline_HR1__FinishedFunc();
		void Timeline_HR1__UpdateFunc();
		void Timeline_HR3__FinishedFunc();
		void Timeline_HR3__UpdateFunc();
		void Timeline_HR2__FinishedFunc();
		void Timeline_HR2__UpdateFunc();
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
		void ExecuteUbergraph_BB_Scoreboard_Large_BP(int32_t EntryPoint);
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
