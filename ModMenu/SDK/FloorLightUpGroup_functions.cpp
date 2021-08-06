// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FloorLightUpGroup.FloorLightUpGroup_C.RemoveGameElement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFloorLightUpGroup_C::RemoveGameElement(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.RemoveGameElement");

	AFloorLightUpGroup_C_RemoveGameElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function FloorLightUpGroup.FloorLightUpGroup_C.PlayInSound
// (Public, BlueprintCallable, BlueprintEvent)
void AFloorLightUpGroup_C::PlayInSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.PlayInSound");

	AFloorLightUpGroup_C_PlayInSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FloorLightUpGroup.FloorLightUpGroup_C.PlayOutSound
// (Public, BlueprintCallable, BlueprintEvent)
void AFloorLightUpGroup_C::PlayOutSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.PlayOutSound");

	AFloorLightUpGroup_C_PlayOutSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FloorLightUpGroup.FloorLightUpGroup_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void AFloorLightUpGroup_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.Initialize");

	AFloorLightUpGroup_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FloorLightUpGroup.FloorLightUpGroup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AFloorLightUpGroup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.UserConstructionScript");

	AFloorLightUpGroup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FloorLightUpGroup.FloorLightUpGroup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AFloorLightUpGroup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.ReceiveBeginPlay");

	AFloorLightUpGroup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFloorLightUpGroup_C::TargetHit(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHit");

	AFloorLightUpGroup_C_TargetHit_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHitToggleSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LocationX                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationY                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationZ                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFloorLightUpGroup_C::TargetHitToggleSound(float LocationX, float LocationY, float LocationZ, bool PlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHitToggleSound");

	AFloorLightUpGroup_C_TargetHitToggleSound_Params params;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FloorLightUpGroup.FloorLightUpGroup_C.ToggleFloorFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowVFX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFloorLightUpGroup_C::ToggleFloorFX(bool ShowVFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.ToggleFloorFX");

	AFloorLightUpGroup_C_ToggleFloorFX_Params params;
	params.ShowVFX = ShowVFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FloorLightUpGroup.FloorLightUpGroup_C.ExecuteUbergraph_FloorLightUpGroup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFloorLightUpGroup_C::ExecuteUbergraph_FloorLightUpGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.ExecuteUbergraph_FloorLightUpGroup");

	AFloorLightUpGroup_C_ExecuteUbergraph_FloorLightUpGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
