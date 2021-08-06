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

// Function MusicManager_BP.MusicManager_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMusicManager_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager_BP.MusicManager_BP_C.UserConstructionScript");

	AMusicManager_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicManager_BP.MusicManager_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMusicManager_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager_BP.MusicManager_BP_C.ReceiveBeginPlay");

	AMusicManager_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicManager_BP.MusicManager_BP_C.LeveLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMusicManager_BP_C::LeveLoaded(const struct FName& LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager_BP.MusicManager_BP_C.LeveLoaded");

	AMusicManager_BP_C_LeveLoaded_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicManager_BP.MusicManager_BP_C.PlayEntry
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EntryName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FadeTime                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMusicManager_BP_C::PlayEntry(const struct FName& EntryName, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager_BP.MusicManager_BP_C.PlayEntry");

	AMusicManager_BP_C_PlayEntry_Params params;
	params.EntryName = EntryName;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicManager_BP.MusicManager_BP_C.ExecuteUbergraph_MusicManager_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMusicManager_BP_C::ExecuteUbergraph_MusicManager_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager_BP.MusicManager_BP_C.ExecuteUbergraph_MusicManager_BP");

	AMusicManager_BP_C_ExecuteUbergraph_MusicManager_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
