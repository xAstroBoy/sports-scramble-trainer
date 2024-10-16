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
#include "BasicTypes_FString.h"
#include "Engine_FFilePath.h"
#include "Engine_FDirectoryPath.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.ExternalToolDefinition
     * Size -> 0x0060
     */
    struct FExternalToolDefinition
    {
    public:
        BasicTypes::FString                                          ToolName;                                                //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FFilePath                                            ExecutablePath;                                          //  Edit, Config, NativeAccessSpecifierPublic
        BasicTypes::FString                                          CommandLineOptions;                                      //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FDirectoryPath                                       WorkingDirectory;                                        //  Edit, Config, NativeAccessSpecifierPublic
        BasicTypes::FString                                          ScriptExtension;                                         //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FDirectoryPath                                       ScriptDirectory;                                         //  Edit, Config, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
