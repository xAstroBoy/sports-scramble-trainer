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

// Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.SetNoGameActive
struct UBB_Scoreboard_Bases_C_SetNoGameActive_Params
{
};

// Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.NewInning
struct UBB_Scoreboard_Bases_C_NewInning_Params
{
	int                                                Inning;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Top;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.UpdateBaserunners
struct UBB_Scoreboard_Bases_C_UpdateBaserunners_Params
{
	bool                                               RunnerOn1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RunnderOn2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RunnderOn3;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_Bases.BB_Scoreboard_Bases_C.ExecuteUbergraph_BB_Scoreboard_Bases
struct UBB_Scoreboard_Bases_C_ExecuteUbergraph_BB_Scoreboard_Bases_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
