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

// Function DebugString_BP.DebugString_BP_C.Initialize
struct ADebugString_BP_C_Initialize_Params
{
};

// Function DebugString_BP.DebugString_BP_C.UserConstructionScript
struct ADebugString_BP_C_UserConstructionScript_Params
{
};

// Function DebugString_BP.DebugString_BP_C.ReceiveBeginPlay
struct ADebugString_BP_C_ReceiveBeginPlay_Params
{
};

// Function DebugString_BP.DebugString_BP_C.UpdateText
struct ADebugString_BP_C_UpdateText_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              LifeTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugString_BP.DebugString_BP_C.ReceiveTick
struct ADebugString_BP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DebugString_BP.DebugString_BP_C.ExecuteUbergraph_DebugString_BP
struct ADebugString_BP_C_ExecuteUbergraph_DebugString_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
