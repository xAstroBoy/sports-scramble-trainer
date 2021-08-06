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

// Function TrophyProp_Base.TrophyProp_Base_C.SetWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrophyProp_Base_C::SetWidgetVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.SetWidgetVisibility");

	ATrophyProp_Base_C_SetWidgetVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyProp_Base.TrophyProp_Base_C.InitializeColors
// (Public, BlueprintCallable, BlueprintEvent)
void ATrophyProp_Base_C::InitializeColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.InitializeColors");

	ATrophyProp_Base_C_InitializeColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyProp_Base.TrophyProp_Base_C.InitializeMaterialArray
// (Public, BlueprintCallable, BlueprintEvent)
void ATrophyProp_Base_C::InitializeMaterialArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.InitializeMaterialArray");

	ATrophyProp_Base_C_InitializeMaterialArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyProp_Base.TrophyProp_Base_C.ChangeMaterials
// (Public, BlueprintCallable, BlueprintEvent)
void ATrophyProp_Base_C::ChangeMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.ChangeMaterials");

	ATrophyProp_Base_C_ChangeMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyProp_Base.TrophyProp_Base_C.SetInstanceVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrophyProp_Base_C::SetInstanceVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.SetInstanceVisibility");

	ATrophyProp_Base_C_SetInstanceVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyProp_Base.TrophyProp_Base_C.SetupCollision
// (Public, BlueprintCallable, BlueprintEvent)
void ATrophyProp_Base_C::SetupCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.SetupCollision");

	ATrophyProp_Base_C_SetupCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyProp_Base.TrophyProp_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATrophyProp_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.UserConstructionScript");

	ATrophyProp_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyProp_Base.TrophyProp_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATrophyProp_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.ReceiveBeginPlay");

	ATrophyProp_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrophyProp_Base.TrophyProp_Base_C.ExecuteUbergraph_TrophyProp_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrophyProp_Base_C::ExecuteUbergraph_TrophyProp_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyProp_Base.TrophyProp_Base_C.ExecuteUbergraph_TrophyProp_Base");

	ATrophyProp_Base_C_ExecuteUbergraph_TrophyProp_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
