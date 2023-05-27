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
	 * 		Name   -> Function Header.Header_C.SetRed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::SetRed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.SetRed");
		
		AHeader_C_SetRed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.UpdateHeaderText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AHeader_C::UpdateHeaderText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.UpdateHeaderText");
		
		AHeader_C_UpdateHeaderText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Initialize");
		
		AHeader_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.UserConstructionScript");
		
		AHeader_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Timeline_Brackets__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHeader_C::Timeline_Brackets__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_Brackets__FinishedFunc");
		
		AHeader_C_Timeline_Brackets__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Timeline_Brackets__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHeader_C::Timeline_Brackets__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_Brackets__UpdateFunc");
		
		AHeader_C_Timeline_Brackets__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Timeline_RingsGrow__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHeader_C::Timeline_RingsGrow__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingsGrow__FinishedFunc");
		
		AHeader_C_Timeline_RingsGrow__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Timeline_RingsGrow__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHeader_C::Timeline_RingsGrow__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingsGrow__UpdateFunc");
		
		AHeader_C_Timeline_RingsGrow__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Timeline_RingMoveMinor__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHeader_C::Timeline_RingMoveMinor__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingMoveMinor__FinishedFunc");
		
		AHeader_C_Timeline_RingMoveMinor__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Timeline_RingMoveMinor__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHeader_C::Timeline_RingMoveMinor__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingMoveMinor__UpdateFunc");
		
		AHeader_C_Timeline_RingMoveMinor__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Timeline_ScaleWidget__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHeader_C::Timeline_ScaleWidget__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_ScaleWidget__FinishedFunc");
		
		AHeader_C_Timeline_ScaleWidget__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Timeline_ScaleWidget__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHeader_C::Timeline_ScaleWidget__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_ScaleWidget__UpdateFunc");
		
		AHeader_C_Timeline_ScaleWidget__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Timeline_RingMoveMajor__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHeader_C::Timeline_RingMoveMajor__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingMoveMajor__FinishedFunc");
		
		AHeader_C_Timeline_RingMoveMajor__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.Timeline_RingMoveMajor__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHeader_C::Timeline_RingMoveMajor__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingMoveMajor__UpdateFunc");
		
		AHeader_C_Timeline_RingMoveMajor__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHeader_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.ReceiveBeginPlay");
		
		AHeader_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHeader_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.ReceiveTick");
		
		AHeader_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.OpenBracket
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::OpenBracket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.OpenBracket");
		
		AHeader_C_OpenBracket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.CloseBracket
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::CloseBracket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.CloseBracket");
		
		AHeader_C_CloseBracket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.DestroyHeader
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::DestroyHeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.DestroyHeader");
		
		AHeader_C_DestroyHeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.OpenRings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::OpenRings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.OpenRings");
		
		AHeader_C_OpenRings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.CloseRings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::CloseRings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.CloseRings");
		
		AHeader_C_CloseRings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.FinishOpenRings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::FinishOpenRings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.FinishOpenRings");
		
		AHeader_C_FinishOpenRings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.FinishCloseRings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::FinishCloseRings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.FinishCloseRings");
		
		AHeader_C_FinishCloseRings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.ShowWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::ShowWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.ShowWidget");
		
		AHeader_C_ShowWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.HideWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::HideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.HideWidget");
		
		AHeader_C_HideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.StartRingOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::StartRingOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.StartRingOpen");
		
		AHeader_C_StartRingOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.FinishRingClose
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::FinishRingClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.FinishRingClose");
		
		AHeader_C_FinishRingClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.PlaySFX_BracketOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::PlaySFX_BracketOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.PlaySFX_BracketOpen");
		
		AHeader_C_PlaySFX_BracketOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.PlaySFX_BracketClose
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::PlaySFX_BracketClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.PlaySFX_BracketClose");
		
		AHeader_C_PlaySFX_BracketClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.PlaySFX_RingsFinishUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::PlaySFX_RingsFinishUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.PlaySFX_RingsFinishUp");
		
		AHeader_C_PlaySFX_RingsFinishUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.PlaySFX_RingsFinishDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::PlaySFX_RingsFinishDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.PlaySFX_RingsFinishDown");
		
		AHeader_C_PlaySFX_RingsFinishDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.InstantOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::InstantOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.InstantOpen");
		
		AHeader_C_InstantOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.ExecuteUbergraph_Header
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHeader_C::ExecuteUbergraph_Header(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.ExecuteUbergraph_Header");
		
		AHeader_C_ExecuteUbergraph_Header_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.RemoveMenu__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::RemoveMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.RemoveMenu__DelegateSignature");
		
		AHeader_C_RemoveMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.SpawnInitialMenu__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::SpawnInitialMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.SpawnInitialMenu__DelegateSignature");
		
		AHeader_C_SpawnInitialMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.BracketOpen__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::BracketOpen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.BracketOpen__DelegateSignature");
		
		AHeader_C_BracketOpen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Header.Header_C.BracketClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AHeader_C::BracketClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Header.Header_C.BracketClosed__DelegateSignature");
		
		AHeader_C_BracketClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Header.Header_C");
		return ptr;
	}

}


