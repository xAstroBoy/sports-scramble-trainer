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
	 * 		Name   -> Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUmpire_Sideline_SkelMesh_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.UserConstructionScript");
		
		AUmpire_Sideline_SkelMesh_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AUmpire_Sideline_SkelMesh_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.ReceiveBeginPlay");
		
		AUmpire_Sideline_SkelMesh_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.ExecuteUbergraph_Umpire_Sideline_SkelMesh
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUmpire_Sideline_SkelMesh_C::ExecuteUbergraph_Umpire_Sideline_SkelMesh(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C.ExecuteUbergraph_Umpire_Sideline_SkelMesh");
		
		AUmpire_Sideline_SkelMesh_C_ExecuteUbergraph_Umpire_Sideline_SkelMesh_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUmpire_Sideline_SkelMesh_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUmpire_Sideline_SkelMesh_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Umpire_Sideline_SkelMesh.Umpire_Sideline_SkelMesh_C");
		return ptr;
	}

}


