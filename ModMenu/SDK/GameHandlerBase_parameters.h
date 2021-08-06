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

// Function GameHandlerBase.GameHandlerBase_C.PreMenuCleanup
struct AGameHandlerBase_C_PreMenuCleanup_Params
{
	bool                                               empty_return;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameHandlerBase.GameHandlerBase_C.QuitGame
struct AGameHandlerBase_C_QuitGame_Params
{
};

// Function GameHandlerBase.GameHandlerBase_C.UserConstructionScript
struct AGameHandlerBase_C_UserConstructionScript_Params
{
};

// Function GameHandlerBase.GameHandlerBase_C.TeleportThePlayArea__DelegateSignature
struct AGameHandlerBase_C_TeleportThePlayArea__DelegateSignature_Params
{
	SportsScramble_EScramSport                         Sport;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TrainingLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       LevelOverride;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerBase.GameHandlerBase_C.GameOver__DelegateSignature
struct AGameHandlerBase_C_GameOver__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
