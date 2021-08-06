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

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UpdateHandVisibility
struct AScramTennisAI_Blueprint_C_UpdateHandVisibility_Params
{
	bool                                               Hidden;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.RandomizeLook
struct AScramTennisAI_Blueprint_C_RandomizeLook_Params
{
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Initialize
struct AScramTennisAI_Blueprint_C_Initialize_Params
{
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayHitSound
struct AScramTennisAI_Blueprint_C_PlayHitSound_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ChangeRacket
struct AScramTennisAI_Blueprint_C_ChangeRacket_Params
{
	class UClass*                                      InstrumentClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoFX;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UserConstructionScript
struct AScramTennisAI_Blueprint_C_UserConstructionScript_Params
{
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__FinishedFunc
struct AScramTennisAI_Blueprint_C_Timeline_ScaleUp__FinishedFunc_Params
{
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__UpdateFunc
struct AScramTennisAI_Blueprint_C_Timeline_ScaleUp__UpdateFunc_Params
{
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveBeginPlay
struct AScramTennisAI_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveEndPlay
struct AScramTennisAI_Blueprint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayRacquetSound
struct AScramTennisAI_Blueprint_C_PlayRacquetSound_Params
{
	class ATennisBall*                                 Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BallSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlaySwingFX
struct AScramTennisAI_Blueprint_C_PlaySwingFX_Params
{
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ScaleUp
struct AScramTennisAI_Blueprint_C_ScaleUp_Params
{
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ExecuteUbergraph_ScramTennisAI_Blueprint
struct AScramTennisAI_Blueprint_C_ExecuteUbergraph_ScramTennisAI_Blueprint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.AI_Hit_Ball__DelegateSignature
struct AScramTennisAI_Blueprint_C_AI_Hit_Ball__DelegateSignature_Params
{
	class ATennisBall*                                 Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
