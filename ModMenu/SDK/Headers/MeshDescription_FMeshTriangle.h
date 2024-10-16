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
#include <vector>
#include <string>
#include "MeshDescription_FVertexInstanceID.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MeshDescription
{
    /**
     * ScriptStruct /Script/MeshDescription.MeshTriangle
     * Size -> 0x000C
     */
    struct FMeshTriangle
    {
    public:
        MeshDescription::FVertexInstanceID                           VertexInstanceID0;                                       //  BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MeshDescription::FVertexInstanceID                           VertexInstanceID1;                                       //  BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MeshDescription::FVertexInstanceID                           VertexInstanceID2;                                       //  BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
