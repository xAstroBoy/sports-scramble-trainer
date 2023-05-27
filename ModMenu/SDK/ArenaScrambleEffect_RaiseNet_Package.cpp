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
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ArenaScrambleEnd
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AArenaScrambleEffect_RaiseNet_C::ArenaScrambleEnd(bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ArenaScrambleEnd");
		
		AArenaScrambleEffect_RaiseNet_C_ArenaScrambleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AArenaScrambleEffect_RaiseNet_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.UserConstructionScript");
		
		AArenaScrambleEffect_RaiseNet_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.Timeline_RaiseNet__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AArenaScrambleEffect_RaiseNet_C::Timeline_RaiseNet__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.Timeline_RaiseNet__FinishedFunc");
		
		AArenaScrambleEffect_RaiseNet_C_Timeline_RaiseNet__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.Timeline_RaiseNet__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AArenaScrambleEffect_RaiseNet_C::Timeline_RaiseNet__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.Timeline_RaiseNet__UpdateFunc");
		
		AArenaScrambleEffect_RaiseNet_C_Timeline_RaiseNet__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AArenaScrambleEffect_RaiseNet_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ReceiveBeginPlay");
		
		AArenaScrambleEffect_RaiseNet_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.StartArenaScramble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AArenaScrambleEffect_RaiseNet_C::StartArenaScramble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.StartArenaScramble");
		
		AArenaScrambleEffect_RaiseNet_C_StartArenaScramble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.EndArenaScramble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AArenaScrambleEffect_RaiseNet_C::EndArenaScramble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.EndArenaScramble");
		
		AArenaScrambleEffect_RaiseNet_C_EndArenaScramble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.RaiseNet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AArenaScrambleEffect_RaiseNet_C::RaiseNet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.RaiseNet");
		
		AArenaScrambleEffect_RaiseNet_C_RaiseNet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ResetNetHeight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AArenaScrambleEffect_RaiseNet_C::ResetNetHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ResetNetHeight");
		
		AArenaScrambleEffect_RaiseNet_C_ResetNetHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AArenaScrambleEffect_RaiseNet_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ReceiveEndPlay");
		
		AArenaScrambleEffect_RaiseNet_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ExecuteUbergraph_ArenaScrambleEffect_RaiseNet
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AArenaScrambleEffect_RaiseNet_C::ExecuteUbergraph_ArenaScrambleEffect_RaiseNet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C.ExecuteUbergraph_ArenaScrambleEffect_RaiseNet");
		
		AArenaScrambleEffect_RaiseNet_C_ExecuteUbergraph_ArenaScrambleEffect_RaiseNet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AArenaScrambleEffect_RaiseNet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArenaScrambleEffect_RaiseNet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArenaScrambleEffect_RaiseNet.ArenaScrambleEffect_RaiseNet_C");
		return ptr;
	}

}


