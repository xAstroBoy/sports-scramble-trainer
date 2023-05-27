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
	 * Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.UserConstructionScript
	 */
	struct ACMN_ParticleEmitter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ReceiveBeginPlay
	 */
	struct ACMN_ParticleEmitter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.OnSystemFinished
	 */
	struct ACMN_ParticleEmitter_C_OnSystemFinished_Params
	{
	public:
		class UParticleSystemComponent*                            PSystem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Activate
	 */
	struct ACMN_ParticleEmitter_C_Activate_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.Set Color Parameter
	 */
	struct ACMN_ParticleEmitter_C_SetColorParameter_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CMN_ParticleEmitter.CMN_ParticleEmitter_C.ExecuteUbergraph_CMN_ParticleEmitter
	 */
	struct ACMN_ParticleEmitter_C_ExecuteUbergraph_CMN_ParticleEmitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
