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

// Function QuarterPanel.QuarterPanel_C.SetRed
// (Public, BlueprintCallable, BlueprintEvent)
void AQuarterPanel_C::SetRed()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuarterPanel.QuarterPanel_C.SetRed");

	AQuarterPanel_C_SetRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuarterPanel.QuarterPanel_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AQuarterPanel_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuarterPanel.QuarterPanel_C.Initialize");

	AQuarterPanel_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuarterPanel.QuarterPanel_C.UpdateLocText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LocTextName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuarterPanel_C::UpdateLocText(const struct FName& LocTextName)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuarterPanel.QuarterPanel_C.UpdateLocText");

	AQuarterPanel_C_UpdateLocText_Params params;
	params.LocTextName = LocTextName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuarterPanel.QuarterPanel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AQuarterPanel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuarterPanel.QuarterPanel_C.UserConstructionScript");

	AQuarterPanel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuarterPanel.QuarterPanel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AQuarterPanel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuarterPanel.QuarterPanel_C.ReceiveBeginPlay");

	AQuarterPanel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuarterPanel.QuarterPanel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuarterPanel_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuarterPanel.QuarterPanel_C.ReceiveTick");

	AQuarterPanel_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuarterPanel.QuarterPanel_C.ExecuteUbergraph_QuarterPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuarterPanel_C::ExecuteUbergraph_QuarterPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuarterPanel.QuarterPanel_C.ExecuteUbergraph_QuarterPanel");

	AQuarterPanel_C_ExecuteUbergraph_QuarterPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
