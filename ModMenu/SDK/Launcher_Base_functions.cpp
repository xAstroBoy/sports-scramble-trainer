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

// Function Launcher_Base.Launcher_Base_C.LaunchBallWithTrajectory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScramTrajectory        trajectory                     (BlueprintVisible, BlueprintReadOnly, Parm)
void ALauncher_Base_C::LaunchBallWithTrajectory(const struct FScramTrajectory& trajectory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.LaunchBallWithTrajectory");

	ALauncher_Base_C_LaunchBallWithTrajectory_Params params;
	params.trajectory = trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.UpdateBallType
// (Public, BlueprintCallable, BlueprintEvent)
void ALauncher_Base_C::UpdateBallType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.UpdateBallType");

	ALauncher_Base_C_UpdateBallType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.CreateSpawnSFX
// (Public, BlueprintCallable, BlueprintEvent)
void ALauncher_Base_C::CreateSpawnSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.CreateSpawnSFX");

	ALauncher_Base_C_CreateSpawnSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.CreateSpawnVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALauncher_Base_C::CreateSpawnVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.CreateSpawnVFX");

	ALauncher_Base_C_CreateSpawnVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.LaunchBall
// (Public, BlueprintCallable, BlueprintEvent)
void ALauncher_Base_C::LaunchBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.LaunchBall");

	ALauncher_Base_C_LaunchBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ALauncher_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.UserConstructionScript");

	ALauncher_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.InpActEvt_X_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALauncher_Base_C::InpActEvt_X_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.InpActEvt_X_K2Node_InputActionEvent_4");

	ALauncher_Base_C_InpActEvt_X_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.InpActEvt_Y_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALauncher_Base_C::InpActEvt_Y_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.InpActEvt_Y_K2Node_InputActionEvent_3");

	ALauncher_Base_C_InpActEvt_Y_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.InpActEvt_A_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALauncher_Base_C::InpActEvt_A_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.InpActEvt_A_K2Node_InputActionEvent_2");

	ALauncher_Base_C_InpActEvt_A_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.InpActEvt_B_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ALauncher_Base_C::InpActEvt_B_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.InpActEvt_B_K2Node_InputActionEvent_1");

	ALauncher_Base_C_InpActEvt_B_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALauncher_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.ReceiveBeginPlay");

	ALauncher_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.BeginLooping
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LoopDelay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALauncher_Base_C::BeginLooping(float LoopDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.BeginLooping");

	ALauncher_Base_C_BeginLooping_Params params;
	params.LoopDelay = LoopDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.StopLooping
// (BlueprintCallable, BlueprintEvent)
void ALauncher_Base_C::StopLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.StopLooping");

	ALauncher_Base_C_StopLooping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.ExecuteUbergraph_Launcher_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALauncher_Base_C::ExecuteUbergraph_Launcher_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.ExecuteUbergraph_Launcher_Base");

	ALauncher_Base_C_ExecuteUbergraph_Launcher_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Launcher_Base.Launcher_Base_C.BallLaunched__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALauncher_Base_C::BallLaunched__DelegateSignature(class AActor* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function Launcher_Base.Launcher_Base_C.BallLaunched__DelegateSignature");

	ALauncher_Base_C_BallLaunched__DelegateSignature_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
