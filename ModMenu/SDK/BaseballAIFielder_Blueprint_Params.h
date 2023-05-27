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
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_RedGlove
	 */
	struct ABaseballAIFielder_Blueprint_C_OnRep_RedGlove_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_GloveMaterial
	 */
	struct ABaseballAIFielder_Blueprint_C_OnRep_GloveMaterial_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_FielderMaterial
	 */
	struct ABaseballAIFielder_Blueprint_C_OnRep_FielderMaterial_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ApplyGloveMaterial
	 */
	struct ABaseballAIFielder_Blueprint_C_ApplyGloveMaterial_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.OnRep_Material
	 */
	struct ABaseballAIFielder_Blueprint_C_OnRep_Material_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ApplyMaterial
	 */
	struct ABaseballAIFielder_Blueprint_C_ApplyMaterial_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.SetMaterial
	 */
	struct ABaseballAIFielder_Blueprint_C_SetMaterial_Params
	{
	public:
		class UMaterialInstance*                                   FielderMat;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RedGlove;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.UserConstructionScript
	 */
	struct ABaseballAIFielder_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Spawn__FinishedFunc
	 */
	struct ABaseballAIFielder_Blueprint_C_Timeline_Spawn__FinishedFunc_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Spawn__UpdateFunc
	 */
	struct ABaseballAIFielder_Blueprint_C_Timeline_Spawn__UpdateFunc_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Despawn__FinishedFunc
	 */
	struct ABaseballAIFielder_Blueprint_C_Timeline_Despawn__FinishedFunc_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.Timeline_Despawn__UpdateFunc
	 */
	struct ABaseballAIFielder_Blueprint_C_Timeline_Despawn__UpdateFunc_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ReceiveBeginPlay
	 */
	struct ABaseballAIFielder_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.DespawnFielder
	 */
	struct ABaseballAIFielder_Blueprint_C_DespawnFielder_Params
	{	};

	/**
	 * Function BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C.ExecuteUbergraph_BaseballAIFielder_Blueprint
	 */
	struct ABaseballAIFielder_Blueprint_C_ExecuteUbergraph_BaseballAIFielder_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
