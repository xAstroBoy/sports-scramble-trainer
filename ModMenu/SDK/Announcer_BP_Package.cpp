/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.UpdateReflectionMap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::UpdateReflectionMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.UpdateReflectionMap");
		
		AAnnouncer_BP_C_UpdateReflectionMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.ChooseBallType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::ChooseBallType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ChooseBallType");
		
		AAnnouncer_BP_C_ChooseBallType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayPairedSequences
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                PairedSequences                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class FScriptDelegate                              SequencesCompleteEvent                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AAnnouncer_BP_C::PlayPairedSequences(TArray<class FName>* PairedSequences, const class FScriptDelegate& SequencesCompleteEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayPairedSequences");
		
		AAnnouncer_BP_C_PlayPairedSequences_Params params {};
		params.SequencesCompleteEvent = SequencesCompleteEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PairedSequences != nullptr)
			*PairedSequences = params.PairedSequences;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.RemoveAttachements
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::RemoveAttachements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.RemoveAttachements");
		
		AAnnouncer_BP_C_RemoveAttachements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.AttachObjectToHand
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAnnouncerAttachments                              Attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::AttachObjectToHand(EAnnouncerAttachments Attachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.AttachObjectToHand");
		
		AAnnouncer_BP_C_AttachObjectToHand_Params params {};
		params.Attachment = Attachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.StartLogoTransform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AAnnouncer_BP_C::StartLogoTransform(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.StartLogoTransform");
		
		AAnnouncer_BP_C_StartLogoTransform_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayGesture
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAnnouncerGestures                                 Gesture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AAnnouncer_BP_C::PlayGesture(EAnnouncerGestures Gesture, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayGesture");
		
		AAnnouncer_BP_C_PlayGesture_Params params {};
		params.Gesture = Gesture;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.UpdateEnvelope
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::UpdateEnvelope()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.UpdateEnvelope");
		
		AAnnouncer_BP_C_UpdateEnvelope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayClipsByNameSequence
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                SequenceList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AAnnouncer_BP_C::PlayClipsByNameSequence(TArray<class FName>* SequenceList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayClipsByNameSequence");
		
		AAnnouncer_BP_C_PlayClipsByNameSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SequenceList != nullptr)
			*SequenceList = params.SequenceList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayClipByName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SequenceName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::PlayClipByName(const class FName& SequenceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayClipByName");
		
		AAnnouncer_BP_C_PlayClipByName_Params params {};
		params.SequenceName = SequenceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.SetBallTexture
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::SetBallTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.SetBallTexture");
		
		AAnnouncer_BP_C_SetBallTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.SetWhiteTexture
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::SetWhiteTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.SetWhiteTexture");
		
		AAnnouncer_BP_C_SetWhiteTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayPowerSFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::PlayPowerSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayPowerSFX");
		
		AAnnouncer_BP_C_PlayPowerSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Initialize");
		
		AAnnouncer_BP_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.UserConstructionScript");
		
		AAnnouncer_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.TimelineTransitionAlpha__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAnnouncer_BP_C::TimelineTransitionAlpha__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.TimelineTransitionAlpha__FinishedFunc");
		
		AAnnouncer_BP_C_TimelineTransitionAlpha__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.TimelineTransitionAlpha__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAnnouncer_BP_C::TimelineTransitionAlpha__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.TimelineTransitionAlpha__UpdateFunc");
		
		AAnnouncer_BP_C_TimelineTransitionAlpha__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.Timeline_VideoScreenAlpha__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAnnouncer_BP_C::Timeline_VideoScreenAlpha__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Timeline_VideoScreenAlpha__FinishedFunc");
		
		AAnnouncer_BP_C_Timeline_VideoScreenAlpha__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.Timeline_VideoScreenAlpha__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAnnouncer_BP_C::Timeline_VideoScreenAlpha__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Timeline_VideoScreenAlpha__UpdateFunc");
		
		AAnnouncer_BP_C_Timeline_VideoScreenAlpha__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.Timeline_HideStatic__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAnnouncer_BP_C::Timeline_HideStatic__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Timeline_HideStatic__FinishedFunc");
		
		AAnnouncer_BP_C_Timeline_HideStatic__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.Timeline_HideStatic__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAnnouncer_BP_C::Timeline_HideStatic__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Timeline_HideStatic__UpdateFunc");
		
		AAnnouncer_BP_C_Timeline_HideStatic__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.OnLoaded_D67B74AB48904632A4741F97D7912F77
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::OnLoaded_D67B74AB48904632A4741F97D7912F77(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.OnLoaded_D67B74AB48904632A4741F97D7912F77");
		
		AAnnouncer_BP_C_OnLoaded_D67B74AB48904632A4741F97D7912F77_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.OnLoaded_5DBB37404B05E0EF74B86F8B66722E10
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::OnLoaded_5DBB37404B05E0EF74B86F8B66722E10(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.OnLoaded_5DBB37404B05E0EF74B86F8B66722E10");
		
		AAnnouncer_BP_C_OnLoaded_5DBB37404B05E0EF74B86F8B66722E10_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.MoveForwardComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::MoveForwardComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.MoveForwardComplete");
		
		AAnnouncer_BP_C_MoveForwardComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.ExitSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InHub                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAnnouncer_BP_C::ExitSequence(bool InHub)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ExitSequence");
		
		AAnnouncer_BP_C_ExitSequence_Params params {};
		params.InHub = InHub;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PairedSequenceLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::PairedSequenceLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PairedSequenceLoop");
		
		AAnnouncer_BP_C_PairedSequenceLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.GestureLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::GestureLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.GestureLoop");
		
		AAnnouncer_BP_C_GestureLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.AudioLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::AudioLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.AudioLoop");
		
		AAnnouncer_BP_C_AudioLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.GestureTimerComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::GestureTimerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.GestureTimerComplete");
		
		AAnnouncer_BP_C_GestureTimerComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PairedSequenceTimerComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::PairedSequenceTimerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PairedSequenceTimerComplete");
		
		AAnnouncer_BP_C_PairedSequenceTimerComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.GestureInSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::GestureInSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.GestureInSequenceComplete");
		
		AAnnouncer_BP_C_GestureInSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.AudioSequenceTimerComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::AudioSequenceTimerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.AudioSequenceTimerComplete");
		
		AAnnouncer_BP_C_AudioSequenceTimerComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.ClipInSequenceComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::ClipInSequenceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ClipInSequenceComplete");
		
		AAnnouncer_BP_C_ClipInSequenceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.SecretEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::SecretEffect(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.SecretEffect");
		
		AAnnouncer_BP_C_SecretEffect_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.HubExit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::HubExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.HubExit");
		
		AAnnouncer_BP_C_HubExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.HideMesh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::HideMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.HideMesh");
		
		AAnnouncer_BP_C_HideMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ReceiveBeginPlay");
		
		AAnnouncer_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.HideEyes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::HideEyes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.HideEyes");
		
		AAnnouncer_BP_C_HideEyes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.ShowEyes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::ShowEyes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ShowEyes");
		
		AAnnouncer_BP_C_ShowEyes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayVideo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Loop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DurationOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::PlayVideo(class UMediaSource* MediaSource, bool Loop, float DurationOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayVideo");
		
		AAnnouncer_BP_C_PlayVideo_Params params {};
		params.MediaSource = MediaSource;
		params.Loop = Loop;
		params.DurationOverride = DurationOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.ShowFace
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::ShowFace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ShowFace");
		
		AAnnouncer_BP_C_ShowFace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.HideFace
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::HideFace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.HideFace");
		
		AAnnouncer_BP_C_HideFace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.FirstVideoSequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Loop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DurationOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::FirstVideoSequence(class UMediaSource* MediaSource, bool Loop, float DurationOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.FirstVideoSequence");
		
		AAnnouncer_BP_C_FirstVideoSequence_Params params {};
		params.MediaSource = MediaSource;
		params.Loop = Loop;
		params.DurationOverride = DurationOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayVideoSequence
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMediaSource*>                        MediaSources                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      DurationOverrides                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AAnnouncer_BP_C::PlayVideoSequence(TArray<class UMediaSource*> MediaSources, TArray<float> DurationOverrides)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayVideoSequence");
		
		AAnnouncer_BP_C_PlayVideoSequence_Params params {};
		params.MediaSources = MediaSources;
		params.DurationOverrides = DurationOverrides;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.SequenceLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::SequenceLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.SequenceLoop");
		
		AAnnouncer_BP_C_SequenceLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.FadeOutStatic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::FadeOutStatic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.FadeOutStatic");
		
		AAnnouncer_BP_C_FadeOutStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.BlobShow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::BlobShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.BlobShow");
		
		AAnnouncer_BP_C_BlobShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.BlobHide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::BlobHide(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.BlobHide");
		
		AAnnouncer_BP_C_BlobHide_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EnvelopeValue                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature(class USoundWave* PlayingSoundWave, float EnvelopeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature");
		
		AAnnouncer_BP_C_BndEvt__AudioCurveSource_K2Node_ComponentBoundEvent_2_OnAudioSingleEnvelopeValue__DelegateSignature_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.EnvelopeValue = EnvelopeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.ChangeExpression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAnnouncerExpression                               NewExpression                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::ChangeExpression(EAnnouncerExpression NewExpression)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ChangeExpression");
		
		AAnnouncer_BP_C_ChangeExpression_Params params {};
		params.NewExpression = NewExpression;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayAudioWithExpression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAnnouncerSequence                          AnnouncerSequence                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::PlayAudioWithExpression(const struct FAnnouncerSequence& AnnouncerSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayAudioWithExpression");
		
		AAnnouncer_BP_C_PlayAudioWithExpression_Params params {};
		params.AnnouncerSequence = AnnouncerSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.StartExpressionLoop
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FDelayedExpression>                  ExpressionSequence                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AAnnouncer_BP_C::StartExpressionLoop(TArray<struct FDelayedExpression> ExpressionSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.StartExpressionLoop");
		
		AAnnouncer_BP_C_StartExpressionLoop_Params params {};
		params.ExpressionSequence = ExpressionSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayAudio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::PlayAudio(class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayAudio");
		
		AAnnouncer_BP_C_PlayAudio_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.VoiceFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::VoiceFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.VoiceFinished");
		
		AAnnouncer_BP_C_VoiceFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.DoExpressionSwap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::DoExpressionSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.DoExpressionSwap");
		
		AAnnouncer_BP_C_DoExpressionSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayClipSequence
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FAnnouncerSequence>                  ClipSequence                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AAnnouncer_BP_C::PlayClipSequence(TArray<struct FAnnouncerSequence> ClipSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayClipSequence");
		
		AAnnouncer_BP_C_PlayClipSequence_Params params {};
		params.ClipSequence = ClipSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.BlinkLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::BlinkLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.BlinkLoop");
		
		AAnnouncer_BP_C_BlinkLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAnnouncer_BP_C::BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature");
		
		AAnnouncer_BP_C_BndEvt__AudioVoice_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.Relay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::Relay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.Relay");
		
		AAnnouncer_BP_C_Relay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.RemoveAnnouncer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::RemoveAnnouncer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.RemoveAnnouncer");
		
		AAnnouncer_BP_C_RemoveAnnouncer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.FadeInStatic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::FadeInStatic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.FadeInStatic");
		
		AAnnouncer_BP_C_FadeInStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.UpdateAttachments
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAnnouncerAttachments                              Attachement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::UpdateAttachments(EAnnouncerAttachments Attachement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.UpdateAttachments");
		
		AAnnouncer_BP_C_UpdateAttachments_Params params {};
		params.Attachement = Attachement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.EntryComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::EntryComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.EntryComplete");
		
		AAnnouncer_BP_C_EntryComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.DoNothin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::DoNothin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.DoNothin");
		
		AAnnouncer_BP_C_DoNothin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.LevelChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewPrimaryLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::LevelChanged(const class FName& NewPrimaryLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.LevelChanged");
		
		AAnnouncer_BP_C_LevelChanged_Params params {};
		params.NewPrimaryLevel = NewPrimaryLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.GeoLevelChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewGeoLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::GeoLevelChanged(const class FName& NewGeoLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.GeoLevelChanged");
		
		AAnnouncer_BP_C_GeoLevelChanged_Params params {};
		params.NewGeoLevel = NewGeoLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayBallDropSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::PlayBallDropSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayBallDropSound");
		
		AAnnouncer_BP_C_PlayBallDropSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayArmsArticulateSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::PlayArmsArticulateSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayArmsArticulateSound");
		
		AAnnouncer_BP_C_PlayArmsArticulateSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayExitSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::PlayExitSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayExitSound");
		
		AAnnouncer_BP_C_PlayExitSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.TransformLogoToIdle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::TransformLogoToIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.TransformLogoToIdle");
		
		AAnnouncer_BP_C_TransformLogoToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PlayAudioAsync
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::PlayAudioAsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PlayAudioAsync");
		
		AAnnouncer_BP_C_PlayAudioAsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.ExecuteUbergraph_Announcer_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAnnouncer_BP_C::ExecuteUbergraph_Announcer_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ExecuteUbergraph_Announcer_BP");
		
		AAnnouncer_BP_C_ExecuteUbergraph_Announcer_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.ExitSequenceComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::ExitSequenceComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.ExitSequenceComplete__DelegateSignature");
		
		AAnnouncer_BP_C_ExitSequenceComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.PairedSequencesComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::PairedSequencesComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.PairedSequencesComplete__DelegateSignature");
		
		AAnnouncer_BP_C_PairedSequencesComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.TransformFromLogoComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::TransformFromLogoComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.TransformFromLogoComplete__DelegateSignature");
		
		AAnnouncer_BP_C_TransformFromLogoComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.VoiceClipSequenceComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::VoiceClipSequenceComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.VoiceClipSequenceComplete__DelegateSignature");
		
		AAnnouncer_BP_C_VoiceClipSequenceComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.EyeHideComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::EyeHideComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.EyeHideComplete__DelegateSignature");
		
		AAnnouncer_BP_C_EyeHideComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Announcer_BP.Announcer_BP_C.VoiceClipComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncer_BP_C::VoiceClipComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Announcer_BP.Announcer_BP_C.VoiceClipComplete__DelegateSignature");
		
		AAnnouncer_BP_C_VoiceClipComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAnnouncer_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAnnouncer_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Announcer_BP.Announcer_BP_C");
		return ptr;
	}

}


