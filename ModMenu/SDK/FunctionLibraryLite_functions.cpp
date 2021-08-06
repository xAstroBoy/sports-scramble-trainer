// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FunctionLibraryLite.FunctionLibraryLite_C.GetPlayerNamesLite
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxLength                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Player1                        (Parm, OutParm)
// struct FText                   Player2                        (Parm, OutParm)
void UFunctionLibraryLite_C::STATIC_GetPlayerNamesLite(class UObject* WorldContextObject, int MaxLength, class UObject* __WorldContext, struct FText* Player1, struct FText* Player2)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibraryLite.FunctionLibraryLite_C.GetPlayerNamesLite");

	UFunctionLibraryLite_C_GetPlayerNamesLite_Params params;
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


// Function FunctionLibraryLite.FunctionLibraryLite_C.GetLocTextLite
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocTextName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (Parm, OutParm)
void UFunctionLibraryLite_C::STATIC_GetLocTextLite(const struct FName& LocTextName, class UObject* __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionLibraryLite.FunctionLibraryLite_C.GetLocTextLite");

	UFunctionLibraryLite_C_GetLocTextLite_Params params;
	params.LocTextName = LocTextName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
