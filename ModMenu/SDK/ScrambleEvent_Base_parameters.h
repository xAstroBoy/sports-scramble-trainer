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

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.GetNewBallType
struct AScrambleEvent_Base_C_GetNewBallType_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.QueueScrambleEffect
struct AScrambleEvent_Base_C_QueueScrambleEffect_Params
{
	struct FScriptDelegate                             BallHitDelegate;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FScriptDelegate                             OnDestroyedDelegate;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.ActivateScrambleEffect
struct AScrambleEvent_Base_C_ActivateScrambleEffect_Params
{
	class ATN_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ScrambleEffectSuccess;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.UserConstructionScript
struct AScrambleEvent_Base_C_UserConstructionScript_Params
{
};

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.ReceiveBeginPlay
struct AScrambleEvent_Base_C_ReceiveBeginPlay_Params
{
};

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.BallHit
struct AScrambleEvent_Base_C_BallHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.DestroySelf
struct AScrambleEvent_Base_C_DestroySelf_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.PerformScrambleEffect
struct AScrambleEvent_Base_C_PerformScrambleEffect_Params
{
	class ATN_Ball_Base_C*                             NewBall;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.CheckEquipmentMatch
struct AScrambleEvent_Base_C_CheckEquipmentMatch_Params
{
	class ATN_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckInstrument;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATN_Instrument_Base_C*                       Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocalPlayerInstrument_;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScrambleEvent_Base.ScrambleEvent_Base_C.ExecuteUbergraph_ScrambleEvent_Base
struct AScrambleEvent_Base_C_ExecuteUbergraph_ScrambleEvent_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
