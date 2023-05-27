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
	 * 		Name   -> Function PlatformMaterialSwapComp.PlatformMaterialSwapComp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPlatformMaterialSwapComp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlatformMaterialSwapComp.PlatformMaterialSwapComp_C.ReceiveBeginPlay");
		
		UPlatformMaterialSwapComp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PlatformMaterialSwapComp.PlatformMaterialSwapComp_C.ExecuteUbergraph_PlatformMaterialSwapComp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlatformMaterialSwapComp_C::ExecuteUbergraph_PlatformMaterialSwapComp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlatformMaterialSwapComp.PlatformMaterialSwapComp_C.ExecuteUbergraph_PlatformMaterialSwapComp");
		
		UPlatformMaterialSwapComp_C_ExecuteUbergraph_PlatformMaterialSwapComp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlatformMaterialSwapComp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlatformMaterialSwapComp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlatformMaterialSwapComp.PlatformMaterialSwapComp_C");
		return ptr;
	}

}


