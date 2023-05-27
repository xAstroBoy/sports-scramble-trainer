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
	 * 		Name   -> Function TrophyProp_Base.TrophyProp_Base_C.SetWidgetVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrophyProp_Base_C::SetWidgetVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.SetWidgetVisibility");
		
		ATrophyProp_Base_C_SetWidgetVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyProp_Base.TrophyProp_Base_C.InitializeColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrophyProp_Base_C::InitializeColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.InitializeColors");
		
		ATrophyProp_Base_C_InitializeColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyProp_Base.TrophyProp_Base_C.InitializeMaterialArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrophyProp_Base_C::InitializeMaterialArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.InitializeMaterialArray");
		
		ATrophyProp_Base_C_InitializeMaterialArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyProp_Base.TrophyProp_Base_C.ChangeMaterials
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrophyProp_Base_C::ChangeMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.ChangeMaterials");
		
		ATrophyProp_Base_C_ChangeMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyProp_Base.TrophyProp_Base_C.SetInstanceVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATrophyProp_Base_C::SetInstanceVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.SetInstanceVisibility");
		
		ATrophyProp_Base_C_SetInstanceVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyProp_Base.TrophyProp_Base_C.SetupCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrophyProp_Base_C::SetupCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.SetupCollision");
		
		ATrophyProp_Base_C_SetupCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyProp_Base.TrophyProp_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATrophyProp_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.UserConstructionScript");
		
		ATrophyProp_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyProp_Base.TrophyProp_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATrophyProp_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.ReceiveBeginPlay");
		
		ATrophyProp_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TrophyProp_Base.TrophyProp_Base_C.ExecuteUbergraph_TrophyProp_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrophyProp_Base_C::ExecuteUbergraph_TrophyProp_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.ExecuteUbergraph_TrophyProp_Base");
		
		ATrophyProp_Base_C_ExecuteUbergraph_TrophyProp_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrophyProp_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrophyProp_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrophyProp_Base.TrophyProp_Base_C");
		return ptr;
	}

}


