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

// Function BW_Glove.BW_Glove_C.UserConstructionScript
struct ABW_Glove_C_UserConstructionScript_Params
{
};

// Function BW_Glove.BW_Glove_C.ReceiveEndPlay
struct ABW_Glove_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Glove.BW_Glove_C.BallThrown
struct ABW_Glove_C_BallThrown_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Glove.BW_Glove_C.ReceiveBeginPlay
struct ABW_Glove_C_ReceiveBeginPlay_Params
{
};

// Function BW_Glove.BW_Glove_C.OnThrowFinalized
struct ABW_Glove_C_OnThrowFinalized_Params
{
	class ABowlingBall*                                Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Glove.BW_Glove_C.DestroyPrimitive
struct ABW_Glove_C_DestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Glove.BW_Glove_C.ExecuteUbergraph_BW_Glove
struct ABW_Glove_C_ExecuteUbergraph_BW_Glove_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Glove.BW_Glove_C.FinalizeThrow__DelegateSignature
struct ABW_Glove_C_FinalizeThrow__DelegateSignature_Params
{
	class ABowlingBall*                                BowlingBall;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
