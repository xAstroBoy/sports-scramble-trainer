#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    09/09/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "Engine_FEditorImportWorkflowDefinition.h"
#include "BasicTypes_TArray.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.BuildPromotionImportWorkflowSettings
     * Size -> 0x0150
     */
    struct FBuildPromotionImportWorkflowSettings
    {
    public:
        Engine::FEditorImportWorkflowDefinition                      Diffuse;                                                 //  Edit, Config, NativeAccessSpecifierPublic
        Engine::FEditorImportWorkflowDefinition                      Normal;                                                  //  Edit, Config, NativeAccessSpecifierPublic
        Engine::FEditorImportWorkflowDefinition                      StaticMesh;                                              //  Edit, Config, NativeAccessSpecifierPublic
        Engine::FEditorImportWorkflowDefinition                      ReimportStaticMesh;                                      //  Edit, Config, NativeAccessSpecifierPublic
        Engine::FEditorImportWorkflowDefinition                      BlendShapeMesh;                                          //  Edit, Config, NativeAccessSpecifierPublic
        Engine::FEditorImportWorkflowDefinition                      MorphMesh;                                               //  Edit, Config, NativeAccessSpecifierPublic
        Engine::FEditorImportWorkflowDefinition                      SkeletalMesh;                                            //  Edit, Config, NativeAccessSpecifierPublic
        Engine::FEditorImportWorkflowDefinition                      Animation;                                               //  Edit, Config, NativeAccessSpecifierPublic
        Engine::FEditorImportWorkflowDefinition                      Sound;                                                   //  Edit, Config, NativeAccessSpecifierPublic
        Engine::FEditorImportWorkflowDefinition                      SurroundSound;                                           //  Edit, Config, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FEditorImportWorkflowDefinition>  OtherAssetsToImport;                                     //  Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif