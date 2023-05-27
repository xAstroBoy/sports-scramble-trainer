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
	 * 		Name   -> Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.SetFractionalPart
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Frac                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float AFans_Crowd_Idle01_VA_C::SetFractionalPart(float Value, float Frac)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.SetFractionalPart");
		
		AFans_Crowd_Idle01_VA_C_SetFractionalPart_Params params {};
		params.Value = Value;
		params.Frac = Frac;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.SetInstanceParams
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFans_Crowd_Idle01_VA_C::SetInstanceParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.SetInstanceParams");
		
		AFans_Crowd_Idle01_VA_C_SetInstanceParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFans_Crowd_Idle01_VA_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.UserConstructionScript");
		
		AFans_Crowd_Idle01_VA_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFans_Crowd_Idle01_VA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFans_Crowd_Idle01_VA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C");
		return ptr;
	}

}


