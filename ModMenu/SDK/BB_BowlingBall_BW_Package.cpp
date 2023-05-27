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
	 * 		Name   -> Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BowlingBall_BW_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.UserConstructionScript");
		
		ABB_BowlingBall_BW_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.UpdateMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BowlingBall_BW_C::UpdateMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.UpdateMesh");
		
		ABB_BowlingBall_BW_C_UpdateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.ExecuteUbergraph_BB_BowlingBall_BW
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BowlingBall_BW_C::ExecuteUbergraph_BB_BowlingBall_BW(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BowlingBall_BW.BB_BowlingBall_BW_C.ExecuteUbergraph_BB_BowlingBall_BW");
		
		ABB_BowlingBall_BW_C_ExecuteUbergraph_BB_BowlingBall_BW_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_BowlingBall_BW_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_BowlingBall_BW_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_BowlingBall_BW.BB_BowlingBall_BW_C");
		return ptr;
	}

}


