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
	 * 		Name   -> Function Button_Standard.Button_Standard_C.IsPauseCapsuleInTransition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AButton_Standard_C::IsPauseCapsuleInTransition(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.IsPauseCapsuleInTransition");
		
		AButton_Standard_C_IsPauseCapsuleInTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ReleaseTouchExclusive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::ReleaseTouchExclusive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ReleaseTouchExclusive");
		
		AButton_Standard_C_ReleaseTouchExclusive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.CheckMultitouch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DisallowTouch                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AButton_Standard_C::CheckMultitouch(bool* DisallowTouch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.CheckMultitouch");
		
		AButton_Standard_C_CheckMultitouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisallowTouch != nullptr)
			*DisallowTouch = params.DisallowTouch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.RotateHex
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::RotateHex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.RotateHex");
		
		AButton_Standard_C_RotateHex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.PlayHaptics
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayerHand_BP_C*                       Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HapticsScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::PlayHaptics(class AScramPlayerHand_BP_C* Target, float HapticsScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.PlayHaptics");
		
		AButton_Standard_C_PlayHaptics_Params params {};
		params.Target = Target;
		params.HapticsScale = HapticsScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.DisplayNoninteractable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::DisplayNoninteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.DisplayNoninteractable");
		
		AButton_Standard_C_DisplayNoninteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.DisplayInteractable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::DisplayInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.DisplayInteractable");
		
		AButton_Standard_C_DisplayInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.InstantToggle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::InstantToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.InstantToggle");
		
		AButton_Standard_C_InstantToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.SetButtonStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DisableTouch                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AButton_Standard_C::SetButtonStatus(bool DisableTouch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.SetButtonStatus");
		
		AButton_Standard_C_SetButtonStatus_Params params {};
		params.DisableTouch = DisableTouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ChangeLook
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUI_ButtonData                              ButtonData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::ChangeLook(const struct FUI_ButtonData& ButtonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ChangeLook");
		
		AButton_Standard_C_ChangeLook_Params params {};
		params.ButtonData = ButtonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Initialize");
		
		AButton_Standard_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.UserConstructionScript");
		
		AButton_Standard_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_Scale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_Scale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_Scale__FinishedFunc");
		
		AButton_Standard_C_Timeline_Scale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_Scale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_Scale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_Scale__UpdateFunc");
		
		AButton_Standard_C_Timeline_Scale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_ButtonMove__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_ButtonMove__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_ButtonMove__FinishedFunc");
		
		AButton_Standard_C_Timeline_ButtonMove__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_ButtonMove__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_ButtonMove__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_ButtonMove__UpdateFunc");
		
		AButton_Standard_C_Timeline_ButtonMove__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_Rotate__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_Rotate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_Rotate__FinishedFunc");
		
		AButton_Standard_C_Timeline_Rotate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_Rotate__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_Rotate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_Rotate__UpdateFunc");
		
		AButton_Standard_C_Timeline_Rotate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_Fill__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_Fill__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_Fill__FinishedFunc");
		
		AButton_Standard_C_Timeline_Fill__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_Fill__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_Fill__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_Fill__UpdateFunc");
		
		AButton_Standard_C_Timeline_Fill__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_SpinScale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_SpinScale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_SpinScale__FinishedFunc");
		
		AButton_Standard_C_Timeline_SpinScale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_SpinScale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_SpinScale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_SpinScale__UpdateFunc");
		
		AButton_Standard_C_Timeline_SpinScale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_Unlock__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_Unlock__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_Unlock__FinishedFunc");
		
		AButton_Standard_C_Timeline_Unlock__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_Unlock__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_Unlock__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_Unlock__UpdateFunc");
		
		AButton_Standard_C_Timeline_Unlock__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_BackgroundThrob__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_BackgroundThrob__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_BackgroundThrob__FinishedFunc");
		
		AButton_Standard_C_Timeline_BackgroundThrob__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Timeline_BackgroundThrob__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AButton_Standard_C::Timeline_BackgroundThrob__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Timeline_BackgroundThrob__UpdateFunc");
		
		AButton_Standard_C_Timeline_BackgroundThrob__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AButton_Standard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ReceiveBeginPlay");
		
		AButton_Standard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AButton_Standard_C::BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AButton_Standard_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");
		
		AButton_Standard_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ReceiveTick");
		
		AButton_Standard_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.FillStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::FillStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.FillStart");
		
		AButton_Standard_C_FillStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.FillStop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::FillStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.FillStop");
		
		AButton_Standard_C_FillStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ScaleUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::ScaleUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ScaleUp");
		
		AButton_Standard_C_ScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ScaleDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::ScaleDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ScaleDown");
		
		AButton_Standard_C_ScaleDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.PushButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::PushButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.PushButton");
		
		AButton_Standard_C_PushButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ReleaseButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::ReleaseButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ReleaseButton");
		
		AButton_Standard_C_ReleaseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.StartSwap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CallEvents                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AButton_Standard_C::StartSwap(bool CallEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.StartSwap");
		
		AButton_Standard_C_StartSwap_Params params {};
		params.CallEvents = CallEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.StartRotate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::StartRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.StartRotate");
		
		AButton_Standard_C_StartRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.DestroyButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::DestroyButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.DestroyButton");
		
		AButton_Standard_C_DestroyButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.SpinScaleUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::SpinScaleUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.SpinScaleUp");
		
		AButton_Standard_C_SpinScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.SpinScaleDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::SpinScaleDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.SpinScaleDown");
		
		AButton_Standard_C_SpinScaleDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.PlayUnlock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::PlayUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.PlayUnlock");
		
		AButton_Standard_C_PlayUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.PlayUnlockScal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::PlayUnlockScal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.PlayUnlockScal");
		
		AButton_Standard_C_PlayUnlockScal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.StartThrob
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::StartThrob()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.StartThrob");
		
		AButton_Standard_C_StartThrob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.StopThrob
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::StopThrob()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.StopThrob");
		
		AButton_Standard_C_StopThrob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ReceiveEndPlay");
		
		AButton_Standard_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ExternalActivateButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HandActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::ExternalActivateButton(class AActor* HandActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ExternalActivateButton");
		
		AButton_Standard_C_ExternalActivateButton_Params params {};
		params.HandActor = HandActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ExternalDeactivateButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HandActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::ExternalDeactivateButton(class AActor* HandActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ExternalDeactivateButton");
		
		AButton_Standard_C_ExternalDeactivateButton_Params params {};
		params.HandActor = HandActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      pInteractor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature(class AActor* pInteractor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature");
		
		AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_1_InteractableSignature__DelegateSignature_Params params {};
		params.pInteractor = pInteractor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      pInteractor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature(class AActor* pInteractor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature");
		
		AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_2_InteractableSignature__DelegateSignature_Params params {};
		params.pInteractor = pInteractor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      pInteractor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature(class AActor* pInteractor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature");
		
		AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_3_InteractableSignature__DelegateSignature_Params params {};
		params.pInteractor = pInteractor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      pInteractor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature(class AActor* pInteractor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature");
		
		AButton_Standard_C_BndEvt__ScramBoxInteractable_K2Node_ComponentBoundEvent_4_InteractableSignature__DelegateSignature_Params params {};
		params.pInteractor = pInteractor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.DoHaptic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::DoHaptic(class AActor* Hand, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.DoHaptic");
		
		AButton_Standard_C_DoHaptic_Params params {};
		params.Hand = Hand;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.SendStartPointingAtMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::SendStartPointingAtMessage(class AActor* interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.SendStartPointingAtMessage");
		
		AButton_Standard_C_SendStartPointingAtMessage_Params params {};
		params.interactor = interactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.TrySetHand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HandActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::TrySetHand(class AActor* HandActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.TrySetHand");
		
		AButton_Standard_C_TrySetHand_Params params {};
		params.HandActor = HandActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ExecuteUbergraph_Button_Standard
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::ExecuteUbergraph_Button_Standard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ExecuteUbergraph_Button_Standard");
		
		AButton_Standard_C_ExecuteUbergraph_Button_Standard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Untouched__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::Untouched__DelegateSignature(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Untouched__DelegateSignature");
		
		AButton_Standard_C_Untouched__DelegateSignature_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.Touched__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::Touched__DelegateSignature(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.Touched__DelegateSignature");
		
		AButton_Standard_C_Touched__DelegateSignature_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.SwapFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::SwapFinished__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.SwapFinished__DelegateSignature");
		
		AButton_Standard_C_SwapFinished__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ShrinkFinish__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AButton_Standard_C::ShrinkFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ShrinkFinish__DelegateSignature");
		
		AButton_Standard_C_ShrinkFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Button_Standard.Button_Standard_C.ButtonPressed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_Standard_C::ButtonPressed__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_Standard.Button_Standard_C.ButtonPressed__DelegateSignature");
		
		AButton_Standard_C_ButtonPressed__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AButton_Standard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AButton_Standard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Button_Standard.Button_Standard_C");
		return ptr;
	}

}


