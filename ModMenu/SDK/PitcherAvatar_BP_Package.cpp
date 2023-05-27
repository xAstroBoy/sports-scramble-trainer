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
	 * 		Name   -> Function PitcherAvatar_BP.PitcherAvatar_BP_C.GetGlobalColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        globalColorName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor APitcherAvatar_BP_C::GetGlobalColor(const class FName& globalColorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.GetGlobalColor");
		
		APitcherAvatar_BP_C_GetGlobalColor_Params params {};
		params.globalColorName = globalColorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PitcherAvatar_BP.PitcherAvatar_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APitcherAvatar_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.UserConstructionScript");
		
		APitcherAvatar_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PitcherAvatar_BP.PitcherAvatar_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APitcherAvatar_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.Timeline_0__FinishedFunc");
		
		APitcherAvatar_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PitcherAvatar_BP.PitcherAvatar_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APitcherAvatar_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.Timeline_0__UpdateFunc");
		
		APitcherAvatar_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PitcherAvatar_BP.PitcherAvatar_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APitcherAvatar_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.ReceiveBeginPlay");
		
		APitcherAvatar_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PitcherAvatar_BP.PitcherAvatar_BP_C.TryInitializeMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APitcherAvatar_BP_C::TryInitializeMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.TryInitializeMaterial");
		
		APitcherAvatar_BP_C_TryInitializeMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PitcherAvatar_BP.PitcherAvatar_BP_C.RevealAvatar_BP
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APitcherAvatar_BP_C::RevealAvatar_BP(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.RevealAvatar_BP");
		
		APitcherAvatar_BP_C_RevealAvatar_BP_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PitcherAvatar_BP.PitcherAvatar_BP_C.ScaleUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APitcherAvatar_BP_C::ScaleUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.ScaleUp");
		
		APitcherAvatar_BP_C_ScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PitcherAvatar_BP.PitcherAvatar_BP_C.ExecuteUbergraph_PitcherAvatar_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APitcherAvatar_BP_C::ExecuteUbergraph_PitcherAvatar_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PitcherAvatar_BP.PitcherAvatar_BP_C.ExecuteUbergraph_PitcherAvatar_BP");
		
		APitcherAvatar_BP_C_ExecuteUbergraph_PitcherAvatar_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APitcherAvatar_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APitcherAvatar_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PitcherAvatar_BP.PitcherAvatar_BP_C");
		return ptr;
	}

}


