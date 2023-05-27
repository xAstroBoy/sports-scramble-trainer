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
	 * BlueprintGeneratedClass Menu_Results.Menu_Results_C
	 * Size -> 0x01AC (FullSize[0x04D4] - InheritedSize[0x0328])
	 */
	class AMenu_Results_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     ParticlePos;                                             // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AvatarRPos;                                              // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AvatarRotateR;                                           // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AvatarLPos;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AvatarRotateL;                                           // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMeshIcon;                                          // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SkeletonLocRight;                                        // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SkeletonLocLeft;                                         // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioHighScore;                                          // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioWipe;                                               // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioGrow;                                               // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioSlide;                                              // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh_ScoreBox;                                     // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetCompScoreBox;                                      // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ScoreBoxRoot;                                            // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetCompText;                                          // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MenuRoot;                                                // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScaleBoxBump_Alpha_FDB1CA6F4039A6159022DF91E7A99AF5; // 0x03C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScaleBoxBump__Direction_FDB1CA6F4039A6159022DF91E7A99AF5; // 0x03C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S6QO[0x3];                                   // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScaleBoxBump;                                   // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_SwapBox_Alpha_E320AE7E4086102A8E7596B3DF0A8690; // 0x03D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_SwapBox__Direction_E320AE7E4086102A8E7596B3DF0A8690; // 0x03D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1PGW[0x3];                                   // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_SwapBox;                                        // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_SwapBoxBump_Alpha_84CFCA044B93199751CE1594230363F7; // 0x03E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_SwapBoxBump__Direction_84CFCA044B93199751CE1594230363F7; // 0x03E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YVS9[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_SwapBoxBump;                                    // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScaleMessage_Alpha_DFEA859340802F40C282C58B039A493F; // 0x03F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScaleMessage__Direction_DFEA859340802F40C282C58B039A493F; // 0x03F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q5MH[0x3];                                   // 0x03F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScaleMessage;                                   // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_MoveAvatars_Alpha_567151534100813AC844ED9F7250D6AE; // 0x0400(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_MoveAvatars__Direction_567151534100813AC844ED9F7250D6AE; // 0x0404(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M6PM[0x3];                                   // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_MoveAvatars;                                    // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScaleAvatars_Alpha_76D02C00449A024A0BB4A4910F6356C4; // 0x0410(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScaleAvatars__Direction_76D02C00449A024A0BB4A4910F6356C4; // 0x0414(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EH7Q[0x3];                                   // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScaleAvatars;                                   // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ShowHighScore_Alpha_79C83438467B15F6C71136B634D43F43; // 0x0420(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ShowHighScore__Direction_79C83438467B15F6C71136B634D43F43; // 0x0424(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_68GE[0x3];                                   // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ShowHighScore;                                  // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_SwapBoxText_Alpha_5C963E034277BAD06D16429B01E2470B; // 0x0430(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_SwapBoxText__Direction_5C963E034277BAD06D16429B01E2470B; // 0x0434(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O6VY[0x3];                                   // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_SwapBoxText;                                    // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ShowInnerMessage_Alpha_9A8DA9EF46CBAAF11E0B2BB422D313C2; // 0x0440(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ShowInnerMessage__Direction_9A8DA9EF46CBAAF11E0B2BB422D313C2; // 0x0444(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0XFM[0x3];                                   // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ShowInnerMessage;                               // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScaleBox_Alpha_67B2FC6048F8CDA7624222B5EAA01778; // 0x0450(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScaleBox__Direction_67B2FC6048F8CDA7624222B5EAA01778; // 0x0454(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FFR1[0x3];                                   // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScaleBox;                                       // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_MoveTitle_Alpha_69BA5BD146B9FF82587B8AB516EF6658; // 0x0460(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_MoveTitle__Direction_69BA5BD146B9FF82587B8AB516EF6658; // 0x0464(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZQ00[0x3];                                   // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_MoveTitle;                                      // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ResultsDisplayComplete;                                  // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FResultsData                                        ResultsData;                                             // 0x0480(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EGameModeTypes                                             Mode;                                                    // 0x048C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_FT7A[0x3];                                   // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UResultsWidget_C*                                    ResultsWidget;                                           // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UResultsBoxWidget_C*                                 ResultsBoxWidget;                                        // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                GameName;                                                // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       ChallengeNoScore;                                        // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_27QY[0x7];                                   // 0x04A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramGameInstance_C*                                GameInstance;                                            // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AvatarLRotStart;                                         // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TwoAvatars;                                              // 0x04BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DSJB[0x3];                                   // 0x04BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AButton_AvatarEdit_C*                                AvatarR;                                                 // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_AvatarEdit_C*                                AvatarL;                                                 // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasMessage;                                              // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasScore;                                                // 0x04D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseBump;                                                 // 0x04D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       QuickFail;                                               // 0x04D3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EnableMenuInput(bool* InputEnabled);
		void DisableMenuInput(bool* InputDisabled);
		void RemoveSubMenu(bool* Removed);
		void HideSubMenu(bool* MenuHidden);
		void RestoreSubMenu(bool* MenuShown);
		void SwapToRed();
		void RevealHighScore();
		void AvatarsReact();
		void SpawnAvatars();
		void ShowTrophyIcon();
		void SwapToGold();
		void GetTitleText(class FText* Title);
		void Initialize();
		void UserConstructionScript();
		void Timeline_ScaleBox__FinishedFunc();
		void Timeline_ScaleBox__UpdateFunc();
		void Timeline_SwapBoxText__FinishedFunc();
		void Timeline_SwapBoxText__UpdateFunc();
		void Timeline_ShowHighScore__FinishedFunc();
		void Timeline_ShowHighScore__UpdateFunc();
		void Timeline_MoveTitle__FinishedFunc();
		void Timeline_MoveTitle__UpdateFunc();
		void Timeline_ShowInnerMessage__FinishedFunc();
		void Timeline_ShowInnerMessage__UpdateFunc();
		void Timeline_SwapBoxBump__FinishedFunc();
		void Timeline_SwapBoxBump__UpdateFunc();
		void Timeline_ScaleAvatars__FinishedFunc();
		void Timeline_ScaleAvatars__UpdateFunc();
		void Timeline_MoveAvatars__FinishedFunc();
		void Timeline_MoveAvatars__UpdateFunc();
		void Timeline_ScaleMessage__FinishedFunc();
		void Timeline_ScaleMessage__UpdateFunc();
		void Timeline_SwapBox__FinishedFunc();
		void Timeline_SwapBox__UpdateFunc();
		void Timeline_ScaleBoxBump__FinishedFunc();
		void Timeline_ScaleBoxBump__UpdateFunc();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void RevealBox();
		void ShowScore();
		void ShowHighScore();
		void MoveMessage();
		void ShowInnerMessage();
		void ShowFinalMessage();
		void FinishFinalMessage();
		void BeginResultsDisplay();
		void MoveAvatars();
		void DisplayMessage();
		void PlayFX();
		void PlayRedFX();
		void DelayedYellowPulse();
		void ExecuteUbergraph_Menu_Results(int32_t EntryPoint);
		void ResultsDisplayComplete__DelegateSignature(bool WideNextButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
