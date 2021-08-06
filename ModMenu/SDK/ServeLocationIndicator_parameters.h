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

// Function ServeLocationIndicator.ServeLocationIndicator_C.ResetBall
struct AServeLocationIndicator_C_ResetBall_Params
{
	class AActor*                                      Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.UserConstructionScript
struct AServeLocationIndicator_C_UserConstructionScript_Params
{
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.OnLoaded_4D1D00D34A359C869029F29A6612B8F3
struct AServeLocationIndicator_C_OnLoaded_4D1D00D34A359C869029F29A6612B8F3_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.Show
struct AServeLocationIndicator_C_Show_Params
{
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.Hide
struct AServeLocationIndicator_C_Hide_Params
{
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.ServeBallGrabbed
struct AServeLocationIndicator_C_ServeBallGrabbed_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.ServeBallSpawned
struct AServeLocationIndicator_C_ServeBallSpawned_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.OnPlayerEnter
struct AServeLocationIndicator_C_OnPlayerEnter_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.OnPlayerExit
struct AServeLocationIndicator_C_OnPlayerExit_Params
{
	class AScramPlayer*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.AttractLoop
struct AServeLocationIndicator_C_AttractLoop_Params
{
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.StopAttract
struct AServeLocationIndicator_C_StopAttract_Params
{
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.ExecuteUbergraph_ServeLocationIndicator
struct AServeLocationIndicator_C_ExecuteUbergraph_ServeLocationIndicator_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.BallSpawned__DelegateSignature
struct AServeLocationIndicator_C_BallSpawned__DelegateSignature_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServeLocationIndicator.ServeLocationIndicator_C.BallGrabbed__DelegateSignature
struct AServeLocationIndicator_C_BallGrabbed__DelegateSignature_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
