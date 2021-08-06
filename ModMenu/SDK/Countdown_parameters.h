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

// Function Countdown.Countdown_C.Initialize
struct ACountdown_C_Initialize_Params
{
};

// Function Countdown.Countdown_C.UserConstructionScript
struct ACountdown_C_UserConstructionScript_Params
{
};

// Function Countdown.Countdown_C.Timeline_ScaleUp__FinishedFunc
struct ACountdown_C_Timeline_ScaleUp__FinishedFunc_Params
{
};

// Function Countdown.Countdown_C.Timeline_ScaleUp__UpdateFunc
struct ACountdown_C_Timeline_ScaleUp__UpdateFunc_Params
{
};

// Function Countdown.Countdown_C.ReceiveBeginPlay
struct ACountdown_C_ReceiveBeginPlay_Params
{
};

// Function Countdown.Countdown_C.StartCountdown
struct ACountdown_C_StartCountdown_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Countdown.Countdown_C.DisplayGameOver
struct ACountdown_C_DisplayGameOver_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DestroyActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Countdown.Countdown_C.CountdownLoop
struct ACountdown_C_CountdownLoop_Params
{
};

// Function Countdown.Countdown_C.ScaleUp
struct ACountdown_C_ScaleUp_Params
{
};

// Function Countdown.Countdown_C.ScaleDown
struct ACountdown_C_ScaleDown_Params
{
};

// Function Countdown.Countdown_C.DisplayText
struct ACountdown_C_DisplayText_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DestroyActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Countdown.Countdown_C.CustomCountdown_Bowling
struct ACountdown_C_CustomCountdown_Bowling_Params
{
	bool                                               DisplayBowl;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Countdown.Countdown_C.ExecuteUbergraph_Countdown
struct ACountdown_C_ExecuteUbergraph_Countdown_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Countdown.Countdown_C.BowlDisplayed__DelegateSignature
struct ACountdown_C_BowlDisplayed__DelegateSignature_Params
{
};

// Function Countdown.Countdown_C.OneDisplayed__DelegateSignature
struct ACountdown_C_OneDisplayed__DelegateSignature_Params
{
};

// Function Countdown.Countdown_C.TwoDisplayed__DelegateSignature
struct ACountdown_C_TwoDisplayed__DelegateSignature_Params
{
};

// Function Countdown.Countdown_C.ThreeDisplayed__DelegateSignature
struct ACountdown_C_ThreeDisplayed__DelegateSignature_Params
{
};

// Function Countdown.Countdown_C.GoMessage__DelegateSignature
struct ACountdown_C_GoMessage__DelegateSignature_Params
{
};

// Function Countdown.Countdown_C.CountdownComplete__DelegateSignature
struct ACountdown_C_CountdownComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
