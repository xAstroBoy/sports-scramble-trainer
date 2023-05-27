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
	 * BlueprintGeneratedClass ScramPlayer_BP.ScramPlayer_BP_C
	 * Size -> 0x011A (FullSize[0x0ACA] - InheritedSize[0x09B0])
	 */
	class AScramPlayer_BP_C : public AScramPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Timeline_Fade_Alpha_224CBD364A8D6ECA75A271AA329BF531;    // 0x09B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_Fade__Direction_224CBD364A8D6ECA75A271AA329BF531; // 0x09BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IKW3[0x3];                                   // 0x09BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_Fade;                                           // 0x09C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Buttons;                                                 // 0x09C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TYZO[0x4];                                   // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnAnchor_Temp;                                        // 0x09D0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool                                                       BigMode;                                                 // 0x0A00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7CSV[0x3];                                   // 0x0A01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Speed;                                                   // 0x0A04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PlayerFadedOut;                                          // 0x0A10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       FadeInDisabled;                                          // 0x0A20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FadedOut;                                                // 0x0A21(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ReenablePause;                                           // 0x0A22(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AV8O[0x5];                                   // 0x0A23(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AStandLocationIndicator_C*                           ReturnIndicator_1;                                       // 0x0A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PlayerExitBoundary;                                      // 0x0A30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PlayerEnterBoundary;                                     // 0x0A40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              VoicePermissionString;                                   // 0x0A50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       SlomoMode;                                               // 0x0A60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XFZE[0x7];                                   // 0x0A61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              SlomoOptionsFast;                                        // 0x0A68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              SlomoOptionsSlow;                                        // 0x0A78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    SlomoFastIndex;                                          // 0x0A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SlomoSlowIndex;                                          // 0x0A8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SlomoReset;                                              // 0x0A90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2BGO[0x7];                                   // 0x0A91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramSaveData*                                      SaveData;                                                // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             RemotePlayerReady;                                       // 0x0AA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PlayerRecentered;                                        // 0x0AB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AActor*                                              ActiveButtonActor;                                       // 0x0AC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ThumbDownR;                                              // 0x0AC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ThumbDownL;                                              // 0x0AC9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Cleanup();
		void SlomoDecrement(int32_t* Index, TArray<float> Array);
		void SlomoIncrement(int32_t* Index, TArray<float> Array);
		void Slomo(float Scale);
		void SetDefaults();
		void SetCommonPreferences(const struct FCommonPlayerPreferences& preferences);
		void GetCommonPreferences(struct FCommonPlayerPreferences* preferences);
		void SetBowlingPreferences(const struct FBowlingPlayerPreferences& preferences);
		void SetBaseballBatterPreferences(const struct FBaseballBatterPreferences& preferences);
		void SetBaseballPitcherPreferences(const struct FBaseballPitcherPreferences& preferences);
		void SetTennisPreferences(const struct FTennisPlayerPreferences& preferences);
		void GetBowlingPreferences(struct FBowlingPlayerPreferences* preferences);
		void GetBaseballBatterPreferences(struct FBaseballBatterPreferences* preferences);
		void GetBaseballPitcherPreferences(struct FBaseballPitcherPreferences* preferences);
		void GetTennisPreferences(struct FTennisPlayerPreferences* preferences);
		void Initialize();
		void SetPlayerVisibility(bool visible);
		void UserConstructionScript();
		void Timeline_Fade__FinishedFunc();
		void Timeline_Fade__UpdateFunc();
		void InpActEvt_RightGripTrigger_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_8(const struct FKey& Key);
		void InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_X_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_X_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_MotionController_Right_Thumbstick_Right_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_MotionController_Right_Thumbstick_Up_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_MotionController_Right_Thumbstick_Left_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_MotionController_Right_Thumbstick_Down_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_Y_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Y_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_X_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Y_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void FadeToBlack();
		void FadeFromBlack();
		void InitialFadeIn();
		void GrabbedSomething(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void OnPlayerOutOfBoundary(const struct FTransform& ReturnTransform);
		void OnPlayerEnterBoundary();
		void PauseGame();
		void ResumeGame();
		void QueuedPlayerOutOfBoundary();
		void QueuedPlayerEnterBoundary();
		void ClientReady(int32_t ID);
		void HostFadeToBlack();
		void SetAvatarMaterials(const struct FAvatarLook& AvatarLook);
		void RecenterDetected();
		void TravelCapsuleOpened(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_ScramPlayer_BP(int32_t EntryPoint);
		void PlayerRecentered__DelegateSignature();
		void RemotePlayerReady__DelegateSignature(int32_t ID);
		void PlayerEnterBoundary__DelegateSignature();
		void PlayerExitBoundary__DelegateSignature();
		void PlayerFadedOut__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
