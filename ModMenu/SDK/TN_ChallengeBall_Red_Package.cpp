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
	 * 		Name   -> Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ChallengeBall_Red_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.UserConstructionScript");
		
		ATN_ChallengeBall_Red_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.UpdateMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ChallengeBall_Red_C::UpdateMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.UpdateMesh");
		
		ATN_ChallengeBall_Red_C_UpdateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.ExecuteUbergraph_TN_ChallengeBall_Red
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ChallengeBall_Red_C::ExecuteUbergraph_TN_ChallengeBall_Red(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ChallengeBall_Red.TN_ChallengeBall_Red_C.ExecuteUbergraph_TN_ChallengeBall_Red");
		
		ATN_ChallengeBall_Red_C_ExecuteUbergraph_TN_ChallengeBall_Red_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_ChallengeBall_Red_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_ChallengeBall_Red_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_ChallengeBall_Red.TN_ChallengeBall_Red_C");
		return ptr;
	}

}


