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

// Function MenuInstrument_BP.MenuInstrument_BP_C.BallHitRacket
struct AMenuInstrument_BP_C_BallHitRacket_Params
{
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.GetHand
struct AMenuInstrument_BP_C_GetHand_Params
{
	class AScramPlayerHand*                            Hand;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.InitializeMaterial
struct AMenuInstrument_BP_C_InitializeMaterial_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.PlayActivateSound
struct AMenuInstrument_BP_C_PlayActivateSound_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.PrepareMotionBlur
struct AMenuInstrument_BP_C_PrepareMotionBlur_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.PlaySpawnFX
struct AMenuInstrument_BP_C_PlaySpawnFX_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.SetSFXOverride
struct AMenuInstrument_BP_C_SetSFXOverride_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HardHit;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.PlayBallHitSound
struct AMenuInstrument_BP_C_PlayBallHitSound_Params
{
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.InitInstrument
struct AMenuInstrument_BP_C_InitInstrument_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.UserConstructionScript
struct AMenuInstrument_BP_C_UserConstructionScript_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.Grow__FinishedFunc
struct AMenuInstrument_BP_C_Grow__FinishedFunc_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.Grow__UpdateFunc
struct AMenuInstrument_BP_C_Grow__UpdateFunc_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.Shrink__FinishedFunc
struct AMenuInstrument_BP_C_Shrink__FinishedFunc_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.Shrink__UpdateFunc
struct AMenuInstrument_BP_C_Shrink__UpdateFunc_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.ShowInstrument
struct AMenuInstrument_BP_C_ShowInstrument_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.ShrinkRemoveInstrument
struct AMenuInstrument_BP_C_ShrinkRemoveInstrument_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.InstrumentReleased
struct AMenuInstrument_BP_C_InstrumentReleased_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.DestroyPrimitive
struct AMenuInstrument_BP_C_DestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.SpawnEffect
struct AMenuInstrument_BP_C_SpawnEffect_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.DisableSpawnFX
struct AMenuInstrument_BP_C_DisableSpawnFX_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.OnChangePointerType
struct AMenuInstrument_BP_C_OnChangePointerType_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.ReceiveBeginPlay
struct AMenuInstrument_BP_C_ReceiveBeginPlay_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.AdjustMenuPointer
struct AMenuInstrument_BP_C_AdjustMenuPointer_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.InitializeMenuPointer
struct AMenuInstrument_BP_C_InitializeMenuPointer_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.OnNotifyInputPress
struct AMenuInstrument_BP_C_OnNotifyInputPress_Params
{
};

// Function MenuInstrument_BP.MenuInstrument_BP_C.ExecuteUbergraph_MenuInstrument_BP
struct AMenuInstrument_BP_C_ExecuteUbergraph_MenuInstrument_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
