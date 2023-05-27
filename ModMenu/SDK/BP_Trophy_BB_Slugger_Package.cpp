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
	 * 		Name   -> Function BP_Trophy_BB_Slugger.BP_Trophy_BB_Slugger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Trophy_BB_Slugger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Slugger.BP_Trophy_BB_Slugger_C.UserConstructionScript");
		
		ABP_Trophy_BB_Slugger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_Slugger.BP_Trophy_BB_Slugger_C.HomeRun
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trophy_BB_Slugger_C::HomeRun(class AScramPlayer* Player, int32_t PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Slugger.BP_Trophy_BB_Slugger_C.HomeRun");
		
		ABP_Trophy_BB_Slugger_C_HomeRun_Params params {};
		params.Player = Player;
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_Slugger.BP_Trophy_BB_Slugger_C.ExecuteUbergraph_BP_Trophy_BB_Slugger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trophy_BB_Slugger_C::ExecuteUbergraph_BP_Trophy_BB_Slugger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Slugger.BP_Trophy_BB_Slugger_C.ExecuteUbergraph_BP_Trophy_BB_Slugger");
		
		ABP_Trophy_BB_Slugger_C_ExecuteUbergraph_BP_Trophy_BB_Slugger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Trophy_BB_Slugger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Trophy_BB_Slugger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trophy_BB_Slugger.BP_Trophy_BB_Slugger_C");
		return ptr;
	}

}


