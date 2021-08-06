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

// Function TN_AcceleratorBall.TN_AcceleratorBall_C.UserConstructionScript
struct ATN_AcceleratorBall_C_UserConstructionScript_Params
{
};

// Function TN_AcceleratorBall.TN_AcceleratorBall_C.ReceiveEndPlay
struct ATN_AcceleratorBall_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_AcceleratorBall.TN_AcceleratorBall_C.PlayChargedFX
struct ATN_AcceleratorBall_C_PlayChargedFX_Params
{
	bool                                               NoHitSFX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_AcceleratorBall.TN_AcceleratorBall_C.PlayChargedSliceFX
struct ATN_AcceleratorBall_C_PlayChargedSliceFX_Params
{
};

// Function TN_AcceleratorBall.TN_AcceleratorBall_C.ExecuteUbergraph_TN_AcceleratorBall
struct ATN_AcceleratorBall_C_ExecuteUbergraph_TN_AcceleratorBall_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
