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

// Function BW_Turkey.BW_Turkey_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Turkey_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Turkey.BW_Turkey_C.UserConstructionScript");

	ABW_Turkey_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Turkey.BW_Turkey_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Turkey_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Turkey.BW_Turkey_C.ReceiveBeginPlay");

	ABW_Turkey_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Turkey.BW_Turkey_C.ExecuteUbergraph_BW_Turkey
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Turkey_C::ExecuteUbergraph_BW_Turkey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Turkey.BW_Turkey_C.ExecuteUbergraph_BW_Turkey");

	ABW_Turkey_C_ExecuteUbergraph_BW_Turkey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
