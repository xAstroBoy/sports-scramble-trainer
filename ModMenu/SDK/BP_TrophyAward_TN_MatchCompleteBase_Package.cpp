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
	 * 		Name   -> Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.SystemsCheck
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsGood                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrophyAward_TN_MatchCompleteBase_C::SystemsCheck(class UObject* WorldObject, class UScramEventBasePayload* Payload, bool* IsGood)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.SystemsCheck");
		
		ABP_TrophyAward_TN_MatchCompleteBase_C_SystemsCheck_Params params {};
		params.WorldObject = WorldObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsGood != nullptr)
			*IsGood = params.IsGood;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_TN_MatchCompleteBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.UserConstructionScript");
		
		ABP_TrophyAward_TN_MatchCompleteBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.OnMatchComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_TN_MatchCompleteBase_C::OnMatchComplete(class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.OnMatchComplete");
		
		ABP_TrophyAward_TN_MatchCompleteBase_C_OnMatchComplete_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.DebugEarn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_TN_MatchCompleteBase_C::DebugEarn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.DebugEarn");
		
		ABP_TrophyAward_TN_MatchCompleteBase_C_DebugEarn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_TN_MatchCompleteBase_C::ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C.ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase");
		
		ABP_TrophyAward_TN_MatchCompleteBase_C_ExecuteUbergraph_BP_TrophyAward_TN_MatchCompleteBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrophyAward_TN_MatchCompleteBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrophyAward_TN_MatchCompleteBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_TN_MatchCompleteBase.BP_TrophyAward_TN_MatchCompleteBase_C");
		return ptr;
	}

}


