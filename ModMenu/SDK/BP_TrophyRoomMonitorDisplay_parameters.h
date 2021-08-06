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

// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.HideTrophyInfo
struct ABP_TrophyRoomMonitorDisplay_C_HideTrophyInfo_Params
{
};

// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ShowTrophyInfo
struct ABP_TrophyRoomMonitorDisplay_C_ShowTrophyInfo_Params
{
	struct FName                                       TrophyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               WasEarned;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     DateEarned;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Requirement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.UserConstructionScript
struct ABP_TrophyRoomMonitorDisplay_C_UserConstructionScript_Params
{
};

// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__FinishedFunc
struct ABP_TrophyRoomMonitorDisplay_C_IconRotate__FinishedFunc_Params
{
};

// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.IconRotate__UpdateFunc
struct ABP_TrophyRoomMonitorDisplay_C_IconRotate__UpdateFunc_Params
{
};

// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ReceiveBeginPlay
struct ABP_TrophyRoomMonitorDisplay_C_ReceiveBeginPlay_Params
{
};

// Function BP_TrophyRoomMonitorDisplay.BP_TrophyRoomMonitorDisplay_C.ExecuteUbergraph_BP_TrophyRoomMonitorDisplay
struct ABP_TrophyRoomMonitorDisplay_C_ExecuteUbergraph_BP_TrophyRoomMonitorDisplay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
