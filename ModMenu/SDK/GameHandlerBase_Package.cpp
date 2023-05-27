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
	 * 		Name   -> Function GameHandlerBase.GameHandlerBase_C.PreMenuCleanup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               emptyreturn                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerBase_C::PreMenuCleanup(bool* emptyreturn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerBase.GameHandlerBase_C.PreMenuCleanup");
		
		AGameHandlerBase_C_PreMenuCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (emptyreturn != nullptr)
			*emptyreturn = params.emptyreturn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerBase.GameHandlerBase_C.QuitGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerBase_C::QuitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerBase.GameHandlerBase_C.QuitGame");
		
		AGameHandlerBase_C_QuitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerBase.GameHandlerBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerBase.GameHandlerBase_C.UserConstructionScript");
		
		AGameHandlerBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerBase.GameHandlerBase_C.TeleportThePlayArea__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TrainingLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        LevelOverride                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerBase_C::TeleportThePlayArea__DelegateSignature(EScramSport Sport, bool TrainingLevel, const class FName& LevelOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerBase.GameHandlerBase_C.TeleportThePlayArea__DelegateSignature");
		
		AGameHandlerBase_C_TeleportThePlayArea__DelegateSignature_Params params {};
		params.Sport = Sport;
		params.TrainingLevel = TrainingLevel;
		params.LevelOverride = LevelOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerBase.GameHandlerBase_C.GameOver__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerBase_C::GameOver__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerBase.GameHandlerBase_C.GameOver__DelegateSignature");
		
		AGameHandlerBase_C_GameOver__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameHandlerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameHandlerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GameHandlerBase.GameHandlerBase_C");
		return ptr;
	}

}


