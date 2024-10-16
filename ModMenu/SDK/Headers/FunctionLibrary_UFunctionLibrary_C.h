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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "BasicTypes_FText.h"
#include "BasicTypes_TArray.h"
#include "SportsScramble_ENUMS.h"
#include "SportsScramble_FBaseballInstrumentEntryProperties.h"
#include "SportsScramble_FBaseballBallScrambleProperties.h"
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class AActor; };
namespace CG::SportsScramble { class AScramPlayer; };
namespace CG::TN_Ball_Base { class ATN_Ball_Base_C; };
namespace CG::TN_Instrument_Base { class ATN_Instrument_Base_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::FunctionLibrary
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/FunctionLibrary.FunctionLibrary_C
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UFunctionLibrary_C : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_PlayThemeMusic(bool PlayIntro, float FadeTime, CoreUObject::UObject* __WorldContext);
        void STATIC_GetPlayerNames(CoreUObject::UObject* WorldContextObject, int32_t MaxLength, CoreUObject::UObject* __WorldContext, BasicTypes::FText* Player1, BasicTypes::FText* Player2);
        void STATIC_GetBaseballInstrumentProperties(BasicTypes::TArray<SportsScramble::EBaseballInstrumentType> InstrumentTypes, CoreUObject::UObject* __WorldContext, BasicTypes::TArray<SportsScramble::FBaseballInstrumentEntryProperties>* Properties);
        void STATIC_GetBaseballBallProperties(BasicTypes::TArray<SportsScramble::EBaseballBallType> BallTypes, CoreUObject::UObject* __WorldContext, BasicTypes::TArray<SportsScramble::FBaseballBallScrambleProperties>* Properties);
        void STATIC_IsButtonTouchActor(Engine::AActor* Actor, CoreUObject::UObject* __WorldContext, bool* ReturnValue);
        void STATIC_RemoveAllFireAndForgetActors(bool Instant, CoreUObject::UObject* __WorldContext);
        void STATIC_GetLocText(const BasicTypes::FName& LocTextName, CoreUObject::UObject* __WorldContext, BasicTypes::FText* Text);
        void STATIC_DestroyAllGrabbables(SportsScramble::AScramPlayer* Player, CoreUObject::UObject* __WorldContext);
        bool STATIC_CheckMatchFromClasses(CoreUObject::UObject* InstrumentClass, CoreUObject::UObject* BallClass, CoreUObject::UObject* __WorldContext);
        void STATIC_GetMatchesFromBallClasses(BasicTypes::TArray<TN_Ball_Base::ATN_Ball_Base_C*>* BallClasses, bool UseScramblerExclusions, CoreUObject::UObject* __WorldContext, BasicTypes::TArray<TN_Instrument_Base::ATN_Instrument_Base_C*>* RacketClasses);
        void STATIC_GetMatchesFromRacketClasses(BasicTypes::TArray<TN_Instrument_Base::ATN_Instrument_Base_C*>* RacketClasses, bool UseScramblerExclusions, CoreUObject::UObject* __WorldContext, BasicTypes::TArray<TN_Ball_Base::ATN_Ball_Base_C*>* BallClasses);
        void STATIC_GetActiveTennisBallClass(CoreUObject::UObject* __WorldContext, TN_Ball_Base::ATN_Ball_Base_C** BallClass);
        void STATIC_GetActiveTennisRacketClasses(CoreUObject::UObject* __WorldContext, BasicTypes::TArray<TN_Instrument_Base::ATN_Instrument_Base_C*>* RacketClasses);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/FunctionLibrary.FunctionLibrary_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
