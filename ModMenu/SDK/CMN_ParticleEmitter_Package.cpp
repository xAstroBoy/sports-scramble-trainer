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
	 * 		Name   -> Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACMN_ParticleEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.UserConstructionScript");
		
		ACMN_ParticleEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACMN_ParticleEmitter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ReceiveBeginPlay");
		
		ACMN_ParticleEmitter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.OnSystemFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    PSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACMN_ParticleEmitter_C::OnSystemFinished(class UParticleSystemComponent* PSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.OnSystemFinished");
		
		ACMN_ParticleEmitter_C_OnSystemFinished_Params params {};
		params.PSystem = PSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Activate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACMN_ParticleEmitter_C::Activate(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Activate");
		
		ACMN_ParticleEmitter_C_Activate_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Set Color Parameter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACMN_ParticleEmitter_C::SetColorParameter(const class FName& Name, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Set Color Parameter");
		
		ACMN_ParticleEmitter_C_SetColorParameter_Params params {};
		params.Name = Name;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ExecuteUbergraph_CMN_ParticleEmitter
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACMN_ParticleEmitter_C::ExecuteUbergraph_CMN_ParticleEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ExecuteUbergraph_CMN_ParticleEmitter");
		
		ACMN_ParticleEmitter_C_ExecuteUbergraph_CMN_ParticleEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACMN_ParticleEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACMN_ParticleEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CMN_ParticleEmitter.CMN_ParticleEmitter_C");
		return ptr;
	}

}


