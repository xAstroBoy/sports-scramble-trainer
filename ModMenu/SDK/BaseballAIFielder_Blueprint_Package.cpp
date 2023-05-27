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
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_RedGlove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::OnRep_RedGlove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_RedGlove");
		
		ABaseballAIFielder_Blueprint_C_OnRep_RedGlove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_GloveMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::OnRep_GloveMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_GloveMaterial");
		
		ABaseballAIFielder_Blueprint_C_OnRep_GloveMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_FielderMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::OnRep_FielderMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_FielderMaterial");
		
		ABaseballAIFielder_Blueprint_C_OnRep_FielderMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ApplyGloveMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::ApplyGloveMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ApplyGloveMaterial");
		
		ABaseballAIFielder_Blueprint_C_ApplyGloveMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_Material
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::OnRep_Material()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_Material");
		
		ABaseballAIFielder_Blueprint_C_OnRep_Material_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ApplyMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::ApplyMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ApplyMaterial");
		
		ABaseballAIFielder_Blueprint_C_ApplyMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.SetMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstance*                           FielderMat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RedGlove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseballAIFielder_Blueprint_C::SetMaterial(class UMaterialInstance* FielderMat, bool RedGlove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.SetMaterial");
		
		ABaseballAIFielder_Blueprint_C_SetMaterial_Params params {};
		params.FielderMat = FielderMat;
		params.RedGlove = RedGlove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.UserConstructionScript");
		
		ABaseballAIFielder_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Spawn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::Timeline_Spawn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Spawn__FinishedFunc");
		
		ABaseballAIFielder_Blueprint_C_Timeline_Spawn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Spawn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::Timeline_Spawn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Spawn__UpdateFunc");
		
		ABaseballAIFielder_Blueprint_C_Timeline_Spawn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Despawn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::Timeline_Despawn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Despawn__FinishedFunc");
		
		ABaseballAIFielder_Blueprint_C_Timeline_Despawn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Despawn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::Timeline_Despawn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Despawn__UpdateFunc");
		
		ABaseballAIFielder_Blueprint_C_Timeline_Despawn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ReceiveBeginPlay");
		
		ABaseballAIFielder_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.DespawnFielder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAIFielder_Blueprint_C::DespawnFielder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.DespawnFielder");
		
		ABaseballAIFielder_Blueprint_C_DespawnFielder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ExecuteUbergraph_BaseballAIFielder_Blueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAIFielder_Blueprint_C::ExecuteUbergraph_BaseballAIFielder_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ExecuteUbergraph_BaseballAIFielder_Blueprint");
		
		ABaseballAIFielder_Blueprint_C_ExecuteUbergraph_BaseballAIFielder_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballAIFielder_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballAIFielder_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C");
		return ptr;
	}

}


