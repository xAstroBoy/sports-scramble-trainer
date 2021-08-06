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

// Function BattingTee.BattingTee_C.OnRep_AutoActivateDeactivate
struct ABattingTee_C_OnRep_AutoActivateDeactivate_Params
{
};

// Function BattingTee.BattingTee_C.Initialize
struct ABattingTee_C_Initialize_Params
{
};

// Function BattingTee.BattingTee_C.RemoveInstructions
struct ABattingTee_C_RemoveInstructions_Params
{
};

// Function BattingTee.BattingTee_C.SpawnInstructions
struct ABattingTee_C_SpawnInstructions_Params
{
};

// Function BattingTee.BattingTee_C.HideBallUnderFloor
struct ABattingTee_C_HideBallUnderFloor_Params
{
};

// Function BattingTee.BattingTee_C.OnRep_Ball
struct ABattingTee_C_OnRep_Ball_Params
{
};

// Function BattingTee.BattingTee_C.UserConstructionScript
struct ABattingTee_C_UserConstructionScript_Params
{
};

// Function BattingTee.BattingTee_C.Pole_2_Rise__FinishedFunc
struct ABattingTee_C_Pole_2_Rise__FinishedFunc_Params
{
};

// Function BattingTee.BattingTee_C.Pole_2_Rise__UpdateFunc
struct ABattingTee_C_Pole_2_Rise__UpdateFunc_Params
{
};

// Function BattingTee.BattingTee_C.Pole_1_Rise__FinishedFunc
struct ABattingTee_C_Pole_1_Rise__FinishedFunc_Params
{
};

// Function BattingTee.BattingTee_C.Pole_1_Rise__UpdateFunc
struct ABattingTee_C_Pole_1_Rise__UpdateFunc_Params
{
};

// Function BattingTee.BattingTee_C.Base_Rise__FinishedFunc
struct ABattingTee_C_Base_Rise__FinishedFunc_Params
{
};

// Function BattingTee.BattingTee_C.Base_Rise__UpdateFunc
struct ABattingTee_C_Base_Rise__UpdateFunc_Params
{
};

// Function BattingTee.BattingTee_C.HomePlateAnimate__FinishedFunc
struct ABattingTee_C_HomePlateAnimate__FinishedFunc_Params
{
};

// Function BattingTee.BattingTee_C.HomePlateAnimate__UpdateFunc
struct ABattingTee_C_HomePlateAnimate__UpdateFunc_Params
{
};

// Function BattingTee.BattingTee_C.Timeline_FakeBallAppear__FinishedFunc
struct ABattingTee_C_Timeline_FakeBallAppear__FinishedFunc_Params
{
};

// Function BattingTee.BattingTee_C.Timeline_FakeBallAppear__UpdateFunc
struct ABattingTee_C_Timeline_FakeBallAppear__UpdateFunc_Params
{
};

// Function BattingTee.BattingTee_C.MoveBallUnderHomeplate
struct ABattingTee_C_MoveBallUnderHomeplate_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoActivateAndDeactivate;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BattingTee.BattingTee_C.BallGrabbed
struct ABattingTee_C_BallGrabbed_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BattingTee.BattingTee_C.ReleaseBall
struct ABattingTee_C_ReleaseBall_Params
{
};

// Function BattingTee.BattingTee_C.ReceiveBeginPlay
struct ABattingTee_C_ReceiveBeginPlay_Params
{
};

// Function BattingTee.BattingTee_C.TeedBallHit
struct ABattingTee_C_TeedBallHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BattingTee.BattingTee_C.BallHit
struct ABattingTee_C_BallHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BattingTee.BattingTee_C.AllowHit
struct ABattingTee_C_AllowHit_Params
{
};

// Function BattingTee.BattingTee_C.Pole_2_Up
struct ABattingTee_C_Pole_2_Up_Params
{
};

// Function BattingTee.BattingTee_C.DeactivateTee
struct ABattingTee_C_DeactivateTee_Params
{
};

// Function BattingTee.BattingTee_C.Pole_1_Up
struct ABattingTee_C_Pole_1_Up_Params
{
};

// Function BattingTee.BattingTee_C.Pole_1_Down
struct ABattingTee_C_Pole_1_Down_Params
{
};

// Function BattingTee.BattingTee_C.Base_Up
struct ABattingTee_C_Base_Up_Params
{
};

// Function BattingTee.BattingTee_C.Base_Down
struct ABattingTee_C_Base_Down_Params
{
};

// Function BattingTee.BattingTee_C.ActivateTee
struct ABattingTee_C_ActivateTee_Params
{
};

// Function BattingTee.BattingTee_C.HomePlate_Close
struct ABattingTee_C_HomePlate_Close_Params
{
};

// Function BattingTee.BattingTee_C.GenerateBattingTeeBall
struct ABattingTee_C_GenerateBattingTeeBall_Params
{
	class UClass*                                      ScramBallClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoActivateAndDeactivate;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BattingTee.BattingTee_C.RegisterBallBindings
struct ABattingTee_C_RegisterBallBindings_Params
{
};

// Function BattingTee.BattingTee_C.FakeBallAppear
struct ABattingTee_C_FakeBallAppear_Params
{
};

// Function BattingTee.BattingTee_C.ExecuteUbergraph_BattingTee
struct ABattingTee_C_ExecuteUbergraph_BattingTee_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BattingTee.BattingTee_C.TeeDeactivated__DelegateSignature
struct ABattingTee_C_TeeDeactivated__DelegateSignature_Params
{
};

// Function BattingTee.BattingTee_C.TeeBallAwaitingHit__DelegateSignature
struct ABattingTee_C_TeeBallAwaitingHit__DelegateSignature_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BattingTee.BattingTee_C.TeeBallHit__DelegateSignature
struct ABattingTee_C_TeeBallHit__DelegateSignature_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
