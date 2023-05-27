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
	 * 		Name   -> Function TN_ChallengeBall_Blue.TN_ChallengeBall_Blue_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ChallengeBall_Blue_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Blue.TN_ChallengeBall_Blue_C.UserConstructionScript");
		
		ATN_ChallengeBall_Blue_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ChallengeBall_Blue.TN_ChallengeBall_Blue_C.UpdateMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ChallengeBall_Blue_C::UpdateMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Blue.TN_ChallengeBall_Blue_C.UpdateMesh");
		
		ATN_ChallengeBall_Blue_C_UpdateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ChallengeBall_Blue.TN_ChallengeBall_Blue_C.ExecuteUbergraph_TN_ChallengeBall_Blue
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ChallengeBall_Blue_C::ExecuteUbergraph_TN_ChallengeBall_Blue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Blue.TN_ChallengeBall_Blue_C.ExecuteUbergraph_TN_ChallengeBall_Blue");
		
		ATN_ChallengeBall_Blue_C_ExecuteUbergraph_TN_ChallengeBall_Blue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_ChallengeBall_Blue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_ChallengeBall_Blue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_ChallengeBall_Blue.TN_ChallengeBall_Blue_C");
		return ptr;
	}

}


