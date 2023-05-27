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
	 * BlueprintGeneratedClass Menu_TrainingOptions.Menu_TrainingOptions_C
	 * Size -> 0x01C0 (FullSize[0x04E8] - InheritedSize[0x0328])
	 */
	class AMenu_TrainingOptions_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                MiddleRandomMesh;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CenterInstrumentMeshOrigin;                              // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     InstrumentRotation;                                      // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BallMeshOffset;                                          // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BallMeshOrigin;                                          // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BallMesh;                                                // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BallMeshOriginM;                                         // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMeshM;                                             // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Right;                                                   // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Middle;                                                  // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Left;                                                    // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MenuOffset;                                              // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              InstrumentSkeletalMesh;                                  // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                InstrumentStaticMesh;                                    // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     InstrumentMeshOffset;                                    // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosMR;                                             // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosML;                                             // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosRR1;                                            // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosRL1;                                            // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosRR0;                                            // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosRL0;                                            // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosLR;                                             // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosLL;                                             // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMeshR1;                                            // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMeshR0;                                            // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMeshL_Texture;                                     // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMeshL_Hole;                                        // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh_Middle;                                       // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_RotateInstrument_Alpha_16CBAF3544ABBC8655128A994FAE18CB; // 0x0420(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_RotateInstrument__Direction_16CBAF3544ABBC8655128A994FAE18CB; // 0x0424(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CFVX[0x3];                                   // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_RotateInstrument;                               // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_RotateBallMesh_Alpha_256DE6D4471487D1CC0E24AEA81DC8A5; // 0x0430(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_RotateBallMesh__Direction_256DE6D4471487D1CC0E24AEA81DC8A5; // 0x0434(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8M5Z[0x3];                                   // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_RotateBallMesh;                                 // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TrainingName;                                            // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       Red;                                                     // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_N2WJ[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTrainingOptionsWidget_C*                            OptionsWidget;                                           // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AButton_Arrow_C*>                             ArrowButtons;                                            // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class FName>                                        ListLeft;                                                // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentIndexLeft;                                        // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OTKK[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ListMiddle;                                              // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentIndexMiddle;                                      // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FA5N[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        ListRight0;                                              // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentIndexRight0;                                      // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FO8H[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        ListRight1;                                              // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    CurrentIndexRight1;                                      // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AJPG[0x4];                                   // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelStreamingDynamic*                              Level;                                                   // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             AssetsLoaded;                                            // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void EnableMenuInput(bool* InputEnabled);
		void DisableMenuInput(bool* InputDisabled);
		void RemoveSubMenu(bool* Removed);
		void HideSubMenu(bool* MenuHidden);
		void RestoreSubMenu(bool* MenuShown);
		void GetBbBallMesh(class UClass* Class, class UStaticMesh** StaticMesh);
		void GetBbInstrumentSkeleton(class UClass* Class, class USkeletalMesh** Skeleton, class UClass** Anim);
		void GetBbInstrumentMesh(class UClass* Class, class UStaticMesh** StaticMesh);
		void GetBwBallMesh(class UClass* Class, class UStaticMesh** StaticMesh);
		void GetTnInstrumentSkeleton(class UClass* Class, class USkeletalMesh** Skeleton, class UClass** Anim);
		void GetTnInstrumentMesh(class UClass* Class, class UStaticMesh** StaticMesh);
		void GetTnBallMesh(class UClass* Class, class UStaticMesh** StaticMesh);
		void UpdateLauncherType();
		void UpdateBattingTargets();
		void UpdatePitchingTargets();
		void UpdateBatBaseball();
		void UpdateBallBaseball();
		void Init_Baseball(bool Pitching);
		void UpdateLane();
		void UpdateBallSelectionBowling();
		void Init_Bowling();
		void UpdateServeStyle();
		void Init_Serve();
		void UpdateShotType();
		void UpdateShotDirection();
		void UpdateRacketSelectionTennis();
		void UpdateBallSelectionTennis();
		void Init_Volley();
		void SetRed();
		void Initialize();
		void UserConstructionScript();
		void Timeline_RotateBallMesh__FinishedFunc();
		void Timeline_RotateBallMesh__UpdateFunc();
		void Timeline_RotateInstrument__FinishedFunc();
		void Timeline_RotateInstrument__UpdateFunc();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ButtonPressed(int32_t ID);
		void TennisBallPrev(int32_t ID);
		void TennisBallNext(int32_t ID);
		void TennisRacketPrev(int32_t ID);
		void TennisRacketNext(int32_t ID);
		void UpdateShotDirPrev(int32_t ID);
		void UpdateShotDirNext(int32_t ID);
		void UpdateShotTypePrev(int32_t ID);
		void UpdateShotTypeNext(int32_t ID);
		void UpdateServeStylePrev(int32_t ID);
		void UpdateServeStyleNext(int32_t ID);
		void LanePrev(int32_t ID);
		void LaneNext(int32_t ID);
		void BowlingBallPrev(int32_t ID);
		void BowlingBallNext(int32_t ID);
		void BaseballBallPrev(int32_t ID);
		void BaseballBallNext(int32_t ID);
		void BaseballBatPrev(int32_t ID);
		void BaseballBatNext(int32_t ID);
		void PitchTargetPrev(int32_t ID);
		void PitchTargetNext(int32_t ID);
		void BattingLauncherPrev(int32_t ID);
		void BattingLauncherNext(int32_t ID);
		void BattingTargetPrev(int32_t ID);
		void BattingTargetNext(int32_t ID);
		void RotateBallMesh();
		void StopBallMeshRotate();
		void FixFuckedUpShit();
		void ExecuteUbergraph_Menu_TrainingOptions(int32_t EntryPoint);
		void AssetsLoaded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
