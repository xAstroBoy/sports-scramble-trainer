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
#include "Engine_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "Engine_FTTEventTrack.h"
#include "Engine_FTTFloatTrack.h"
#include "Engine_FTTVectorTrack.h"
#include "Engine_FTTLinearColorTrack.h"
#include "Engine_FBPVariableMetaDataEntry.h"
#include "CoreUObject_FGuid.h"
#include "CoreUObject_UObject.h"

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
     * Class /Script/Engine.TimelineTemplate
     * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
     */
    class UTimelineTemplate : public CoreUObject::UObject
    {
    public:
        float                                                        TimelineLength;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ETimelineLengthMode                                  LengthMode;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bAutoPlay : 1;                                           //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bLoop : 1;                                               //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bReplicated : 1;                                         //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bValidatedAsWired : 1;                                   //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIgnoreTimeDilation : 1;                                 //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FTTEventTrack>                    EventTracks;                                             //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FTTFloatTrack>                    FloatTracks;                                             //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FTTVectorTrack>                   VectorTracks;                                            //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FTTLinearColorTrack>              LinearColorTracks;                                       //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FBPVariableMetaDataEntry>         MetaDataArray;                                           //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        CoreUObject::FGuid                                           TimelineGuid;                                            //  ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.TimelineTemplate");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif