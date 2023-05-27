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
	 * 		Name   -> Function CenterReturnWall.CenterReturnWall_C.RemoveGameElement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACenterReturnWall_C::RemoveGameElement(bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.RemoveGameElement");
		
		ACenterReturnWall_C_RemoveGameElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CenterReturnWall.CenterReturnWall_C.Setup6targetInfluencers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACenterReturnWall_C::Setup6targetInfluencers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.Setup6targetInfluencers");
		
		ACenterReturnWall_C_Setup6targetInfluencers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CenterReturnWall.CenterReturnWall_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACenterReturnWall_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.Initialize");
		
		ACenterReturnWall_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CenterReturnWall.CenterReturnWall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACenterReturnWall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.UserConstructionScript");
		
		ACenterReturnWall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CenterReturnWall.CenterReturnWall_C.Rise__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACenterReturnWall_C::Rise__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.Rise__FinishedFunc");
		
		ACenterReturnWall_C_Rise__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CenterReturnWall.CenterReturnWall_C.Rise__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACenterReturnWall_C::Rise__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.Rise__UpdateFunc");
		
		ACenterReturnWall_C_Rise__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CenterReturnWall.CenterReturnWall_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACenterReturnWall_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.ReceiveBeginPlay");
		
		ACenterReturnWall_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CenterReturnWall.CenterReturnWall_C.RiseUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACenterReturnWall_C::RiseUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.RiseUp");
		
		ACenterReturnWall_C_RiseUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CenterReturnWall.CenterReturnWall_C.LowerDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACenterReturnWall_C::LowerDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.LowerDown");
		
		ACenterReturnWall_C_LowerDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CenterReturnWall.CenterReturnWall_C.ExecuteUbergraph_CenterReturnWall
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACenterReturnWall_C::ExecuteUbergraph_CenterReturnWall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CenterReturnWall.CenterReturnWall_C.ExecuteUbergraph_CenterReturnWall");
		
		ACenterReturnWall_C_ExecuteUbergraph_CenterReturnWall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACenterReturnWall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACenterReturnWall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CenterReturnWall.CenterReturnWall_C");
		return ptr;
	}

}


