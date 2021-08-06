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

// Function CMN_Trail_Base.CMN_Trail_Base_C.UpdateColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACMN_Trail_Base_C::UpdateColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_Trail_Base.CMN_Trail_Base_C.UpdateColor");

	ACMN_Trail_Base_C_UpdateColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_Trail_Base.CMN_Trail_Base_C.DestroyTrailHead
// (Public, BlueprintCallable, BlueprintEvent)
void ACMN_Trail_Base_C::DestroyTrailHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_Trail_Base.CMN_Trail_Base_C.DestroyTrailHead");

	ACMN_Trail_Base_C_DestroyTrailHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_Trail_Base.CMN_Trail_Base_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACMN_Trail_Base_C::Setup(class AActor* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_Trail_Base.CMN_Trail_Base_C.Setup");

	ACMN_Trail_Base_C_Setup_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_Trail_Base.CMN_Trail_Base_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           snap                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACMN_Trail_Base_C::FadeOut(bool snap)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_Trail_Base.CMN_Trail_Base_C.FadeOut");

	ACMN_Trail_Base_C_FadeOut_Params params;
	params.snap = snap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_Trail_Base.CMN_Trail_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ACMN_Trail_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_Trail_Base.CMN_Trail_Base_C.UserConstructionScript");

	ACMN_Trail_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_Trail_Base.CMN_Trail_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACMN_Trail_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_Trail_Base.CMN_Trail_Base_C.ReceiveBeginPlay");

	ACMN_Trail_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CMN_Trail_Base.CMN_Trail_Base_C.ExecuteUbergraph_CMN_Trail_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACMN_Trail_Base_C::ExecuteUbergraph_CMN_Trail_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CMN_Trail_Base.CMN_Trail_Base_C.ExecuteUbergraph_CMN_Trail_Base");

	ACMN_Trail_Base_C_ExecuteUbergraph_CMN_Trail_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
