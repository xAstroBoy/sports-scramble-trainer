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

// Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchWarn_Enabled?
struct AEquipmentMatchCheck_C_EquipmentMatchWarn_Enabled__Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EquipmentMatchWarningAllowed;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Instrument
struct AEquipmentMatchCheck_C_EquipmentMatchCheck_Instrument_Params
{
	class ATN_Instrument_Base_C*                       Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocalPlayer_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATN_Ball_Base_C*                             BallOptional;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Match;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Ball
struct AEquipmentMatchCheck_C_EquipmentMatchCheck_Ball_Params
{
	class ATN_Ball_Base_C*                             Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Match;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EquipmentMatchCheck.EquipmentMatchCheck_C.UserConstructionScript
struct AEquipmentMatchCheck_C_UserConstructionScript_Params
{
};

// Function EquipmentMatchCheck.EquipmentMatchCheck_C.ReceiveBeginPlay
struct AEquipmentMatchCheck_C_ReceiveBeginPlay_Params
{
};

// Function EquipmentMatchCheck.EquipmentMatchCheck_C.ExecuteUbergraph_EquipmentMatchCheck
struct AEquipmentMatchCheck_C_ExecuteUbergraph_EquipmentMatchCheck_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
