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
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnRep_Material
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIRunner_Blueprint_C::OnRep_Material()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnRep_Material");
		
		ABaseballAIRunner_Blueprint_C_OnRep_Material_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ApplyMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIRunner_Blueprint_C::ApplyMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ApplyMaterial");
		
		ABaseballAIRunner_Blueprint_C_ApplyMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.SetMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstance*                           NewMaterial                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAIRunner_Blueprint_C::SetMaterial(class UMaterialInstance* NewMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.SetMaterial");
		
		ABaseballAIRunner_Blueprint_C_SetMaterial_Params params {};
		params.NewMaterial = NewMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIRunner_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.UserConstructionScript");
		
		ABaseballAIRunner_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleUp__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAIRunner_Blueprint_C::Timeline_ScaleUp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleUp__FinishedFunc");
		
		ABaseballAIRunner_Blueprint_C_Timeline_ScaleUp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleUp__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAIRunner_Blueprint_C::Timeline_ScaleUp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleUp__UpdateFunc");
		
		ABaseballAIRunner_Blueprint_C_Timeline_ScaleUp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleDown__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAIRunner_Blueprint_C::Timeline_ScaleDown__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleDown__FinishedFunc");
		
		ABaseballAIRunner_Blueprint_C_Timeline_ScaleDown__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleDown__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAIRunner_Blueprint_C::Timeline_ScaleDown__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleDown__UpdateFunc");
		
		ABaseballAIRunner_Blueprint_C_Timeline_ScaleDown__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballAIRunner_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ReceiveBeginPlay");
		
		ABaseballAIRunner_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnSpawn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballAIRunner_Blueprint_C::OnSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnSpawn");
		
		ABaseballAIRunner_Blueprint_C_OnSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnDespawn
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAIRunner_Blueprint_C::OnDespawn(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnDespawn");
		
		ABaseballAIRunner_Blueprint_C_OnDespawn_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Public Despawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIRunner_Blueprint_C::PublicDespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Public Despawn");
		
		ABaseballAIRunner_Blueprint_C_PublicDespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ExecuteUbergraph_BaseballAIRunner_Blueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAIRunner_Blueprint_C::ExecuteUbergraph_BaseballAIRunner_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ExecuteUbergraph_BaseballAIRunner_Blueprint");
		
		ABaseballAIRunner_Blueprint_C_ExecuteUbergraph_BaseballAIRunner_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballAIRunner_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballAIRunner_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C");
		return ptr;
	}

}


