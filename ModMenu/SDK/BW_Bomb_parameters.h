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

// Function BW_Bomb.BW_Bomb_C.TryExplode
struct ABW_Bomb_C_TryExplode_Params
{
	bool                                               Force;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Bomb.BW_Bomb_C.HasExploded
struct ABW_Bomb_C_HasExploded_Params
{
	bool                                               has;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Bomb.BW_Bomb_C.UserConstructionScript
struct ABW_Bomb_C_UserConstructionScript_Params
{
};

// Function BW_Bomb.BW_Bomb_C.ReceiveBeginPlay
struct ABW_Bomb_C_ReceiveBeginPlay_Params
{
};

// Function BW_Bomb.BW_Bomb_C.ReceiveEndPlay
struct ABW_Bomb_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Bomb.BW_Bomb_C.ExplodeCheck
struct ABW_Bomb_C_ExplodeCheck_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Bomb.BW_Bomb_C.Local_ExplodeFX
struct ABW_Bomb_C_Local_ExplodeFX_Params
{
};

// Function BW_Bomb.BW_Bomb_C.PickedUp
struct ABW_Bomb_C_PickedUp_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Bomb.BW_Bomb_C.Multi_ExplodeFX
struct ABW_Bomb_C_Multi_ExplodeFX_Params
{
};

// Function BW_Bomb.BW_Bomb_C.Server_ExplodeFX
struct ABW_Bomb_C_Server_ExplodeFX_Params
{
};

// Function BW_Bomb.BW_Bomb_C.LR_ExplodeFX
struct ABW_Bomb_C_LR_ExplodeFX_Params
{
};

// Function BW_Bomb.BW_Bomb_C.ExecuteUbergraph_BW_Bomb
struct ABW_Bomb_C_ExecuteUbergraph_BW_Bomb_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
