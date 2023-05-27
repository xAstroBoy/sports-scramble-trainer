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
	 * 		Name   -> Function Tball_Impact_BP.Tball_Impact_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATball_Impact_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.UserConstructionScript");
		
		ATball_Impact_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Tball_Impact_BP.Tball_Impact_BP_C.ScaleDown__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATball_Impact_BP_C::ScaleDown__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.ScaleDown__FinishedFunc");
		
		ATball_Impact_BP_C_ScaleDown__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Tball_Impact_BP.Tball_Impact_BP_C.ScaleDown__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATball_Impact_BP_C::ScaleDown__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.ScaleDown__UpdateFunc");
		
		ATball_Impact_BP_C_ScaleDown__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Tball_Impact_BP.Tball_Impact_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATball_Impact_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.ReceiveBeginPlay");
		
		ATball_Impact_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Tball_Impact_BP.Tball_Impact_BP_C.RemoveMark
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATball_Impact_BP_C::RemoveMark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.RemoveMark");
		
		ATball_Impact_BP_C_RemoveMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Tball_Impact_BP.Tball_Impact_BP_C.UpdateMesh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATball_Impact_BP_C::UpdateMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.UpdateMesh");
		
		ATball_Impact_BP_C_UpdateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Tball_Impact_BP.Tball_Impact_BP_C.ExecuteUbergraph_Tball_Impact_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATball_Impact_BP_C::ExecuteUbergraph_Tball_Impact_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tball_Impact_BP.Tball_Impact_BP_C.ExecuteUbergraph_Tball_Impact_BP");
		
		ATball_Impact_BP_C_ExecuteUbergraph_Tball_Impact_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATball_Impact_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATball_Impact_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tball_Impact_BP.Tball_Impact_BP_C");
		return ptr;
	}

}


