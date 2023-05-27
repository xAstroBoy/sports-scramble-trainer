#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BB_Equipment_Set.BB_Equipment_Set_C.UserConstructionScript
	 */
	struct ABB_Equipment_Set_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Equipment_Set.BB_Equipment_Set_C.ReceiveBeginPlay
	 */
	struct ABB_Equipment_Set_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Equipment_Set.BB_Equipment_Set_C.PostEquipmentSpawn
	 */
	struct ABB_Equipment_Set_C_PostEquipmentSpawn_Params
	{
	public:
		class AScramPrimitiveGrabbable*                            DominantHandSpawnedEquipment;                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AScramPrimitiveGrabbable*                            OffHandSpawnedEquipment;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Equipment_Set.BB_Equipment_Set_C.ExecuteUbergraph_BB_Equipment_Set
	 */
	struct ABB_Equipment_Set_C_ExecuteUbergraph_BB_Equipment_Set_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WU2U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Equipment_Set.BB_Equipment_Set_C.EquipmentGrabbed__DelegateSignature
	 */
	struct ABB_Equipment_Set_C_EquipmentGrabbed__DelegateSignature_Params
	{
	public:
		class AActor*                                              DominantHand;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABB_Mitt_C*                                          Mitt;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
