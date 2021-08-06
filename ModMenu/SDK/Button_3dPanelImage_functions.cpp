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

// Function Button_3dPanelImage.Button_3dPanelImage_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AButton_3dPanelImage_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_3dPanelImage.Button_3dPanelImage_C.Initialize");

	AButton_3dPanelImage_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_3dPanelImage.Button_3dPanelImage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AButton_3dPanelImage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_3dPanelImage.Button_3dPanelImage_C.UserConstructionScript");

	AButton_3dPanelImage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_3dPanelImage.Button_3dPanelImage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AButton_3dPanelImage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_3dPanelImage.Button_3dPanelImage_C.ReceiveBeginPlay");

	AButton_3dPanelImage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_3dPanelImage.Button_3dPanelImage_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_3dPanelImage_C::ButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_3dPanelImage.Button_3dPanelImage_C.ButtonPressed");

	AButton_3dPanelImage_C_ButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_3dPanelImage.Button_3dPanelImage_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_3dPanelImage_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_3dPanelImage.Button_3dPanelImage_C.ReceiveTick");

	AButton_3dPanelImage_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_3dPanelImage.Button_3dPanelImage_C.ButtonSwapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_3dPanelImage_C::ButtonSwapped(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_3dPanelImage.Button_3dPanelImage_C.ButtonSwapped");

	AButton_3dPanelImage_C_ButtonSwapped_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_3dPanelImage.Button_3dPanelImage_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_3dPanelImage_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_3dPanelImage.Button_3dPanelImage_C.ReceiveEndPlay");

	AButton_3dPanelImage_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_3dPanelImage.Button_3dPanelImage_C.ExecuteUbergraph_Button_3dPanelImage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_3dPanelImage_C::ExecuteUbergraph_Button_3dPanelImage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_3dPanelImage.Button_3dPanelImage_C.ExecuteUbergraph_Button_3dPanelImage");

	AButton_3dPanelImage_C_ExecuteUbergraph_Button_3dPanelImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_3dPanelImage.Button_3dPanelImage_C.PanelImageButtonSwapComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_3dPanelImage_C::PanelImageButtonSwapComplete__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_3dPanelImage.Button_3dPanelImage_C.PanelImageButtonSwapComplete__DelegateSignature");

	AButton_3dPanelImage_C_PanelImageButtonSwapComplete__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Button_3dPanelImage.Button_3dPanelImage_C.PanelImageButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AButton_3dPanelImage_C::PanelImageButtonPressed__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button_3dPanelImage.Button_3dPanelImage_C.PanelImageButtonPressed__DelegateSignature");

	AButton_3dPanelImage_C_PanelImageButtonPressed__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
