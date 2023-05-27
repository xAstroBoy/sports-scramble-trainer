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
	 * 		Name   -> Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADoubleCross_ParticleTrigger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.UserConstructionScript");
		
		ADoubleCross_ParticleTrigger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoubleCross_ParticleTrigger_C::OnTriggered(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.OnTriggered");
		
		ADoubleCross_ParticleTrigger_C_OnTriggered_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.ExecuteUbergraph_DoubleCross_ParticleTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoubleCross_ParticleTrigger_C::ExecuteUbergraph_DoubleCross_ParticleTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C.ExecuteUbergraph_DoubleCross_ParticleTrigger");
		
		ADoubleCross_ParticleTrigger_C_ExecuteUbergraph_DoubleCross_ParticleTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoubleCross_ParticleTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoubleCross_ParticleTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoubleCross_ParticleTrigger.DoubleCross_ParticleTrigger_C");
		return ptr;
	}

}


