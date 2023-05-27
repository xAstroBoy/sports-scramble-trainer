/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUpGroup.FloorLightUpGroup_C.RemoveGameElement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFloorLightUpGroup_C::RemoveGameElement(bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.RemoveGameElement");
		
		AFloorLightUpGroup_C_RemoveGameElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUpGroup.FloorLightUpGroup_C.PlayInSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFloorLightUpGroup_C::PlayInSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.PlayInSound");
		
		AFloorLightUpGroup_C_PlayInSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUpGroup.FloorLightUpGroup_C.PlayOutSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFloorLightUpGroup_C::PlayOutSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.PlayOutSound");
		
		AFloorLightUpGroup_C_PlayOutSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUpGroup.FloorLightUpGroup_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFloorLightUpGroup_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.Initialize");
		
		AFloorLightUpGroup_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUpGroup.FloorLightUpGroup_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFloorLightUpGroup_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.UserConstructionScript");
		
		AFloorLightUpGroup_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUpGroup.FloorLightUpGroup_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFloorLightUpGroup_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.ReceiveBeginPlay");
		
		AFloorLightUpGroup_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFloorLightUpGroup_C::TargetHit(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHit");
		
		AFloorLightUpGroup_C_TargetHit_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHitToggleSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LocationX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationZ                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFloorLightUpGroup_C::TargetHitToggleSound(float LocationX, float LocationY, float LocationZ, bool PlaySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.TargetHitToggleSound");
		
		AFloorLightUpGroup_C_TargetHitToggleSound_Params params {};
		params.LocationX = LocationX;
		params.LocationY = LocationY;
		params.LocationZ = LocationZ;
		params.PlaySound = PlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUpGroup.FloorLightUpGroup_C.ToggleFloorFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowVFX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFloorLightUpGroup_C::ToggleFloorFX(bool ShowVFX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.ToggleFloorFX");
		
		AFloorLightUpGroup_C_ToggleFloorFX_Params params {};
		params.ShowVFX = ShowVFX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function FloorLightUpGroup.FloorLightUpGroup_C.ExecuteUbergraph_FloorLightUpGroup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFloorLightUpGroup_C::ExecuteUbergraph_FloorLightUpGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FloorLightUpGroup.FloorLightUpGroup_C.ExecuteUbergraph_FloorLightUpGroup");
		
		AFloorLightUpGroup_C_ExecuteUbergraph_FloorLightUpGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFloorLightUpGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFloorLightUpGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FloorLightUpGroup.FloorLightUpGroup_C");
		return ptr;
	}

}


