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

// Function RI_FloorCollision.RI_FloorCollision_C.CreateBallMark
struct ARI_FloorCollision_C_CreateBallMark_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RI_FloorCollision.RI_FloorCollision_C.RemoveMarks
struct ARI_FloorCollision_C_RemoveMarks_Params
{
};

// Function RI_FloorCollision.RI_FloorCollision_C.UserConstructionScript
struct ARI_FloorCollision_C_UserConstructionScript_Params
{
};

// Function RI_FloorCollision.RI_FloorCollision_C.ReceiveBeginPlay
struct ARI_FloorCollision_C_ReceiveBeginPlay_Params
{
};

// Function RI_FloorCollision.RI_FloorCollision_C.TargetHit
struct ARI_FloorCollision_C_TargetHit_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RI_FloorCollision.RI_FloorCollision_C.ReceiveDestroyed
struct ARI_FloorCollision_C_ReceiveDestroyed_Params
{
};

// Function RI_FloorCollision.RI_FloorCollision_C.ExecuteUbergraph_RI_FloorCollision
struct ARI_FloorCollision_C_ExecuteUbergraph_RI_FloorCollision_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RI_FloorCollision.RI_FloorCollision_C.BB_BallLanded__DelegateSignature
struct ARI_FloorCollision_C_BB_BallLanded__DelegateSignature_Params
{
	class ABB_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RI_FloorCollision.RI_FloorCollision_C.BallLanded__DelegateSignature
struct ARI_FloorCollision_C_BallLanded__DelegateSignature_Params
{
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
