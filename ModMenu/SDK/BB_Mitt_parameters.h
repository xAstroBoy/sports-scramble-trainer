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

// Function BB_Mitt.BB_Mitt_C.OnRep_Material
struct ABB_Mitt_C_OnRep_Material_Params
{
};

// Function BB_Mitt.BB_Mitt_C.ApplyMaterial
struct ABB_Mitt_C_ApplyMaterial_Params
{
};

// Function BB_Mitt.BB_Mitt_C.SetMaterial
struct ABB_Mitt_C_SetMaterial_Params
{
	class UMaterialInstance*                           NewMaterial;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Mitt.BB_Mitt_C.UserConstructionScript
struct ABB_Mitt_C_UserConstructionScript_Params
{
};

// Function BB_Mitt.BB_Mitt_C.ReceiveBeginPlay
struct ABB_Mitt_C_ReceiveBeginPlay_Params
{
};

// Function BB_Mitt.BB_Mitt_C.BallCatch
struct ABB_Mitt_C_BallCatch_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Mitt.BB_Mitt_C.ASyncScrambleLoad
struct ABB_Mitt_C_ASyncScrambleLoad_Params
{
};

// Function BB_Mitt.BB_Mitt_C.SetColors
struct ABB_Mitt_C_SetColors_Params
{
	bool                                               HomeTeam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Mitt.BB_Mitt_C.NetSetColors
struct ABB_Mitt_C_NetSetColors_Params
{
	bool                                               HomeTeam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Mitt.BB_Mitt_C.DestroyPrimitive
struct ABB_Mitt_C_DestroyPrimitive_Params
{
	bool                                               playOut;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Mitt.BB_Mitt_C.NetResetColor
struct ABB_Mitt_C_NetResetColor_Params
{
};

// Function BB_Mitt.BB_Mitt_C.ExecuteUbergraph_BB_Mitt
struct ABB_Mitt_C_ExecuteUbergraph_BB_Mitt_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Mitt.BB_Mitt_C.BallCaught__DelegateSignature
struct ABB_Mitt_C_BallCaught__DelegateSignature_Params
{
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
