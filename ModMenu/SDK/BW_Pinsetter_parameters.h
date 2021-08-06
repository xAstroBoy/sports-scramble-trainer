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

// Function BW_Pinsetter.BW_Pinsetter_C.SetPinPhysicsEnabled
struct ABW_Pinsetter_C_SetPinPhysicsEnabled_Params
{
	bool                                               Enabled;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_Pinsetter.BW_Pinsetter_C.Initialize
struct ABW_Pinsetter_C_Initialize_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.GetRollScore
struct ABW_Pinsetter_C_GetRollScore_Params
{
	int                                                PinsKnockedDown;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Pinsetter.BW_Pinsetter_C.Cleanup
struct ABW_Pinsetter_C_Cleanup_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.SpawnAllPins
struct ABW_Pinsetter_C_SpawnAllPins_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.UserConstructionScript
struct ABW_Pinsetter_C_UserConstructionScript_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__FinishedFunc
struct ABW_Pinsetter_C_Timeline_PinReset__FinishedFunc_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__UpdateFunc
struct ABW_Pinsetter_C_Timeline_PinReset__UpdateFunc_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.ReceiveBeginPlay
struct ABW_Pinsetter_C_ReceiveBeginPlay_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.ReceiveEndPlay
struct ABW_Pinsetter_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Pinsetter.BW_Pinsetter_C.ResetPins
struct ABW_Pinsetter_C_ResetPins_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.RaisePinsetter
struct ABW_Pinsetter_C_RaisePinsetter_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.LaneChangeComplete
struct ABW_Pinsetter_C_LaneChangeComplete_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.ClearPins
struct ABW_Pinsetter_C_ClearPins_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.ExecuteUbergraph_BW_Pinsetter
struct ABW_Pinsetter_C_ExecuteUbergraph_BW_Pinsetter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_Pinsetter.BW_Pinsetter_C.PindeckHidden__DelegateSignature
struct ABW_Pinsetter_C_PindeckHidden__DelegateSignature_Params
{
};

// Function BW_Pinsetter.BW_Pinsetter_C.PinResetComplete__DelegateSignature
struct ABW_Pinsetter_C_PinResetComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
