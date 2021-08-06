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

// Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.SetFractionalPart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Frac                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AFans_Crowd_Idle01_VA_C::SetFractionalPart(float Value, float Frac)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.SetFractionalPart");

	AFans_Crowd_Idle01_VA_C_SetFractionalPart_Params params;
	params.Value = Value;
	params.Frac = Frac;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.SetInstanceParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFans_Crowd_Idle01_VA_C::SetInstanceParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.SetInstanceParams");

	AFans_Crowd_Idle01_VA_C_SetInstanceParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AFans_Crowd_Idle01_VA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fans_Crowd_Idle01_VA.Fans_Crowd_Idle01_VA_C.UserConstructionScript");

	AFans_Crowd_Idle01_VA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
