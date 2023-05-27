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
	 * 		Name   -> Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.AddActorToGameElementList
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_Minigame_HumanVsAI_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.AddActorToGameElementList");
		
		ABW_Minigame_HumanVsAI_C_AddActorToGameElementList_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.Shutdown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutdownBegun                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_Minigame_HumanVsAI_C::Shutdown(bool* ShutdownBegun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.Shutdown");
		
		ABW_Minigame_HumanVsAI_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShutdownBegun != nullptr)
			*ShutdownBegun = params.ShutdownBegun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.SpawnGameElements
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Minigame_HumanVsAI_C::SpawnGameElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.SpawnGameElements");
		
		ABW_Minigame_HumanVsAI_C_SpawnGameElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Minigame_HumanVsAI_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.Initialize");
		
		ABW_Minigame_HumanVsAI_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Minigame_HumanVsAI_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.UserConstructionScript");
		
		ABW_Minigame_HumanVsAI_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_Minigame_HumanVsAI_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.ReceiveBeginPlay");
		
		ABW_Minigame_HumanVsAI_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.DelayDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Minigame_HumanVsAI_C::DelayDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.DelayDestroy");
		
		ABW_Minigame_HumanVsAI_C_DelayDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.GameOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Minigame_HumanVsAI_C::GameOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.GameOver");
		
		ABW_Minigame_HumanVsAI_C_GameOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.ExecuteUbergraph_BW_Minigame_HumanVsAI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Minigame_HumanVsAI_C::ExecuteUbergraph_BW_Minigame_HumanVsAI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C.ExecuteUbergraph_BW_Minigame_HumanVsAI");
		
		ABW_Minigame_HumanVsAI_C_ExecuteUbergraph_BW_Minigame_HumanVsAI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_Minigame_HumanVsAI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_Minigame_HumanVsAI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_Minigame_HumanVsAI.BW_Minigame_HumanVsAI_C");
		return ptr;
	}

}


