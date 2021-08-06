#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BowlingLaneManager.BowlingLaneManager_C.GetActiveLaneFromLaneManager
struct ABowlingLaneManager_C_GetActiveLaneFromLaneManager_Params
{
	class ABowlingLane_Base_C*                         ActiveLane;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLaneManager.BowlingLaneManager_C.Cleanup
struct ABowlingLaneManager_C_Cleanup_Params
{
};

// Function BowlingLaneManager.BowlingLaneManager_C.Initialize
struct ABowlingLaneManager_C_Initialize_Params
{
};

// Function BowlingLaneManager.BowlingLaneManager_C.UserConstructionScript
struct ABowlingLaneManager_C_UserConstructionScript_Params
{
};

// Function BowlingLaneManager.BowlingLaneManager_C.Timeline_Rotate__FinishedFunc
struct ABowlingLaneManager_C_Timeline_Rotate__FinishedFunc_Params
{
};

// Function BowlingLaneManager.BowlingLaneManager_C.Timeline_Rotate__UpdateFunc
struct ABowlingLaneManager_C_Timeline_Rotate__UpdateFunc_Params
{
};

// Function BowlingLaneManager.BowlingLaneManager_C.OnLoaded_A340E5A5483A21462088559EC818FD3F
struct ABowlingLaneManager_C_OnLoaded_A340E5A5483A21462088559EC818FD3F_Params
{
	class UClass*                                      Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLaneManager.BowlingLaneManager_C.OnLoaded_E6FCE9674C6651125FB54A88D97CC36B
struct ABowlingLaneManager_C_OnLoaded_E6FCE9674C6651125FB54A88D97CC36B_Params
{
	class UClass*                                      Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLaneManager.BowlingLaneManager_C.ReceiveBeginPlay
struct ABowlingLaneManager_C_ReceiveBeginPlay_Params
{
};

// Function BowlingLaneManager.BowlingLaneManager_C.LaneManagerNewLane
struct ABowlingLaneManager_C_LaneManagerNewLane_Params
{
};

// Function BowlingLaneManager.BowlingLaneManager_C.ReceiveEndPlay
struct ABowlingLaneManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLaneManager.BowlingLaneManager_C.SpawnNewLane
struct ABowlingLaneManager_C_SpawnNewLane_Params
{
};

// Function BowlingLaneManager.BowlingLaneManager_C.LaneSetupComplete
struct ABowlingLaneManager_C_LaneSetupComplete_Params
{
};

// Function BowlingLaneManager.BowlingLaneManager_C.RotateLanes
struct ABowlingLaneManager_C_RotateLanes_Params
{
	class USoundBase*                                  AnnouncerVO;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLaneManager.BowlingLaneManager_C.ExecuteUbergraph_BowlingLaneManager
struct ABowlingLaneManager_C_ExecuteUbergraph_BowlingLaneManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLaneManager.BowlingLaneManager_C.LaneManagerReplacingLane__DelegateSignature
struct ABowlingLaneManager_C_LaneManagerReplacingLane__DelegateSignature_Params
{
	class ABowlingLane_Base_C*                         ReplacementLane;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingLane_Base_C*                         OutgoingLane;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BowlingLaneManager.BowlingLaneManager_C.LaneSwapComplete__DelegateSignature
struct ABowlingLaneManager_C_LaneSwapComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
