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

// Function BW_Egg.BW_Egg_C.HasHatched
struct ABW_Egg_C_HasHatched_Params
{
	bool                                               Hatched;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Egg.BW_Egg_C.Local_Hatch
struct ABW_Egg_C_Local_Hatch_Params
{
	struct FMotionState                                MotionState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BW_Egg.BW_Egg_C.UserConstructionScript
struct ABW_Egg_C_UserConstructionScript_Params
{
};

// Function BW_Egg.BW_Egg_C.ReceiveBeginPlay
struct ABW_Egg_C_ReceiveBeginPlay_Params
{
};

// Function BW_Egg.BW_Egg_C.ReceiveEndPlay
struct ABW_Egg_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Egg.BW_Egg_C.HatchCheck
struct ABW_Egg_C_HatchCheck_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Egg.BW_Egg_C.HatchFX
struct ABW_Egg_C_HatchFX_Params
{
};

// Function BW_Egg.BW_Egg_C.Hide Egg
struct ABW_Egg_C_Hide_Egg_Params
{
};

// Function BW_Egg.BW_Egg_C.Turkey Destroyed
struct ABW_Egg_C_Turkey_Destroyed_Params
{
	class AScramPrimitiveActor*                        Primitve_Actor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Egg.BW_Egg_C.SM_Hatch
struct ABW_Egg_C_SM_Hatch_Params
{
	struct FMotionState                                MotionState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BW_Egg.BW_Egg_C.Multi_Hatch
struct ABW_Egg_C_Multi_Hatch_Params
{
	struct FMotionState                                MotionState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BW_Egg.BW_Egg_C.ExecuteUbergraph_BW_Egg
struct ABW_Egg_C_ExecuteUbergraph_BW_Egg_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
