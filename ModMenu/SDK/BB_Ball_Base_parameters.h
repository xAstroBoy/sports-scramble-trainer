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

// Function BB_Ball_Base.BB_Ball_Base_C.UpdateMesh
struct ABB_Ball_Base_C_UpdateMesh_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.StopPitchVFX
struct ABB_Ball_Base_C_StopPitchVFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.StopRollingFX
struct ABB_Ball_Base_C_StopRollingFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.PlayPitchVFX
struct ABB_Ball_Base_C_PlayPitchVFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.StopAllShotTypeFX
struct ABB_Ball_Base_C_StopAllShotTypeFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.StopChargedSliceFX
struct ABB_Ball_Base_C_StopChargedSliceFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.PlayChargedSliceFX
struct ABB_Ball_Base_C_PlayChargedSliceFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.StopSliceFX
struct ABB_Ball_Base_C_StopSliceFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.PlaySliceFX
struct ABB_Ball_Base_C_PlaySliceFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.StopChargedFX
struct ABB_Ball_Base_C_StopChargedFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.PlayChargedFX
struct ABB_Ball_Base_C_PlayChargedFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.StopImbuedFX
struct ABB_Ball_Base_C_StopImbuedFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.PlayImbuedFX
struct ABB_Ball_Base_C_PlayImbuedFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.PlayDespawnFX
struct ABB_Ball_Base_C_PlayDespawnFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.PlaySpawnFX
struct ABB_Ball_Base_C_PlaySpawnFX_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.SetTrail
struct ABB_Ball_Base_C_SetTrail_Params
{
	SportsScramble_EBaseballShotType                   ShotType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Ball_Base.BB_Ball_Base_C.ClearTrail
struct ABB_Ball_Base_C_ClearTrail_Params
{
	bool                                               snap;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Ball_Base.BB_Ball_Base_C.UserConstructionScript
struct ABB_Ball_Base_C_UserConstructionScript_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.Timeline_GrowTrail__FinishedFunc
struct ABB_Ball_Base_C_Timeline_GrowTrail__FinishedFunc_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.Timeline_GrowTrail__UpdateFunc
struct ABB_Ball_Base_C_Timeline_GrowTrail__UpdateFunc_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.ReceiveBeginPlay
struct ABB_Ball_Base_C_ReceiveBeginPlay_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.ReceiveEndPlay
struct ABB_Ball_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Ball_Base.BB_Ball_Base_C.Ball Hit
struct ABB_Ball_Base_C_Ball_Hit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Ball_Base.BB_Ball_Base_C.BallGrabbed
struct ABB_Ball_Base_C_BallGrabbed_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Ball_Base.BB_Ball_Base_C.BaseballHit
struct ABB_Ball_Base_C_BaseballHit_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.OnShotChanged
struct ABB_Ball_Base_C_OnShotChanged_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.DestroyPrimitive
struct ABB_Ball_Base_C_DestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Ball_Base.BB_Ball_Base_C.PitcherThrewBall
struct ABB_Ball_Base_C_PitcherThrewBall_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.OnFloorResultChanged
struct ABB_Ball_Base_C_OnFloorResultChanged_Params
{
	SportsScramble_EFloorResult                        newFloorResult;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Ball_Base.BB_Ball_Base_C.BackWallHit
struct ABB_Ball_Base_C_BackWallHit_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.OnImbuedChanged
struct ABB_Ball_Base_C_OnImbuedChanged_Params
{
};

// Function BB_Ball_Base.BB_Ball_Base_C.Net_ChangeImbueVFX
struct ABB_Ball_Base_C_Net_ChangeImbueVFX_Params
{
	bool                                               ShowVFX;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Ball_Base.BB_Ball_Base_C.ExecuteUbergraph_BB_Ball_Base
struct ABB_Ball_Base_C_ExecuteUbergraph_BB_Ball_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
