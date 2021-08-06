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

// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.UserConstructionScript
struct ABB_StadiumWindowSpawner_C_UserConstructionScript_Params
{
};

// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ActivateBreakables
struct ABB_StadiumWindowSpawner_C_ActivateBreakables_Params
{
};

// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ResetBreakables
struct ABB_StadiumWindowSpawner_C_ResetBreakables_Params
{
};

// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.CleanUpAllBreakables
struct ABB_StadiumWindowSpawner_C_CleanUpAllBreakables_Params
{
};

// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ReceiveEndPlay
struct ABB_StadiumWindowSpawner_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.SetBreakableScore
struct ABB_StadiumWindowSpawner_C_SetBreakableScore_Params
{
	int                                                WindowScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LightFixtureScore;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ExecuteUbergraph_BB_StadiumWindowSpawner
struct ABB_StadiumWindowSpawner_C_ExecuteUbergraph_BB_StadiumWindowSpawner_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
