// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Announcer_BP.Announcer_BP_C.UpdateReflectionMap
// (Public, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::UpdateReflectionMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.UpdateReflectionMap");

	AAnnouncer_BP_C_UpdateReflectionMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.ChooseBallType
// (Public, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::ChooseBallType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ChooseBallType");

	AAnnouncer_BP_C_ChooseBallType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayPairedSequences
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           PairedSequences                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         SequencesCompleteEvent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AAnnouncer_BP_C::PlayPairedSequences(TArray<struct FName>* PairedSequences, const struct FScriptDelegate& SequencesCompleteEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayPairedSequences");

	AAnnouncer_BP_C_PlayPairedSequences_Params params;
	params.SequencesCompleteEvent = SequencesCompleteEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PairedSequences != nullptr)
		*PairedSequences = params.PairedSequences;

}


// Function Announcer_BP.Announcer_BP_C.RemoveAttachements
// (Public, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::RemoveAttachements()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.RemoveAttachements");

	AAnnouncer_BP_C_RemoveAttachements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.AttachObjectToHand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AnnouncerAttachments_EAnnouncerAttachments> Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::AttachObjectToHand(TEnumAsByte<AnnouncerAttachments_EAnnouncerAttachments> Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.AttachObjectToHand");

	AAnnouncer_BP_C_AttachObjectToHand_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.StartLogoTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AAnnouncer_BP_C::StartLogoTransform(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.StartLogoTransform");

	AAnnouncer_BP_C_StartLogoTransform_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayGesture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AnnouncerGestures_EAnnouncerGestures> Gesture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void AAnnouncer_BP_C::PlayGesture(TEnumAsByte<AnnouncerGestures_EAnnouncerGestures> Gesture, const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayGesture");

	AAnnouncer_BP_C_PlayGesture_Params params;
	params.Gesture = Gesture;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.UpdateEnvelope
// (Public, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::UpdateEnvelope()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.UpdateEnvelope");

	AAnnouncer_BP_C_UpdateEnvelope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayClipsByNameSequence
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           SequenceList                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AAnnouncer_BP_C::PlayClipsByNameSequence(TArray<struct FName>* SequenceList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayClipsByNameSequence");

	AAnnouncer_BP_C_PlayClipsByNameSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SequenceList != nullptr)
		*SequenceList = params.SequenceList;

}


// Function Announcer_BP.Announcer_BP_C.PlayClipByName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SequenceName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::PlayClipByName(const struct FName& SequenceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayClipByName");

	AAnnouncer_BP_C_PlayClipByName_Params params;
	params.SequenceName = SequenceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.SetBallTexture
// (Public, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::SetBallTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.SetBallTexture");

	AAnnouncer_BP_C_SetBallTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.SetWhiteTexture
// (Public, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::SetWhiteTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.SetWhiteTexture");

	AAnnouncer_BP_C_SetWhiteTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayPowerSFX
// (Public, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::PlayPowerSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayPowerSFX");

	AAnnouncer_BP_C_PlayPowerSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Initialize");

	AAnnouncer_BP_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.UserConstructionScript");

	AAnnouncer_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.TimelineTransitionAlpha__FinishedFunc
// (BlueprintEvent)
void AAnnouncer_BP_C::TimelineTransitionAlpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.TimelineTransitionAlpha__FinishedFunc");

	AAnnouncer_BP_C_TimelineTransitionAlpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.TimelineTransitionAlpha__UpdateFunc
// (BlueprintEvent)
void AAnnouncer_BP_C::TimelineTransitionAlpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.TimelineTransitionAlpha__UpdateFunc");

	AAnnouncer_BP_C_TimelineTransitionAlpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.Timeline_VideoScreenAlpha__FinishedFunc
// (BlueprintEvent)
void AAnnouncer_BP_C::Timeline_VideoScreenAlpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Timeline_VideoScreenAlpha__FinishedFunc");

	AAnnouncer_BP_C_Timeline_VideoScreenAlpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.Timeline_VideoScreenAlpha__UpdateFunc
// (BlueprintEvent)
void AAnnouncer_BP_C::Timeline_VideoScreenAlpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Timeline_VideoScreenAlpha__UpdateFunc");

	AAnnouncer_BP_C_Timeline_VideoScreenAlpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.Timeline_HideStatic__FinishedFunc
// (BlueprintEvent)
void AAnnouncer_BP_C::Timeline_HideStatic__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Timeline_HideStatic__FinishedFunc");

	AAnnouncer_BP_C_Timeline_HideStatic__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.Timeline_HideStatic__UpdateFunc
// (BlueprintEvent)
void AAnnouncer_BP_C::Timeline_HideStatic__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Timeline_HideStatic__UpdateFunc");

	AAnnouncer_BP_C_Timeline_HideStatic__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.OnLoaded_D67B74AB48904632A4741F97D7912F77
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::OnLoaded_D67B74AB48904632A4741F97D7912F77(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.OnLoaded_D67B74AB48904632A4741F97D7912F77");

	AAnnouncer_BP_C_OnLoaded_D67B74AB48904632A4741F97D7912F77_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.OnLoaded_5DBB37404B05E0EF74B86F8B66722E10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::OnLoaded_5DBB37404B05E0EF74B86F8B66722E10(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.OnLoaded_5DBB37404B05E0EF74B86F8B66722E10");

	AAnnouncer_BP_C_OnLoaded_5DBB37404B05E0EF74B86F8B66722E10_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.MoveForwardComplete
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::MoveForwardComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.MoveForwardComplete");

	AAnnouncer_BP_C_MoveForwardComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.ExitSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InHub                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAnnouncer_BP_C::ExitSequence(bool InHub)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ExitSequence");

	AAnnouncer_BP_C_ExitSequence_Params params;
	params.InHub = InHub;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PairedSequenceLoop
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::PairedSequenceLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PairedSequenceLoop");

	AAnnouncer_BP_C_PairedSequenceLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.GestureLoop
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::GestureLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.GestureLoop");

	AAnnouncer_BP_C_GestureLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.AudioLoop
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::AudioLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.AudioLoop");

	AAnnouncer_BP_C_AudioLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.GestureTimerComplete
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::GestureTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.GestureTimerComplete");

	AAnnouncer_BP_C_GestureTimerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PairedSequenceTimerComplete
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::PairedSequenceTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PairedSequenceTimerComplete");

	AAnnouncer_BP_C_PairedSequenceTimerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.GestureInSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::GestureInSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.GestureInSequenceComplete");

	AAnnouncer_BP_C_GestureInSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.AudioSequenceTimerComplete
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::AudioSequenceTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.AudioSequenceTimerComplete");

	AAnnouncer_BP_C_AudioSequenceTimerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.ClipInSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::ClipInSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ClipInSequenceComplete");

	AAnnouncer_BP_C_ClipInSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.SecretEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::SecretEffect(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.SecretEffect");

	AAnnouncer_BP_C_SecretEffect_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.HubExit
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::HubExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.HubExit");

	AAnnouncer_BP_C_HubExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.HideMesh
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::HideMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.HideMesh");

	AAnnouncer_BP_C_HideMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAnnouncer_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ReceiveBeginPlay");

	AAnnouncer_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.HideEyes
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::HideEyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.HideEyes");

	AAnnouncer_BP_C_HideEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.ShowEyes
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::ShowEyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ShowEyes");

	AAnnouncer_BP_C_ShowEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayVideo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*            MediaSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DurationOverride               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::PlayVideo(class UMediaSource* MediaSource, bool Loop, float DurationOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayVideo");

	AAnnouncer_BP_C_PlayVideo_Params params;
	params.MediaSource = MediaSource;
	params.Loop = Loop;
	params.DurationOverride = DurationOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.ShowFace
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::ShowFace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ShowFace");

	AAnnouncer_BP_C_ShowFace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.HideFace
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::HideFace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.HideFace");

	AAnnouncer_BP_C_HideFace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.FirstVideoSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*            MediaSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DurationOverride               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::FirstVideoSequence(class UMediaSource* MediaSource, bool Loop, float DurationOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.FirstVideoSequence");

	AAnnouncer_BP_C_FirstVideoSequence_Params params;
	params.MediaSource = MediaSource;
	params.Loop = Loop;
	params.DurationOverride = DurationOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayVideoSequence
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMediaSource*>    MediaSources                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  DurationOverrides              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AAnnouncer_BP_C::PlayVideoSequence(TArray<class UMediaSource*> MediaSources, TArray<float> DurationOverrides)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayVideoSequence");

	AAnnouncer_BP_C_PlayVideoSequence_Params params;
	params.MediaSources = MediaSources;
	params.DurationOverrides = DurationOverrides;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.SequenceLoop
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::SequenceLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.SequenceLoop");

	AAnnouncer_BP_C_SequenceLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.FadeOutStatic
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::FadeOutStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.FadeOutStatic");

	AAnnouncer_BP_C_FadeOutStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.BlobShow
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::BlobShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.BlobShow");

	AAnnouncer_BP_C_BlobShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.BlobHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::BlobHide(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.BlobHide");

	AAnnouncer_BP_C_BlobHide_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USoundWave*              PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          EnvelopeValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature(class USoundWave* PlayingSoundWave, float EnvelopeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature");

	AAnnouncer_BP_C_BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.EnvelopeValue = EnvelopeValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.ChangeExpression
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AnnouncerExpression_EAnnouncerExpression> NewExpression                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::ChangeExpression(TEnumAsByte<AnnouncerExpression_EAnnouncerExpression> NewExpression)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ChangeExpression");

	AAnnouncer_BP_C_ChangeExpression_Params params;
	params.NewExpression = NewExpression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayAudioWithExpression
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnnouncerSequence      AnnouncerSequence              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AAnnouncer_BP_C::PlayAudioWithExpression(const struct FAnnouncerSequence& AnnouncerSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayAudioWithExpression");

	AAnnouncer_BP_C_PlayAudioWithExpression_Params params;
	params.AnnouncerSequence = AnnouncerSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.StartExpressionLoop
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDelayedExpression> ExpressionSequence             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AAnnouncer_BP_C::StartExpressionLoop(TArray<struct FDelayedExpression> ExpressionSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.StartExpressionLoop");

	AAnnouncer_BP_C_StartExpressionLoop_Params params;
	params.ExpressionSequence = ExpressionSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::PlayAudio(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayAudio");

	AAnnouncer_BP_C_PlayAudio_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.VoiceFinished
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::VoiceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.VoiceFinished");

	AAnnouncer_BP_C_VoiceFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.DoExpressionSwap
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::DoExpressionSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.DoExpressionSwap");

	AAnnouncer_BP_C_DoExpressionSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayClipSequence
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAnnouncerSequence> ClipSequence                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AAnnouncer_BP_C::PlayClipSequence(TArray<struct FAnnouncerSequence> ClipSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayClipSequence");

	AAnnouncer_BP_C_PlayClipSequence_Params params;
	params.ClipSequence = ClipSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.BlinkLoop
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::BlinkLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.BlinkLoop");

	AAnnouncer_BP_C_BlinkLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature
// (BlueprintEvent)
void AAnnouncer_BP_C::BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature");

	AAnnouncer_BP_C_BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.Relay
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::Relay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Relay");

	AAnnouncer_BP_C_Relay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.RemoveAnnouncer
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::RemoveAnnouncer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.RemoveAnnouncer");

	AAnnouncer_BP_C_RemoveAnnouncer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.FadeInStatic
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::FadeInStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.FadeInStatic");

	AAnnouncer_BP_C_FadeInStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.UpdateAttachments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AnnouncerAttachments_EAnnouncerAttachments> Attachement                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::UpdateAttachments(TEnumAsByte<AnnouncerAttachments_EAnnouncerAttachments> Attachement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.UpdateAttachments");

	AAnnouncer_BP_C_UpdateAttachments_Params params;
	params.Attachement = Attachement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.EntryComplete
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::EntryComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.EntryComplete");

	AAnnouncer_BP_C_EntryComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.DoNothin
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::DoNothin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.DoNothin");

	AAnnouncer_BP_C_DoNothin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.LevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewPrimaryLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::LevelChanged(const struct FName& NewPrimaryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.LevelChanged");

	AAnnouncer_BP_C_LevelChanged_Params params;
	params.NewPrimaryLevel = NewPrimaryLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.GeoLevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewGeoLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::GeoLevelChanged(const struct FName& NewGeoLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.GeoLevelChanged");

	AAnnouncer_BP_C_GeoLevelChanged_Params params;
	params.NewGeoLevel = NewGeoLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayBallDropSound
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::PlayBallDropSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayBallDropSound");

	AAnnouncer_BP_C_PlayBallDropSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayArmsArticulateSound
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::PlayArmsArticulateSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayArmsArticulateSound");

	AAnnouncer_BP_C_PlayArmsArticulateSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayExitSound
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::PlayExitSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayExitSound");

	AAnnouncer_BP_C_PlayExitSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.TransformLogoToIdle
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::TransformLogoToIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.TransformLogoToIdle");

	AAnnouncer_BP_C_TransformLogoToIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PlayAudioAsync
// (BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::PlayAudioAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayAudioAsync");

	AAnnouncer_BP_C_PlayAudioAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.ExecuteUbergraph_Announcer_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAnnouncer_BP_C::ExecuteUbergraph_Announcer_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ExecuteUbergraph_Announcer_BP");

	AAnnouncer_BP_C_ExecuteUbergraph_Announcer_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.ExitSequenceComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::ExitSequenceComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ExitSequenceComplete__DelegateSignature");

	AAnnouncer_BP_C_ExitSequenceComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.PairedSequencesComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::PairedSequencesComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PairedSequencesComplete__DelegateSignature");

	AAnnouncer_BP_C_PairedSequencesComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.TransformFromLogoComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::TransformFromLogoComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.TransformFromLogoComplete__DelegateSignature");

	AAnnouncer_BP_C_TransformFromLogoComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.VoiceClipSequenceComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::VoiceClipSequenceComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.VoiceClipSequenceComplete__DelegateSignature");

	AAnnouncer_BP_C_VoiceClipSequenceComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.EyeHideComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::EyeHideComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.EyeHideComplete__DelegateSignature");

	AAnnouncer_BP_C_EyeHideComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Announcer_BP.Announcer_BP_C.VoiceClipComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AAnnouncer_BP_C::VoiceClipComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.VoiceClipComplete__DelegateSignature");

	AAnnouncer_BP_C_VoiceClipComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
