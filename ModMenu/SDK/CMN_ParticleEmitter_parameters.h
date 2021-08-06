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

// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.UserConstructionScript
struct ACMN_ParticleEmitter_C_UserConstructionScript_Params
{
};

// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ReceiveBeginPlay
struct ACMN_ParticleEmitter_C_ReceiveBeginPlay_Params
{
};

// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.OnSystemFinished
struct ACMN_ParticleEmitter_C_OnSystemFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Activate
struct ACMN_ParticleEmitter_C_Activate_Params
{
	bool                                               Reset;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Set Color Parameter
struct ACMN_ParticleEmitter_C_Set_Color_Parameter_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ExecuteUbergraph_CMN_ParticleEmitter
struct ACMN_ParticleEmitter_C_ExecuteUbergraph_CMN_ParticleEmitter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
