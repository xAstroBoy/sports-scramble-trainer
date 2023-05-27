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
	 * 		Name   -> Function FunctionLibraryLite.FunctionLibraryLite_C.GetPlayerNamesLite
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxLength                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Player1                                                    (Parm, OutParm)
	 * 		class FText                                        Player2                                                    (Parm, OutParm)
	 */
	void UFunctionLibraryLite_C::STATIC_GetPlayerNamesLite(class UObject* WorldContextObject, int32_t MaxLength, class UObject* __WorldContext, class FText* Player1, class FText* Player2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibraryLite.FunctionLibraryLite_C.GetPlayerNamesLite");
		
		UFunctionLibraryLite_C_GetPlayerNamesLite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MaxLength = MaxLength;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Player1 != nullptr)
			*Player1 = params.Player1;
		if (Player2 != nullptr)
			*Player2 = params.Player2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FunctionLibraryLite.FunctionLibraryLite_C.GetLocTextLite
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LocTextName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UFunctionLibraryLite_C::STATIC_GetLocTextLite(const class FName& LocTextName, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibraryLite.FunctionLibraryLite_C.GetLocTextLite");
		
		UFunctionLibraryLite_C_GetLocTextLite_Params params {};
		params.LocTextName = LocTextName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFunctionLibraryLite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFunctionLibraryLite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibraryLite.FunctionLibraryLite_C");
		return ptr;
	}

}


