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

// Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Params
{
	TArray<struct FOculusMR_PlaneMeshTriangle>         Triangles;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Params
{
};

// Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Params
{
	TArray<struct FOculusMR_PlaneMeshTriangle>         Triangles;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SetUseDynamicLighting
struct UOculusMR_Settings_SetUseDynamicLighting_Params
{
	bool                                               val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SetIsCasting
struct UOculusMR_Settings_SetIsCasting_Params
{
	bool                                               val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SetDepthQuality
struct UOculusMR_Settings_SetDepthQuality_Params
{
	OculusMR_EOculusMR_DepthQuality                    val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SetCompositionMethod
struct UOculusMR_Settings_SetCompositionMethod_Params
{
	OculusMR_EOculusMR_CompositionMethod               val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SetCapturingCamera
struct UOculusMR_Settings_SetCapturingCamera_Params
{
	OculusMR_EOculusMR_CameraDeviceEnum                val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.SaveToIni
struct UOculusMR_Settings_SaveToIni_Params
{
};

// Function OculusMR.OculusMR_Settings.LoadFromIni
struct UOculusMR_Settings_LoadFromIni_Params
{
};

// Function OculusMR.OculusMR_Settings.GetUseDynamicLighting
struct UOculusMR_Settings_GetUseDynamicLighting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.GetIsCasting
struct UOculusMR_Settings_GetIsCasting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.GetDepthQuality
struct UOculusMR_Settings_GetDepthQuality_Params
{
	OculusMR_EOculusMR_DepthQuality                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.GetCompositionMethod
struct UOculusMR_Settings_GetCompositionMethod_Params
{
	OculusMR_EOculusMR_CompositionMethod               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.GetCapturingCamera
struct UOculusMR_Settings_GetCapturingCamera_Params
{
	OculusMR_EOculusMR_CameraDeviceEnum                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
struct UOculusMR_Settings_GetBindToTrackedCameraIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
struct UOculusMR_Settings_BindToTrackedCameraIndexIfAvailable_Params
{
	int                                                InTrackedCameraIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
struct UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Params
{
	class USceneComponent*                             Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
struct UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
struct UOculusMRFunctionLibrary_GetOculusMRSettings_Params
{
	class UOculusMR_Settings*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
