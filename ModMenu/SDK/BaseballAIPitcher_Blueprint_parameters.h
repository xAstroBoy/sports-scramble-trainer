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

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetGloveColor
struct ABaseballAIPitcher_Blueprint_C_SetGloveColor_Params
{
	bool                                               Home;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetLook
struct ABaseballAIPitcher_Blueprint_C_SetLook_Params
{
};

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.RandomizeLook
struct ABaseballAIPitcher_Blueprint_C_RandomizeLook_Params
{
};

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.GetScrambleBallClass
struct ABaseballAIPitcher_Blueprint_C_GetScrambleBallClass_Params
{
	class UClass*                                      Ball;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.SetTeamColor
struct ABaseballAIPitcher_Blueprint_C_SetTeamColor_Params
{
	bool                                               Home;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.UserConstructionScript
struct ABaseballAIPitcher_Blueprint_C_UserConstructionScript_Params
{
};

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.PlayMittSound
struct ABaseballAIPitcher_Blueprint_C_PlayMittSound_Params
{
	class ABaseballBall*                               Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ReceiveBeginPlay
struct ABaseballAIPitcher_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.ExecuteUbergraph_BaseballAIPitcher_Blueprint
struct ABaseballAIPitcher_Blueprint_C_ExecuteUbergraph_BaseballAIPitcher_Blueprint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballAIPitcher_Blueprint.BaseballAIPitcher_Blueprint_C.LookRandomized__DelegateSignature
struct ABaseballAIPitcher_Blueprint_C_LookRandomized__DelegateSignature_Params
{
	struct FAvatarLook                                 AvatarLook;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
