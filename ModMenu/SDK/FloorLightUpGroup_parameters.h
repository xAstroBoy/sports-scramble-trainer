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

// Function FloorLightUpGroup.FloorLightUpGroup_C.RemoveGameElement
struct AFloorLightUpGroup_C_RemoveGameElement_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FloorLightUpGroup.FloorLightUpGroup_C.PlayInSound
struct AFloorLightUpGroup_C_PlayInSound_Params
{
};

// Function FloorLightUpGroup.FloorLightUpGroup_C.PlayOutSound
struct AFloorLightUpGroup_C_PlayOutSound_Params
{
};

// Function FloorLightUpGroup.FloorLightUpGroup_C.Initialize
struct AFloorLightUpGroup_C_Initialize_Params
{
};

// Function FloorLightUpGroup.FloorLightUpGroup_C.UserConstructionScript
struct AFloorLightUpGroup_C_UserConstructionScript_Params
{
};

// Function FloorLightUpGroup.FloorLightUpGroup_C.ReceiveBeginPlay
struct AFloorLightUpGroup_C_ReceiveBeginPlay_Params
{
};

// Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHit
struct AFloorLightUpGroup_C_TargetHit_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHitToggleSound
struct AFloorLightUpGroup_C_TargetHitToggleSound_Params
{
	float                                              LocationX;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LocationY;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LocationZ;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlaySound;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FloorLightUpGroup.FloorLightUpGroup_C.ToggleFloorFX
struct AFloorLightUpGroup_C_ToggleFloorFX_Params
{
	bool                                               ShowVFX;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FloorLightUpGroup.FloorLightUpGroup_C.ExecuteUbergraph_FloorLightUpGroup
struct AFloorLightUpGroup_C_ExecuteUbergraph_FloorLightUpGroup_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
