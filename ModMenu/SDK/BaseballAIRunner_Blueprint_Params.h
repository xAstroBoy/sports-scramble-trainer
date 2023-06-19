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
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnRep_Material
	 */
	struct ABaseballAIRunner_Blueprint_C_OnRep_Material_Params
	{	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ApplyMaterial
	 */
	struct ABaseballAIRunner_Blueprint_C_ApplyMaterial_Params
	{	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.SetMaterial
	 */
	struct ABaseballAIRunner_Blueprint_C_SetMaterial_Params
	{
	public:
		class UMaterialInstance*                                   NewMaterial;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.UserConstructionScript
	 */
	struct ABaseballAIRunner_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleUp__FinishedFunc
	 */
	struct ABaseballAIRunner_Blueprint_C_Timeline_ScaleUp__FinishedFunc_Params
	{	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleUp__UpdateFunc
	 */
	struct ABaseballAIRunner_Blueprint_C_Timeline_ScaleUp__UpdateFunc_Params
	{	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleDown__FinishedFunc
	 */
	struct ABaseballAIRunner_Blueprint_C_Timeline_ScaleDown__FinishedFunc_Params
	{	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Timeline_ScaleDown__UpdateFunc
	 */
	struct ABaseballAIRunner_Blueprint_C_Timeline_ScaleDown__UpdateFunc_Params
	{	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ReceiveBeginPlay
	 */
	struct ABaseballAIRunner_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnSpawn
	 */
	struct ABaseballAIRunner_Blueprint_C_OnSpawn_Params
	{	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.OnDespawn
	 */
	struct ABaseballAIRunner_Blueprint_C_OnDespawn_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.Public Despawn
	 */
	struct ABaseballAIRunner_Blueprint_C_PublicDespawn_Params
	{	};

	/**
	 * Function BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C.ExecuteUbergraph_BaseballAIRunner_Blueprint
	 */
	struct ABaseballAIRunner_Blueprint_C_ExecuteUbergraph_BaseballAIRunner_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YILY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
