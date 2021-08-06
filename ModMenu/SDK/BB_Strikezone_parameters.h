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

// Function BB_Strikezone.BB_Strikezone_C.Initialize
struct ABB_Strikezone_C_Initialize_Params
{
};

// Function BB_Strikezone.BB_Strikezone_C.GrowQuad
struct ABB_Strikezone_C_GrowQuad_Params
{
};

// Function BB_Strikezone.BB_Strikezone_C.ShrinkQuad
struct ABB_Strikezone_C_ShrinkQuad_Params
{
};

// Function BB_Strikezone.BB_Strikezone_C.ShowDebugText
struct ABB_Strikezone_C_ShowDebugText_Params
{
	struct FString                                     String;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Strikezone.BB_Strikezone_C.UserConstructionScript
struct ABB_Strikezone_C_UserConstructionScript_Params
{
};

// Function BB_Strikezone.BB_Strikezone_C.ReceiveBeginPlay
struct ABB_Strikezone_C_ReceiveBeginPlay_Params
{
};

// Function BB_Strikezone.BB_Strikezone_C.UpdateStrikeZoneVisibility
struct ABB_Strikezone_C_UpdateStrikeZoneVisibility_Params
{
	bool                                               Hide;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Strikezone.BB_Strikezone_C.UpdateQuadVisibility
struct ABB_Strikezone_C_UpdateQuadVisibility_Params
{
	bool                                               TL;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TR;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BL;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BR;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Strikezone.BB_Strikezone_C.PitchingTargetHit
struct ABB_Strikezone_C_PitchingTargetHit_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Strikezone.BB_Strikezone_C.StrikezoneEventReceived
struct ABB_Strikezone_C_StrikezoneEventReceived_Params
{
	class ABaseballBall*                               Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramStrikeResult                  Result;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Strikezone.BB_Strikezone_C.ReceiveEndPlay
struct ABB_Strikezone_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Strikezone.BB_Strikezone_C.ExecuteUbergraph_BB_Strikezone
struct ABB_Strikezone_C_ExecuteUbergraph_BB_Strikezone_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Strikezone.BB_Strikezone_C.BallDetected__DelegateSignature
struct ABB_Strikezone_C_BallDetected__DelegateSignature_Params
{
};

// Function BB_Strikezone.BB_Strikezone_C.StrikeDetected__DelegateSignature
struct ABB_Strikezone_C_StrikeDetected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
