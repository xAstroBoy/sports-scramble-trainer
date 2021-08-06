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

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ValidateBallTrajectory
struct ABaseballPitchingTarget_BP_C_ValidateBallTrajectory_Params
{
	class AScramBall*                                  Incoming_Ball;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid_Hit;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.SetVisibleElements
struct ABaseballPitchingTarget_BP_C_SetVisibleElements_Params
{
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.UserConstructionScript
struct ABaseballPitchingTarget_BP_C_UserConstructionScript_Params
{
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveBeginPlay
struct ABaseballPitchingTarget_BP_C_ReceiveBeginPlay_Params
{
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.OnTriggered
struct ABaseballPitchingTarget_BP_C_OnTriggered_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.AutoCleanup
struct ABaseballPitchingTarget_BP_C_AutoCleanup_Params
{
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.Break Target
struct ABaseballPitchingTarget_BP_C_Break_Target_Params
{
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalShow
struct ABaseballPitchingTarget_BP_C_LocalShow_Params
{
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.LocalHide
struct ABaseballPitchingTarget_BP_C_LocalHide_Params
{
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ChangeTargetVisibility
struct ABaseballPitchingTarget_BP_C_ChangeTargetVisibility_Params
{
	bool                                               ShowTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ReceiveEndPlay
struct ABaseballPitchingTarget_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.ExecuteUbergraph_BaseballPitchingTarget_BP
struct ABaseballPitchingTarget_BP_C_ExecuteUbergraph_BaseballPitchingTarget_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballPitchingTarget_BP.BaseballPitchingTarget_BP_C.PitchingTargetHit__DelegateSignature
struct ABaseballPitchingTarget_BP_C_PitchingTargetHit__DelegateSignature_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
