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

// Function Header.Header_C.SetRed
// (Public, BlueprintCallable, BlueprintEvent)
void AHeader_C::SetRed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.SetRed");

	AHeader_C_SetRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.UpdateHeaderText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void AHeader_C::UpdateHeaderText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.UpdateHeaderText");

	AHeader_C_UpdateHeaderText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AHeader_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Initialize");

	AHeader_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHeader_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.UserConstructionScript");

	AHeader_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Timeline_Brackets__FinishedFunc
// (BlueprintEvent)
void AHeader_C::Timeline_Brackets__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_Brackets__FinishedFunc");

	AHeader_C_Timeline_Brackets__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Timeline_Brackets__UpdateFunc
// (BlueprintEvent)
void AHeader_C::Timeline_Brackets__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_Brackets__UpdateFunc");

	AHeader_C_Timeline_Brackets__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Timeline_RingsGrow__FinishedFunc
// (BlueprintEvent)
void AHeader_C::Timeline_RingsGrow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingsGrow__FinishedFunc");

	AHeader_C_Timeline_RingsGrow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Timeline_RingsGrow__UpdateFunc
// (BlueprintEvent)
void AHeader_C::Timeline_RingsGrow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingsGrow__UpdateFunc");

	AHeader_C_Timeline_RingsGrow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Timeline_RingMoveMinor__FinishedFunc
// (BlueprintEvent)
void AHeader_C::Timeline_RingMoveMinor__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingMoveMinor__FinishedFunc");

	AHeader_C_Timeline_RingMoveMinor__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Timeline_RingMoveMinor__UpdateFunc
// (BlueprintEvent)
void AHeader_C::Timeline_RingMoveMinor__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingMoveMinor__UpdateFunc");

	AHeader_C_Timeline_RingMoveMinor__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Timeline_ScaleWidget__FinishedFunc
// (BlueprintEvent)
void AHeader_C::Timeline_ScaleWidget__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_ScaleWidget__FinishedFunc");

	AHeader_C_Timeline_ScaleWidget__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Timeline_ScaleWidget__UpdateFunc
// (BlueprintEvent)
void AHeader_C::Timeline_ScaleWidget__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_ScaleWidget__UpdateFunc");

	AHeader_C_Timeline_ScaleWidget__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Timeline_RingMoveMajor__FinishedFunc
// (BlueprintEvent)
void AHeader_C::Timeline_RingMoveMajor__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingMoveMajor__FinishedFunc");

	AHeader_C_Timeline_RingMoveMajor__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.Timeline_RingMoveMajor__UpdateFunc
// (BlueprintEvent)
void AHeader_C::Timeline_RingMoveMajor__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.Timeline_RingMoveMajor__UpdateFunc");

	AHeader_C_Timeline_RingMoveMajor__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHeader_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.ReceiveBeginPlay");

	AHeader_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHeader_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.ReceiveTick");

	AHeader_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.OpenBracket
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::OpenBracket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.OpenBracket");

	AHeader_C_OpenBracket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.CloseBracket
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::CloseBracket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.CloseBracket");

	AHeader_C_CloseBracket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.DestroyHeader
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::DestroyHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.DestroyHeader");

	AHeader_C_DestroyHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.OpenRings
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::OpenRings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.OpenRings");

	AHeader_C_OpenRings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.CloseRings
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::CloseRings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.CloseRings");

	AHeader_C_CloseRings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.FinishOpenRings
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::FinishOpenRings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.FinishOpenRings");

	AHeader_C_FinishOpenRings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.FinishCloseRings
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::FinishCloseRings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.FinishCloseRings");

	AHeader_C_FinishCloseRings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.ShowWidget
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::ShowWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.ShowWidget");

	AHeader_C_ShowWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.HideWidget
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::HideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.HideWidget");

	AHeader_C_HideWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.StartRingOpen
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::StartRingOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.StartRingOpen");

	AHeader_C_StartRingOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.FinishRingClose
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::FinishRingClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.FinishRingClose");

	AHeader_C_FinishRingClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.PlaySFX_BracketOpen
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::PlaySFX_BracketOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.PlaySFX_BracketOpen");

	AHeader_C_PlaySFX_BracketOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.PlaySFX_BracketClose
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::PlaySFX_BracketClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.PlaySFX_BracketClose");

	AHeader_C_PlaySFX_BracketClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.PlaySFX_RingsFinishUp
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::PlaySFX_RingsFinishUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.PlaySFX_RingsFinishUp");

	AHeader_C_PlaySFX_RingsFinishUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.PlaySFX_RingsFinishDown
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::PlaySFX_RingsFinishDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.PlaySFX_RingsFinishDown");

	AHeader_C_PlaySFX_RingsFinishDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.InstantOpen
// (BlueprintCallable, BlueprintEvent)
void AHeader_C::InstantOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.InstantOpen");

	AHeader_C_InstantOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.ExecuteUbergraph_Header
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHeader_C::ExecuteUbergraph_Header(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.ExecuteUbergraph_Header");

	AHeader_C_ExecuteUbergraph_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.RemoveMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHeader_C::RemoveMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.RemoveMenu__DelegateSignature");

	AHeader_C_RemoveMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.SpawnInitialMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHeader_C::SpawnInitialMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.SpawnInitialMenu__DelegateSignature");

	AHeader_C_SpawnInitialMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.BracketOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHeader_C::BracketOpen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.BracketOpen__DelegateSignature");

	AHeader_C_BracketOpen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Header.Header_C.BracketClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHeader_C::BracketClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Header.Header_C.BracketClosed__DelegateSignature");

	AHeader_C_BracketClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
