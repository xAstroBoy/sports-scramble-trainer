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

// Function BB_Equipment_Set.BB_Equipment_Set_C.UserConstructionScript
struct ABB_Equipment_Set_C_UserConstructionScript_Params
{
};

// Function BB_Equipment_Set.BB_Equipment_Set_C.ReceiveBeginPlay
struct ABB_Equipment_Set_C_ReceiveBeginPlay_Params
{
};

// Function BB_Equipment_Set.BB_Equipment_Set_C.PostEquipmentSpawn
struct ABB_Equipment_Set_C_PostEquipmentSpawn_Params
{
	class AScramPrimitiveGrabbable*                    DominantHandSpawnedEquipment;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScramPrimitiveGrabbable*                    OffHandSpawnedEquipment;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Equipment_Set.BB_Equipment_Set_C.ExecuteUbergraph_BB_Equipment_Set
struct ABB_Equipment_Set_C_ExecuteUbergraph_BB_Equipment_Set_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Equipment_Set.BB_Equipment_Set_C.EquipmentGrabbed__DelegateSignature
struct ABB_Equipment_Set_C_EquipmentGrabbed__DelegateSignature_Params
{
	class AActor*                                      DominantHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Mitt_C*                                  Mitt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
