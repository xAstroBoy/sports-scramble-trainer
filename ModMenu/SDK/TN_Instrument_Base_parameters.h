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

// Function TN_Instrument_Base.TN_Instrument_Base_C.BallHitRacket
struct ATN_Instrument_Base_C_BallHitRacket_Params
{
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.UpdateMesh
struct ATN_Instrument_Base_C_UpdateMesh_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.InitializeColors&Material
struct ATN_Instrument_Base_C_InitializeColors_Material_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.PrepareMotionBlur
struct ATN_Instrument_Base_C_PrepareMotionBlur_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.PlaySpawnFX
struct ATN_Instrument_Base_C_PlaySpawnFX_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.SetSFXOverride
struct ATN_Instrument_Base_C_SetSFXOverride_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HardHit;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.PlayBallHitSound
struct ATN_Instrument_Base_C_PlayBallHitSound_Params
{
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.InitInstrument
struct ATN_Instrument_Base_C_InitInstrument_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.UserConstructionScript
struct ATN_Instrument_Base_C_UserConstructionScript_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__FinishedFunc
struct ATN_Instrument_Base_C_Grow__FinishedFunc_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.Grow__UpdateFunc
struct ATN_Instrument_Base_C_Grow__UpdateFunc_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__FinishedFunc
struct ATN_Instrument_Base_C_Shrink__FinishedFunc_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.Shrink__UpdateFunc
struct ATN_Instrument_Base_C_Shrink__UpdateFunc_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__FinishedFunc
struct ATN_Instrument_Base_C_Timeline_Emissive__FinishedFunc_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.Timeline_Emissive__UpdateFunc
struct ATN_Instrument_Base_C_Timeline_Emissive__UpdateFunc_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.ShowInstrument
struct ATN_Instrument_Base_C_ShowInstrument_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.ShrinkRemoveInstrument
struct ATN_Instrument_Base_C_ShrinkRemoveInstrument_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.ReceiveBeginPlay
struct ATN_Instrument_Base_C_ReceiveBeginPlay_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.InstrumentReleased
struct ATN_Instrument_Base_C_InstrumentReleased_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.DestroyPrimitive
struct ATN_Instrument_Base_C_DestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.SpawnEffect
struct ATN_Instrument_Base_C_SpawnEffect_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.DisableSpawnFX
struct ATN_Instrument_Base_C_DisableSpawnFX_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.PlayHitShaderFX
struct ATN_Instrument_Base_C_PlayHitShaderFX_Params
{
	SportsScramble_ETennisShotType                     ShotType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_ETennisBallType                     BallType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarSwingVFX
struct ATN_Instrument_Base_C_TN_PlayAvatarSwingVFX_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.TN_PlayAvatarHitVFX
struct ATN_Instrument_Base_C_TN_PlayAvatarHitVFX_Params
{
};

// Function TN_Instrument_Base.TN_Instrument_Base_C.ExecuteUbergraph_TN_Instrument_Base
struct ATN_Instrument_Base_C_ExecuteUbergraph_TN_Instrument_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
