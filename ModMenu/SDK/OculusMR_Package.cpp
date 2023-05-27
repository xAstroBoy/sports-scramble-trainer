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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOculusMR_BoundaryActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOculusMR_BoundaryActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMR_BoundaryActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusMR_BoundaryMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusMR_BoundaryMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMR_BoundaryMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOculusMR_CastingCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOculusMR_CastingCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMR_CastingCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5570
	 * 		Name   -> Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FOculusMR_PlaneMeshTriangle>         Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOculusMR_PlaneMeshComponent::SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles");
		
		UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Params params {};
		params.Triangles = Triangles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B52F0
	 * 		Name   -> Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOculusMR_PlaneMeshComponent::ClearCustomMeshTriangles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles");
		
		UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B51C0
	 * 		Name   -> Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FOculusMR_PlaneMeshTriangle>         Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_PlaneMeshComponent::AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles");
		
		UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Params params {};
		params.Triangles = Triangles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusMR_PlaneMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusMR_PlaneMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMR_PlaneMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B57B0
	 * 		Name   -> Function OculusMR.OculusMR_Settings.SetUseDynamicLighting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_Settings::SetUseDynamicLighting(bool val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetUseDynamicLighting");
		
		UOculusMR_Settings_SetUseDynamicLighting_Params params {};
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B56B0
	 * 		Name   -> Function OculusMR.OculusMR_Settings.SetIsCasting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_Settings::SetIsCasting(bool val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetIsCasting");
		
		UOculusMR_Settings_SetIsCasting_Params params {};
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5630
	 * 		Name   -> Function OculusMR.OculusMR_Settings.SetDepthQuality
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOculusMR_DepthQuality                             val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_Settings::SetDepthQuality(EOculusMR_DepthQuality val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetDepthQuality");
		
		UOculusMR_Settings_SetDepthQuality_Params params {};
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B54F0
	 * 		Name   -> Function OculusMR.OculusMR_Settings.SetCompositionMethod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOculusMR_CompositionMethod                        val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_Settings::SetCompositionMethod(EOculusMR_CompositionMethod val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetCompositionMethod");
		
		UOculusMR_Settings_SetCompositionMethod_Params params {};
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5470
	 * 		Name   -> Function OculusMR.OculusMR_Settings.SetCapturingCamera
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EOculusMR_CameraDeviceEnum                         val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_Settings::SetCapturingCamera(EOculusMR_CameraDeviceEnum val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SetCapturingCamera");
		
		UOculusMR_Settings_SetCapturingCamera_Params params {};
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5450
	 * 		Name   -> Function OculusMR.OculusMR_Settings.SaveToIni
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UOculusMR_Settings::SaveToIni()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.SaveToIni");
		
		UOculusMR_Settings_SaveToIni_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5430
	 * 		Name   -> Function OculusMR.OculusMR_Settings.LoadFromIni
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UOculusMR_Settings::LoadFromIni()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.LoadFromIni");
		
		UOculusMR_Settings_LoadFromIni_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5410
	 * 		Name   -> Function OculusMR.OculusMR_Settings.GetUseDynamicLighting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UOculusMR_Settings::GetUseDynamicLighting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetUseDynamicLighting");
		
		UOculusMR_Settings_GetUseDynamicLighting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5390
	 * 		Name   -> Function OculusMR.OculusMR_Settings.GetIsCasting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UOculusMR_Settings::GetIsCasting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetIsCasting");
		
		UOculusMR_Settings_GetIsCasting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5370
	 * 		Name   -> Function OculusMR.OculusMR_Settings.GetDepthQuality
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EOculusMR_DepthQuality UOculusMR_Settings::GetDepthQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetDepthQuality");
		
		UOculusMR_Settings_GetDepthQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5350
	 * 		Name   -> Function OculusMR.OculusMR_Settings.GetCompositionMethod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EOculusMR_CompositionMethod UOculusMR_Settings::GetCompositionMethod()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetCompositionMethod");
		
		UOculusMR_Settings_GetCompositionMethod_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5330
	 * 		Name   -> Function OculusMR.OculusMR_Settings.GetCapturingCamera
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EOculusMR_CameraDeviceEnum UOculusMR_Settings::GetCapturingCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetCapturingCamera");
		
		UOculusMR_Settings_GetCapturingCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5310
	 * 		Name   -> Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UOculusMR_Settings::GetBindToTrackedCameraIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex");
		
		UOculusMR_Settings_GetBindToTrackedCameraIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5270
	 * 		Name   -> Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InTrackedCameraIndex                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMR_Settings::BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable");
		
		UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Params params {};
		params.InTrackedCameraIndex = InTrackedCameraIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusMR_Settings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusMR_Settings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMR_Settings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusMR_State.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusMR_State::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMR_State");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B5740
	 * 		Name   -> Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOculusMRFunctionLibrary::STATIC_SetTrackingReferenceComponent(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent");
		
		UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B53E0
	 * 		Name   -> Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class USceneComponent* UOculusMRFunctionLibrary::STATIC_GetTrackingReferenceComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent");
		
		UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x002B53B0
	 * 		Name   -> Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UOculusMR_Settings* UOculusMRFunctionLibrary::STATIC_GetOculusMRSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings");
		
		UOculusMRFunctionLibrary_GetOculusMRSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusMRFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusMRFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OculusMR.OculusMRFunctionLibrary");
		return ptr;
	}

}


