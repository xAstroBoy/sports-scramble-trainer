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

// Function Panel_Feather.Panel_Feather_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void APanel_Feather_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Panel_Feather.Panel_Feather_C.Initialize");

	APanel_Feather_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Panel_Feather.Panel_Feather_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APanel_Feather_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Panel_Feather.Panel_Feather_C.UserConstructionScript");

	APanel_Feather_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Panel_Feather.Panel_Feather_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APanel_Feather_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Panel_Feather.Panel_Feather_C.ReceiveBeginPlay");

	APanel_Feather_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Panel_Feather.Panel_Feather_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APanel_Feather_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Panel_Feather.Panel_Feather_C.ReceiveTick");

	APanel_Feather_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Panel_Feather.Panel_Feather_C.ExecuteUbergraph_Panel_Feather
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APanel_Feather_C::ExecuteUbergraph_Panel_Feather(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Panel_Feather.Panel_Feather_C.ExecuteUbergraph_Panel_Feather");

	APanel_Feather_C_ExecuteUbergraph_Panel_Feather_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Panel_Feather.Panel_Feather_C.SelectionConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APanel_Feather_C::SelectionConfirmed__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Panel_Feather.Panel_Feather_C.SelectionConfirmed__DelegateSignature");

	APanel_Feather_C_SelectionConfirmed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Panel_Feather.Panel_Feather_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APanel_Feather_C::ButtonPressed__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Panel_Feather.Panel_Feather_C.ButtonPressed__DelegateSignature");

	APanel_Feather_C_ButtonPressed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
