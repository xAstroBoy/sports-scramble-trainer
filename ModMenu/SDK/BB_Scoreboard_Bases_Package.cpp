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
	 * 		Name   -> Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.SetNoGameActive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBB_Scoreboard_Bases_C::SetNoGameActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.SetNoGameActive");
		
		UBB_Scoreboard_Bases_C_SetNoGameActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.NewInning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Inning                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Top                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_Bases_C::NewInning(int32_t Inning, bool Top)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.NewInning");
		
		UBB_Scoreboard_Bases_C_NewInning_Params params {};
		params.Inning = Inning;
		params.Top = Top;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.UpdateBaserunners
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RunnerOn1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RunnderOn2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RunnderOn3                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBB_Scoreboard_Bases_C::UpdateBaserunners(bool RunnerOn1, bool RunnderOn2, bool RunnderOn3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.UpdateBaserunners");
		
		UBB_Scoreboard_Bases_C_UpdateBaserunners_Params params {};
		params.RunnerOn1 = RunnerOn1;
		params.RunnderOn2 = RunnderOn2;
		params.RunnderOn3 = RunnderOn3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.ExecuteUbergraph_BB_Scoreboard_Bases
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBB_Scoreboard_Bases_C::ExecuteUbergraph_BB_Scoreboard_Bases(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.ExecuteUbergraph_BB_Scoreboard_Bases");
		
		UBB_Scoreboard_Bases_C_ExecuteUbergraph_BB_Scoreboard_Bases_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBB_Scoreboard_Bases_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBB_Scoreboard_Bases_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BB_Scoreboard_Bases.BB_Scoreboard_Bases_C");
		return ptr;
	}

}


