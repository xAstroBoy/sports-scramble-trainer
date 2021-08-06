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

// Function GutterTracker_BP.GutterTracker_BP_C.FireLeftParticle
struct UGutterTracker_BP_C_FireLeftParticle_Params
{
};

// Function GutterTracker_BP.GutterTracker_BP_C.FireRightParticle
struct UGutterTracker_BP_C_FireRightParticle_Params
{
};

// Function GutterTracker_BP.GutterTracker_BP_C.Left Net MultiCast
struct UGutterTracker_BP_C_Left_Net_MultiCast_Params
{
};

// Function GutterTracker_BP.GutterTracker_BP_C.Right Net Multicast
struct UGutterTracker_BP_C_Right_Net_Multicast_Params
{
};

// Function GutterTracker_BP.GutterTracker_BP_C.ReceiveEndPlay
struct UGutterTracker_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GutterTracker_BP.GutterTracker_BP_C.Left Server Callup
struct UGutterTracker_BP_C_Left_Server_Callup_Params
{
};

// Function GutterTracker_BP.GutterTracker_BP_C.Right Server Callup
struct UGutterTracker_BP_C_Right_Server_Callup_Params
{
};

// Function GutterTracker_BP.GutterTracker_BP_C.ExecuteUbergraph_GutterTracker_BP
struct UGutterTracker_BP_C_ExecuteUbergraph_GutterTracker_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
