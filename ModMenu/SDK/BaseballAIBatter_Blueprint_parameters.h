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

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetLook
struct ABaseballAIBatter_Blueprint_C_SetLook_Params
{
};

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.RandomizeLook
struct ABaseballAIBatter_Blueprint_C_RandomizeLook_Params
{
};

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ClearBat
struct ABaseballAIBatter_Blueprint_C_ClearBat_Params
{
};

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetBat
struct ABaseballAIBatter_Blueprint_C_SetBat_Params
{
	class UClass*                                      BatClass;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayEffects;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetTeamColor
struct ABaseballAIBatter_Blueprint_C_SetTeamColor_Params
{
	bool                                               Home;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.UserConstructionScript
struct ABaseballAIBatter_Blueprint_C_UserConstructionScript_Params
{
};

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveBeginPlay
struct ABaseballAIBatter_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.PlayBatSound
struct ABaseballAIBatter_Blueprint_C_PlayBatSound_Params
{
	class ABaseballBall*                               Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveEndPlay
struct ABaseballAIBatter_Blueprint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ExecuteUbergraph_BaseballAIBatter_Blueprint
struct ABaseballAIBatter_Blueprint_C_ExecuteUbergraph_BaseballAIBatter_Blueprint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.LookRandomzied__DelegateSignature
struct ABaseballAIBatter_Blueprint_C_LookRandomzied__DelegateSignature_Params
{
	struct FAvatarLook                                 AvatarLook;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
