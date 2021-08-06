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

// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.HideTrophyInfo
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyRoomMonitorDisplay_C::HideTrophyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.HideTrophyInfo");

	ABP_TrophyRoomMonitorDisplay_C_HideTrophyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ShowTrophyInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrophyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           WasEarned                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 DateEarned                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Requirement                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyRoomMonitorDisplay_C::ShowTrophyInfo(const struct FName& TrophyName, const struct FText& Description, bool WasEarned, const struct FString& DateEarned, int Progress, int Requirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ShowTrophyInfo");

	ABP_TrophyRoomMonitorDisplay_C_ShowTrophyInfo_Params params;
	params.TrophyName = TrophyName;
	params.Description = Description;
	params.WasEarned = WasEarned;
	params.DateEarned = DateEarned;
	params.Progress = Progress;
	params.Requirement = Requirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TrophyRoomMonitorDisplay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.UserConstructionScript");

	ABP_TrophyRoomMonitorDisplay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__FinishedFunc
// (BlueprintEvent)
void ABP_TrophyRoomMonitorDisplay_C::IconRotate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__FinishedFunc");

	ABP_TrophyRoomMonitorDisplay_C_IconRotate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__UpdateFunc
// (BlueprintEvent)
void ABP_TrophyRoomMonitorDisplay_C::IconRotate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__UpdateFunc");

	ABP_TrophyRoomMonitorDisplay_C_IconRotate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TrophyRoomMonitorDisplay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ReceiveBeginPlay");

	ABP_TrophyRoomMonitorDisplay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ExecuteUbergraph_BP_TrophyRoomMonitorDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TrophyRoomMonitorDisplay_C::ExecuteUbergraph_BP_TrophyRoomMonitorDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ExecuteUbergraph_BP_TrophyRoomMonitorDisplay");

	ABP_TrophyRoomMonitorDisplay_C_ExecuteUbergraph_BP_TrophyRoomMonitorDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
