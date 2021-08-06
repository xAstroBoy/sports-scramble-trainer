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

// Function BW_VibroBall.BW_VibroBall_C.UserConstructionScript
struct ABW_VibroBall_C_UserConstructionScript_Params
{
};

// Function BW_VibroBall.BW_VibroBall_C.VibroBallGrabbed
struct ABW_VibroBall_C_VibroBallGrabbed_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_VibroBall.BW_VibroBall_C.VibroBallHit
struct ABW_VibroBall_C_VibroBallHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_VibroBall.BW_VibroBall_C.ReceiveBeginPlay
struct ABW_VibroBall_C_ReceiveBeginPlay_Params
{
};

// Function BW_VibroBall.BW_VibroBall_C.ReceiveEndPlay
struct ABW_VibroBall_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_VibroBall.BW_VibroBall_C.ExecuteUbergraph_BW_VibroBall
struct ABW_VibroBall_C_ExecuteUbergraph_BW_VibroBall_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
