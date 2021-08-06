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

// Function FunctionGetDateAsText.FunctionGetDateAsText_C.GetDateAsText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime               date                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (Parm, OutParm)
void UFunctionGetDateAsText_C::STATIC_GetDateAsText(const struct FDateTime& date, class UObject* __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function FunctionGetDateAsText.FunctionGetDateAsText_C.GetDateAsText");

	UFunctionGetDateAsText_C_GetDateAsText_Params params;
	params.date = date;
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
