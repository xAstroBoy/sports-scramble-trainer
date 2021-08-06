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

// Function MusicManager_BP.MusicManager_BP_C.UserConstructionScript
struct AMusicManager_BP_C_UserConstructionScript_Params
{
};

// Function MusicManager_BP.MusicManager_BP_C.ReceiveBeginPlay
struct AMusicManager_BP_C_ReceiveBeginPlay_Params
{
};

// Function MusicManager_BP.MusicManager_BP_C.LeveLoaded
struct AMusicManager_BP_C_LeveLoaded_Params
{
	struct FName                                       LevelName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicManager_BP.MusicManager_BP_C.PlayEntry
struct AMusicManager_BP_C_PlayEntry_Params
{
	struct FName                                       EntryName;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeTime;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MusicManager_BP.MusicManager_BP_C.ExecuteUbergraph_MusicManager_BP
struct AMusicManager_BP_C_ExecuteUbergraph_MusicManager_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
