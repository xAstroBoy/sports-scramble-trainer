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

// Function BB_ThrowingGlove.BB_ThrowingGlove_C.UserConstructionScript
struct ABB_ThrowingGlove_C_UserConstructionScript_Params
{
};

// Function BB_ThrowingGlove.BB_ThrowingGlove_C.ReceiveBeginPlay
struct ABB_ThrowingGlove_C_ReceiveBeginPlay_Params
{
};

// Function BB_ThrowingGlove.BB_ThrowingGlove_C.BallThrown
struct ABB_ThrowingGlove_C_BallThrown_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_ThrowingGlove.BB_ThrowingGlove_C.ReceiveEndPlay
struct ABB_ThrowingGlove_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_ThrowingGlove.BB_ThrowingGlove_C.DestroyPrimitive
struct ABB_ThrowingGlove_C_DestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_ThrowingGlove.BB_ThrowingGlove_C.ExecuteUbergraph_BB_ThrowingGlove
struct ABB_ThrowingGlove_C_ExecuteUbergraph_BB_ThrowingGlove_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
