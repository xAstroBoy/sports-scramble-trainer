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
	 * 		Name   -> Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Trophy_BB_BaseBowling_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.UserConstructionScript");
		
		ABP_Trophy_BB_BaseBowling_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.Strike
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trophy_BB_BaseBowling_C::Strike(class AScramPlayer* Player, int32_t PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.Strike");
		
		ABP_Trophy_BB_BaseBowling_C_Strike_Params params {};
		params.Player = Player;
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.PitchEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Trophy_BB_BaseBowling_C::PitchEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.PitchEvent");
		
		ABP_Trophy_BB_BaseBowling_C_PitchEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.BadPitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Trophy_BB_BaseBowling_C::BadPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.BadPitch");
		
		ABP_Trophy_BB_BaseBowling_C_BadPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.SwingAndMiss
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trophy_BB_BaseBowling_C::SwingAndMiss(class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.SwingAndMiss");
		
		ABP_Trophy_BB_BaseBowling_C_SwingAndMiss_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.OnHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Trophy_BB_BaseBowling_C::OnHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.OnHit");
		
		ABP_Trophy_BB_BaseBowling_C_OnHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.ExecuteUbergraph_BP_Trophy_BB_BaseBowling
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trophy_BB_BaseBowling_C::ExecuteUbergraph_BP_Trophy_BB_BaseBowling(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C.ExecuteUbergraph_BP_Trophy_BB_BaseBowling");
		
		ABP_Trophy_BB_BaseBowling_C_ExecuteUbergraph_BP_Trophy_BB_BaseBowling_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Trophy_BB_BaseBowling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Trophy_BB_BaseBowling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C");
		return ptr;
	}

}


