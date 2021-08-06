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

// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.UserConstructionScript
struct ATN_ChallengeBall_Base_C_UserConstructionScript_Params
{
};

// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.Challenge Change Trail Color
struct ATN_ChallengeBall_Base_C_Challenge_Change_Trail_Color_Params
{
};

// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.Challenge Pomp & Destruction
struct ATN_ChallengeBall_Base_C_Challenge_Pomp___Destruction_Params
{
	float                                              TimeDelay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ReceiveBeginPlay
struct ATN_ChallengeBall_Base_C_ReceiveBeginPlay_Params
{
};

// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ReceiveEndPlay
struct ATN_ChallengeBall_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ChallengeHit
struct ATN_ChallengeBall_Base_C_ChallengeHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.SetTrail
struct ATN_ChallengeBall_Base_C_SetTrail_Params
{
	SportsScramble_ETennisShotType                     ShotType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoHitSFX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.UpdateMesh
struct ATN_ChallengeBall_Base_C_UpdateMesh_Params
{
};

// Function TN_ChallengeBall_Base.TN_ChallengeBall_Base_C.ExecuteUbergraph_TN_ChallengeBall_Base
struct ATN_ChallengeBall_Base_C_ExecuteUbergraph_TN_ChallengeBall_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
