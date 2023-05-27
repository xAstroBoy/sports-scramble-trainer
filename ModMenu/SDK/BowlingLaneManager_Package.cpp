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
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.GetActiveLaneFromLaneManager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingLane_Base_C*                         ActiveLane                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingLaneManager_C::GetActiveLaneFromLaneManager(class ABowlingLane_Base_C** ActiveLane)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.GetActiveLaneFromLaneManager");
		
		ABowlingLaneManager_C_GetActiveLaneFromLaneManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveLane != nullptr)
			*ActiveLane = params.ActiveLane;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingLaneManager_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.Cleanup");
		
		ABowlingLaneManager_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingLaneManager_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.Initialize");
		
		ABowlingLaneManager_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingLaneManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.UserConstructionScript");
		
		ABowlingLaneManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.Timeline_Rotate__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABowlingLaneManager_C::Timeline_Rotate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.Timeline_Rotate__FinishedFunc");
		
		ABowlingLaneManager_C_Timeline_Rotate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.Timeline_Rotate__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABowlingLaneManager_C::Timeline_Rotate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.Timeline_Rotate__UpdateFunc");
		
		ABowlingLaneManager_C_Timeline_Rotate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.OnLoaded_A340E5A5483A21462088559EC818FD3F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingLaneManager_C::OnLoaded_A340E5A5483A21462088559EC818FD3F(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.OnLoaded_A340E5A5483A21462088559EC818FD3F");
		
		ABowlingLaneManager_C_OnLoaded_A340E5A5483A21462088559EC818FD3F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.OnLoaded_E6FCE9674C6651125FB54A88D97CC36B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingLaneManager_C::OnLoaded_E6FCE9674C6651125FB54A88D97CC36B(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.OnLoaded_E6FCE9674C6651125FB54A88D97CC36B");
		
		ABowlingLaneManager_C_OnLoaded_E6FCE9674C6651125FB54A88D97CC36B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABowlingLaneManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.ReceiveBeginPlay");
		
		ABowlingLaneManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.LaneManagerNewLane
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingLaneManager_C::LaneManagerNewLane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.LaneManagerNewLane");
		
		ABowlingLaneManager_C_LaneManagerNewLane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingLaneManager_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.ReceiveEndPlay");
		
		ABowlingLaneManager_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.SpawnNewLane
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingLaneManager_C::SpawnNewLane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.SpawnNewLane");
		
		ABowlingLaneManager_C_SpawnNewLane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.LaneSetupComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingLaneManager_C::LaneSetupComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.LaneSetupComplete");
		
		ABowlingLaneManager_C_LaneSetupComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.RotateLanes
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundBase*                                  AnnouncerVO                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingLaneManager_C::RotateLanes(class USoundBase* AnnouncerVO)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.RotateLanes");
		
		ABowlingLaneManager_C_RotateLanes_Params params {};
		params.AnnouncerVO = AnnouncerVO;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.ExecuteUbergraph_BowlingLaneManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingLaneManager_C::ExecuteUbergraph_BowlingLaneManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.ExecuteUbergraph_BowlingLaneManager");
		
		ABowlingLaneManager_C_ExecuteUbergraph_BowlingLaneManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.LaneManagerReplacingLane__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingLane_Base_C*                         ReplacementLane                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABowlingLane_Base_C*                         OutgoingLane                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingLaneManager_C::LaneManagerReplacingLane__DelegateSignature(class ABowlingLane_Base_C* ReplacementLane, class ABowlingLane_Base_C* OutgoingLane)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.LaneManagerReplacingLane__DelegateSignature");
		
		ABowlingLaneManager_C_LaneManagerReplacingLane__DelegateSignature_Params params {};
		params.ReplacementLane = ReplacementLane;
		params.OutgoingLane = OutgoingLane;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingLaneManager.BowlingLaneManager_C.LaneSwapComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingLaneManager_C::LaneSwapComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingLaneManager.BowlingLaneManager_C.LaneSwapComplete__DelegateSignature");
		
		ABowlingLaneManager_C_LaneSwapComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingLaneManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingLaneManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BowlingLaneManager.BowlingLaneManager_C");
		return ptr;
	}

}


