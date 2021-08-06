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
// Parameters
//---------------------------------------------------------------------------

// Function Announcer_BP.Announcer_BP_C.UpdateReflectionMap
struct AAnnouncer_BP_C_UpdateReflectionMap_Params
{
};

// Function Announcer_BP.Announcer_BP_C.ChooseBallType
struct AAnnouncer_BP_C_ChooseBallType_Params
{
};

// Function Announcer_BP.Announcer_BP_C.PlayPairedSequences
struct AAnnouncer_BP_C_PlayPairedSequences_Params
{
	TArray<struct FName>                               PairedSequences;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             SequencesCompleteEvent;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function Announcer_BP.Announcer_BP_C.RemoveAttachements
struct AAnnouncer_BP_C_RemoveAttachements_Params
{
};

// Function Announcer_BP.Announcer_BP_C.AttachObjectToHand
struct AAnnouncer_BP_C_AttachObjectToHand_Params
{
	TEnumAsByte<AnnouncerAttachments_EAnnouncerAttachments> Attachment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.StartLogoTransform
struct AAnnouncer_BP_C_StartLogoTransform_Params
{
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function Announcer_BP.Announcer_BP_C.PlayGesture
struct AAnnouncer_BP_C_PlayGesture_Params
{
	TEnumAsByte<AnnouncerGestures_EAnnouncerGestures>  Gesture;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptDelegate                             Event;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function Announcer_BP.Announcer_BP_C.UpdateEnvelope
struct AAnnouncer_BP_C_UpdateEnvelope_Params
{
};

// Function Announcer_BP.Announcer_BP_C.PlayClipsByNameSequence
struct AAnnouncer_BP_C_PlayClipsByNameSequence_Params
{
	TArray<struct FName>                               SequenceList;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Announcer_BP.Announcer_BP_C.PlayClipByName
struct AAnnouncer_BP_C_PlayClipByName_Params
{
	struct FName                                       SequenceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.SetBallTexture
struct AAnnouncer_BP_C_SetBallTexture_Params
{
};

// Function Announcer_BP.Announcer_BP_C.SetWhiteTexture
struct AAnnouncer_BP_C_SetWhiteTexture_Params
{
};

// Function Announcer_BP.Announcer_BP_C.PlayPowerSFX
struct AAnnouncer_BP_C_PlayPowerSFX_Params
{
};

// Function Announcer_BP.Announcer_BP_C.Initialize
struct AAnnouncer_BP_C_Initialize_Params
{
};

// Function Announcer_BP.Announcer_BP_C.UserConstructionScript
struct AAnnouncer_BP_C_UserConstructionScript_Params
{
};

// Function Announcer_BP.Announcer_BP_C.TimelineTransitionAlpha__FinishedFunc
struct AAnnouncer_BP_C_TimelineTransitionAlpha__FinishedFunc_Params
{
};

// Function Announcer_BP.Announcer_BP_C.TimelineTransitionAlpha__UpdateFunc
struct AAnnouncer_BP_C_TimelineTransitionAlpha__UpdateFunc_Params
{
};

// Function Announcer_BP.Announcer_BP_C.Timeline_VideoScreenAlpha__FinishedFunc
struct AAnnouncer_BP_C_Timeline_VideoScreenAlpha__FinishedFunc_Params
{
};

// Function Announcer_BP.Announcer_BP_C.Timeline_VideoScreenAlpha__UpdateFunc
struct AAnnouncer_BP_C_Timeline_VideoScreenAlpha__UpdateFunc_Params
{
};

// Function Announcer_BP.Announcer_BP_C.Timeline_HideStatic__FinishedFunc
struct AAnnouncer_BP_C_Timeline_HideStatic__FinishedFunc_Params
{
};

// Function Announcer_BP.Announcer_BP_C.Timeline_HideStatic__UpdateFunc
struct AAnnouncer_BP_C_Timeline_HideStatic__UpdateFunc_Params
{
};

// Function Announcer_BP.Announcer_BP_C.OnLoaded_D67B74AB48904632A4741F97D7912F77
struct AAnnouncer_BP_C_OnLoaded_D67B74AB48904632A4741F97D7912F77_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.OnLoaded_5DBB37404B05E0EF74B86F8B66722E10
struct AAnnouncer_BP_C_OnLoaded_5DBB37404B05E0EF74B86F8B66722E10_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.MoveForwardComplete
struct AAnnouncer_BP_C_MoveForwardComplete_Params
{
};

// Function Announcer_BP.Announcer_BP_C.ExitSequence
struct AAnnouncer_BP_C_ExitSequence_Params
{
	bool                                               InHub;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Announcer_BP.Announcer_BP_C.PairedSequenceLoop
struct AAnnouncer_BP_C_PairedSequenceLoop_Params
{
};

// Function Announcer_BP.Announcer_BP_C.GestureLoop
struct AAnnouncer_BP_C_GestureLoop_Params
{
};

// Function Announcer_BP.Announcer_BP_C.AudioLoop
struct AAnnouncer_BP_C_AudioLoop_Params
{
};

// Function Announcer_BP.Announcer_BP_C.GestureTimerComplete
struct AAnnouncer_BP_C_GestureTimerComplete_Params
{
};

// Function Announcer_BP.Announcer_BP_C.PairedSequenceTimerComplete
struct AAnnouncer_BP_C_PairedSequenceTimerComplete_Params
{
};

// Function Announcer_BP.Announcer_BP_C.GestureInSequenceComplete
struct AAnnouncer_BP_C_GestureInSequenceComplete_Params
{
};

// Function Announcer_BP.Announcer_BP_C.AudioSequenceTimerComplete
struct AAnnouncer_BP_C_AudioSequenceTimerComplete_Params
{
};

// Function Announcer_BP.Announcer_BP_C.ClipInSequenceComplete
struct AAnnouncer_BP_C_ClipInSequenceComplete_Params
{
};

// Function Announcer_BP.Announcer_BP_C.SecretEffect
struct AAnnouncer_BP_C_SecretEffect_Params
{
	struct FVector                                     Loc;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.HubExit
struct AAnnouncer_BP_C_HubExit_Params
{
};

// Function Announcer_BP.Announcer_BP_C.HideMesh
struct AAnnouncer_BP_C_HideMesh_Params
{
};

// Function Announcer_BP.Announcer_BP_C.ReceiveBeginPlay
struct AAnnouncer_BP_C_ReceiveBeginPlay_Params
{
};

// Function Announcer_BP.Announcer_BP_C.HideEyes
struct AAnnouncer_BP_C_HideEyes_Params
{
};

// Function Announcer_BP.Announcer_BP_C.ShowEyes
struct AAnnouncer_BP_C_ShowEyes_Params
{
};

// Function Announcer_BP.Announcer_BP_C.PlayVideo
struct AAnnouncer_BP_C_PlayVideo_Params
{
	class UMediaSource*                                MediaSource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DurationOverride;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.ShowFace
struct AAnnouncer_BP_C_ShowFace_Params
{
};

// Function Announcer_BP.Announcer_BP_C.HideFace
struct AAnnouncer_BP_C_HideFace_Params
{
};

// Function Announcer_BP.Announcer_BP_C.FirstVideoSequence
struct AAnnouncer_BP_C_FirstVideoSequence_Params
{
	class UMediaSource*                                MediaSource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DurationOverride;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.PlayVideoSequence
struct AAnnouncer_BP_C_PlayVideoSequence_Params
{
	TArray<class UMediaSource*>                        MediaSources;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      DurationOverrides;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Announcer_BP.Announcer_BP_C.SequenceLoop
struct AAnnouncer_BP_C_SequenceLoop_Params
{
};

// Function Announcer_BP.Announcer_BP_C.FadeOutStatic
struct AAnnouncer_BP_C_FadeOutStatic_Params
{
};

// Function Announcer_BP.Announcer_BP_C.BlobShow
struct AAnnouncer_BP_C_BlobShow_Params
{
};

// Function Announcer_BP.Announcer_BP_C.BlobHide
struct AAnnouncer_BP_C_BlobHide_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature
struct AAnnouncer_BP_C_BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature_Params
{
	class USoundWave*                                  PlayingSoundWave;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EnvelopeValue;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.ChangeExpression
struct AAnnouncer_BP_C_ChangeExpression_Params
{
	TEnumAsByte<AnnouncerExpression_EAnnouncerExpression> NewExpression;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.PlayAudioWithExpression
struct AAnnouncer_BP_C_PlayAudioWithExpression_Params
{
	struct FAnnouncerSequence                          AnnouncerSequence;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.StartExpressionLoop
struct AAnnouncer_BP_C_StartExpressionLoop_Params
{
	TArray<struct FDelayedExpression>                  ExpressionSequence;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Announcer_BP.Announcer_BP_C.PlayAudio
struct AAnnouncer_BP_C_PlayAudio_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.VoiceFinished
struct AAnnouncer_BP_C_VoiceFinished_Params
{
};

// Function Announcer_BP.Announcer_BP_C.DoExpressionSwap
struct AAnnouncer_BP_C_DoExpressionSwap_Params
{
};

// Function Announcer_BP.Announcer_BP_C.PlayClipSequence
struct AAnnouncer_BP_C_PlayClipSequence_Params
{
	TArray<struct FAnnouncerSequence>                  ClipSequence;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Announcer_BP.Announcer_BP_C.BlinkLoop
struct AAnnouncer_BP_C_BlinkLoop_Params
{
};

// Function Announcer_BP.Announcer_BP_C.BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature
struct AAnnouncer_BP_C_BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature_Params
{
};

// Function Announcer_BP.Announcer_BP_C.Relay
struct AAnnouncer_BP_C_Relay_Params
{
};

// Function Announcer_BP.Announcer_BP_C.RemoveAnnouncer
struct AAnnouncer_BP_C_RemoveAnnouncer_Params
{
};

// Function Announcer_BP.Announcer_BP_C.FadeInStatic
struct AAnnouncer_BP_C_FadeInStatic_Params
{
};

// Function Announcer_BP.Announcer_BP_C.UpdateAttachments
struct AAnnouncer_BP_C_UpdateAttachments_Params
{
	TEnumAsByte<AnnouncerAttachments_EAnnouncerAttachments> Attachement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.EntryComplete
struct AAnnouncer_BP_C_EntryComplete_Params
{
};

// Function Announcer_BP.Announcer_BP_C.DoNothin
struct AAnnouncer_BP_C_DoNothin_Params
{
};

// Function Announcer_BP.Announcer_BP_C.LevelChanged
struct AAnnouncer_BP_C_LevelChanged_Params
{
	struct FName                                       NewPrimaryLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.GeoLevelChanged
struct AAnnouncer_BP_C_GeoLevelChanged_Params
{
	struct FName                                       NewGeoLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.PlayBallDropSound
struct AAnnouncer_BP_C_PlayBallDropSound_Params
{
};

// Function Announcer_BP.Announcer_BP_C.PlayArmsArticulateSound
struct AAnnouncer_BP_C_PlayArmsArticulateSound_Params
{
};

// Function Announcer_BP.Announcer_BP_C.PlayExitSound
struct AAnnouncer_BP_C_PlayExitSound_Params
{
};

// Function Announcer_BP.Announcer_BP_C.TransformLogoToIdle
struct AAnnouncer_BP_C_TransformLogoToIdle_Params
{
};

// Function Announcer_BP.Announcer_BP_C.PlayAudioAsync
struct AAnnouncer_BP_C_PlayAudioAsync_Params
{
};

// Function Announcer_BP.Announcer_BP_C.ExecuteUbergraph_Announcer_BP
struct AAnnouncer_BP_C_ExecuteUbergraph_Announcer_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Announcer_BP.Announcer_BP_C.ExitSequenceComplete__DelegateSignature
struct AAnnouncer_BP_C_ExitSequenceComplete__DelegateSignature_Params
{
};

// Function Announcer_BP.Announcer_BP_C.PairedSequencesComplete__DelegateSignature
struct AAnnouncer_BP_C_PairedSequencesComplete__DelegateSignature_Params
{
};

// Function Announcer_BP.Announcer_BP_C.TransformFromLogoComplete__DelegateSignature
struct AAnnouncer_BP_C_TransformFromLogoComplete__DelegateSignature_Params
{
};

// Function Announcer_BP.Announcer_BP_C.VoiceClipSequenceComplete__DelegateSignature
struct AAnnouncer_BP_C_VoiceClipSequenceComplete__DelegateSignature_Params
{
};

// Function Announcer_BP.Announcer_BP_C.EyeHideComplete__DelegateSignature
struct AAnnouncer_BP_C_EyeHideComplete__DelegateSignature_Params
{
};

// Function Announcer_BP.Announcer_BP_C.VoiceClipComplete__DelegateSignature
struct AAnnouncer_BP_C_VoiceClipComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
