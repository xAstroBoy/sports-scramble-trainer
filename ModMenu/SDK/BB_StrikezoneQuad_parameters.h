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

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.RemoveGameElement
struct ABB_StrikezoneQuad_C_RemoveGameElement_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.Initialize
struct ABB_StrikezoneQuad_C_Initialize_Params
{
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.UserConstructionScript
struct ABB_StrikezoneQuad_C_UserConstructionScript_Params
{
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.Timeline_Scale__FinishedFunc
struct ABB_StrikezoneQuad_C_Timeline_Scale__FinishedFunc_Params
{
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.Timeline_Scale__UpdateFunc
struct ABB_StrikezoneQuad_C_Timeline_Scale__UpdateFunc_Params
{
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.Timeline_ScaleAlt__FinishedFunc
struct ABB_StrikezoneQuad_C_Timeline_ScaleAlt__FinishedFunc_Params
{
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.Timeline_ScaleAlt__UpdateFunc
struct ABB_StrikezoneQuad_C_Timeline_ScaleAlt__UpdateFunc_Params
{
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.ReceiveBeginPlay
struct ABB_StrikezoneQuad_C_ReceiveBeginPlay_Params
{
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.StrikezoneGrow
struct ABB_StrikezoneQuad_C_StrikezoneGrow_Params
{
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.StrikezoneShrink
struct ABB_StrikezoneQuad_C_StrikezoneShrink_Params
{
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.SetQuadTransparency
struct ABB_StrikezoneQuad_C_SetQuadTransparency_Params
{
	float                                              Transparency;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.TrainingQuadBeginPlay
struct ABB_StrikezoneQuad_C_TrainingQuadBeginPlay_Params
{
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.TrainingQuadGrow
struct ABB_StrikezoneQuad_C_TrainingQuadGrow_Params
{
	float                                              QuadTransparency;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.TrainingQuadEmissiveIntensity
struct ABB_StrikezoneQuad_C_TrainingQuadEmissiveIntensity_Params
{
	float                                              EmissiveIntensity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.UpdateStrikeZoneVisibility
struct ABB_StrikezoneQuad_C_UpdateStrikeZoneVisibility_Params
{
	bool                                               Hide;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.UpdateQuadVisibility
struct ABB_StrikezoneQuad_C_UpdateQuadVisibility_Params
{
	bool                                               TL;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TR;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BL;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BR;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.PitchingTargetHit
struct ABB_StrikezoneQuad_C_PitchingTargetHit_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_StrikezoneQuad.BB_StrikezoneQuad_C.ExecuteUbergraph_BB_StrikezoneQuad
struct ABB_StrikezoneQuad_C_ExecuteUbergraph_BB_StrikezoneQuad_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
