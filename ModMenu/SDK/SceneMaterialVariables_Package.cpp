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
	 * 		Name   -> Function SceneMaterialVariables.SceneMaterialVariables_C.SetSceneVariablesMaster
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASceneMaterialVariables_C::SetSceneVariablesMaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SceneMaterialVariables.SceneMaterialVariables_C.SetSceneVariablesMaster");
		
		ASceneMaterialVariables_C_SetSceneVariablesMaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SceneMaterialVariables.SceneMaterialVariables_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASceneMaterialVariables_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SceneMaterialVariables.SceneMaterialVariables_C.UserConstructionScript");
		
		ASceneMaterialVariables_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SceneMaterialVariables.SceneMaterialVariables_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASceneMaterialVariables_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SceneMaterialVariables.SceneMaterialVariables_C.ReceiveBeginPlay");
		
		ASceneMaterialVariables_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SceneMaterialVariables.SceneMaterialVariables_C.ExecuteUbergraph_SceneMaterialVariables
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASceneMaterialVariables_C::ExecuteUbergraph_SceneMaterialVariables(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SceneMaterialVariables.SceneMaterialVariables_C.ExecuteUbergraph_SceneMaterialVariables");
		
		ASceneMaterialVariables_C_ExecuteUbergraph_SceneMaterialVariables_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASceneMaterialVariables_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASceneMaterialVariables_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SceneMaterialVariables.SceneMaterialVariables_C");
		return ptr;
	}

}


