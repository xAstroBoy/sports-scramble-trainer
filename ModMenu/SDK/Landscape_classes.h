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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Landscape.ControlPointMeshComponent
	 * Size -> 0x0008 (FullSize[0x0600] - InheritedSize[0x05F8])
	 */
	class UControlPointMeshComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_NR6P[0x8];                                   // 0x05F8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeProxy
	 * Size -> 0x0318 (FullSize[0x0640] - InheritedSize[0x0328])
	 */
	class ALandscapeProxy : public AActor
	{
	public:
		class ULandscapeSplinesComponent*                          SplineComponent;                                         // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               LandscapeGuid;                                           // 0x0330(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIntPoint                                           LandscapeSectionOffset;                                  // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLODLevel;                                             // 0x0348(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LODDistanceFactor;                                       // 0x034C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeLODFalloff                                       LODFalloff;                                              // 0x0350(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WF4L[0x3];                                   // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ComponentScreenSizeToUseSubSections;                     // 0x0354(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOD0DistributionSetting;                                 // 0x0358(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LODDistributionSetting;                                  // 0x035C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TessellationComponentScreenSize;                         // 0x0360(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseTessellationComponentScreenSizeFalloff;               // 0x0364(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U02Z[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TessellationComponentScreenSizeFalloff;                  // 0x0368(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OccluderGeometryLOD;                                     // 0x036C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StaticLightingLOD;                                       // 0x0370(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEUA[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   DefaultPhysMaterial;                                     // 0x0378(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StreamingDistanceMultiplier;                             // 0x0380(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOKJ[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  LandscapeMaterial;                                       // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  LandscapeHoleMaterial;                                   // 0x0390(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLandscapeProxyMaterialOverride>             LandscapeMaterialsOverride;                              // 0x0398(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      NegativeZBoundsExtension;                                // 0x03A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositiveZBoundsExtension;                                // 0x03AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ULandscapeComponent*>                         LandscapeComponents;                                     // 0x03B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class ULandscapeHeightfieldCollisionComponent*>     CollisionComponents;                                     // 0x03C0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UHierarchicalInstancedStaticMeshComponent*>   FoliageComponents;                                       // 0x03D0(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KS8X[0x64];                                  // 0x03E0(0x0064) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasLandscapeGrass;                                      // 0x0444(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTO8[0x3];                                   // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaticLightingResolution;                                // 0x0448(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastStaticShadow : 1;                                   // 0x044C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadowAsTwoSided : 1;                               // 0x044C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastFarShadow : 1;                                      // 0x044C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQVR[0x3];                                   // 0x044D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAffectDistanceFieldLighting : 1;                        // 0x0450(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x0451(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWKA[0x2];                                   // 0x0452(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseMaterialPositionOffsetInStaticLighting : 1;          // 0x0454(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderCustomDepth : 1;                                  // 0x0454(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6S20[0x3];                                   // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomDepthStencilValue;                                 // 0x0458(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LDMaxDrawDistance;                                       // 0x045C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightmassPrimitiveSettings                         LightmassSettings;                                       // 0x0460(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CollisionMipLevel;                                       // 0x0478(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimpleCollisionMipLevel;                                 // 0x047C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionThickness;                                      // 0x0480(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9C5K[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyInstance                                       BodyInstance;                                            // 0x0488(0x0150) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bGenerateOverlapEvents : 1;                              // 0x05D8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBakeMaterialPositionOffsetIntoCollision : 1;            // 0x05D8(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RTE[0x3];                                   // 0x05D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ComponentSizeQuads;                                      // 0x05DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsectionSizeQuads;                                     // 0x05E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSubsections;                                          // 0x05E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsedForNavigation : 1;                                  // 0x05E8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZA68[0x3];                                   // 0x05E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseDynamicMaterialInstance;                             // 0x05EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENavDataGatheringMode                                      NavigationGeometryGatheringMode;                         // 0x05ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLandscapeForCullingInvisibleHLODVertices;            // 0x05EE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0T7[0x51];                                  // 0x05EF(0x0051) MISSED OFFSET (PADDING)

	public:
		void SetLandscapeMaterialVectorParameterValue(const class FName& ParameterName, const struct FLinearColor& Value);
		void SetLandscapeMaterialTextureParameterValue(const class FName& ParameterName, class UTexture* Value);
		void SetLandscapeMaterialScalarParameterValue(const class FName& ParameterName, float Value);
		void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
		void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
		void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
		void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
		void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
		void ChangeLODDistanceFactor(float InLODDistanceFactor);
		void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.Landscape
	 * Size -> 0x0000 (FullSize[0x0640] - InheritedSize[0x0640])
	 */
	class ALandscape : public ALandscapeProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeComponent
	 * Size -> 0x01E0 (FullSize[0x0740] - InheritedSize[0x0560])
	 */
	class ULandscapeComponent : public UPrimitiveComponent
	{
	public:
		int32_t                                                    SectionBaseX;                                            // 0x0560(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SectionBaseY;                                            // 0x0564(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentSizeQuads;                                      // 0x0568(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsectionSizeQuads;                                     // 0x056C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSubsections;                                          // 0x0570(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAP4[0x4];                                   // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OverrideHoleMaterial;                                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLandscapeComponentMaterialOverride>         OverrideMaterials;                                       // 0x0588(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInstanceConstant*>                   MaterialInstances;                                       // 0x0598(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		TArray<class UMaterialInstanceDynamic*>                    MaterialInstancesDynamic;                                // 0x05A8(0x0010) ZeroConstructor, Transient, TextExportTransient, NativeAccessSpecifierPublic
		TArray<int8_t>                                             LODIndexToMaterialIndex;                                 // 0x05B8(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		TArray<int8_t>                                             MaterialIndexToDisabledTessellationMaterial;             // 0x05C8(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		TArray<struct FWeightmapLayerAllocationInfo>               WeightmapLayerAllocations;                               // 0x05D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  WeightmapTextures;                                       // 0x05E8(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		class UTexture2D*                                          XYOffsetmapTexture;                                      // 0x05F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            WeightmapScaleBias;                                      // 0x0600(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightmapSubsectionOffset;                               // 0x0610(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYH6[0xC];                                   // 0x0614(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            HeightmapScaleBias;                                      // 0x0620(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          HeightmapTexture;                                        // 0x0630(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                CachedLocalBox;                                          // 0x0638(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                      // 0x0654(0x001C) ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               MapBuildDataId;                                          // 0x0670(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       IrrelevantLights;                                        // 0x0680(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		int32_t                                                    CollisionMipLevel;                                       // 0x0690(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimpleCollisionMipLevel;                                 // 0x0694(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NegativeZBoundsExtension;                                // 0x0698(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositiveZBoundsExtension;                                // 0x069C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaticLightingResolution;                                // 0x06A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ForcedLOD;                                               // 0x06A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODBias;                                                 // 0x06A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               StateId;                                                 // 0x06AC(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               BakedTextureMaterialGuid;                                // 0x06BC(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDGH[0x4];                                   // 0x06CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          GIBakedBaseColorTexture;                                 // 0x06D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MobileBlendableLayerMask;                                // 0x06D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKL2[0x7];                                   // 0x06D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MobileMaterialInterface;                                 // 0x06E0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          MobileMaterialInterfaces;                                // 0x06E8(0x0010) ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  MobileWeightmapTextures;                                 // 0x06F8(0x0010) ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFM1[0x38];                                  // 0x0708(0x0038) MISSED OFFSET (PADDING)

	public:
		class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGizmoActor
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class ALandscapeGizmoActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGizmoActiveActor
	 * Size -> 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
	 */
	class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
	{
	public:
		unsigned char                                              UnknownData_N491[0x50];                                  // 0x0328(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGizmoRenderComponent
	 * Size -> 0x0000 (FullSize[0x0560] - InheritedSize[0x0560])
	 */
	class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGrassType
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class ULandscapeGrassType : public UObject
	{
	public:
		TArray<struct FGrassVariety>                               GrassVarieties;                                          // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDensityScaling : 1;                               // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6VH[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         GrassMesh;                                               // 0x0040(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrassDensity;                                            // 0x0048(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlacementJitter;                                         // 0x004C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartCullDistance;                                       // 0x0050(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndCullDistance;                                         // 0x0054(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomRotation;                                          // 0x0058(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlignToSurface;                                          // 0x0059(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDYS[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeHeightfieldCollisionComponent
	 * Size -> 0x00E0 (FullSize[0x0640] - InheritedSize[0x0560])
	 */
	class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
	{
	public:
		TArray<class ULandscapeLayerInfoObject*>                   ComponentLayerInfos;                                     // 0x0560(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SectionBaseX;                                            // 0x0570(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SectionBaseY;                                            // 0x0574(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollisionSizeQuads;                                      // 0x0578(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionScale;                                          // 0x057C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimpleCollisionSizeQuads;                                // 0x0580(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3AFS[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      CollisionQuadFlags;                                      // 0x0588(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               HeightfieldGuid;                                         // 0x0598(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                CachedLocalBox;                                          // 0x05A8(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ULandscapeComponent>                  RenderComponent;                                         // 0x05C4(0x001C) ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5YY[0x10];                                  // 0x05E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPhysicalMaterial*>                           CookedPhysicalMaterials;                                 // 0x05F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PXS[0x40];                                  // 0x0600(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeInfo
	 * Size -> 0x01D8 (FullSize[0x0200] - InheritedSize[0x0028])
	 */
	class ULandscapeInfo : public UObject
	{
	public:
		TLazyObjectPtr<class ALandscape>                           LandscapeActor;                                          // 0x0028(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               LandscapeGuid;                                           // 0x0044(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentSizeQuads;                                      // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsectionSizeQuads;                                     // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentNumSubsections;                                 // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DrawScale;                                               // 0x0060(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DD0O[0x54];                                  // 0x006C(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Proxies[0x50];                                           // 0x00C0(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
		unsigned char                                              UnknownData_WFYM[0xF0];                                  // 0x0110(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeInfoMap
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class ULandscapeInfoMap : public UObject
	{
	public:
		unsigned char                                              UnknownData_0AAQ[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeLayerInfoObject
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULandscapeLayerInfoObject : public UObject
	{
	public:
		class FName                                                LayerName;                                               // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysMaterial;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Hardness;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LayerUsageDebugColor;                                    // 0x003C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCE5[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMaterialInstanceConstant
	 * Size -> 0x0008 (FullSize[0x01F0] - InheritedSize[0x01E8])
	 */
	class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
	{
	public:
		bool                                                       bIsLayerThumbnail : 1;                                   // 0x01E8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableTessellation : 1;                                // 0x01E8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMobile : 1;                                             // 0x01E8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEditorToolUsage : 1;                                    // 0x01E8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LXV[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMeshCollisionComponent
	 * Size -> 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
	 */
	class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
	{
	public:
		struct FGuid                                               MeshGuid;                                                // 0x0640(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WTPX[0x10];                                  // 0x0650(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMeshProxyActor
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class ALandscapeMeshProxyActor : public AActor
	{
	public:
		class ULandscapeMeshProxyComponent*                        LandscapeMeshProxyComponent;                             // 0x0328(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMeshProxyComponent
	 * Size -> 0x0028 (FullSize[0x0620] - InheritedSize[0x05F8])
	 */
	class ULandscapeMeshProxyComponent : public UStaticMeshComponent
	{
	public:
		struct FGuid                                               LandscapeGuid;                                           // 0x05F8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FIntPoint>                                   ProxyComponentBases;                                     // 0x0608(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int8_t                                                     ProxyLOD;                                                // 0x0618(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MRC2[0x7];                                   // 0x0619(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSplinesComponent
	 * Size -> 0x0030 (FullSize[0x0590] - InheritedSize[0x0560])
	 */
	class ULandscapeSplinesComponent : public UPrimitiveComponent
	{
	public:
		TArray<class ULandscapeSplineControlPoint*>                ControlPoints;                                           // 0x0560(0x0010) ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected
		TArray<class ULandscapeSplineSegment*>                     Segments;                                                // 0x0570(0x0010) ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected
		TArray<class UMeshComponent*>                              CookedForeignMeshComponents;                             // 0x0580(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected

	public:
		TArray<class USplineMeshComponent*> GetSplineMeshComponents();
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSplineControlPoint
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class ULandscapeSplineControlPoint : public UObject
	{
	public:
		struct FVector                                             Location;                                                // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SideFalloff;                                             // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndFalloff;                                              // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U00B[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLandscapeSplineConnection>                  ConnectedSegments;                                       // 0x0050(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		TArray<struct FLandscapeSplineInterpPoint>                 Points;                                                  // 0x0060(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                Bounds;                                                  // 0x0070(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q1LO[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlPointMeshComponent*                          LocalMeshComponent;                                      // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSplineSegment
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class ULandscapeSplineSegment : public UObject
	{
	public:
		struct FLandscapeSplineSegmentConnection                   Connections[0x2];                                        // 0x0028(0x0030) Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		struct FInterpCurveVector                                  SplineInfo;                                              // 0x0058(0x0018) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FLandscapeSplineInterpPoint>                 Points;                                                  // 0x0070(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                Bounds;                                                  // 0x0080(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AW4T[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USplineMeshComponent*>                        LocalMeshComponents;                                     // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeStreamingProxy
	 * Size -> 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
	 */
	class ALandscapeStreamingProxy : public ALandscapeProxy
	{
	public:
		TLazyObjectPtr<class ALandscape>                           LandscapeActor;                                          // 0x0640(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W176[0x4];                                   // 0x065C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeGrassOutput
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
	{
	public:
		TArray<struct FGrassInput>                                 GrassTypes;                                              // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerBlend
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
	{
	public:
		TArray<struct FLayerBlendInput>                            Layers;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerCoords
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
	{
	public:
		ETerrainCoordMappingType                                   MappingType;                                             // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeCustomizedCoordType                              CustomUVType;                                            // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5K28[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MappingScale;                                            // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MappingRotation;                                         // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MappingPanU;                                             // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MappingPanV;                                             // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2XF[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerSample
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
	{
	public:
		class FName                                                ParameterName;                                           // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviewWeight;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x004C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMMS[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerSwitch
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
	{
	public:
		struct FExpressionInput                                    LayerUsed;                                               // 0x0040(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2F1C[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    LayerNotUsed;                                            // 0x0058(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEEQ[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParameterName;                                           // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PreviewUsed : 1;                                         // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRD7[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ExpressionGUID;                                          // 0x007C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4G4[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerWeight
	 * Size -> 0x0058 (FullSize[0x0098] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
	{
	public:
		struct FExpressionInput                                    Base;                                                    // 0x0040(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8I5[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    Layer;                                                   // 0x0058(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5D1[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParameterName;                                           // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviewWeight;                                           // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ConstBase;                                               // 0x007C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x0088(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeVisibilityMask
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
	{
	public:
		struct FGuid                                               ExpressionGUID;                                          // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
