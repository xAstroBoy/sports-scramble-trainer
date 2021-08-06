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

// Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.UserConstructionScript
struct ABP_Trophy_BB_GoldenGlove_C_UserConstructionScript_Params
{
};

// Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.GrabbedBall
struct ABP_Trophy_BB_GoldenGlove_C_GrabbedBall_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ReceiveBeginPlay
struct ABP_Trophy_BB_GoldenGlove_C_ReceiveBeginPlay_Params
{
};

// Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.CatchEvent
struct ABP_Trophy_BB_GoldenGlove_C_CatchEvent_Params
{
	struct FVector                                     FielderPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C.ExecuteUbergraph_BP_Trophy_BB_GoldenGlove
struct ABP_Trophy_BB_GoldenGlove_C_ExecuteUbergraph_BP_Trophy_BB_GoldenGlove_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
