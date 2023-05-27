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
	 * 		Name   -> Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatToHeadDistance
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HatOffDistance                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFans_Sideline_SkelMesh_C::HatToHeadDistance(float* HatOffDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatToHeadDistance");
		
		AFans_Sideline_SkelMesh_C_HatToHeadDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HatOffDistance != nullptr)
			*HatOffDistance = params.HatOffDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFans_Sideline_SkelMesh_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.UserConstructionScript");
		
		AFans_Sideline_SkelMesh_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatOff Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFans_Sideline_SkelMesh_C::HatOffTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatOff Timeline__FinishedFunc");
		
		AFans_Sideline_SkelMesh_C_HatOffTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatOff Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFans_Sideline_SkelMesh_C::HatOffTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.HatOff Timeline__UpdateFunc");
		
		AFans_Sideline_SkelMesh_C_HatOffTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFans_Sideline_SkelMesh_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.ReceiveBeginPlay");
		
		AFans_Sideline_SkelMesh_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.ExecuteUbergraph_Fans_Sideline_SkelMesh
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFans_Sideline_SkelMesh_C::ExecuteUbergraph_Fans_Sideline_SkelMesh(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C.ExecuteUbergraph_Fans_Sideline_SkelMesh");
		
		AFans_Sideline_SkelMesh_C_ExecuteUbergraph_Fans_Sideline_SkelMesh_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFans_Sideline_SkelMesh_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFans_Sideline_SkelMesh_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Fans_Sideline_SkelMesh.Fans_Sideline_SkelMesh_C");
		return ptr;
	}

}


