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
#include "Engine_FFilePath.h"
#include "Engine_FBuildPromotionImportWorkflowSettings.h"
#include "Engine_FBuildPromotionOpenAssetSettings.h"
#include "Engine_FBuildPromotionNewProjectSettings.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.BuildPromotionTestSettings
     * Size -> 0x01F0
     */
    struct FBuildPromotionTestSettings
    {
    public:
        Engine::FFilePath                                            DefaultStaticMeshAsset;                                  //  Edit, NativeAccessSpecifierPublic
        Engine::FBuildPromotionImportWorkflowSettings                ImportWorkflow;                                          //  Edit, NativeAccessSpecifierPublic
        Engine::FBuildPromotionOpenAssetSettings                     OpenAssets;                                              //  Edit, NativeAccessSpecifierPublic
        Engine::FBuildPromotionNewProjectSettings                    NewProjectSettings;                                      //  Edit, NativeAccessSpecifierPublic
        Engine::FFilePath                                            SourceControlMaterial;                                   //  Edit, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
