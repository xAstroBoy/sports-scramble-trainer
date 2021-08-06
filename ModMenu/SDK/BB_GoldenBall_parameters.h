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

// Function BB_GoldenBall.BB_GoldenBall_C.UserConstructionScript
struct ABB_GoldenBall_C_UserConstructionScript_Params
{
};

// Function BB_GoldenBall.BB_GoldenBall_C.ReceiveBeginPlay
struct ABB_GoldenBall_C_ReceiveBeginPlay_Params
{
};

// Function BB_GoldenBall.BB_GoldenBall_C.ReceiveEndPlay
struct ABB_GoldenBall_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_GoldenBall.BB_GoldenBall_C.GoldenBallGrabbed
struct ABB_GoldenBall_C_GoldenBallGrabbed_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_GoldenBall.BB_GoldenBall_C.ExecuteUbergraph_BB_GoldenBall
struct ABB_GoldenBall_C_ExecuteUbergraph_BB_GoldenBall_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
