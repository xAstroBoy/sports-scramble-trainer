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
#include "Engine_FFilePath.h"
#include "BasicTypes_TArray.h"
#include "Engine_FImportFactorySettingValues.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.EditorImportWorkflowDefinition
     * Size -> 0x0020
     */
    struct FEditorImportWorkflowDefinition
    {
    public:
        Engine::FFilePath                                            ImportFilePath;                                          //  Edit, Config, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FImportFactorySettingValues>      FactorySettings;                                         //  Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif