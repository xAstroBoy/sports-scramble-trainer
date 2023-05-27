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
	 * 		Name   -> Function FloorLightUp.FloorLightUp_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFloorLightUp_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUp.FloorLightUp_C.Initialize");
		
		AFloorLightUp_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUp.FloorLightUp_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFloorLightUp_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUp.FloorLightUp_C.UserConstructionScript");
		
		AFloorLightUp_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUp.FloorLightUp_C.TimelineScale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFloorLightUp_C::TimelineScale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUp.FloorLightUp_C.TimelineScale__FinishedFunc");
		
		AFloorLightUp_C_TimelineScale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUp.FloorLightUp_C.TimelineScale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFloorLightUp_C::TimelineScale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUp.FloorLightUp_C.TimelineScale__UpdateFunc");
		
		AFloorLightUp_C_TimelineScale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUp.FloorLightUp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFloorLightUp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUp.FloorLightUp_C.ReceiveBeginPlay");
		
		AFloorLightUp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUp.FloorLightUp_C.Show
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFloorLightUp_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUp.FloorLightUp_C.Show");
		
		AFloorLightUp_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUp.FloorLightUp_C.Hide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFloorLightUp_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUp.FloorLightUp_C.Hide");
		
		AFloorLightUp_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUp.FloorLightUp_C.ExecuteUbergraph_FloorLightUp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFloorLightUp_C::ExecuteUbergraph_FloorLightUp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUp.FloorLightUp_C.ExecuteUbergraph_FloorLightUp");
		
		AFloorLightUp_C_ExecuteUbergraph_FloorLightUp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFloorLightUp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFloorLightUp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FloorLightUp.FloorLightUp_C");
		return ptr;
	}

}


