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

// Function DB_Instrument_Base.DB_Instrument_Base_C.BallHitRacket
struct ADB_Instrument_Base_C_BallHitRacket_Params
{
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.SetSFXOverride
struct ADB_Instrument_Base_C_SetSFXOverride_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HardHit;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.PlayBallHitSound
struct ADB_Instrument_Base_C_PlayBallHitSound_Params
{
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.InitInstrument
struct ADB_Instrument_Base_C_InitInstrument_Params
{
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.UserConstructionScript
struct ADB_Instrument_Base_C_UserConstructionScript_Params
{
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__FinishedFunc
struct ADB_Instrument_Base_C_Grow__FinishedFunc_Params
{
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.Grow__UpdateFunc
struct ADB_Instrument_Base_C_Grow__UpdateFunc_Params
{
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__FinishedFunc
struct ADB_Instrument_Base_C_Shrink__FinishedFunc_Params
{
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.Shrink__UpdateFunc
struct ADB_Instrument_Base_C_Shrink__UpdateFunc_Params
{
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.ShowInstrument
struct ADB_Instrument_Base_C_ShowInstrument_Params
{
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.ShrinkRemoveInstrument
struct ADB_Instrument_Base_C_ShrinkRemoveInstrument_Params
{
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.ReceiveBeginPlay
struct ADB_Instrument_Base_C_ReceiveBeginPlay_Params
{
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.InstrumentReleased
struct ADB_Instrument_Base_C_InstrumentReleased_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.DestroyPrimitive
struct ADB_Instrument_Base_C_DestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DB_Instrument_Base.DB_Instrument_Base_C.ExecuteUbergraph_DB_Instrument_Base
struct ADB_Instrument_Base_C_ExecuteUbergraph_DB_Instrument_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
