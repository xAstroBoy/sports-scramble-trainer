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

// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.UserConstructionScript
struct ABaseballBallScrambleDisplay_BP_C_UserConstructionScript_Params
{
};

// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ReceiveBeginPlay
struct ABaseballBallScrambleDisplay_BP_C_ReceiveBeginPlay_Params
{
};

// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.SetIcon
struct ABaseballBallScrambleDisplay_BP_C_SetIcon_Params
{
	int                                                Index;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.GoAway
struct ABaseballBallScrambleDisplay_BP_C_GoAway_Params
{
};

// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.FindIcon_From_BBClass
struct ABaseballBallScrambleDisplay_BP_C_FindIcon_From_BBClass_Params
{
	class UClass*                                      BBBallClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IconIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseballBallScrambleDisplay_BP.BaseballBallScrambleDisplay_BP_C.ExecuteUbergraph_BaseballBallScrambleDisplay_BP
struct ABaseballBallScrambleDisplay_BP_C_ExecuteUbergraph_BaseballBallScrambleDisplay_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
