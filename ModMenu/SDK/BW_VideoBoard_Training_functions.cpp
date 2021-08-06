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

// Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_VideoBoard_Training_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.Initialize");

	ABW_VideoBoard_Training_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_VideoBoard_Training_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.UserConstructionScript");

	ABW_VideoBoard_Training_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_VideoBoard_Training_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.ReceiveBeginPlay");

	ABW_VideoBoard_Training_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.Reset
// (BlueprintCallable, BlueprintEvent)
void ABW_VideoBoard_Training_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.Reset");

	ABW_VideoBoard_Training_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_VideoBoard_Training_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.ReceiveEndPlay");

	ABW_VideoBoard_Training_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.PlayMatchVideo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Round                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_VideoBoard_Training_C::PlayMatchVideo(int Round)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.PlayMatchVideo");

	ABW_VideoBoard_Training_C_PlayMatchVideo_Params params;
	params.Round = Round;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.ExecuteUbergraph_BW_VideoBoard_Training
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_VideoBoard_Training_C::ExecuteUbergraph_BW_VideoBoard_Training(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.ExecuteUbergraph_BW_VideoBoard_Training");

	ABW_VideoBoard_Training_C_ExecuteUbergraph_BW_VideoBoard_Training_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.MatchVideoStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan               Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void ABW_VideoBoard_Training_C::MatchVideoStarted__DelegateSignature(const struct FTimespan& Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.MatchVideoStarted__DelegateSignature");

	ABW_VideoBoard_Training_C_MatchVideoStarted__DelegateSignature_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.VideoFadeOutComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABW_VideoBoard_Training_C::VideoFadeOutComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.VideoFadeOutComplete__DelegateSignature");

	ABW_VideoBoard_Training_C_VideoFadeOutComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.MatchVideoComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABW_VideoBoard_Training_C::MatchVideoComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.MatchVideoComplete__DelegateSignature");

	ABW_VideoBoard_Training_C_MatchVideoComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
