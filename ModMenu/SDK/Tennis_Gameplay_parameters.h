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

// Function Tennis_Gameplay.Tennis_Gameplay_C.ReceiveEndPlay
struct ATennis_Gameplay_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tennis_Gameplay.Tennis_Gameplay_C.SpawnMenu
struct ATennis_Gameplay_C_SpawnMenu_Params
{
	struct FName                                       NewGeoLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tennis_Gameplay.Tennis_Gameplay_C.ReceiveBeginPlay
struct ATennis_Gameplay_C_ReceiveBeginPlay_Params
{
};

// Function Tennis_Gameplay.Tennis_Gameplay_C.ExecuteUbergraph_Tennis_Gameplay
struct ATennis_Gameplay_C_ExecuteUbergraph_Tennis_Gameplay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
