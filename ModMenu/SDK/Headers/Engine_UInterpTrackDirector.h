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
#include "BasicTypes_TArray.h"
#include "Engine_FDirectorTrackCut.h"
#include "Engine_UInterpTrack.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.InterpTrackDirector
     * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
     */
    class UInterpTrackDirector : public Engine::UInterpTrack
    {
    public:
        BasicTypes::TArray<Engine::FDirectorTrackCut>                CutTrack;                                                //  ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         bSimulateCameraCutsOnClients : 1;                        //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.InterpTrackDirector");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
