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

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RemoveGameElement
struct ABB_PassNPlay_ScrambleTargetGroup_C_RemoveGameElement_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Ball
struct ABB_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Ball_Params
{
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ScrambleClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RemoveAllTargets
struct ABB_PassNPlay_ScrambleTargetGroup_C_RemoveAllTargets_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.SpawnIcon_Instrument
struct ABB_PassNPlay_ScrambleTargetGroup_C_SpawnIcon_Instrument_Params
{
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ScrambleClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.Initialize
struct ABB_PassNPlay_ScrambleTargetGroup_C_Initialize_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.UserConstructionScript
struct ABB_PassNPlay_ScrambleTargetGroup_C_UserConstructionScript_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateBall__FinishedFunc
struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateBall__FinishedFunc_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateBall__UpdateFunc
struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateBall__UpdateFunc_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__FinishedFunc
struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__FinishedFunc_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateInstrument__UpdateFunc
struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateInstrument__UpdateFunc_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.ReceiveBeginPlay
struct ABB_PassNPlay_ScrambleTargetGroup_C_ReceiveBeginPlay_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.ReceiveEndPlay
struct ABB_PassNPlay_ScrambleTargetGroup_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateBallIcon
struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateBallIcon_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.RotateInstrumentIcon
struct ABB_PassNPlay_ScrambleTargetGroup_C_RotateInstrumentIcon_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.StopBallIcon
struct ABB_PassNPlay_ScrambleTargetGroup_C_StopBallIcon_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.StopInstrumentIcon
struct ABB_PassNPlay_ScrambleTargetGroup_C_StopInstrumentIcon_Params
{
};

// Function BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C.ExecuteUbergraph_BB_PassNPlay_ScrambleTargetGroup
struct ABB_PassNPlay_ScrambleTargetGroup_C_ExecuteUbergraph_BB_PassNPlay_ScrambleTargetGroup_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
