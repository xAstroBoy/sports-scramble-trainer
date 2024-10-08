#pragma once
#pragma warning(disable: 4267)

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
#include "BasicTypes_FName.h"
#include "CoreUObject_FTransform.h"
#include "SportsScramble_ENUMS.h"
#include "BasicTypes_FString.h"
#include "BasicTypes_TArray.h"
#include "OnlineSubsystemUtils_FBlueprintSessionResult.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "CoreUObject_FBox.h"
#include "Engine_ENUMS.h"
#include "SportsScramble_FAvatarLook.h"
#include "SportsScramble_FScramGameInvite.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Travelcapsule { class ATravelcapsule_C; };
namespace CG::SportsScramble { class AScramInstrument; };
namespace CG::SportsScramble { class AScramPlayerHand; };
namespace CG::SportsScramble { class AScramPlayer; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ScramGameInstance
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_UnloadLevels_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_SetAnchorToArena_Params
    {
    public:
        BasicTypes::FName                                            RowName;                                                 //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         IsHost;                                                  //  0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_CreateTravelCapsuleNoTeleport_Params
    {
    public:
        CoreUObject::FTransform                                      OverrideTransform;                                       //  0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
        bool                                                         UseOverrideTransform;                                    //  0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        bool                                                         Instant;                                                 //  0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        bool                                                         StartRed;                                                //  0x0032(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0000[0x5];                                   //  0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        Travelcapsule::ATravelcapsule_C*                             TravelCapsule;                                           //  0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         AlreadyExisted;                                          //  0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_CheckIsSpectator_Params
    {
    public:
        bool                                                         IsSpectator;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0001[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_PrepareInstrumentReinit_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_SetSportType_Params
    {
    public:
        SportsScramble::EScramSport                                  Sport;                                                   //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         KeepInstruments;                                         //  0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_EnableMusic_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_DisableMusic_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_ForceChangeInstrument_Params
    {
    public:
        SportsScramble::AScramInstrument*                            NewInstrumentClass;                                      //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         DropOldInstrument;                                       //  0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0002[0x7];                                   //  0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        SportsScramble::AScramPlayerHand*                            HandActorOptional;                                       //  0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         UseHandedness;                                           //  0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0003[0x7];                                   //  0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        SportsScramble::AScramInstrument*                            NewInstrument;                                           //  0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_DisplayDebugString_Params
    {
    public:
        BasicTypes::FString                                          DebugString;                                             //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
        float                                                        Durtation;                                               //  0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0004[0xC];                                   //  0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85A160D238_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85A160D238_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_E218766E479159D426108DB79AE5A05D_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_E218766E479159D426108DB79AE5A05D_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85CD6B33B6_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85CD6B33B6_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_E218766E479159D426108DB7F6EE41D3_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_E218766E479159D426108DB7F6EE41D3_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_A6825E2046D1EE4480D53F85A91F0ECD_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_A6825E2046D1EE4480D53F85A91F0ECD_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_E218766E479159D426108DB7929A7CA8_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_E218766E479159D426108DB7929A7CA8_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_195EB2254E8E108525A7CCA39EDA45EB_Params
    {
    public:
        BasicTypes::TArray<OnlineSubsystemUtils::FBlueprintSessionResult> Results;                                                 //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_195EB2254E8E108525A7CCA39EDA45EB_Params
    {
    public:
        BasicTypes::TArray<OnlineSubsystemUtils::FBlueprintSessionResult> Results;                                                 //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_2068A73A4E27B76D6515A3A4308C2A02_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_2068A73A4E27B76D6515A3A4308C2A02_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_FFC99656425C039A8BCC99955A3E5515_Params
    {
    public:
        BasicTypes::TArray<OnlineSubsystemUtils::FBlueprintSessionResult> Results;                                                 //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_FFC99656425C039A8BCC99955A3E5515_Params
    {
    public:
        BasicTypes::TArray<OnlineSubsystemUtils::FBlueprintSessionResult> Results;                                                 //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_F9E172BA4FE1D5A046DC01BD48DACA9B_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_F9E172BA4FE1D5A046DC01BD48DACA9B_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_EAD2016E4E26B32FAABA1FA5F88D9CB4_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_EAD2016E4E26B32FAABA1FA5F88D9CB4_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_2E9EF70F49117325F129FCAEC8708411_Params
    {
    public:
        BasicTypes::TArray<OnlineSubsystemUtils::FBlueprintSessionResult> Results;                                                 //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_2E9EF70F49117325F129FCAEC8708411_Params
    {
    public:
        BasicTypes::TArray<OnlineSubsystemUtils::FBlueprintSessionResult> Results;                                                 //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_28C0B15B470A9AA54E923CAC6773937B_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_28C0B15B470A9AA54E923CAC6773937B_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_1933FE3C43C128FAB9B71398D3ED0723_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_1933FE3C43C128FAB9B71398D3ED0723_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnFailure_B64C966143C1313AC5BD979ACFAE5B69_Params
    {
    public:
        BasicTypes::TArray<OnlineSubsystemUtils::FBlueprintSessionResult> Results;                                                 //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnSuccess_B64C966143C1313AC5BD979ACFAE5B69_Params
    {
    public:
        BasicTypes::TArray<OnlineSubsystemUtils::FBlueprintSessionResult> Results;                                                 //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_LoadArena_Params
    {
    public:
        BasicTypes::FName                                            Level;                                                   //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         NoRender;                                                //  0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_GeoLevelLoadComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_PrimaryLevelLoadComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_SetLevelVisibility_Params
    {
    public:
        bool                                                         visible;                                                 //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_LoadArenaGameplayAndGeo_Params
    {
    public:
        SportsScramble::EScramSport                                  Sport;                                                   //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Training;                                                //  0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_LoadArenaGeo_Params
    {
    public:
        BasicTypes::FName                                            NewPrimaryLevel;                                         //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_GeoLevelShown_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_TeleportPlayArea_Params
    {
    public:
        CoreUObject::FVector                                         PlayAreaTransformLocation;                               //  0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FRotator                                        PlayAreaTransformRotation;                               //  0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        bool                                                         UseTransitionDuration;                                   //  0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0005[0x3];                                   //  0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        float                                                        TransitionDuration;                                      //  0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        CoreUObject::FBox                                            minPlayArea;                                             //  0x0020(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        CoreUObject::FBox                                            maxPlayArea;                                             //  0x003C(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        CoreUObject::FBox                                            maxHazardArea;                                           //  0x0058(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_TeleportReady_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_TeleportComplete_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_HidePlayer_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_Host_Game_Params
    {
    public:
        bool                                                         LAN;                                                     //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        uint8_t                                                      UnknownData_0006[0x7];                                   //  0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::FName                                            Level;                                                   //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_GetSessions_Params
    {
    public:
        bool                                                         LAN;                                                     //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_JoinMatch_Params
    {
    public:
        BasicTypes::FString                                          ServerName;                                              //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
        bool                                                         LAN;                                                     //  0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_EndMultiplayer_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_ShowDebugMessage_Params
    {
    public:
        BasicTypes::FString                                          Message;                                                 //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
        float                                                        LifeTime;                                                //  0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OCDemo_FindSession_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OCDemo_Host_Params
    {
    public:
        BasicTypes::FName                                            LevelName;                                               //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         Absolute;                                                //  0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OCDemo_Join_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_DebugOCDemoServerList_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_FindAndJoin_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_AttemptToJoin_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      SessionsFound;                                           //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_SelfSessionsUnbind_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_TryAnother_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_CheckConnection_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_CheckSessionFailed_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_CheckSessionFound_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      SessionsFound;                                           //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_CheckSessionSuccessNoValid_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_HandleTravelError_Params
    {
    public:
        Engine::ETravelFailure                                       failureType;                                             //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_HandleNetworkError_Params
    {
    public:
        Engine::ENetworkFailure                                      failureType;                                             //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         bIsServer;                                               //  0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_ReceiveInit_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_AppWillEnterBackground_Params
    {
    public:
        bool                                                         LocalEvent;                                              //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_AppHasEnteredForeground_Params
    {
    public:
        bool                                                         LocalEvent;                                              //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_AppWillDeactivate_Params
    {
    public:
        bool                                                         LocalEvent;                                              //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_AppHasReactivated_Params
    {
    public:
        bool                                                         LocalEvent;                                              //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_AppWillTerminate_Params
    {
    public:
        bool                                                         LocalEvent;                                              //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_SetAvatarLook_Params
    {
    public:
        SportsScramble::AScramPlayer*                                pPlayer;                                                 //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        SportsScramble::FAvatarLook                                  AvatarLook;                                              //  0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_BroadcastLocalAvatarLook_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_GameInvitePing_Params
    {
    public:
        int32_t                                                      pingCount;                                               //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_ClearDebugMessages_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OnShellInviteAccepted_Params
    {
    public:
        SportsScramble::FScramGameInvite                             GameInvite;                                              //  0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_BindShellInviteAcceptedEvent_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_ExecuteUbergraph_ScramGameInstance_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_LevelsUnloaded__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_CheckConnectionResult__DelegateSignature_Params
    {
    public:
        bool                                                         ConnectionOk;                                            //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_FindSessionsFailed__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_HostingFailed__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_JoinFailedAll__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_ExistingTeleportTransitionReady__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_LevelBPDispatch__DelegateSignature_Params
    {
    public:
        int32_t                                                      DispatchId;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OCDemoSessionNotFound__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_OCDemoSessionFound__DelegateSignature_Params
    {
    public:
        OnlineSubsystemUtils::FBlueprintSessionResult                Session;                                                 //  0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_GeoLevelChanged__DelegateSignature_Params
    {
    public:
        BasicTypes::FName                                            NewGeoLevel;                                             //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_PrimaryLevelChanged__DelegateSignature_Params
    {
    public:
        BasicTypes::FName                                            NewPrimaryLevel;                                         //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_TeleportTransitionComplete__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_TeleportTransitionReady__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_JoinSuccess__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_JoinFailed__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_NoSessionsFound__DelegateSignature_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UScramGameInstance_C_MultiplayerSessionsFound__DelegateSignature_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      SessionsFound;                                           //  0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
