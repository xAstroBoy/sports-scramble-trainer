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
	 * BlueprintGeneratedClass Announcer_BP.Announcer_BP_C
	 * Size -> 0x0298 (FullSize[0x05E0] - InheritedSize[0x0348])
	 */
	class AAnnouncer_BP_C : public AScramActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioCurveSourceComponent*                          AudioVoice;                                              // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Morph;                                             // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UScramBounceLighting*                                ScramBounceLighting;                                     // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioFuzz;                                               // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BlobRoot;                                                // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBlobShadowComponent*                                BlobShadow;                                              // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMediaSoundComponent*                                MediaSound;                                              // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_VideoScreenAlpha_Alpha_0B067C744AAAC856AEFE539B6C52A68A; // 0x03A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_VideoScreenAlpha__Direction_0B067C744AAAC856AEFE539B6C52A68A; // 0x03A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8UX8[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_VideoScreenAlpha;                               // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_HideStatic_alpha_254386494A592BD274F5C4960A875DC6; // 0x03B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_HideStatic__Direction_254386494A592BD274F5C4960A875DC6; // 0x03B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PT3F[0x3];                                   // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_HideStatic;                                     // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimelineTransitionAlpha_Alpha_D70C10F54E1B29BA17B24CA1F74D4D49; // 0x03C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TimelineTransitionAlpha__Direction_D70C10F54E1B29BA17B24CA1F74D4D49; // 0x03C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7U75[0x3];                                   // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TimelineTransitionAlpha;                                 // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             VoiceClipComplete;                                       // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EyeHideComplete;                                         // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HideVideoScreenOnSpawn;                                  // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       IsFaceHidden;                                            // 0x03F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L4OS[0x6];                                   // 0x03FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             VoiceClipSequenceComplete;                               // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       StartInLogo;                                             // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_652K[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            StaticMeshMat;                                           // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnvelopeMaxValue;                                        // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnvelopeValue;                                           // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnnouncerExpression                                       Expression;                                              // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PFPU[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDelayedExpression>                          ExpressionList;                                          // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class USoundBase*                                          ActiveAudioClip;                                         // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAnnouncerSequence>                          SequenceList;                                            // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FAnnouncerSequence                                  ActiveSequence;                                          // 0x0458(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UTexture*                                            HIddenExpression;                                        // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnvelopeDefaultValue;                                    // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0MD4[0x4];                                   // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnnouncer_AnimBP_C*                                 AnimationBPRef;                                          // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             TransformFromLogoComplete;                               // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       UseHubMaterials;                                         // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_H6NN[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATN_GolfClub_C*                                      GolfClub;                                                // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATN_TennisBall_C*                                    TennisBall;                                              // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATN_Basketball_C*                                    Basketball;                                              // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATN_TennisRacket_Upgrade01_C*                        TennisRacket;                                            // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PairedSequencesComplete;                                 // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FPairedAnnouncerSequence>                    ActivePairSequences;                                     // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FPairedAnnouncerSequence                            ActivePairSequence;                                      // 0x0510(0x0030) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       AnimationSeqComplete;                                    // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AudioSeqComplete;                                        // 0x0541(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WLUR[0x6];                                   // 0x0542(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnnouncerGestureSetEntry>                   GestureQueue;                                            // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FAnnouncerGestureSetEntry                           ActiveGesture;                                           // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GestureTimer;                                            // 0x0560(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        PairedSequenceTimer;                                     // 0x0568(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AudioSequenceTimer;                                      // 0x0570(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FAnnouncerSequenceSetEntry>                  AudioExpressionQueue;                                    // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FAnnouncerSequenceSetEntry                          ActiveAudioExpression;                                   // 0x0588(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        InitialPairedSequences;                                  // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		class FScriptMulticastDelegate                             ExitSequenceComplete;                                    // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ACMN_HockeyStick_C*                                  HockeyStick2;                                            // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAnnouncerLooks                                            Look;                                                    // 0x05C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XYH7[0x7];                                   // 0x05C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramGameInstance_C*                                GameInstance;                                            // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          LoadedAudio;                                             // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateReflectionMap();
		void ChooseBallType();
		void PlayPairedSequences(TArray<class FName>* PairedSequences, const class FScriptDelegate& SequencesCompleteEvent);
		void RemoveAttachements();
		void AttachObjectToHand(EAnnouncerAttachments Attachment);
		void StartLogoTransform(const class FScriptDelegate& Event);
		void PlayGesture(EAnnouncerGestures Gesture, const class FScriptDelegate& Event);
		void UpdateEnvelope();
		void PlayClipsByNameSequence(TArray<class FName>* SequenceList);
		void PlayClipByName(const class FName& SequenceName);
		void SetBallTexture();
		void SetWhiteTexture();
		void PlayPowerSFX();
		void Initialize();
		void UserConstructionScript();
		void TimelineTransitionAlpha__FinishedFunc();
		void TimelineTransitionAlpha__UpdateFunc();
		void Timeline_VideoScreenAlpha__FinishedFunc();
		void Timeline_VideoScreenAlpha__UpdateFunc();
		void Timeline_HideStatic__FinishedFunc();
		void Timeline_HideStatic__UpdateFunc();
		void OnLoaded_D67B74AB48904632A4741F97D7912F77(class UObject* Loaded);
		void OnLoaded_5DBB37404B05E0EF74B86F8B66722E10(class UObject* Loaded);
		void MoveForwardComplete();
		void ExitSequence(bool InHub);
		void PairedSequenceLoop();
		void GestureLoop();
		void AudioLoop();
		void GestureTimerComplete();
		void PairedSequenceTimerComplete();
		void GestureInSequenceComplete();
		void AudioSequenceTimerComplete();
		void ClipInSequenceComplete();
		void SecretEffect(const struct FVector& Loc);
		void HubExit();
		void HideMesh();
		void ReceiveBeginPlay();
		void HideEyes();
		void ShowEyes();
		void PlayVideo(class UMediaSource* MediaSource, bool Loop, float DurationOverride);
		void ShowFace();
		void HideFace();
		void FirstVideoSequence(class UMediaSource* MediaSource, bool Loop, float DurationOverride);
		void PlayVideoSequence(TArray<class UMediaSource*> MediaSources, TArray<float> DurationOverrides);
		void SequenceLoop();
		void FadeOutStatic();
		void BlobShow();
		void BlobHide(float Delay);
		void BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature(class USoundWave* PlayingSoundWave, float EnvelopeValue);
		void ChangeExpression(EAnnouncerExpression NewExpression);
		void PlayAudioWithExpression(const struct FAnnouncerSequence& AnnouncerSequence);
		void StartExpressionLoop(TArray<struct FDelayedExpression> ExpressionSequence);
		void PlayAudio(class USoundBase* Sound);
		void VoiceFinished();
		void DoExpressionSwap();
		void PlayClipSequence(TArray<struct FAnnouncerSequence> ClipSequence);
		void BlinkLoop();
		void BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
		void Relay();
		void RemoveAnnouncer();
		void FadeInStatic();
		void UpdateAttachments(EAnnouncerAttachments Attachement);
		void EntryComplete();
		void DoNothin();
		void LevelChanged(const class FName& NewPrimaryLevel);
		void GeoLevelChanged(const class FName& NewGeoLevel);
		void PlayBallDropSound();
		void PlayArmsArticulateSound();
		void PlayExitSound();
		void TransformLogoToIdle();
		void PlayAudioAsync();
		void ExecuteUbergraph_Announcer_BP(int32_t EntryPoint);
		void ExitSequenceComplete__DelegateSignature();
		void PairedSequencesComplete__DelegateSignature();
		void TransformFromLogoComplete__DelegateSignature();
		void VoiceClipSequenceComplete__DelegateSignature();
		void EyeHideComplete__DelegateSignature();
		void VoiceClipComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
