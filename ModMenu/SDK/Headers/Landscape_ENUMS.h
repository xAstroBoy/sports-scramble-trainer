#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    10/14/2024                  |
 * ----------------------------------------
 */

#include <cstdint>

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Landscape
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/Landscape.ELandscapeSetupErrors
     */
    enum class ELandscapeSetupErrors : uint8_t
    {
        LSE_None            = 0,
        LSE_NoLandscapeInfo = 1,
        LSE_CollsionXY      = 2,
        LSE_NoLayerInfo     = 3,
        LSE_MAX             = 4
    };

    /**
     * Enum /Script/Landscape.ELandscapeGizmoType
     */
    enum class ELandscapeGizmoType : uint8_t
    {
        LGT_None   = 0,
        LGT_Height = 1,
        LGT_Weight = 2,
        LGT_MAX    = 3
    };

    /**
     * Enum /Script/Landscape.EGrassScaling
     */
    enum class EGrassScaling : uint8_t
    {
        Uniform = 0,
        Free    = 1,
        LockXY  = 2,
        MAX     = 3
    };

    /**
     * Enum /Script/Landscape.ELandscapeLODFalloff
     */
    enum class ELandscapeLODFalloff : uint8_t
    {
        Linear     = 0,
        SquareRoot = 1,
        MAX        = 2
    };

    /**
     * Enum /Script/Landscape.ELandscapeLayerDisplayMode
     */
    enum class ELandscapeLayerDisplayMode : uint8_t
    {
        Default      = 0,
        Alphabetical = 1,
        UserSpecific = 2,
        MAX          = 3
    };

    /**
     * Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
     */
    enum class ELandscapeLayerPaintingRestriction : uint8_t
    {
        None                  = 0,
        UseMaxLayers          = 1,
        ExistingOnly          = 2,
        UseComponentWhitelist = 3,
        MAX                   = 4
    };

    /**
     * Enum /Script/Landscape.ELandscapeImportAlphamapType
     */
    enum class ELandscapeImportAlphamapType : uint8_t
    {
        Additive = 0,
        Layered  = 1,
        MAX      = 2
    };

    /**
     * Enum /Script/Landscape.LandscapeSplineMeshOrientation
     */
    enum class ELandscapeSplineMeshOrientation : uint8_t
    {
        LSMO_XUp = 0,
        LSMO_YUp = 1,
        LSMO_MAX = 2
    };

    /**
     * Enum /Script/Landscape.ELandscapeLayerBlendType
     */
    enum class ELandscapeLayerBlendType : uint8_t
    {
        LB_WeightBlend = 0,
        LB_AlphaBlend  = 1,
        LB_HeightBlend = 2,
        LB_MAX         = 3
    };

    /**
     * Enum /Script/Landscape.ELandscapeCustomizedCoordType
     */
    enum class ELandscapeCustomizedCoordType : uint8_t
    {
        LCCT_None        = 0,
        LCCT_CustomUV0   = 1,
        LCCT_CustomUV1   = 2,
        LCCT_CustomUV2   = 3,
        LCCT_WeightMapUV = 4,
        LCCT_MAX         = 5
    };

    /**
     * Enum /Script/Landscape.ETerrainCoordMappingType
     */
    enum class ETerrainCoordMappingType : uint8_t
    {
        TCMT_Auto = 0,
        TCMT_XY   = 1,
        TCMT_XZ   = 2,
        TCMT_YZ   = 3,
        TCMT_MAX  = 4
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
