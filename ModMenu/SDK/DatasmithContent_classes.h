﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class DatasmithContent.DatasmithObjectTemplate
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithObjectTemplate : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithActorTemplate
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UDatasmithActorTemplate : public UDatasmithObjectTemplate
	{
	public:
		unsigned char                                              Layers[0x50];                                            // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithActorTemplate.Layers
		unsigned char                                              Tags[0x50];                                              // 0x0078(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithActorTemplate.Tags

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithAreaLightActor
	 * Size -> 0x0020 (FullSize[0x0348] - InheritedSize[0x0328])
	 */
	class ADatasmithAreaLightActor : public AActor
	{
	public:
		EDatasmithAreaLightActorShape                              LightShape;                                              // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ON2G[0x3];                                   // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Dimensions;                                              // 0x032C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0334(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithAreaLightActorTemplate
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
	{
	public:
		EDatasmithAreaLightActorShape                              LightShape;                                              // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0E5I[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Dimensions;                                              // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0034(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidden : 1;                                             // 0x0048(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NN31[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithAssetImportData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithAssetImportData : public UAssetImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithStaticMeshImportData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithStaticMeshCADImportData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithSceneImportData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithSceneImportData : public UAssetImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithCADImportSceneData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithMDLSceneImportData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithDeltaGenAssetImportData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithDeltaGenSceneImportData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithDeltaGenSceneImportData : public UDatasmithSceneImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithVREDAssetImportData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
	{
	public:
		unsigned char                                              UnknownData_UXZE[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithVREDSceneImportData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithVREDSceneImportData : public UDatasmithSceneImportData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithAssetUserData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UDatasmithAssetUserData : public UAssetUserData
	{
	public:
		TMap<class FName, class FString>                           MetaData;                                                // 0x0028(0x0050) Edit, BlueprintVisible, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithCineCameraComponentTemplate
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		struct FDatasmithCameraFilmbackSettingsTemplate            FilmbackSettings;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDatasmithCameraLensSettingsTemplate                LensSettings;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDatasmithCameraFocusSettingsTemplate               FocusSettings;                                           // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurrentFocalLength;                                      // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentAperture;                                         // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3FJ[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDatasmithPostProcessSettingsTemplate               PostProcessSettings;                                     // 0x0050(0x0040) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithContentBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const class FName& Key);
		void STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues);
		class UDatasmithAssetUserData* STATIC_GetDatasmithUserData(class UObject* Object);
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithImportOptions
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UDatasmithImportOptions : public UObject
	{
	public:
		EDatasmithImportSearchPackagePolicy                        SearchPackagePolicy;                                     // 0x0028(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportAssetConflictPolicy                        MaterialConflictPolicy;                                  // 0x0029(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportAssetConflictPolicy                        TextureConflictPolicy;                                   // 0x002A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportActorPolicy                                StaticMeshActorImportPolicy;                             // 0x002B(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportActorPolicy                                LightImportPolicy;                                       // 0x002C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportActorPolicy                                CameraImportPolicy;                                      // 0x002D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportActorPolicy                                OtherActorImportPolicy;                                  // 0x002E(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportMaterialQuality                            MaterialQuality;                                         // 0x002F(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68N5[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDatasmithImportBaseOptions                         BaseOptions;                                             // 0x0038(0x0018) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FDatasmithTessellationOptions                       TessellationOptions;                                     // 0x0050(0x000C) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FDatasmithReimportOptions                           ReimportOptions;                                         // 0x005C(0x0002) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_421O[0x2A];                                  // 0x005E(0x002A) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithLandscapeTemplate
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
	{
	public:
		class UMaterialInterface*                                  LandscapeMaterial;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StaticLightingLOD;                                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y43A[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithLightComponentTemplate
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		bool                                                       bVisible : 1;                                            // 0x0028(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CSAH[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       CastShadows : 1;                                         // 0x002C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTemperature : 1;                                     // 0x002C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIESBrightness : 1;                                   // 0x002C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EAX7[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Intensity;                                               // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Temperature;                                             // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IESBrightnessScale;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LightColor;                                              // 0x003C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVH3[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  LightFunctionMaterial;                                   // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureLightProfile*                                IESTexture;                                              // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithPointLightComponentTemplate
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		ELightUnits                                                IntensityUnits;                                          // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S92C[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SourceRadius;                                            // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceLength;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttenuationRadius;                                       // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithScene
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDatasmithScene : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithSceneActor
	 * Size -> 0x0058 (FullSize[0x0380] - InheritedSize[0x0328])
	 */
	class ADatasmithSceneActor : public AActor
	{
	public:
		class UDatasmithScene*                                     Scene;                                                   // 0x0328(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RelatedActors[0x50];                                     // 0x0330(0x0050) UNKNOWN PROPERTY: MapProperty DatasmithContent.DatasmithSceneActor.RelatedActors

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithSceneComponentTemplate
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		unsigned char                                              UnknownData_LGIF[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EComponentMobility                                         Mobility;                                                // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0U19[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AttachParent[0x28];                                      // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DatasmithContent.DatasmithSceneComponentTemplate.AttachParent
		unsigned char                                              Tags[0x50];                                              // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty DatasmithContent.DatasmithSceneComponentTemplate.Tags

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithSkyLightComponentTemplate
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		ESkyLightSourceType                                        SourceType;                                              // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPYQ[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CubemapResolution;                                       // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureCube*                                        Cubemap;                                                 // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithSpotLightComponentTemplate
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
	{
	public:
		float                                                      InnerConeAngle;                                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterConeAngle;                                          // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithStaticMeshComponentTemplate
	 * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
	 */
	class UDatasmithStaticMeshComponentTemplate : public UDatasmithSceneComponentTemplate
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1J6[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DatasmithContent.DatasmithStaticMeshTemplate
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
	{
	public:
		struct FDatasmithMeshSectionInfoMapTemplate                SectionInfoMap;                                          // 0x0028(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    LightMapCoordinateIndex;                                 // 0x0078(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LightMapResolution;                                      // 0x007C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDatasmithMeshBuildSettingsTemplate>         BuildSettings;                                           // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FDatasmithStaticMaterialTemplate>            StaticMaterials;                                         // 0x0090(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
