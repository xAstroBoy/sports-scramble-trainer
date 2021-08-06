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

// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.HasScrambleBallOption
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasFrisbee                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Train_03_ScramblePitching_C::HasScrambleBallOption(class UClass* Ball, bool* HasFrisbee)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.HasScrambleBallOption");

	ABB_Train_03_ScramblePitching_C_HasScrambleBallOption_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasFrisbee != nullptr)
		*HasFrisbee = params.HasFrisbee;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StopPlayingAudioComponents
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::StopPlayingAudioComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StopPlayingAudioComponents");

	ABB_Train_03_ScramblePitching_C_StopPlayingAudioComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.SetUpInfoText");

	ABB_Train_03_ScramblePitching_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.BB_TRN_Balls_Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::BB_TRN_Balls_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.BB_TRN_Balls_Initialize");

	ABB_Train_03_ScramblePitching_C_BB_TRN_Balls_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.UserConstructionScript");

	ABB_Train_03_ScramblePitching_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95DE0C8CC0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95DE0C8CC0(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95DE0C8CC0");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95DE0C8CC0_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F952AA99A92
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F952AA99A92(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F952AA99A92");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F952AA99A92_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F956C0DD1EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F956C0DD1EB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F956C0DD1EB");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F956C0DD1EB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95113477F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95113477F2(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95113477F2");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95113477F2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95928AE721
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95928AE721(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95928AE721");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95928AE721_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95E4979D6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95E4979D6E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95E4979D6E");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95E4979D6E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95383FF254
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95383FF254(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95383FF254");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95383FF254_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9556800999
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9556800999(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9556800999");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9556800999_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F950B2B0951
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F950B2B0951(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F950B2B0951");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F950B2B0951_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95CFDC54D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95CFDC54D2(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95CFDC54D2");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95CFDC54D2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9568235135
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9568235135(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9568235135");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9568235135_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9588CA43D4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9588CA43D4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9588CA43D4");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9588CA43D4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95AE2309F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95AE2309F4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95AE2309F4");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95AE2309F4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F950FD91324
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F950FD91324(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F950FD91324");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F950FD91324_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F953BBD1590
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F953BBD1590(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F953BBD1590");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F953BBD1590_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9511D283D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9511D283D2(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9511D283D2");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9511D283D2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95D5B00049
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95D5B00049(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95D5B00049");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95D5B00049_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F951D0DADBB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F951D0DADBB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F951D0DADBB");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F951D0DADBB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9585D09564
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9585D09564(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9585D09564");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9585D09564_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95D57DAFE0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95D57DAFE0(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95D57DAFE0");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95D57DAFE0_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95AE0101F5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95AE0101F5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95AE0101F5");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95AE0101F5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9515CBE021
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F9515CBE021(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F9515CBE021");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F9515CBE021_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F951038066F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F951038066F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F951038066F");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F951038066F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95ECD31E11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95ECD31E11(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95ECD31E11");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95ECD31E11_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95546303AA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_FCAFC5664175CE42D0760F95546303AA(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_FCAFC5664175CE42D0760F95546303AA");

	ABB_Train_03_ScramblePitching_C_OnLoaded_FCAFC5664175CE42D0760F95546303AA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_B8EEFC7548301DF7A83A57A89FD38BEA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_B8EEFC7548301DF7A83A57A89FD38BEA(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_B8EEFC7548301DF7A83A57A89FD38BEA");

	ABB_Train_03_ScramblePitching_C_OnLoaded_B8EEFC7548301DF7A83A57A89FD38BEA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_21C23C4C4F425F0DB86562BF4A2343BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_21C23C4C4F425F0DB86562BF4A2343BE(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_21C23C4C4F425F0DB86562BF4A2343BE");

	ABB_Train_03_ScramblePitching_C_OnLoaded_21C23C4C4F425F0DB86562BF4A2343BE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_8CA079274ABE8477635E8ABB85851604
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_8CA079274ABE8477635E8ABB85851604(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_8CA079274ABE8477635E8ABB85851604");

	ABB_Train_03_ScramblePitching_C_OnLoaded_8CA079274ABE8477635E8ABB85851604_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_9925058B4CD241A5192830B0C00DD715
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_9925058B4CD241A5192830B0C00DD715(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_9925058B4CD241A5192830B0C00DD715");

	ABB_Train_03_ScramblePitching_C_OnLoaded_9925058B4CD241A5192830B0C00DD715_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_06D315AB4ACFB3453B11B49AD83384BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::OnLoaded_06D315AB4ACFB3453B11B49AD83384BD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.OnLoaded_06D315AB4ACFB3453B11B49AD83384BD");

	ABB_Train_03_ScramblePitching_C_OnLoaded_06D315AB4ACFB3453B11B49AD83384BD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.BaseballEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::BaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.BaseballEvent");

	ABB_Train_03_ScramblePitching_C_BaseballEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ResetGate
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::ResetGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ResetGate");

	ABB_Train_03_ScramblePitching_C_ResetGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.PitcherCaughtSomething
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::PitcherCaughtSomething(class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.PitcherCaughtSomething");

	ABB_Train_03_ScramblePitching_C_PitcherCaughtSomething_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_24
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_24()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_24");

	ABB_Train_03_ScramblePitching_C_CustomEvent_24_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_25
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_25()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_25");

	ABB_Train_03_ScramblePitching_C_CustomEvent_25_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerHitFirstFrisbeeTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::StartTimerHitFirstFrisbeeTarget(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerHitFirstFrisbeeTarget");

	ABB_Train_03_ScramblePitching_C_StartTimerHitFirstFrisbeeTarget_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.FrisbeeReminderVO
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::FrisbeeReminderVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.FrisbeeReminderVO");

	ABB_Train_03_ScramblePitching_C_FrisbeeReminderVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerGrabFrisbee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::StartTimerGrabFrisbee(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerGrabFrisbee");

	ABB_Train_03_ScramblePitching_C_StartTimerGrabFrisbee_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReminderGrabFrisbee
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::ReminderGrabFrisbee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReminderGrabFrisbee");

	ABB_Train_03_ScramblePitching_C_ReminderGrabFrisbee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerGrabImbuedFrisbee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::StartTimerGrabImbuedFrisbee(float Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.StartTimerGrabImbuedFrisbee");

	ABB_Train_03_ScramblePitching_C_StartTimerGrabImbuedFrisbee_Params params;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReminderGrabImbuedFrisbee
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::ReminderGrabImbuedFrisbee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReminderGrabImbuedFrisbee");

	ABB_Train_03_ScramblePitching_C_ReminderGrabImbuedFrisbee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_21
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_21()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_21");

	ABB_Train_03_ScramblePitching_C_CustomEvent_21_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_22
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_22()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_22");

	ABB_Train_03_ScramblePitching_C_CustomEvent_22_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_23
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_23()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_23");

	ABB_Train_03_ScramblePitching_C_CustomEvent_23_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReceiveBeginPlay");

	ABB_Train_03_ScramblePitching_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReadyForTraining
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::ReadyForTraining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReadyForTraining");

	ABB_Train_03_ScramblePitching_C_ReadyForTraining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_01
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::Tutorial_Step_01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_01");

	ABB_Train_03_ScramblePitching_C_Tutorial_Step_01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ReceiveEndPlay");

	ABB_Train_03_ScramblePitching_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CalculateScore
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CalculateScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CalculateScore");

	ABB_Train_03_ScramblePitching_C_CalculateScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CountDownCompleted
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CountDownCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CountDownCompleted");

	ABB_Train_03_ScramblePitching_C_CountDownCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.TrainingStart
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::TrainingStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.TrainingStart");

	ABB_Train_03_ScramblePitching_C_TrainingStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CatcherCaughtBall
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CatcherCaughtBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CatcherCaughtBall");

	ABB_Train_03_ScramblePitching_C_CatcherCaughtBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.LookAtScrambleBalls
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::LookAtScrambleBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.LookAtScrambleBalls");

	ABB_Train_03_ScramblePitching_C_LookAtScrambleBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ScrambleSelectionShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::ScrambleSelectionShown(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ScrambleSelectionShown");

	ABB_Train_03_ScramblePitching_C_ScrambleSelectionShown_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.NotifyTrainingContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::NotifyTrainingContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.NotifyTrainingContinue");

	ABB_Train_03_ScramblePitching_C_NotifyTrainingContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.AnnouncerExitSequenceComplete");

	ABB_Train_03_ScramblePitching_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_02
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::Tutorial_Step_02()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_02");

	ABB_Train_03_ScramblePitching_C_Tutorial_Step_02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.TrainingTargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::TrainingTargetHit(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.TrainingTargetHit");

	ABB_Train_03_ScramblePitching_C_TrainingTargetHit_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_03
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::Tutorial_Step_03()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_03");

	ABB_Train_03_ScramblePitching_C_Tutorial_Step_03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_04
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::Tutorial_Step_04()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_04");

	ABB_Train_03_ScramblePitching_C_Tutorial_Step_04_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ListenForNonImbuedFrisbeeGrabbed
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::ListenForNonImbuedFrisbeeGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ListenForNonImbuedFrisbeeGrabbed");

	ABB_Train_03_ScramblePitching_C_ListenForNonImbuedFrisbeeGrabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.NonImbuedFrisbeeGrab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::NonImbuedFrisbeeGrab(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.NonImbuedFrisbeeGrab");

	ABB_Train_03_ScramblePitching_C_NonImbuedFrisbeeGrab_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_05
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::Tutorial_Step_05()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.Tutorial_Step_05");

	ABB_Train_03_ScramblePitching_C_Tutorial_Step_05_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ListenForImbuedFrisbeeGrabbed
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::ListenForImbuedFrisbeeGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ListenForImbuedFrisbeeGrabbed");

	ABB_Train_03_ScramblePitching_C_ListenForImbuedFrisbeeGrabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ImbuedFrisbeeGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::ImbuedFrisbeeGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ImbuedFrisbeeGrabbed");

	ABB_Train_03_ScramblePitching_C_ImbuedFrisbeeGrabbed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ValidHit
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::ValidHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ValidHit");

	ABB_Train_03_ScramblePitching_C_ValidHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.HandlePostTutorialTargetHits
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::HandlePostTutorialTargetHits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.HandlePostTutorialTargetHits");

	ABB_Train_03_ScramblePitching_C_HandlePostTutorialTargetHits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.GetNextPitchingTarget
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::GetNextPitchingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.GetNextPitchingTarget");

	ABB_Train_03_ScramblePitching_C_GetNextPitchingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.DestroyAllInstruments
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::DestroyAllInstruments()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.DestroyAllInstruments");

	ABB_Train_03_ScramblePitching_C_DestroyAllInstruments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_1");

	ABB_Train_03_ScramblePitching_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent");

	ABB_Train_03_ScramblePitching_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_2");

	ABB_Train_03_ScramblePitching_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_3");

	ABB_Train_03_ScramblePitching_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_4");

	ABB_Train_03_ScramblePitching_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_5");

	ABB_Train_03_ScramblePitching_C_CustomEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_6
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_6");

	ABB_Train_03_ScramblePitching_C_CustomEvent_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_7
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_7");

	ABB_Train_03_ScramblePitching_C_CustomEvent_7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_8
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_8()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_8");

	ABB_Train_03_ScramblePitching_C_CustomEvent_8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_9
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_9()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_9");

	ABB_Train_03_ScramblePitching_C_CustomEvent_9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_10
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_10()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_10");

	ABB_Train_03_ScramblePitching_C_CustomEvent_10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_11
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_11()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_11");

	ABB_Train_03_ScramblePitching_C_CustomEvent_11_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_12
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_12()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_12");

	ABB_Train_03_ScramblePitching_C_CustomEvent_12_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_13
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_13()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_13");

	ABB_Train_03_ScramblePitching_C_CustomEvent_13_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_14
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_14()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_14");

	ABB_Train_03_ScramblePitching_C_CustomEvent_14_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_15
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_15()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_15");

	ABB_Train_03_ScramblePitching_C_CustomEvent_15_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_16
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_16()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_16");

	ABB_Train_03_ScramblePitching_C_CustomEvent_16_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_17
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_17()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_17");

	ABB_Train_03_ScramblePitching_C_CustomEvent_17_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_18
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_18()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_18");

	ABB_Train_03_ScramblePitching_C_CustomEvent_18_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_19
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_19()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_19");

	ABB_Train_03_ScramblePitching_C_CustomEvent_19_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_20
// (BlueprintCallable, BlueprintEvent)
void ABB_Train_03_ScramblePitching_C::CustomEvent_20()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.CustomEvent_20");

	ABB_Train_03_ScramblePitching_C_CustomEvent_20_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ExecuteUbergraph_BB_Train_03_ScramblePitching
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Train_03_ScramblePitching_C::ExecuteUbergraph_BB_Train_03_ScramblePitching(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Train_03_ScramblePitching.BB_Train_03_ScramblePitching_C.ExecuteUbergraph_BB_Train_03_ScramblePitching");

	ABB_Train_03_ScramblePitching_C_ExecuteUbergraph_BB_Train_03_ScramblePitching_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
