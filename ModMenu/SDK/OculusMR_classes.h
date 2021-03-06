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
// Classes
//---------------------------------------------------------------------------

// Class OculusMR.OculusMR_BoundaryActor
// 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
class AOculusMR_BoundaryActor : public AActor
{
public:
	class UOculusMR_BoundaryMeshComponent*             BoundaryMeshComponent;                                     // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_BoundaryActor");
		return ptr;
	}



};

// Class OculusMR.OculusMR_BoundaryMeshComponent
// 0x0028 (FullSize[0x05B0] - InheritedSize[0x0588])
class UOculusMR_BoundaryMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_RF3A[0x4];                                     // 0x0588(0x0004) Fix Super Size
	float                                              BottomZ;                                                   // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TopZ;                                                      // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N8OW[0x4];                                     // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   WhiteMaterial;                                             // 0x0598(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AOculusMR_CastingCameraActor*                CastingCameraActor;                                        // 0x05A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0XBK[0x8];                                     // 0x05A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_BoundaryMeshComponent");
		return ptr;
	}



};

// Class OculusMR.OculusMR_CastingCameraActor
// 0x00F8 (FullSize[0x0430] - InheritedSize[0x0338])
class AOculusMR_CastingCameraActor : public ASceneCapture2D
{
public:
	class UVRNotificationsComponent*                   VRNotificationComponent;                                   // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  CameraColorTexture;                                        // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  CameraDepthTexture;                                        // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOculusMR_PlaneMeshComponent*                PlaneMeshComponent;                                        // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   ChromaKeyMaterial;                                         // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   ChromaKeyLitMaterial;                                      // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   OpaqueColoredMaterial;                                     // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ChromaKeyMaterialInstance;                                 // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ChromaKeyLitMaterialInstance;                              // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    CameraFrameMaterialInstance;                               // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    BackdropMaterialInstance;                                  // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AOculusMR_BoundaryActor*                     BoundaryActor;                                             // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASceneCapture2D*                             BoundarySceneCaptureActor;                                 // 0x0398(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DefaultTexture_White;                                      // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HOAZ[0x60];                                    // 0x03A8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureRenderTarget2D*                      BackgroundRenderTarget;                                    // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASceneCapture2D*                             ForegroundCaptureActor;                                    // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextureRenderTarget2D*                      ForegroundRenderTarget;                                    // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOculusMR_Settings*                          MRSettings;                                                // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOculusMR_State*                             MRState;                                                   // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_CastingCameraActor");
		return ptr;
	}



};

// Class OculusMR.OculusMR_PlaneMeshComponent
// 0x0018 (FullSize[0x05A0] - InheritedSize[0x0588])
class UOculusMR_PlaneMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_45UE[0x8];                                     // 0x0588(0x0008) Fix Super Size
	unsigned char                                      UnknownData_QCZS[0x10];                                    // 0x0590(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_PlaneMeshComponent");
		return ptr;
	}



	bool SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
};

// Class OculusMR.OculusMR_Settings
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UOculusMR_Settings : public UObject
{
public:
	OculusMR_EOculusMR_ClippingReference               ClippingReference;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTrackedCameraResolution;                               // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V0JW[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WidthPerView;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeightPerView;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CastingLatency;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandPoseStateLatency;                                      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      ChromaKeyColor;                                            // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChromaKeySimilarity;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChromaKeySmoothRange;                                      // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChromaKeySpillRange;                                       // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	OculusMR_EOculusMR_VirtualGreenScreenType          VirtualGreenScreenType;                                    // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1NP6[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DynamicLightingDepthSmoothFactor;                          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DynamicLightingDepthVariationClampingValue;                // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	OculusMR_EOculusMR_PostProcessEffects              ExternalCompositionPostProcessEffects;                     // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCasting;                                                // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	OculusMR_EOculusMR_CompositionMethod               CompositionMethod;                                         // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	OculusMR_EOculusMR_CameraDeviceEnum                CapturingCamera;                                           // 0x005B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseDynamicLighting;                                       // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	OculusMR_EOculusMR_DepthQuality                    DepthQuality;                                              // 0x005D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XM3D[0x6A];                                    // 0x005E(0x006A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_Settings");
		return ptr;
	}



	void SetUseDynamicLighting(bool val);
	void SetIsCasting(bool val);
	void SetDepthQuality(OculusMR_EOculusMR_DepthQuality val);
	void SetCompositionMethod(OculusMR_EOculusMR_CompositionMethod val);
	void SetCapturingCamera(OculusMR_EOculusMR_CameraDeviceEnum val);
	void SaveToIni();
	void LoadFromIni();
	bool GetUseDynamicLighting();
	bool GetIsCasting();
	OculusMR_EOculusMR_DepthQuality GetDepthQuality();
	OculusMR_EOculusMR_CompositionMethod GetCompositionMethod();
	OculusMR_EOculusMR_CameraDeviceEnum GetCapturingCamera();
	int GetBindToTrackedCameraIndex();
	void BindToTrackedCameraIndexIfAvailable(int InTrackedCameraIndex);
};

// Class OculusMR.OculusMR_State
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UOculusMR_State : public UObject
{
public:
	struct FTrackedCamera                              TrackedCamera;                                             // 0x0028(0x0058) (NativeAccessSpecifierPublic)
	class USceneComponent*                             TrackingReferenceComponent;                                // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2W5H[0x4];                                     // 0x0088(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               ChangeCameraStateRequested;                                // 0x008C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BindToTrackedCameraIndexRequested;                         // 0x008D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UC2Z[0x2];                                     // 0x008E(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_State");
		return ptr;
	}



};

// Class OculusMR.OculusMRFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMRFunctionLibrary");
		return ptr;
	}



	void STATIC_SetTrackingReferenceComponent(class USceneComponent* Component);
	class USceneComponent* STATIC_GetTrackingReferenceComponent();
	class UOculusMR_Settings* STATIC_GetOculusMRSettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
