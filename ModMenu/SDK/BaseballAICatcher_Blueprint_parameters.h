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

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TravelTubeCheck
struct ABaseballAICatcher_Blueprint_C_TravelTubeCheck_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ApplyMittMaterial
struct ABaseballAICatcher_Blueprint_C_ApplyMittMaterial_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.OnRep_MittMaterial
struct ABaseballAICatcher_Blueprint_C_OnRep_MittMaterial_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.OnRep_Material
struct ABaseballAICatcher_Blueprint_C_OnRep_Material_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ApplyMaterial
struct ABaseballAICatcher_Blueprint_C_ApplyMaterial_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.SetMaterial
struct ABaseballAICatcher_Blueprint_C_SetMaterial_Params
{
	class UMaterialInstance*                           CatcherMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                           MittMaterial;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.UserConstructionScript
struct ABaseballAICatcher_Blueprint_C_UserConstructionScript_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineSpawnIn__FinishedFunc
struct ABaseballAICatcher_Blueprint_C_TimelineSpawnIn__FinishedFunc_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineSpawnIn__UpdateFunc
struct ABaseballAICatcher_Blueprint_C_TimelineSpawnIn__UpdateFunc_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineDespawn__FinishedFunc
struct ABaseballAICatcher_Blueprint_C_TimelineDespawn__FinishedFunc_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.TimelineDespawn__UpdateFunc
struct ABaseballAICatcher_Blueprint_C_TimelineDespawn__UpdateFunc_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.Timeline_ScaleGlove__FinishedFunc
struct ABaseballAICatcher_Blueprint_C_Timeline_ScaleGlove__FinishedFunc_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.Timeline_ScaleGlove__UpdateFunc
struct ABaseballAICatcher_Blueprint_C_Timeline_ScaleGlove__UpdateFunc_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.BallCaught
struct ABaseballAICatcher_Blueprint_C_BallCaught_Params
{
	class AActor*                                      Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Position;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBaseballBallType                   BallType;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Imbued;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ReceiveBeginPlay
struct ABaseballAICatcher_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.DespawnCatcher
struct ABaseballAICatcher_Blueprint_C_DespawnCatcher_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.Caught Net Caster
struct ABaseballAICatcher_Blueprint_C_Caught_Net_Caster_Params
{
	class AActor*                                      Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Position;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBaseballBallType                   BallType;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Imbued;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.RevealMitt
struct ABaseballAICatcher_Blueprint_C_RevealMitt_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ShowMitt
struct ABaseballAICatcher_Blueprint_C_ShowMitt_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.HideMitt
struct ABaseballAICatcher_Blueprint_C_HideMitt_Params
{
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.ExecuteUbergraph_BaseballAICatcher_Blueprint
struct ABaseballAICatcher_Blueprint_C_ExecuteUbergraph_BaseballAICatcher_Blueprint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballAICatcher_Blueprint.BaseballAICatcher_Blueprint_C.CatcherCaughtBall__DelegateSignature
struct ABaseballAICatcher_Blueprint_C_CatcherCaughtBall__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
