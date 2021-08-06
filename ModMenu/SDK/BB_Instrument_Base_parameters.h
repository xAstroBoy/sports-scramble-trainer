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

// Function BB_Instrument_Base.BB_Instrument_Base_C.BallHitRacket
struct ABB_Instrument_Base_C_BallHitRacket_Params
{
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.UpdateMesh
struct ABB_Instrument_Base_C_UpdateMesh_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.SelectRandomReplacement
struct ABB_Instrument_Base_C_SelectRandomReplacement_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.PlaySpawnFX
struct ABB_Instrument_Base_C_PlaySpawnFX_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.SetSFXOverride
struct ABB_Instrument_Base_C_SetSFXOverride_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HardHit;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.PlayBallHitSound
struct ABB_Instrument_Base_C_PlayBallHitSound_Params
{
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.InitInstrument
struct ABB_Instrument_Base_C_InitInstrument_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.UserConstructionScript
struct ABB_Instrument_Base_C_UserConstructionScript_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__FinishedFunc
struct ABB_Instrument_Base_C_Grow__FinishedFunc_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.Grow__UpdateFunc
struct ABB_Instrument_Base_C_Grow__UpdateFunc_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__FinishedFunc
struct ABB_Instrument_Base_C_Shrink__FinishedFunc_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.Shrink__UpdateFunc
struct ABB_Instrument_Base_C_Shrink__UpdateFunc_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.OnLoaded_427B66CA4A4B8B64A37F659956E60B75
struct ABB_Instrument_Base_C_OnLoaded_427B66CA4A4B8B64A37F659956E60B75_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.ShowInstrument
struct ABB_Instrument_Base_C_ShowInstrument_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.ShrinkRemoveInstrument
struct ABB_Instrument_Base_C_ShrinkRemoveInstrument_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.ReceiveBeginPlay
struct ABB_Instrument_Base_C_ReceiveBeginPlay_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentReleased
struct ABB_Instrument_Base_C_InstrumentReleased_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.DestroyPrimitive
struct ABB_Instrument_Base_C_DestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentSelected
struct ABB_Instrument_Base_C_InstrumentSelected_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.SpawnEffect
struct ABB_Instrument_Base_C_SpawnEffect_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.DisableSpawnFX
struct ABB_Instrument_Base_C_DisableSpawnFX_Params
{
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.InstrumentHit
struct ABB_Instrument_Base_C_InstrumentHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Instrument_Base.BB_Instrument_Base_C.ExecuteUbergraph_BB_Instrument_Base
struct ABB_Instrument_Base_C_ExecuteUbergraph_BB_Instrument_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
