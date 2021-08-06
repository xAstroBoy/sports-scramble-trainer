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

// Function BW_Ball_Base.BW_Ball_Base_C.UpdateMesh
struct ABW_Ball_Base_C_UpdateMesh_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.RemoveBindings
struct ABW_Ball_Base_C_RemoveBindings_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.SetBindings
struct ABW_Ball_Base_C_SetBindings_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.StopAllShotTypeFX
struct ABW_Ball_Base_C_StopAllShotTypeFX_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.StopChargedSliceFX
struct ABW_Ball_Base_C_StopChargedSliceFX_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.PlayChargedSliceFX
struct ABW_Ball_Base_C_PlayChargedSliceFX_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.StopSliceFX
struct ABW_Ball_Base_C_StopSliceFX_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.PlaySliceFX
struct ABW_Ball_Base_C_PlaySliceFX_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.StopChargedFX
struct ABW_Ball_Base_C_StopChargedFX_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.PlayChargedFX
struct ABW_Ball_Base_C_PlayChargedFX_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.StopImbuedFX
struct ABW_Ball_Base_C_StopImbuedFX_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.PlayImbuedFX
struct ABW_Ball_Base_C_PlayImbuedFX_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.PlayDespawnFX
struct ABW_Ball_Base_C_PlayDespawnFX_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.PlaySpawnFX
struct ABW_Ball_Base_C_PlaySpawnFX_Params
{
	bool                                               SfxOnly;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Ball_Base.BW_Ball_Base_C.SetTrail
struct ABW_Ball_Base_C_SetTrail_Params
{
	SportsScramble_EBowlingThrowType                   ThrowType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Ball_Base.BW_Ball_Base_C.ClearTrail
struct ABW_Ball_Base_C_ClearTrail_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.UserConstructionScript
struct ABW_Ball_Base_C_UserConstructionScript_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.ReceiveBeginPlay
struct ABW_Ball_Base_C_ReceiveBeginPlay_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.ReceiveEndPlay
struct ABW_Ball_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Ball_Base.BW_Ball_Base_C.BallGrabbed
struct ABW_Ball_Base_C_BallGrabbed_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Ball_Base.BW_Ball_Base_C.OnThrowChanged
struct ABW_Ball_Base_C_OnThrowChanged_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.OnFloorResultChanged
struct ABW_Ball_Base_C_OnFloorResultChanged_Params
{
	SportsScramble_EFloorResult                        newFloorResult;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Ball_Base.BW_Ball_Base_C.DestroyPrimitive
struct ABW_Ball_Base_C_DestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Ball_Base.BW_Ball_Base_C.ScaleBall
struct ABW_Ball_Base_C_ScaleBall_Params
{
};

// Function BW_Ball_Base.BW_Ball_Base_C.OnScaleUpFinished
struct ABW_Ball_Base_C_OnScaleUpFinished_Params
{
	bool                                               Forward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Ball_Base.BW_Ball_Base_C.OnHitPin
struct ABW_Ball_Base_C_OnHitPin_Params
{
	class ABowlingPin*                                 Pin;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Ball_Base.BW_Ball_Base_C.OnHitLane
struct ABW_Ball_Base_C_OnHitLane_Params
{
	class ABowlingLane*                                Lane;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              bounceSpeed;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Ball_Base.BW_Ball_Base_C.OnHitFootballBlocker
struct ABW_Ball_Base_C_OnHitFootballBlocker_Params
{
	class ABowlingFootballBlocker*                     FootballBlocker;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Ball_Base.BW_Ball_Base_C.ExecuteUbergraph_BW_Ball_Base
struct ABW_Ball_Base_C_ExecuteUbergraph_BW_Ball_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Ball_Base.BW_Ball_Base_C.ThrowChanged__DelegateSignature
struct ABW_Ball_Base_C_ThrowChanged__DelegateSignature_Params
{
	struct FBowlingThrow                               ThrowStructure;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class ABW_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
