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
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.PlayHaptic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrophyUIPassthrough_C::PlayHaptic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.PlayHaptic");
		
		ATrophyUIPassthrough_C_PlayHaptic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AButton_Standard_C*                          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrophyUIPassthrough_C::Initialize(class AButton_Standard_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.Initialize");
		
		ATrophyUIPassthrough_C_Initialize_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.TriggerPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_TrophyGlove_C*                           TrophyGlove                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrophyUIPassthrough_C::TriggerPressed(class ABP_TrophyGlove_C* TrophyGlove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.TriggerPressed");
		
		ATrophyUIPassthrough_C_TriggerPressed_Params params {};
		params.TrophyGlove = TrophyGlove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrophyUIPassthrough_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.UserConstructionScript");
		
		ATrophyUIPassthrough_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATrophyUIPassthrough_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.ReceiveBeginPlay");
		
		ATrophyUIPassthrough_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnStopPointingAt
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrophyUIPassthrough_C::OnStopPointingAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnStopPointingAt");
		
		ATrophyUIPassthrough_C_OnStopPointingAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnStartPointingAt
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrophyUIPassthrough_C::OnStartPointingAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnStartPointingAt");
		
		ATrophyUIPassthrough_C_OnStartPointingAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnTrophyGrabbed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrophyUIPassthrough_C::OnTrophyGrabbed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnTrophyGrabbed");
		
		ATrophyUIPassthrough_C_OnTrophyGrabbed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnGrabbableActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATrophyUIPassthrough_C::OnGrabbableActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.OnGrabbableActivated");
		
		ATrophyUIPassthrough_C_OnGrabbableActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrophyUIPassthrough_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.ReceiveTick");
		
		ATrophyUIPassthrough_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyUIPassthrough.TrophyUIPassthrough_C.ExecuteUbergraph_TrophyUIPassthrough
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrophyUIPassthrough_C::ExecuteUbergraph_TrophyUIPassthrough(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyUIPassthrough.TrophyUIPassthrough_C.ExecuteUbergraph_TrophyUIPassthrough");
		
		ATrophyUIPassthrough_C_ExecuteUbergraph_TrophyUIPassthrough_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrophyUIPassthrough_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrophyUIPassthrough_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrophyUIPassthrough.TrophyUIPassthrough_C");
		return ptr;
	}

}


