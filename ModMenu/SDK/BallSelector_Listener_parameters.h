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

// Function BallSelector_Listener.BallSelector_Listener_C.UserConstructionScript
struct ABallSelector_Listener_C_UserConstructionScript_Params
{
};

// Function BallSelector_Listener.BallSelector_Listener_C.ReceiveBeginPlay
struct ABallSelector_Listener_C_ReceiveBeginPlay_Params
{
};

// Function BallSelector_Listener.BallSelector_Listener_C.ReceiveBaseballEvent
struct ABallSelector_Listener_C_ReceiveBaseballEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallSelector_Listener.BallSelector_Listener_C.ReceiveEndPlay
struct ABallSelector_Listener_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BallSelector_Listener.BallSelector_Listener_C.Sides_Switched
struct ABallSelector_Listener_C_Sides_Switched_Params
{
};

// Function BallSelector_Listener.BallSelector_Listener_C.ExecuteUbergraph_BallSelector_Listener
struct ABallSelector_Listener_C_ExecuteUbergraph_BallSelector_Listener_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
