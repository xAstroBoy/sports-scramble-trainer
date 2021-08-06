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

// Function SS_Logo.SS_Logo_C.Initialize
struct ASS_Logo_C_Initialize_Params
{
};

// Function SS_Logo.SS_Logo_C.UserConstructionScript
struct ASS_Logo_C_UserConstructionScript_Params
{
};

// Function SS_Logo.SS_Logo_C.Timeline_ScaleDown__FinishedFunc
struct ASS_Logo_C_Timeline_ScaleDown__FinishedFunc_Params
{
};

// Function SS_Logo.SS_Logo_C.Timeline_ScaleDown__UpdateFunc
struct ASS_Logo_C_Timeline_ScaleDown__UpdateFunc_Params
{
};

// Function SS_Logo.SS_Logo_C.ReceiveBeginPlay
struct ASS_Logo_C_ReceiveBeginPlay_Params
{
};

// Function SS_Logo.SS_Logo_C.ScaleDown
struct ASS_Logo_C_ScaleDown_Params
{
};

// Function SS_Logo.SS_Logo_C.PlayFX
struct ASS_Logo_C_PlayFX_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SS_Logo.SS_Logo_C.Cleanup
struct ASS_Logo_C_Cleanup_Params
{
	class UParticleSystemComponent*                    PSystem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SS_Logo.SS_Logo_C.ReceiveEndPlay
struct ASS_Logo_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SS_Logo.SS_Logo_C.ScaleUp
struct ASS_Logo_C_ScaleUp_Params
{
};

// Function SS_Logo.SS_Logo_C.ExecuteUbergraph_SS_Logo
struct ASS_Logo_C_ExecuteUbergraph_SS_Logo_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
