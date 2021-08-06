#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SportsScramble.EScramPendingGameFailure
enum class SportsScramble_EScramPendingGameFailure : uint8_t
{
	EScramPendingGameFailure__Failure = 0,
	EScramPendingGameFailure__VersionMismatch = 1,
	EScramPendingGameFailure__EScramPendingGameFailure_MAX = 2,

};

// Enum SportsScramble.EScramStrikeResult
enum class SportsScramble_EScramStrikeResult : uint8_t
{
	EScramStrikeResult__None       = 0,
	EScramStrikeResult__Strike     = 1,
	EScramStrikeResult__NearBall   = 2,
	EScramStrikeResult__FarBall    = 3,
	EScramStrikeResult__EScramStrikeResult_MAX = 4,

};

// Enum SportsScramble.ESetMode
enum class SportsScramble_ESetMode : uint8_t
{
	ESetMode__Random               = 0,
	ESetMode__Sequence             = 1,
	ESetMode__RandomSequence       = 2,
	ESetMode__Count                = 3,
	ESetMode__ESetMode_MAX         = 4,

};

// Enum SportsScramble.EBaseballBallType
enum class SportsScramble_EBaseballBallType : uint8_t
{
	EBaseballBallType__Any         = 0,
	EBaseballBallType__Baseball    = 1,
	EBaseballBallType__BasketBall  = 2,
	EBaseballBallType__BeachBall   = 3,
	EBaseballBallType__BowlingBall = 4,
	EBaseballBallType__ChargeBall  = 5,
	EBaseballBallType__FootBall    = 6,
	EBaseballBallType__Frisbee     = 7,
	EBaseballBallType__PingPongBall = 8,
	EBaseballBallType__WiffleBall  = 9,
	EBaseballBallType__TennisBall  = 10,
	EBaseballBallType__FishBall    = 11,
	EBaseballBallType__Pineapple   = 12,
	EBaseballBallType__HockeyPuck  = 13,
	EBaseballBallType__GolfBall    = 14,
	EBaseballBallType__BilliardBall = 15,
	EBaseballBallType__Softball    = 16,
	EBaseballBallType__Bomb        = 17,
	EBaseballBallType__GoldenBall  = 18,
	EBaseballBallType__Count       = 19,
	EBaseballBallType__EBaseballBallType_MAX = 20,

};

// Enum SportsScramble.EBaseballScrambleTargetLocations
enum class SportsScramble_EBaseballScrambleTargetLocations : uint8_t
{
	EBaseballScrambleTargetLocations__UpperRight = 0,
	EBaseballScrambleTargetLocations__UpperLeft = 1,
	EBaseballScrambleTargetLocations__LowerRight = 2,
	EBaseballScrambleTargetLocations__LowerLeft = 3,
	EBaseballScrambleTargetLocations__EBaseballScrambleTargetLocations_MAX = 4,

};

// Enum SportsScramble.EStrikeZoneRegion
enum class SportsScramble_EStrikeZoneRegion : uint8_t
{
	EStrikeZoneRegion__UpperLeft   = 0,
	EStrikeZoneRegion__LowerLeft   = 1,
	EStrikeZoneRegion__UpperRight  = 2,
	EStrikeZoneRegion__LowerRight  = 3,
	EStrikeZoneRegion__NearBall    = 4,
	EStrikeZoneRegion__FarBall     = 5,
	EStrikeZoneRegion__None        = 6,
	EStrikeZoneRegion__EStrikeZoneRegion_MAX = 7,

};

// Enum SportsScramble.EBaseballBatterAnimState
enum class SportsScramble_EBaseballBatterAnimState : uint8_t
{
	EBaseballBatterAnimState__Idle = 0,
	EBaseballBatterAnimState__Spawn = 1,
	EBaseballBatterAnimState__Fidget = 2,
	EBaseballBatterAnimState__Swing = 3,
	EBaseballBatterAnimState__EBaseballBatterAnimState_MAX = 4,

};

// Enum SportsScramble.EBaseballCatcherThrowSide
enum class SportsScramble_EBaseballCatcherThrowSide : uint8_t
{
	EBaseballCatcherThrowSide__Left = 0,
	EBaseballCatcherThrowSide__Middle = 1,
	EBaseballCatcherThrowSide__Right = 2,
	EBaseballCatcherThrowSide__EBaseballCatcherThrowSide_MAX = 3,

};

// Enum SportsScramble.EBaseballCatcherAnimState
enum class SportsScramble_EBaseballCatcherAnimState : uint8_t
{
	EBaseballCatcherAnimState__Idle = 0,
	EBaseballCatcherAnimState__Throw = 1,
	EBaseballCatcherAnimState__EBaseballCatcherAnimState_MAX = 2,

};

// Enum SportsScramble.EBaseballFielderAnimState
enum class SportsScramble_EBaseballFielderAnimState : uint8_t
{
	EBaseballFielderAnimState__None = 0,
	EBaseballFielderAnimState__Idle = 1,
	EBaseballFielderAnimState__Locomotion = 2,
	EBaseballFielderAnimState__CatchWait = 3,
	EBaseballFielderAnimState__Scoop = 4,
	EBaseballFielderAnimState__Catch = 5,
	EBaseballFielderAnimState__Drop = 6,
	EBaseballFielderAnimState__EBaseballFielderAnimState_MAX = 7,

};

// Enum SportsScramble.EBaseballPlayerRole
enum class SportsScramble_EBaseballPlayerRole : uint8_t
{
	EBaseballPlayerRole__Pitcher   = 0,
	EBaseballPlayerRole__Batter    = 1,
	EBaseballPlayerRole__Count     = 2,
	EBaseballPlayerRole__EBaseballPlayerRole_MAX = 3,

};

// Enum SportsScramble.EBaseballShotType
enum class SportsScramble_EBaseballShotType : uint8_t
{
	EBaseballShotType__None        = 0,
	EBaseballShotType__Pitch       = 1,
	EBaseballShotType__Light       = 2,
	EBaseballShotType__Normal      = 3,
	EBaseballShotType__Charge      = 4,
	EBaseballShotType__Count       = 5,
	EBaseballShotType__EBaseballShotType_MAX = 6,

};

// Enum SportsScramble.EBaseballShotSpeed
enum class SportsScramble_EBaseballShotSpeed : uint8_t
{
	EBaseballShotSpeed__Miss       = 0,
	EBaseballShotSpeed__Light      = 1,
	EBaseballShotSpeed__Solid      = 2,
	EBaseballShotSpeed__Good       = 3,
	EBaseballShotSpeed__Great      = 4,
	EBaseballShotSpeed__Count      = 5,
	EBaseballShotSpeed__EBaseballShotSpeed_MAX = 6,

};

// Enum SportsScramble.EBaseballInstrumentType
enum class SportsScramble_EBaseballInstrumentType : uint8_t
{
	EBaseballInstrumentType__Any   = 0,
	EBaseballInstrumentType__AluminumBat = 1,
	EBaseballInstrumentType__BaseballBat = 2,
	EBaseballInstrumentType__CricketBat = 3,
	EBaseballInstrumentType__FishRacket = 4,
	EBaseballInstrumentType__FoamFinger = 5,
	EBaseballInstrumentType__GolfClub = 6,
	EBaseballInstrumentType__HockeyStick = 7,
	EBaseballInstrumentType__PingPongPaddle = 8,
	EBaseballInstrumentType__PoolNoodle = 9,
	EBaseballInstrumentType__PoolCue = 10,
	EBaseballInstrumentType__TennisRacket = 11,
	EBaseballInstrumentType__GoldenBat = 12,
	EBaseballInstrumentType__Count = 13,
	EBaseballInstrumentType__EBaseballInstrumentType_MAX = 14,

};

// Enum SportsScramble.EBaseballPitcherAnimState
enum class SportsScramble_EBaseballPitcherAnimState : uint8_t
{
	EBaseballPitcherAnimState__Idle = 0,
	EBaseballPitcherAnimState__Spawn = 1,
	EBaseballPitcherAnimState__Catch = 2,
	EBaseballPitcherAnimState__Caught = 3,
	EBaseballPitcherAnimState__PrepThrow = 4,
	EBaseballPitcherAnimState__Throw = 5,
	EBaseballPitcherAnimState__EBaseballPitcherAnimState_MAX = 6,

};

// Enum SportsScramble.EBaseballRunnerAnimState
enum class SportsScramble_EBaseballRunnerAnimState : uint8_t
{
	EBaseballRunnerAnimState__None = 0,
	EBaseballRunnerAnimState__Idle = 1,
	EBaseballRunnerAnimState__Locomotion = 2,
	EBaseballRunnerAnimState__Despawn = 3,
	EBaseballRunnerAnimState__EBaseballRunnerAnimState_MAX = 4,

};

// Enum SportsScramble.EBattingAvatarAnimState
enum class SportsScramble_EBattingAvatarAnimState : uint8_t
{
	EBattingAvatarAnimState__Idle  = 0,
	EBattingAvatarAnimState__Spawn = 1,
	EBattingAvatarAnimState__SwingLeftSide = 2,
	EBattingAvatarAnimState__SwingRightSide = 3,
	EBattingAvatarAnimState__EBattingAvatarAnimState_MAX = 4,

};

// Enum SportsScramble.EOnlineComparisonOpRedux
enum class SportsScramble_EOnlineComparisonOpRedux : uint8_t
{
	EOnlineComparisonOpRedux__Equals = 0,
	EOnlineComparisonOpRedux__NotEquals = 1,
	EOnlineComparisonOpRedux__GreaterThan = 2,
	EOnlineComparisonOpRedux__GreaterThanEquals = 3,
	EOnlineComparisonOpRedux__LessThan = 4,
	EOnlineComparisonOpRedux__LessThanEquals = 5,
	EOnlineComparisonOpRedux__EOnlineComparisonOpRedux_MAX = 6,

};

// Enum SportsScramble.EBPOnlineSessionState
enum class SportsScramble_EBPOnlineSessionState : uint8_t
{
	EBPOnlineSessionState__NoSession = 0,
	EBPOnlineSessionState__Creating = 1,
	EBPOnlineSessionState__Pending = 2,
	EBPOnlineSessionState__Starting = 3,
	EBPOnlineSessionState__InProgress = 4,
	EBPOnlineSessionState__Ending  = 5,
	EBPOnlineSessionState__Ended   = 6,
	EBPOnlineSessionState__Destroying = 7,
	EBPOnlineSessionState__EBPOnlineSessionState_MAX = 8,

};

// Enum SportsScramble.EBPOnlinePresenceState
enum class SportsScramble_EBPOnlinePresenceState : uint8_t
{
	EBPOnlinePresenceState__Online = 0,
	EBPOnlinePresenceState__Offline = 1,
	EBPOnlinePresenceState__Away   = 2,
	EBPOnlinePresenceState__ExtendedAway = 3,
	EBPOnlinePresenceState__DoNotDisturb = 4,
	EBPOnlinePresenceState__Chat   = 5,
	EBPOnlinePresenceState__EBPOnlinePresenceState_MAX = 6,

};

// Enum SportsScramble.EBPServerPresenceSearchType
enum class SportsScramble_EBPServerPresenceSearchType : uint8_t
{
	EBPServerPresenceSearchType__AllServers = 0,
	EBPServerPresenceSearchType__ClientServersOnly = 1,
	EBPServerPresenceSearchType__DedicatedServersOnly = 2,
	EBPServerPresenceSearchType__EBPServerPresenceSearchType_MAX = 3,

};

// Enum SportsScramble.EBlueprintAsyncResultSwitch
enum class SportsScramble_EBlueprintAsyncResultSwitch : uint8_t
{
	EBlueprintAsyncResultSwitch__OnSuccess = 0,
	EBlueprintAsyncResultSwitch__AsyncLoading = 1,
	EBlueprintAsyncResultSwitch__OnFailure = 2,
	EBlueprintAsyncResultSwitch__EBlueprintAsyncResultSwitch_MAX = 3,

};

// Enum SportsScramble.EBlueprintResultSwitch
enum class SportsScramble_EBlueprintResultSwitch : uint8_t
{
	EBlueprintResultSwitch__OnSuccess = 0,
	EBlueprintResultSwitch__OnFailure = 1,
	EBlueprintResultSwitch__EBlueprintResultSwitch_MAX = 2,

};

// Enum SportsScramble.ESessionSettingSearchResult
enum class SportsScramble_ESessionSettingSearchResult : uint8_t
{
	ESessionSettingSearchResult__Found = 0,
	ESessionSettingSearchResult__NotFound = 1,
	ESessionSettingSearchResult__WrongType = 2,
	ESessionSettingSearchResult__ESessionSettingSearchResult_MAX = 3,

};

// Enum SportsScramble.EBPLoginStatus
enum class SportsScramble_EBPLoginStatus : uint8_t
{
	EBPLoginStatus__NotLoggedIn    = 0,
	EBPLoginStatus__UsingLocalProfile = 1,
	EBPLoginStatus__LoggedIn       = 2,
	EBPLoginStatus__EBPLoginStatus_MAX = 3,

};

// Enum SportsScramble.EBPUserPrivileges
enum class SportsScramble_EBPUserPrivileges : uint8_t
{
	EBPUserPrivileges__CanPlay     = 0,
	EBPUserPrivileges__CanPlayOnline = 1,
	EBPUserPrivileges__CanCommunicateOnline = 2,
	EBPUserPrivileges__CanUseUserGeneratedContent = 3,
	EBPUserPrivileges__EBPUserPrivileges_MAX = 4,

};

// Enum SportsScramble.EBowlingAIAnimState
enum class SportsScramble_EBowlingAIAnimState : uint8_t
{
	EBowlingAIAnimState__Idle      = 0,
	EBowlingAIAnimState__Spawn     = 1,
	EBowlingAIAnimState__Turn      = 2,
	EBowlingAIAnimState__PickUp    = 3,
	EBowlingAIAnimState__Roll      = 4,
	EBowlingAIAnimState__Celebrate = 5,
	EBowlingAIAnimState__Lament    = 6,
	EBowlingAIAnimState__EBowlingAIAnimState_MAX = 7,

};

// Enum SportsScramble.EBowlingAvatarAnimState
enum class SportsScramble_EBowlingAvatarAnimState : uint8_t
{
	EBowlingAvatarAnimState__Idle  = 0,
	EBowlingAvatarAnimState__Spawn = 1,
	EBowlingAvatarAnimState__LeftHandedThrow = 2,
	EBowlingAvatarAnimState__RightHandedThrow = 3,
	EBowlingAvatarAnimState__EBowlingAvatarAnimState_MAX = 4,

};

// Enum SportsScramble.EBowlingHookMethod
enum class SportsScramble_EBowlingHookMethod : uint8_t
{
	EBowlingHookMethod__None       = 0,
	EBowlingHookMethod__Roll       = 1,
	EBowlingHookMethod__Yaw        = 2,
	EBowlingHookMethod__Count      = 3,
	EBowlingHookMethod__EBowlingHookMethod_MAX = 4,

};

// Enum SportsScramble.EBowlingBallType
enum class SportsScramble_EBowlingBallType : uint8_t
{
	EBowlingBallType__Any          = 0,
	EBowlingBallType__Bomb         = 1,
	EBowlingBallType__BowlingBall  = 2,
	EBowlingBallType__Basketball   = 3,
	EBowlingBallType__CheeseWheel  = 4,
	EBowlingBallType__CurlingStone = 5,
	EBowlingBallType__Egg          = 6,
	EBowlingBallType__Football     = 7,
	EBowlingBallType__GoldenBall   = 8,
	EBowlingBallType__Pineapple    = 9,
	EBowlingBallType__RollingPin   = 10,
	EBowlingBallType__SkeeBall     = 11,
	EBowlingBallType__TennisBall   = 12,
	EBowlingBallType__Turkey       = 13,
	EBowlingBallType__VibroBall    = 14,
	EBowlingBallType__Count        = 15,
	EBowlingBallType__EBowlingBallType_MAX = 16,

};

// Enum SportsScramble.EMagnetForceType
enum class SportsScramble_EMagnetForceType : uint8_t
{
	EMagnetForceType__Vertical     = 0,
	EMagnetForceType__Horizontal   = 1,
	EMagnetForceType__OmniDirectional2D = 2,
	EMagnetForceType__OmniDirectional3D = 3,
	EMagnetForceType__EMagnetForceType_MAX = 4,

};

// Enum SportsScramble.EBowlingThrowType
enum class SportsScramble_EBowlingThrowType : uint8_t
{
	EBowlingThrowType__Pie         = 0,
	EBowlingThrowType__Straight    = 1,
	EBowlingThrowType__Hook        = 2,
	EBowlingThrowType__Count       = 3,
	EBowlingThrowType__EBowlingThrowType_MAX = 4,

};

// Enum SportsScramble.EBowlingThrowSpin
enum class SportsScramble_EBowlingThrowSpin : uint8_t
{
	EBowlingThrowSpin__Zero        = 0,
	EBowlingThrowSpin__Slow        = 1,
	EBowlingThrowSpin__Medium      = 2,
	EBowlingThrowSpin__Fast        = 3,
	EBowlingThrowSpin__Count       = 4,
	EBowlingThrowSpin__EBowlingThrowSpin_MAX = 5,

};

// Enum SportsScramble.EBowlingThrowSpeed
enum class SportsScramble_EBowlingThrowSpeed : uint8_t
{
	EBowlingThrowSpeed__Pie        = 0,
	EBowlingThrowSpeed__Low        = 1,
	EBowlingThrowSpeed__Medium     = 2,
	EBowlingThrowSpeed__High       = 3,
	EBowlingThrowSpeed__Count      = 4,
	EBowlingThrowSpeed__EBowlingThrowSpeed_MAX = 5,

};

// Enum SportsScramble.EBowlingLanePitCorrection
enum class SportsScramble_EBowlingLanePitCorrection : uint8_t
{
	EBowlingLanePitCorrection__AvoidCenter = 0,
	EBowlingLanePitCorrection__CorrectLeft = 1,
	EBowlingLanePitCorrection__CorrectRight = 2,
	EBowlingLanePitCorrection__EBowlingLanePitCorrection_MAX = 3,

};

// Enum SportsScramble.EBowlingRollResult
enum class SportsScramble_EBowlingRollResult : uint8_t
{
	EBowlingRollResult__None       = 0,
	EBowlingRollResult__Partial    = 1,
	EBowlingRollResult__Spare      = 2,
	EBowlingRollResult__Strike     = 3,
	EBowlingRollResult__EBowlingRollResult_MAX = 4,

};

// Enum SportsScramble.EBowlingAuthority
enum class SportsScramble_EBowlingAuthority : uint8_t
{
	EBowlingAuthority__Authority   = 0,
	EBowlingAuthority__Remote      = 1,
	EBowlingAuthority__EBowlingAuthority_MAX = 2,

};

// Enum SportsScramble.EDodgeballBallType
enum class SportsScramble_EDodgeballBallType : uint8_t
{
	EDodgeballBallType__Any        = 0,
	EDodgeballBallType__Baseball   = 1,
	EDodgeballBallType__Basketball = 2,
	EDodgeballBallType__BeachBall  = 3,
	EDodgeballBallType__Chicken    = 4,
	EDodgeballBallType__Fish       = 5,
	EDodgeballBallType__Football   = 6,
	EDodgeballBallType__PingPongBall = 7,
	EDodgeballBallType__Shuttlecock = 8,
	EDodgeballBallType__Soccerball = 9,
	EDodgeballBallType__Softball   = 10,
	EDodgeballBallType__DodgeballBall = 11,
	EDodgeballBallType__Wiffleball = 12,
	EDodgeballBallType__ChargeBall = 13,
	EDodgeballBallType__GolfBall   = 14,
	EDodgeballBallType__Disc       = 15,
	EDodgeballBallType__Count      = 16,
	EDodgeballBallType__EDodgeballBallType_MAX = 17,

};

// Enum SportsScramble.EDodgeballShotType
enum class SportsScramble_EDodgeballShotType : uint8_t
{
	EDodgeballShotType__Light      = 0,
	EDodgeballShotType__Normal     = 1,
	EDodgeballShotType__NormalSlice = 2,
	EDodgeballShotType__Charge     = 3,
	EDodgeballShotType__ChargeSlice = 4,
	EDodgeballShotType__Count      = 5,
	EDodgeballShotType__EDodgeballShotType_MAX = 6,

};

// Enum SportsScramble.EDodgeballShotSpin
enum class SportsScramble_EDodgeballShotSpin : uint8_t
{
	EDodgeballShotSpin__Zero       = 0,
	EDodgeballShotSpin__Slow       = 1,
	EDodgeballShotSpin__Medium     = 2,
	EDodgeballShotSpin__Fast       = 3,
	EDodgeballShotSpin__Count      = 4,
	EDodgeballShotSpin__EDodgeballShotSpin_MAX = 5,

};

// Enum SportsScramble.EDodgeballShotSpeed
enum class SportsScramble_EDodgeballShotSpeed : uint8_t
{
	EDodgeballShotSpeed__Flub      = 0,
	EDodgeballShotSpeed__Light     = 1,
	EDodgeballShotSpeed__Medium    = 2,
	EDodgeballShotSpeed__Hard      = 3,
	EDodgeballShotSpeed__Count     = 4,
	EDodgeballShotSpeed__EDodgeballShotSpeed_MAX = 5,

};

// Enum SportsScramble.EDodgeballInstrumentType
enum class SportsScramble_EDodgeballInstrumentType : uint8_t
{
	EDodgeballInstrumentType__Any  = 0,
	EDodgeballInstrumentType__BaseballBat = 1,
	EDodgeballInstrumentType__CricketBat = 2,
	EDodgeballInstrumentType__FishRacket = 3,
	EDodgeballInstrumentType__FoamFinger = 4,
	EDodgeballInstrumentType__GolfClub = 5,
	EDodgeballInstrumentType__LacrosseStick = 6,
	EDodgeballInstrumentType__PingPongPaddle = 7,
	EDodgeballInstrumentType__PoolNoodle = 8,
	EDodgeballInstrumentType__DodgeballRacket = 9,
	EDodgeballInstrumentType__DodgeballRacketUpgrade01 = 10,
	EDodgeballInstrumentType__Count = 11,
	EDodgeballInstrumentType__EDodgeballInstrumentType_MAX = 12,

};

// Enum SportsScramble.EDodgeballPawnAnimState
enum class SportsScramble_EDodgeballPawnAnimState : uint8_t
{
	EDodgeballPawnAnimState__Idle  = 0,
	EDodgeballPawnAnimState__Throw = 1,
	EDodgeballPawnAnimState__Selected = 2,
	EDodgeballPawnAnimState__Hit   = 3,
	EDodgeballPawnAnimState__EDodgeballPawnAnimState_MAX = 4,

};

// Enum SportsScramble.EInferredContactActivationMode
enum class SportsScramble_EInferredContactActivationMode : uint8_t
{
	EInferredContactActivationMode__AlwaysOff = 0,
	EInferredContactActivationMode__CheckTracked = 1,
	EInferredContactActivationMode__AlwaysOn = 2,
	EInferredContactActivationMode__Count = 3,
	EInferredContactActivationMode__EInferredContactActivationMode_MAX = 4,

};

// Enum SportsScramble.EPitchingAvatarAnimState
enum class SportsScramble_EPitchingAvatarAnimState : uint8_t
{
	EPitchingAvatarAnimState__Idle = 0,
	EPitchingAvatarAnimState__Spawn = 1,
	EPitchingAvatarAnimState__Catch = 2,
	EPitchingAvatarAnimState__Hold = 3,
	EPitchingAvatarAnimState__Throw = 4,
	EPitchingAvatarAnimState__EPitchingAvatarAnimState_MAX = 5,

};

// Enum SportsScramble.EPropVisibilityMode
enum class SportsScramble_EPropVisibilityMode : uint8_t
{
	EPropVisibilityMode__ShowToPitcher = 0,
	EPropVisibilityMode__ShowToBatter = 1,
	EPropVisibilityMode__ShowToAll = 2,
	EPropVisibilityMode__EPropVisibilityMode_MAX = 3,

};

// Enum SportsScramble.EPlayByPlayEventInstigator
enum class SportsScramble_EPlayByPlayEventInstigator : uint8_t
{
	EPlayByPlayEventInstigator__Player = 0,
	EPlayByPlayEventInstigator__Opponent = 1,
	EPlayByPlayEventInstigator__EPlayByPlayEventInstigator_MAX = 2,

};

// Enum SportsScramble.EBaseballPlayByPlayEvent
enum class SportsScramble_EBaseballPlayByPlayEvent : uint8_t
{
	EBaseballPlayByPlayEvent__None = 0,
	EBaseballPlayByPlayEvent__BallChangeBaseball = 1,
	EBaseballPlayByPlayEvent__BallChangeBasketBall = 2,
	EBaseballPlayByPlayEvent__BallChangeBeachBall = 3,
	EBaseballPlayByPlayEvent__BallChangeBowlingBall = 4,
	EBaseballPlayByPlayEvent__BallChangeChargeBall = 5,
	EBaseballPlayByPlayEvent__BallChangeFootBall = 6,
	EBaseballPlayByPlayEvent__BallChangeFrisbee = 7,
	EBaseballPlayByPlayEvent__BallChangePingPongBall = 8,
	EBaseballPlayByPlayEvent__BallChangeWiffleBall = 9,
	EBaseballPlayByPlayEvent__BallChangeTennisBall = 10,
	EBaseballPlayByPlayEvent__BallChangeFishBall = 11,
	EBaseballPlayByPlayEvent__BallChangePineapple = 12,
	EBaseballPlayByPlayEvent__BallChangeHockeyPuck = 13,
	EBaseballPlayByPlayEvent__BallChangeGolfBall = 14,
	EBaseballPlayByPlayEvent__BallChangeBilliardBall = 15,
	EBaseballPlayByPlayEvent__BatChangeAluminumBat = 16,
	EBaseballPlayByPlayEvent__BatChangeBaseballBat = 17,
	EBaseballPlayByPlayEvent__BatChangeCricketBat = 18,
	EBaseballPlayByPlayEvent__BatChangeFishRacket = 19,
	EBaseballPlayByPlayEvent__BatChangeFoamFinger = 20,
	EBaseballPlayByPlayEvent__BatChangeGolfClub = 21,
	EBaseballPlayByPlayEvent__BatChangeHockeyStick = 22,
	EBaseballPlayByPlayEvent__BatChangePingPongPaddle = 23,
	EBaseballPlayByPlayEvent__BatChangePoolNoodle = 24,
	EBaseballPlayByPlayEvent__BatChangePoolCue = 25,
	EBaseballPlayByPlayEvent__BatChangeTennisRacket = 26,
	EBaseballPlayByPlayEvent__BatChangeGoldenBat = 27,
	EBaseballPlayByPlayEvent__Pitch = 28,
	EBaseballPlayByPlayEvent__SwingAndMiss = 29,
	EBaseballPlayByPlayEvent__Ball = 30,
	EBaseballPlayByPlayEvent__Strike = 31,
	EBaseballPlayByPlayEvent__CatcherToss = 32,
	EBaseballPlayByPlayEvent__AirCatch = 33,
	EBaseballPlayByPlayEvent__Drop = 34,
	EBaseballPlayByPlayEvent__FoulBall = 35,
	EBaseballPlayByPlayEvent__Single = 36,
	EBaseballPlayByPlayEvent__Double = 37,
	EBaseballPlayByPlayEvent__Triple = 38,
	EBaseballPlayByPlayEvent__HomeRun = 39,
	EBaseballPlayByPlayEvent__RunnerHome = 40,
	EBaseballPlayByPlayEvent__Walk = 41,
	EBaseballPlayByPlayEvent__Trick = 42,
	EBaseballPlayByPlayEvent__Count = 43,
	EBaseballPlayByPlayEvent__EBaseballPlayByPlayEvent_MAX = 44,

};

// Enum SportsScramble.ETennisPlayByPlayEvent
enum class SportsScramble_ETennisPlayByPlayEvent : uint8_t
{
	ETennisPlayByPlayEvent__None   = 0,
	ETennisPlayByPlayEvent__Ace    = 1,
	ETennisPlayByPlayEvent__Fault  = 2,
	ETennisPlayByPlayEvent__DoubleFault = 3,
	ETennisPlayByPlayEvent__PreparingToServe = 4,
	ETennisPlayByPlayEvent__BallChangeBaseball = 5,
	ETennisPlayByPlayEvent__BallChangeBasketball = 6,
	ETennisPlayByPlayEvent__BallChangeBeachBall = 7,
	ETennisPlayByPlayEvent__BallChangeChicken = 8,
	ETennisPlayByPlayEvent__BallChangeFish = 9,
	ETennisPlayByPlayEvent__BallChangeFootball = 10,
	ETennisPlayByPlayEvent__BallChangePingPongBall = 11,
	ETennisPlayByPlayEvent__BallChangeShuttlecock = 12,
	ETennisPlayByPlayEvent__BallChangeSoccerball = 13,
	ETennisPlayByPlayEvent__BallChangeSoftball = 14,
	ETennisPlayByPlayEvent__BallChangeTennisBall = 15,
	ETennisPlayByPlayEvent__BallChangeWiffleball = 16,
	ETennisPlayByPlayEvent__BallChangeAcceleratorBall = 17,
	ETennisPlayByPlayEvent__BallChangeGolfBall = 18,
	ETennisPlayByPlayEvent__BallChangeDisc = 19,
	ETennisPlayByPlayEvent__BallMatchBaseball = 20,
	ETennisPlayByPlayEvent__BallMatchBasketball = 21,
	ETennisPlayByPlayEvent__BallMatchBeachBall = 22,
	ETennisPlayByPlayEvent__BallMatchChicken = 23,
	ETennisPlayByPlayEvent__BallMatchFish = 24,
	ETennisPlayByPlayEvent__BallMatchFootball = 25,
	ETennisPlayByPlayEvent__BallMatchPingPongBall = 26,
	ETennisPlayByPlayEvent__BallMatchShuttlecock = 27,
	ETennisPlayByPlayEvent__BallMatchSoccerball = 28,
	ETennisPlayByPlayEvent__BallMatchSoftball = 29,
	ETennisPlayByPlayEvent__BallMatchTennisBall = 30,
	ETennisPlayByPlayEvent__BallMatchWiffleball = 31,
	ETennisPlayByPlayEvent__BallMatchAcceleratorBall = 32,
	ETennisPlayByPlayEvent__BallMatchGolfBall = 33,
	ETennisPlayByPlayEvent__BallMatchDisc = 34,
	ETennisPlayByPlayEvent__RacquetChangeBaseballBat = 35,
	ETennisPlayByPlayEvent__RacquetChangeCricketBat = 36,
	ETennisPlayByPlayEvent__RacquetChangeFishRacket = 37,
	ETennisPlayByPlayEvent__RacquetChangeFoamFinger = 38,
	ETennisPlayByPlayEvent__RacquetChangeGolfClub = 39,
	ETennisPlayByPlayEvent__RacquetChangeLacrosseStick = 40,
	ETennisPlayByPlayEvent__RacquetChangePingPongPaddle = 41,
	ETennisPlayByPlayEvent__RacquetChangePoolNoodle = 42,
	ETennisPlayByPlayEvent__RacquetChangeTennisRacket = 43,
	ETennisPlayByPlayEvent__RacquetChangeTennisRacketUpgrade01 = 44,
	ETennisPlayByPlayEvent__EquipmentMatchBaseballBat = 45,
	ETennisPlayByPlayEvent__EquipmentMatchCricketBat = 46,
	ETennisPlayByPlayEvent__EquipmentMatchFishRacket = 47,
	ETennisPlayByPlayEvent__EquipmentMatchFoamFinger = 48,
	ETennisPlayByPlayEvent__EquipmentMatchGolfClub = 49,
	ETennisPlayByPlayEvent__EquipmentMatchLacrosseStick = 50,
	ETennisPlayByPlayEvent__EquipmentMatchPingPongPaddle = 51,
	ETennisPlayByPlayEvent__EquipmentMatchPoolNoodle = 52,
	ETennisPlayByPlayEvent__EquipmentMatchTennisRacket = 53,
	ETennisPlayByPlayEvent__EquipmentMatchTennisRacketUpgrade01 = 54,
	ETennisPlayByPlayEvent__CourtChangeNetRaise = 55,
	ETennisPlayByPlayEvent__HitOut = 56,
	ETennisPlayByPlayEvent__SwingAndMiss = 57,
	ETennisPlayByPlayEvent__HitNet = 58,
	ETennisPlayByPlayEvent__LongChargeRally = 59,
	ETennisPlayByPlayEvent__Slice  = 60,
	ETennisPlayByPlayEvent__SliceWin = 61,
	ETennisPlayByPlayEvent__ChargeWin = 62,
	ETennisPlayByPlayEvent__BreakSomething = 63,
	ETennisPlayByPlayEvent__WonGame = 64,
	ETennisPlayByPlayEvent__WonGameOneDownOneToGo = 65,
	ETennisPlayByPlayEvent__WonMatch = 66,
	ETennisPlayByPlayEvent__RacquetChangeIncoming = 67,
	ETennisPlayByPlayEvent__Count  = 68,
	ETennisPlayByPlayEvent__ETennisPlayByPlayEvent_MAX = 69,

};

// Enum SportsScramble.EDebugDrawMode
enum class SportsScramble_EDebugDrawMode : uint8_t
{
	EDebugDrawMode__None           = 0,
	EDebugDrawMode__EditorOnly     = 1,
	EDebugDrawMode__EditorAndPreview = 2,
	EDebugDrawMode__EDebugDrawMode_MAX = 3,

};

// Enum SportsScramble.EBallMotionAnimState
enum class SportsScramble_EBallMotionAnimState : uint8_t
{
	EBallMotionAnimState__None     = 0,
	EBallMotionAnimState__Rising   = 1,
	EBallMotionAnimState__Apex     = 2,
	EBallMotionAnimState__Falling  = 3,
	EBallMotionAnimState__Rolling  = 4,
	EBallMotionAnimState__EBallMotionAnimState_MAX = 5,

};

// Enum SportsScramble.EBallAnimState
enum class SportsScramble_EBallAnimState : uint8_t
{
	EBallAnimState__Idle           = 0,
	EBallAnimState__Held           = 1,
	EBallAnimState__InFlight       = 2,
	EBallAnimState__EBallAnimState_MAX = 3,

};

// Enum SportsScramble.EScramFlightNoise
enum class SportsScramble_EScramFlightNoise : uint8_t
{
	EScramFlightNoise__Ascending   = 0,
	EScramFlightNoise__Descending  = 1,
	EScramFlightNoise__EScramFlightNoise_MAX = 2,

};

// Enum SportsScramble.EScramStabilizationType
enum class SportsScramble_EScramStabilizationType : uint8_t
{
	EScramStabilizationType__None  = 0,
	EScramStabilizationType__Rolling = 1,
	EScramStabilizationType__Discus = 2,
	EScramStabilizationType__AlwaysUp = 3,
	EScramStabilizationType__EScramStabilizationType_MAX = 4,

};

// Enum SportsScramble.EScramBallTriggerShape
enum class SportsScramble_EScramBallTriggerShape : uint8_t
{
	EScramBallTriggerShape__Circle = 0,
	EScramBallTriggerShape__Rectangle = 1,
	EScramBallTriggerShape__Count  = 2,
	EScramBallTriggerShape__EScramBallTriggerShape_MAX = 3,

};

// Enum SportsScramble.EBaseballAIAnimNotify
enum class SportsScramble_EBaseballAIAnimNotify : uint8_t
{
	EBaseballAIAnimNotify__StandStill = 0,
	EBaseballAIAnimNotify__SetCatchLocation = 1,
	EBaseballAIAnimNotify__ReleaseBall = 2,
	EBaseballAIAnimNotify__SwingEnd = 3,
	EBaseballAIAnimNotify__FreebieHit = 4,
	EBaseballAIAnimNotify__ReplaceBat = 5,
	EBaseballAIAnimNotify__ScoreAfterDrop = 6,
	EBaseballAIAnimNotify__EndOfDropReaction = 7,
	EBaseballAIAnimNotify__EBaseballAIAnimNotify_MAX = 8,

};

// Enum SportsScramble.EBatterState
enum class SportsScramble_EBatterState : uint8_t
{
	EBatterState__Waiting          = 0,
	EBatterState__Batting          = 1,
	EBatterState__LettingABallGo   = 2,
	EBatterState__Swinging         = 3,
	EBatterState__WaitAfterSwing   = 4,
	EBatterState__FreebieWaiting   = 5,
	EBatterState__FreebieSwinging  = 6,
	EBatterState__EBatterState_MAX = 7,

};

// Enum SportsScramble.ECatcherGloveMode
enum class SportsScramble_ECatcherGloveMode : uint8_t
{
	ECatcherGloveMode__Default     = 0,
	ECatcherGloveMode__Drifting    = 1,
	ECatcherGloveMode__Scripted    = 2,
	ECatcherGloveMode__StickDriven = 3,
	ECatcherGloveMode__ECatcherGloveMode_MAX = 4,

};

// Enum SportsScramble.ECatcherAIState
enum class SportsScramble_ECatcherAIState : uint8_t
{
	ECatcherAIState__WaitingToThrowBall = 0,
	ECatcherAIState__PreparingThrow = 1,
	ECatcherAIState__WaitingForPitcherCatch = 2,
	ECatcherAIState__WaitingForPitcherPitch = 3,
	ECatcherAIState__Intercepting  = 4,
	ECatcherAIState__WaitingToCallBall = 5,
	ECatcherAIState__PausingAfterCatch = 6,
	ECatcherAIState__Selecting     = 7,
	ECatcherAIState__ECatcherAIState_MAX = 8,

};

// Enum SportsScramble.EFielderAIState
enum class SportsScramble_EFielderAIState : uint8_t
{
	EFielderAIState__Waiting       = 0,
	EFielderAIState__Intercepting  = 1,
	EFielderAIState__WaitingToCatch = 2,
	EFielderAIState__Catching      = 3,
	EFielderAIState__Dropping      = 4,
	EFielderAIState__WatchingCatch = 5,
	EFielderAIState__PausingBeforeReturn = 6,
	EFielderAIState__Returning     = 7,
	EFielderAIState__EFielderAIState_MAX = 8,

};

// Enum SportsScramble.EPitcherState
enum class SportsScramble_EPitcherState : uint8_t
{
	EPitcherState__WaitingForBall  = 0,
	EPitcherState__WaitingToPitch  = 1,
	EPitcherState__DelayBeforePitch = 2,
	EPitcherState__Preparing       = 3,
	EPitcherState__Throwing        = 4,
	EPitcherState__EPitcherState_MAX = 5,

};

// Enum SportsScramble.EScrambleTargetAiValue
enum class SportsScramble_EScrambleTargetAiValue : uint8_t
{
	EScrambleTargetAiValue__Positive = 0,
	EScrambleTargetAiValue__Neutral = 1,
	EScrambleTargetAiValue__Negative = 2,
	EScrambleTargetAiValue__EScrambleTargetAiValue_MAX = 3,

};

// Enum SportsScramble.EBowlingAIState
enum class SportsScramble_EBowlingAIState : uint8_t
{
	EBowlingAIState__WaitingForBall = 0,
	EBowlingAIState__TurningToLook = 1,
	EBowlingAIState__CollectingBall = 2,
	EBowlingAIState__TurningToThrow = 3,
	EBowlingAIState__WaitingForThrowWindow = 4,
	EBowlingAIState__Throwing      = 5,
	EBowlingAIState__WaitingForPinHit = 6,
	EBowlingAIState__WaitingForScore = 7,
	EBowlingAIState__Reacting      = 8,
	EBowlingAIState__EBowlingAIState_MAX = 9,

};

// Enum SportsScramble.EBowlingAIAnimNotify
enum class SportsScramble_EBowlingAIAnimNotify : uint8_t
{
	EBowlingAIAnimNotify__DoneWithTurn = 0,
	EBowlingAIAnimNotify__PickUp   = 1,
	EBowlingAIAnimNotify__DoneWithPickUp = 2,
	EBowlingAIAnimNotify__Roll     = 3,
	EBowlingAIAnimNotify__StartTurn = 4,
	EBowlingAIAnimNotify__DoneWithReaction = 5,
	EBowlingAIAnimNotify__EBowlingAIAnimNotify_MAX = 6,

};

// Enum SportsScramble.ECoverVignetteType
enum class SportsScramble_ECoverVignetteType : uint8_t
{
	ECoverVignetteType__Trophy     = 0,
	ECoverVignetteType__GameInvite = 1,
	ECoverVignetteType__ECoverVignetteType_MAX = 2,

};

// Enum SportsScramble.EScramCourtMatchType
enum class SportsScramble_EScramCourtMatchType : uint8_t
{
	EScramCourtMatchType__None     = 0,
	EScramCourtMatchType__Singles  = 1,
	EScramCourtMatchType__Doubles  = 2,
	EScramCourtMatchType__NetClear = 3,
	EScramCourtMatchType__EScramCourtMatchType_MAX = 4,

};

// Enum SportsScramble.EDodgeballAIAnimNotify
enum class SportsScramble_EDodgeballAIAnimNotify : uint8_t
{
	EDodgeballAIAnimNotify__StandStill = 0,
	EDodgeballAIAnimNotify__Disappear = 1,
	EDodgeballAIAnimNotify__EDodgeballAIAnimNotify_MAX = 2,

};

// Enum SportsScramble.EScramPlatform
enum class SportsScramble_EScramPlatform : uint8_t
{
	EScramPlatform__Rift           = 0,
	EScramPlatform__RiftS          = 1,
	EScramPlatform__Quest          = 2,
	EScramPlatform__Count          = 3,
	EScramPlatform__EScramPlatform_MAX = 4,

};

// Enum SportsScramble.EScramHandedness
enum class SportsScramble_EScramHandedness : uint8_t
{
	EScramHandedness__None         = 0,
	EScramHandedness__Left         = 1,
	EScramHandedness__Right        = 2,
	EScramHandedness__Ambiguous    = 3,
	EScramHandedness__EScramHandedness_MAX = 4,

};

// Enum SportsScramble.EVerticalFieldZone
enum class SportsScramble_EVerticalFieldZone : uint8_t
{
	EVerticalFieldZone__GroundBall = 0,
	EVerticalFieldZone__LineDrive  = 1,
	EVerticalFieldZone__SweetSpot  = 2,
	EVerticalFieldZone__PopFly     = 3,
	EVerticalFieldZone__Count      = 4,
	EVerticalFieldZone__EVerticalFieldZone_MAX = 5,

};

// Enum SportsScramble.EThrowDirection
enum class SportsScramble_EThrowDirection : uint8_t
{
	EThrowDirection__Left          = 0,
	EThrowDirection__Center        = 1,
	EThrowDirection__Right         = 2,
	EThrowDirection__EThrowDirection_MAX = 3,

};

// Enum SportsScramble.ELaneType
enum class SportsScramble_ELaneType : uint8_t
{
	ELaneType__Default             = 0,
	ELaneType__Croquet             = 1,
	ELaneType__SpaceAttackers      = 2,
	ELaneType__Bumpers             = 3,
	ELaneType__BigGutters          = 4,
	ELaneType__WhackMoles          = 5,
	ELaneType__IceRink             = 6,
	ELaneType__Clown               = 7,
	ELaneType__ScoreField          = 8,
	ELaneType__FigureEight         = 9,
	ELaneType__ElectricFootball    = 10,
	ELaneType__MineField           = 11,
	ELaneType__CurvedPath          = 12,
	ELaneType__ExtraPins           = 13,
	ELaneType__Conveyor            = 14,
	ELaneType__BankShot            = 15,
	ELaneType__MovingLane          = 16,
	ELaneType__Hoops               = 17,
	ELaneType__LeftLoop            = 18,
	ELaneType__RightLoop           = 19,
	ELaneType__SkeeBall            = 20,
	ELaneType__ELaneType_MAX       = 21,

};

// Enum SportsScramble.EBallState
enum class SportsScramble_EBallState : uint8_t
{
	EBallState__In                 = 0,
	EBallState__Foul               = 1,
	EBallState__Double             = 2,
	EBallState__Triple             = 3,
	EBallState__HomeRun            = 4,
	EBallState__Trick              = 5,
	EBallState__EBallState_MAX     = 6,

};

// Enum SportsScramble.EGamePauseReason
enum class SportsScramble_EGamePauseReason : uint8_t
{
	EGamePauseReason__PlayerInput  = 0,
	EGamePauseReason__PlayerOutOfBoundary = 1,
	EGamePauseReason__Disconnect   = 2,
	EGamePauseReason__OculusDash   = 3,
	EGamePauseReason__Count        = 4,
	EGamePauseReason__EGamePauseReason_MAX = 5,

};

// Enum SportsScramble.EBattingSide
enum class SportsScramble_EBattingSide : uint8_t
{
	EBattingSide__Left             = 0,
	EBattingSide__Right            = 1,
	EBattingSide__EBattingSide_MAX = 2,

};

// Enum SportsScramble.EScramGrabMode
enum class SportsScramble_EScramGrabMode : uint8_t
{
	EScramGrabMode__Trigger        = 0,
	EScramGrabMode__Grip           = 1,
	EScramGrabMode__Count          = 2,
	EScramGrabMode__EScramGrabMode_MAX = 3,

};

// Enum SportsScramble.EScramSkill
enum class SportsScramble_EScramSkill : uint8_t
{
	EScramSkill__Casual            = 0,
	EScramSkill__Standard          = 1,
	EScramSkill__Pro               = 2,
	EScramSkill__Count             = 3,
	EScramSkill__EScramSkill_MAX   = 4,

};

// Enum SportsScramble.EDifficulty
enum class SportsScramble_EDifficulty : uint8_t
{
	EDifficulty__Easy              = 0,
	EDifficulty__Normal            = 1,
	EDifficulty__Hard              = 2,
	EDifficulty__Count             = 3,
	EDifficulty__EDifficulty_MAX   = 4,

};

// Enum SportsScramble.EScramIntersectRadiusMode
enum class SportsScramble_EScramIntersectRadiusMode : uint8_t
{
	EScramIntersectRadiusMode__Center = 0,
	EScramIntersectRadiusMode__Partial = 1,
	EScramIntersectRadiusMode__Full = 2,
	EScramIntersectRadiusMode__EScramIntersectRadiusMode_MAX = 3,

};

// Enum SportsScramble.EFloorResult
enum class SportsScramble_EFloorResult : uint8_t
{
	EFloorResult__None             = 0,
	EFloorResult__Bounced          = 1,
	EFloorResult__OnFloor          = 2,
	EFloorResult__EFloorResult_MAX = 3,

};

// Enum SportsScramble.EBowlingEvent
enum class SportsScramble_EBowlingEvent : uint8_t
{
	EBowlingEvent__None            = 0,
	EBowlingEvent__Strike          = 1,
	EBowlingEvent__Spare           = 2,
	EBowlingEvent__GutterBall      = 3,
	EBowlingEvent__HitSomePins     = 4,
	EBowlingEvent__GameEnd         = 5,
	EBowlingEvent__LeftHandedThrow = 6,
	EBowlingEvent__RightHandedThrow = 7,
	EBowlingEvent__EBowlingEvent_MAX = 8,

};

// Enum SportsScramble.EBaseballEvent
enum class SportsScramble_EBaseballEvent : uint8_t
{
	EBaseballEvent__PitcherReady   = 0,
	EBaseballEvent__Pitch          = 1,
	EBaseballEvent__PitchInvalidated = 2,
	EBaseballEvent__Hit            = 3,
	EBaseballEvent__SwingAndMiss   = 4,
	EBaseballEvent__Ball           = 5,
	EBaseballEvent__Strike         = 6,
	EBaseballEvent__CatcherToss    = 7,
	EBaseballEvent__AirCatch       = 8,
	EBaseballEvent__Catch          = 9,
	EBaseballEvent__Glove          = 10,
	EBaseballEvent__Drop           = 11,
	EBaseballEvent__FoulBall       = 12,
	EBaseballEvent__Single         = 13,
	EBaseballEvent__Double         = 14,
	EBaseballEvent__Triple         = 15,
	EBaseballEvent__HomeRun        = 16,
	EBaseballEvent__RunnersReady   = 17,
	EBaseballEvent__RunnerHome     = 18,
	EBaseballEvent__Freebie        = 19,
	EBaseballEvent__Walk           = 20,
	EBaseballEvent__Trick          = 21,
	EBaseballEvent__GameEnd        = 22,
	EBaseballEvent__EBaseballEvent_MAX = 23,

};

// Enum SportsScramble.ETennisServiceStyle
enum class SportsScramble_ETennisServiceStyle : uint8_t
{
	ETennisServiceStyle__TeeBall   = 0,
	ETennisServiceStyle__Traditional = 1,
	ETennisServiceStyle__Count     = 2,
	ETennisServiceStyle__ETennisServiceStyle_MAX = 3,

};

// Enum SportsScramble.ETennisEvent
enum class SportsScramble_ETennisEvent : uint8_t
{
	ETennisEvent__WonPoint         = 0,
	ETennisEvent__WonGame          = 1,
	ETennisEvent__WonMatch         = 2,
	ETennisEvent__Ace              = 3,
	ETennisEvent__Let              = 4,
	ETennisEvent__DoubleFault      = 5,
	ETennisEvent__NowServing       = 6,
	ETennisEvent__BallInPlay       = 7,
	ETennisEvent__Out              = 8,
	ETennisEvent__ServiceFault     = 9,
	ETennisEvent__NormalFault      = 10,
	ETennisEvent__None             = 11,
	ETennisEvent__ETennisEvent_MAX = 12,

};

// Enum SportsScramble.EScramSport
enum class SportsScramble_EScramSport : uint8_t
{
	EScramSport__None              = 0,
	EScramSport__Tennis            = 1,
	EScramSport__Baseball          = 2,
	EScramSport__Bowling           = 3,
	EScramSport__Dodgeball         = 4,
	EScramSport__Count             = 5,
	EScramSport__EScramSport_MAX   = 6,

};

// Enum SportsScramble.EScramEvent
enum class SportsScramble_EScramEvent : uint8_t
{
	EScramEvent__None              = 0,
	EScramEvent__BallGrabbed       = 1,
	EScramEvent__BallReleased      = 2,
	EScramEvent__BallHit           = 3,
	EScramEvent__InstrumentBroken  = 4,
	EScramEvent__InstrumentGrabbed = 5,
	EScramEvent__InstrumentReleased = 6,
	EScramEvent__InstrumentSelected = 7,
	EScramEvent__InstrumentHit     = 8,
	EScramEvent__InstrumentsSpawned = 9,
	EScramEvent__TargetHit         = 10,
	EScramEvent__PlayerGrabbedSomething = 11,
	EScramEvent__PlayerReleasedSomething = 12,
	EScramEvent__BowlingPinHit     = 13,
	EScramEvent__GloveGrabbedSomething = 14,
	EScramEvent__GloveReleasedSomething = 15,
	EScramEvent__BallDropped       = 16,
	EScramEvent__GripPressed       = 17,
	EScramEvent__BaseballSelectionShown = 18,
	EScramEvent__TennisEvent       = 19,
	EScramEvent__BaseballEvent     = 20,
	EScramEvent__BowlingEvent      = 21,
	EScramEvent__TravelCapsuleOpen = 22,
	EScramEvent__InstrumentSwungAtBall = 23,
	EScramEvent__Count             = 24,
	EScramEvent__EScramEvent_MAX   = 25,

};

// Enum SportsScramble.EScramStroke
enum class SportsScramble_EScramStroke : uint8_t
{
	EScramStroke__None             = 0,
	EScramStroke__Forehand         = 1,
	EScramStroke__Backhand         = 2,
	EScramStroke__Overhead         = 3,
	EScramStroke__Underhand        = 4,
	EScramStroke__Ambiguous        = 5,
	EScramStroke__Count            = 6,
	EScramStroke__EScramStroke_MAX = 7,

};

// Enum SportsScramble.EScramInstrumentHitPhysics
enum class SportsScramble_EScramInstrumentHitPhysics : uint8_t
{
	EScramInstrumentHitPhysics__None = 0,
	EScramInstrumentHitPhysics__Default = 1,
	EScramInstrumentHitPhysics__ForceSweep = 2,
	EScramInstrumentHitPhysics__ForcePhysX = 3,
	EScramInstrumentHitPhysics__EScramInstrumentHitPhysics_MAX = 4,

};

// Enum SportsScramble.ENormalBiasMode
enum class SportsScramble_ENormalBiasMode : uint8_t
{
	ENormalBiasMode__Corrective    = 0,
	ENormalBiasMode__Remapping     = 1,
	ENormalBiasMode__ENormalBiasMode_MAX = 2,

};

// Enum SportsScramble.EScramInstrumentRegionType
enum class SportsScramble_EScramInstrumentRegionType : uint8_t
{
	EScramInstrumentRegionType__Box = 0,
	EScramInstrumentRegionType__Racket = 1,
	EScramInstrumentRegionType__Bat = 2,
	EScramInstrumentRegionType__EScramInstrumentRegionType_MAX = 3,

};

// Enum SportsScramble.EInstrumentAnimState
enum class SportsScramble_EInstrumentAnimState : uint8_t
{
	EInstrumentAnimState__Idle     = 0,
	EInstrumentAnimState__Swinging = 1,
	EInstrumentAnimState__EInstrumentAnimState_MAX = 2,

};

// Enum SportsScramble.EScramInstrumentSide
enum class SportsScramble_EScramInstrumentSide : uint8_t
{
	EScramInstrumentSide__Front    = 0,
	EScramInstrumentSide__Back     = 1,
	EScramInstrumentSide__Right    = 2,
	EScramInstrumentSide__Left     = 3,
	EScramInstrumentSide__Top      = 4,
	EScramInstrumentSide__Bottom   = 5,
	EScramInstrumentSide__Count    = 6,
	EScramInstrumentSide__EScramInstrumentSide_MAX = 7,

};

// Enum SportsScramble.EScramLauncherFiringMode
enum class SportsScramble_EScramLauncherFiringMode : uint8_t
{
	EScramLauncherFiringMode__AimAtPlayerRegion = 0,
	EScramLauncherFiringMode__AimAtLaunchTarget = 1,
	EScramLauncherFiringMode__EScramLauncherFiringMode_MAX = 2,

};

// Enum SportsScramble.EScramButtonEvent
enum class SportsScramble_EScramButtonEvent : uint8_t
{
	EScramButtonEvent__NoChange    = 0,
	EScramButtonEvent__Pressed     = 1,
	EScramButtonEvent__Released    = 2,
	EScramButtonEvent__EScramButtonEvent_MAX = 3,

};

// Enum SportsScramble.EScramHandInferenceMode
enum class SportsScramble_EScramHandInferenceMode : uint8_t
{
	EScramHandInferenceMode__None  = 0,
	EScramHandInferenceMode__Relative = 1,
	EScramHandInferenceMode__Skeletal = 2,
	EScramHandInferenceMode__StraightArm = 3,
	EScramHandInferenceMode__EScramHandInferenceMode_MAX = 4,

};

// Enum SportsScramble.ETrainingProgression
enum class SportsScramble_ETrainingProgression : uint8_t
{
	ETrainingProgression__Locked   = 0,
	ETrainingProgression__Unlocked = 1,
	ETrainingProgression__Completed = 2,
	ETrainingProgression__ETrainingProgression_MAX = 3,

};

// Enum SportsScramble.EBaseballGameState
enum class SportsScramble_EBaseballGameState : uint8_t
{
	EBaseballGameState__None       = 0,
	EBaseballGameState__Pitching   = 1,
	EBaseballGameState__Batting    = 2,
	EBaseballGameState__Fielding   = 3,
	EBaseballGameState__DeletingBall = 4,
	EBaseballGameState__Walk       = 5,
	EBaseballGameState__EBaseballGameState_MAX = 6,

};

// Enum SportsScramble.EBallRegion
enum class SportsScramble_EBallRegion : uint8_t
{
	EBallRegion__Up                = 0,
	EBallRegion__Down              = 1,
	EBallRegion__Left              = 2,
	EBallRegion__Right             = 3,
	EBallRegion__EBallRegion_MAX   = 4,

};

// Enum SportsScramble.EScramDodgeballTeam
enum class SportsScramble_EScramDodgeballTeam : uint8_t
{
	EScramDodgeballTeam__Team1     = 0,
	EScramDodgeballTeam__Team2     = 1,
	EScramDodgeballTeam__EScramDodgeballTeam_MAX = 2,

};

// Enum SportsScramble.EDodgeballEvent
enum class SportsScramble_EDodgeballEvent : uint8_t
{
	EDodgeballEvent__GeneratedItem = 0,
	EDodgeballEvent__PawnDead      = 1,
	EDodgeballEvent__LocalPlayerHit = 2,
	EDodgeballEvent__EDodgeballEvent_MAX = 3,

};

// Enum SportsScramble.ETennisRallyStage
enum class SportsScramble_ETennisRallyStage : uint8_t
{
	ETennisRallyStage__FirstServe  = 0,
	ETennisRallyStage__SecondServe = 1,
	ETennisRallyStage__Rally       = 2,
	ETennisRallyStage__ETennisRallyStage_MAX = 3,

};

// Enum SportsScramble.ETennisAIState
enum class SportsScramble_ETennisAIState : uint8_t
{
	ETennisAIState__Waiting        = 0,
	ETennisAIState__Intercepting   = 1,
	ETennisAIState__Overshooting   = 2,
	ETennisAIState__PreparingToServe = 3,
	ETennisAIState__Tossing        = 4,
	ETennisAIState__Serving        = 5,
	ETennisAIState__Recentering    = 6,
	ETennisAIState__GettingIntoServePosition = 7,
	ETennisAIState__BouncingBall   = 8,
	ETennisAIState__Reacting       = 9,
	ETennisAIState__ETennisAIState_MAX = 10,

};

// Enum SportsScramble.ETennisAIAnimNotify
enum class SportsScramble_ETennisAIAnimNotify : uint8_t
{
	ETennisAIAnimNotify__TossBall  = 0,
	ETennisAIAnimNotify__HitBall   = 1,
	ETennisAIAnimNotify__StandStill = 2,
	ETennisAIAnimNotify__SkipReaction = 3,
	ETennisAIAnimNotify__ETennisAIAnimNotify_MAX = 4,

};

// Enum SportsScramble.EScramTimeLinePlayMode
enum class SportsScramble_EScramTimeLinePlayMode : uint8_t
{
	EScramTimeLinePlayMode__Once   = 0,
	EScramTimeLinePlayMode__Loop   = 1,
	EScramTimeLinePlayMode__PingPong = 2,
	EScramTimeLinePlayMode__EScramTimeLinePlayMode_MAX = 3,

};

// Enum SportsScramble.EScramTimeLineCurveSpace
enum class SportsScramble_EScramTimeLineCurveSpace : uint8_t
{
	EScramTimeLineCurveSpace__LocalSpace = 0,
	EScramTimeLineCurveSpace__WorldSpace = 1,
	EScramTimeLineCurveSpace__EScramTimeLineCurveSpace_MAX = 2,

};

// Enum SportsScramble.EInfluencerRecentStatus
enum class SportsScramble_EInfluencerRecentStatus : uint8_t
{
	EInfluencerRecentStatus__Default = 0,
	EInfluencerRecentStatus__Discard = 1,
	EInfluencerRecentStatus__Bullseye = 2,
	EInfluencerRecentStatus__Snap  = 3,
	EInfluencerRecentStatus__Hint  = 4,
	EInfluencerRecentStatus__Miss  = 5,
	EInfluencerRecentStatus__EInfluencerRecentStatus_MAX = 6,

};

// Enum SportsScramble.EScramTrajectoryRegionBounceResult
enum class SportsScramble_EScramTrajectoryRegionBounceResult : uint8_t
{
	EScramTrajectoryRegionBounceResult__Invalid = 0,
	EScramTrajectoryRegionBounceResult__TooClose = 1,
	EScramTrajectoryRegionBounceResult__TooFar = 2,
	EScramTrajectoryRegionBounceResult__Good = 3,
	EScramTrajectoryRegionBounceResult__EScramTrajectoryRegionBounceResult_MAX = 4,

};

// Enum SportsScramble.ETrophyType
enum class SportsScramble_ETrophyType : uint8_t
{
	ETrophyType__Bronze            = 0,
	ETrophyType__Silver            = 1,
	ETrophyType__Gold              = 2,
	ETrophyType__ETrophyType_MAX   = 3,

};

// Enum SportsScramble.ESuccessFailure
enum class SportsScramble_ESuccessFailure : uint8_t
{
	ESuccessFailure__Success       = 0,
	ESuccessFailure__Failure       = 1,
	ESuccessFailure__ESuccessFailure_MAX = 2,

};

// Enum SportsScramble.EYesNo
enum class SportsScramble_EYesNo : uint8_t
{
	EYesNo__Yes                    = 0,
	EYesNo__No                     = 1,
	EYesNo__EYesNo_MAX             = 2,

};

// Enum SportsScramble.ESplineMovementMode
enum class SportsScramble_ESplineMovementMode : uint8_t
{
	ESplineMovementMode__Accelerate = 0,
	ESplineMovementMode__SlowToStop = 1,
	ESplineMovementMode__StayAtTopSpeed = 2,
	ESplineMovementMode__ApproachTopSpeed = 3,
	ESplineMovementMode__ESplineMovementMode_MAX = 4,

};

// Enum SportsScramble.ETennisReaction
enum class SportsScramble_ETennisReaction : uint8_t
{
	ETennisReaction__FistPump      = 0,
	ETennisReaction__SkyCry        = 1,
	ETennisReaction__HeadShake     = 2,
	ETennisReaction__ETennisReaction_MAX = 3,

};

// Enum SportsScramble.ETennisAnimState
enum class SportsScramble_ETennisAnimState : uint8_t
{
	ETennisAnimState__Idle         = 0,
	ETennisAnimState__Locomotion   = 1,
	ETennisAnimState__PrepForehand = 2,
	ETennisAnimState__PlayForehand = 3,
	ETennisAnimState__PrepBackhand = 4,
	ETennisAnimState__PlayBackhand = 5,
	ETennisAnimState__PrepService  = 6,
	ETennisAnimState__PlayService  = 7,
	ETennisAnimState__Reaction     = 8,
	ETennisAnimState__Trip         = 9,
	ETennisAnimState__ETennisAnimState_MAX = 10,

};

// Enum SportsScramble.ETennisAvatarAnimState
enum class SportsScramble_ETennisAvatarAnimState : uint8_t
{
	ETennisAvatarAnimState__Idle   = 0,
	ETennisAvatarAnimState__Spawn  = 1,
	ETennisAvatarAnimState__PlayForehand = 2,
	ETennisAvatarAnimState__PlayBackhand = 3,
	ETennisAvatarAnimState__PrepService = 4,
	ETennisAvatarAnimState__PlayService = 5,
	ETennisAvatarAnimState__ETennisAvatarAnimState_MAX = 6,

};

// Enum SportsScramble.ETennisBallType
enum class SportsScramble_ETennisBallType : uint8_t
{
	ETennisBallType__Any           = 0,
	ETennisBallType__Baseball      = 1,
	ETennisBallType__Basketball    = 2,
	ETennisBallType__BeachBall     = 3,
	ETennisBallType__Chicken       = 4,
	ETennisBallType__Fish          = 5,
	ETennisBallType__Football      = 6,
	ETennisBallType__PingPongBall  = 7,
	ETennisBallType__Shuttlecock   = 8,
	ETennisBallType__Soccerball    = 9,
	ETennisBallType__Softball      = 10,
	ETennisBallType__TennisBall    = 11,
	ETennisBallType__Wiffleball    = 12,
	ETennisBallType__AcceleratorBall = 13,
	ETennisBallType__GolfBall      = 14,
	ETennisBallType__Disc          = 15,
	ETennisBallType__Count         = 16,
	ETennisBallType__ETennisBallType_MAX = 17,

};

// Enum SportsScramble.ETennisShotType
enum class SportsScramble_ETennisShotType : uint8_t
{
	ETennisShotType__None          = 0,
	ETennisShotType__Light         = 1,
	ETennisShotType__Normal        = 2,
	ETennisShotType__NormalSlice   = 3,
	ETennisShotType__Charge        = 4,
	ETennisShotType__ChargeSlice   = 5,
	ETennisShotType__Count         = 6,
	ETennisShotType__ETennisShotType_MAX = 7,

};

// Enum SportsScramble.ETennisShotSpin
enum class SportsScramble_ETennisShotSpin : uint8_t
{
	ETennisShotSpin__Zero          = 0,
	ETennisShotSpin__Slow          = 1,
	ETennisShotSpin__Medium        = 2,
	ETennisShotSpin__Fast          = 3,
	ETennisShotSpin__Count         = 4,
	ETennisShotSpin__ETennisShotSpin_MAX = 5,

};

// Enum SportsScramble.ETennisShotSpeed
enum class SportsScramble_ETennisShotSpeed : uint8_t
{
	ETennisShotSpeed__Flub         = 0,
	ETennisShotSpeed__Light        = 1,
	ETennisShotSpeed__Medium       = 2,
	ETennisShotSpeed__Hard         = 3,
	ETennisShotSpeed__Count        = 4,
	ETennisShotSpeed__ETennisShotSpeed_MAX = 5,

};

// Enum SportsScramble.ETennisInstrumentType
enum class SportsScramble_ETennisInstrumentType : uint8_t
{
	ETennisInstrumentType__Any     = 0,
	ETennisInstrumentType__BaseballBat = 1,
	ETennisInstrumentType__CricketBat = 2,
	ETennisInstrumentType__FishRacket = 3,
	ETennisInstrumentType__FoamFinger = 4,
	ETennisInstrumentType__GolfClub = 5,
	ETennisInstrumentType__LacrosseStick = 6,
	ETennisInstrumentType__PingPongPaddle = 7,
	ETennisInstrumentType__PoolNoodle = 8,
	ETennisInstrumentType__TennisRacket = 9,
	ETennisInstrumentType__TennisRacketUpgrade01 = 10,
	ETennisInstrumentType__Count   = 11,
	ETennisInstrumentType__ETennisInstrumentType_MAX = 12,

};

// Enum SportsScramble.EBallThrowType
enum class SportsScramble_EBallThrowType : uint8_t
{
	EBallThrowType__UnderHand      = 0,
	EBallThrowType__OverHand       = 1,
	EBallThrowType__SideArm        = 2,
	EBallThrowType__EBallThrowType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SportsScramble.ScramFriend
// 0x0038
struct FScramFriend
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOnline;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XHFF[0x27];                                    // 0x0011(0x0027) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.ScramGloveThrowRecord
// 0x001C
struct FScramGloveThrowRecord
{
	float                                              SignalRiseSmoothTime;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SignalFallSmoothTime;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GestureStartSignal;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GestureStopSignal;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggeringSpeed;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3OP0[0x8];                                     // 0x0014(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingThrow
// 0x0004
struct FBowlingThrow
{
	SportsScramble_EBowlingThrowSpeed                  ThrowSpeed;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBowlingThrowSpin                   ThrowSpin;                                                 // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBowlingThrowType                   ThrowType;                                                 // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramSkill                         Skill;                                                     // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.MinMaxFloat
// 0x0008
struct FMinMaxFloat
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.ScramPrimitiveProperties
// 0x0060 (0x0068 - 0x0008)
struct FScramPrimitiveProperties : public FTableRowBase
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Mass;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalDamping;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardDamping;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DownwardDamping;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularDamping;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TopspinStrength;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BackspinStrength;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SidespinStrength;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLinearSpeed;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPhysicalAngularSpeed;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VisualAngularVelocityCoefficient;                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                BounceRange;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              AdjustmentRotationStep;                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdjustmentSpinStep;                                        // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdjustmentSpeedStep;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideMaxRegionBounces;                                  // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7R7C[0x3];                                     // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxRegionBounces;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularBounceFriction;                                     // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularRollFriction;                                       // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F2Y7[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.Angle
// 0x0004
struct FAngle
{
	float                                              Degrees;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct SportsScramble.BallFlightOscillation
// 0x0014
struct FBallFlightOscillation
{
	float                                              Speed;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                Range;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              WaveOffset;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmoothTime;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.ScramBallProperties
// 0x0060 (0x00C8 - 0x0068)
struct FScramBallProperties : public FScramPrimitiveProperties
{
	bool                                               BadmintonRules;                                            // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramStabilizationType             StabilizationType;                                         // 0x0069(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LYL6[0x2];                                     // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StabilizeSpinStrength;                                     // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StabilizeTumbleStrength;                                   // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiscusMinimumAngular;                                      // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardSpeedConversion;                                     // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardSpeedConversionLoss;                                 // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardSpeedConversionMultiplier;                           // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAngle                                      MaxRandomBounceAngle;                                      // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RandomBounceBias;                                          // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SplinePointTimeStep;                                       // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FlightOscillation;                                         // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0NE2[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OscillationStartDelayPercentage;                           // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBallFlightOscillation                      HorizontalOscillation;                                     // 0x0098(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FBallFlightOscillation                      VerticalOscillation;                                       // 0x00AC(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               OscillateBouncePosition;                                   // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGSV[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingBallProperties
// 0x00B8 (0x0180 - 0x00C8)
struct FBowlingBallProperties : public FScramBallProperties
{
	SportsScramble_EBowlingBallType                    BallType;                                                  // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_48PM[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 HorizontalThrowSpeedCurve;                                 // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 VerticalThrowSpeedCurve;                                   // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 HorizontalUpwardSpeedLimitCurve;                           // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrowRollSpinMultiplier;                                   // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrowPitchSpinMultiplier;                                  // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrowYawSpinMultiplier;                                    // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBowlingHookMethod                  HookMethod;                                                // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H8Q5[0x3];                                     // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HookStrength;                                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LaneAlignmentSmoothTime;                                   // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLaneAlignmentAngularSpeed;                              // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FirstBounceHookStrength;                                   // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeadSpeed;                                                 // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDeadTime;                                               // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrongWayMaxTime;                                           // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InfluenceSpeedDecay;                                       // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InfluenceRadiusModifier;                                   // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableDriftMotion;                                         // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DriftWithLaneBias;                                         // 0x011D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HOYQ[0x2];                                     // 0x011E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAngle                                      DriftDegrees;                                              // 0x0120(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DriftSmoothTime;                                           // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableDriftOnBounce;                                       // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z10H[0x3];                                     // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAngle                                      DriftBounceDegrees;                                        // 0x012C(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                DriftMaxBounce;                                            // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableVibrationMotion;                                     // 0x0134(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZXZ[0x3];                                     // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMinMaxFloat                                VibrationPeriod;                                           // 0x0138(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                VibrationYAxis;                                            // 0x0140(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                VibrationZAxis;                                            // 0x0148(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              VibrationPopChance;                                        // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     VibrationGrabRotationLimits;                               // 0x0154(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                VibrationGrabPeriod;                                       // 0x0160(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               UseReturnTrackHeightOverride;                              // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U47H[0x3];                                     // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReturnTrackHeightOverride;                                 // 0x016C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    AIHandRotationOffset;                                      // 0x0170(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2X3U[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.LightCone
// 0x0010
struct FLightCone
{
	class UStaticMeshComponent*                        mpMesh;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJL9[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.ScramGameInvite
// 0x0060
struct FScramGameInvite
{
	struct FScramFriend                                Inviter;                                                   // 0x0000(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TWHV[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BPUniqueNetId
// 0x0020
struct FBPUniqueNetId
{
	unsigned char                                      UnknownData_B7GR[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.SessionPropertyKeyPair
// 0x0020
struct FSessionPropertyKeyPair
{
	unsigned char                                      UnknownData_YPAR[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.SessionsSearchSetting
// 0x0028
struct FSessionsSearchSetting
{
	unsigned char                                      UnknownData_HTOL[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.MotionState
// 0x0038
struct FMotionState
{
	struct FVector_NetQuantize10                       Position;                                                  // 0x0000(0x000C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I1KZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0010(0x0010) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       LinearVelocity;                                            // 0x0020(0x000C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       AngularVelocity;                                           // 0x002C(0x000C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.ScramTrajectory
// 0x01F0
struct FScramTrajectory
{
	struct FMotionState                                InitialMotionState;                                        // 0x0000(0x0040) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               CheckBounces;                                              // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HX13[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AScramPrimitiveActor*                        Primitive;                                                 // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScramPrimitiveProperties                   mCachedPrimitiveProperties;                                // 0x0050(0x0068) (Protected, NativeAccessSpecifierProtected)
	struct FScramBallProperties                        mCachedBallProperties;                                     // 0x00B8(0x00C8) (Protected, NativeAccessSpecifierProtected)
	class UWorld*                                      World;                                                     // 0x0180(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPhysicalMaterial*                           FloorMaterial;                                             // 0x0188(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FloorZ;                                                    // 0x0190(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GravityZ;                                                  // 0x0194(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              mSimulatedTime;                                            // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M7F2[0x4];                                     // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMotionState                                mSimulatedMotionState;                                     // 0x01A0(0x0040) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	int                                                mNumSimulatedBounces;                                      // 0x01E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T1Z4[0xC];                                     // 0x01E4(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballShot
// 0x0003
struct FBaseballShot
{
	SportsScramble_EBaseballShotSpeed                  ShotSpeed;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBaseballShotType                   ShotType;                                                  // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SweetSpot;                                                 // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.MinMaxAngle
// 0x0008
struct FMinMaxAngle
{
	struct FAngle                                      Min;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAngle                                      Max;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BaseballBallProperties
// 0x0060 (0x0128 - 0x00C8)
struct FBaseballBallProperties : public FScramBallProperties
{
	SportsScramble_EBaseballBallType                   BallType;                                                  // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlwaysImbued;                                              // 0x00C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JFP9[0x2];                                     // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     MittDisplayScale;                                          // 0x00CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CorrectionIsCurveLocal;                                    // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HEOM[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AngularAxis;                                               // 0x00DC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxAngle                                ThrownAngularSpeedRange;                                   // 0x00E8(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              InstrumentDamage;                                          // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxBallSpeed;                                              // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TrajectoryTimeScale;                                       // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BatterSkillSpeedMultipliers[0x3];                          // 0x00FC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHeightAfterHit;                                         // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalDampingAfterHit;                                 // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardDampingAfterHit;                                     // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DownwardDampingAfterHit;                                   // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      RestitutionPerBounceAfterHit;                              // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BaseballNetworkUpdate
// 0x0200
struct FBaseballNetworkUpdate
{
	struct FScramTrajectory                            mTrajectory;                                               // 0x0000(0x01F0) (NativeAccessSpecifierPublic)
	struct FBaseballShot                               mShot;                                                     // 0x01F0(0x0003) (NoDestructor, NativeAccessSpecifierPublic)
	bool                                               mIsThrow;                                                  // 0x01F3(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3QNQ[0xC];                                     // 0x01F4(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballBallScrambleProperties
// 0x0078 (0x0080 - 0x0008)
struct FBaseballBallScrambleProperties : public FTableRowBase
{
	SportsScramble_EBaseballBallType                   BallType;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MAIF[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BallClass;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 SelectionMesh;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  SelectionMeshOffset;                                       // 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ScrambleIcon;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExcludedFromSelection;                                     // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExcludedFromRandomScrambler;                               // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExcludedFromEquipmentMatchingScrambler;                    // 0x005A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExcludedFromEquipMatchWarning;                             // 0x005B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BattingTeeInitialScale;                                    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0060(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JR4F[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.Chance
// 0x0004
struct FChance
{
	float                                              Percentage;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct SportsScramble.FielderAnimInstanceProxy
// 0x0020 (0x0590 - 0x0570)
struct FFielderAnimInstanceProxy : public FAnimInstanceProxy
{
	SportsScramble_EBaseballFielderAnimState           BlueprintDesiredState;                                     // 0x0570(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	SportsScramble_EBaseballFielderAnimState           DesiredState;                                              // 0x0571(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NCP8[0x2];                                     // 0x0572(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IdlePhase;                                                 // 0x0574(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RunAngle;                                                  // 0x0578(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RunSpeed;                                                  // 0x057C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LookUpAngle;                                               // 0x0580(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_64AP[0xC];                                     // 0x0584(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballGlobalSkillData
// 0x0010
struct FBaseballGlobalSkillData
{
	float                                              PitcherInfluencePercent;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitcherDirectionBiasPercent;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BatterDirectionBiasPercent;                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BatterExtraSwingSpeedPercent;                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.InferredContactParameters
// 0x0050
struct FInferredContactParameters
{
	SportsScramble_EInferredContactActivationMode      ActivationMode;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UY5Y[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RequiredSpeedThreshold;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 PullAlphaCurve;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxAngle                                SwingVelocityYawRange;                                     // 0x0010(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMinMaxAngle                                SwingYawRangeAroundPull;                                   // 0x0018(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMinMaxAngle                                SwingVelocityPitchRange;                                   // 0x0020(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                CriticalFractionRange;                                     // 0x0028(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAngle                                      FoulYawThreshold;                                          // 0x0030(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMinMaxAngle                                FoulYawRange;                                              // 0x0034(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ContactArmLength;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ContactRangeFront;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ContactRangeBack;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxContactDelay;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeUntilTrackingIsReliable;                               // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BaseballGlobalData
// 0x0240
struct FBaseballGlobalData
{
	class UDataTable*                                  ShotSpeedProperties;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ShotTypeProperties;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBaseballGlobalSkillData                    SkillData[0x3];                                            // 0x0010(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        BattingLeftPlayAreaMin;                                    // 0x0040(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        BattingLeftPlayAreaMax;                                    // 0x005C(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        BattingLeftHazardAreaMax;                                  // 0x0078(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        BattingLeftAvatarArea;                                     // 0x0094(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        BattingRightPlayAreaMin;                                   // 0x00B0(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        BattingRightPlayAreaMax;                                   // 0x00CC(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        BattingRightHazardAreaMax;                                 // 0x00E8(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        BattingRightAvatarArea;                                    // 0x0104(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FInferredContactParameters                  InferredContactParameters;                                 // 0x0120(0x0050) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GUJU[0xD0];                                    // 0x0170(0x00D0) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.ScramInstrumentSwingGesture
// 0x001C
struct FScramInstrumentSwingGesture
{
	float                                              SignalRiseSmoothTime;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SignalFallSmoothTime;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GestureStartSignal;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GestureStopSignal;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggeringSpeed;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UQ5R[0x8];                                     // 0x0014(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.InferredHit
// 0x0010
struct FInferredHit
{
	class AScramBall*                                  mpBall;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V9LD[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.ScramInstrumentProperties
// 0x0000 (0x0068 - 0x0068)
struct FScramInstrumentProperties : public FScramPrimitiveProperties
{

};

// ScriptStruct SportsScramble.ScramInstrumentRegion
// 0x001C
struct FScramInstrumentRegion
{
	struct FVector                                     Min;                                                       // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Max;                                                       // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramInstrumentRegionType          RegionType;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_38PW[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballInstrumentSideProperties
// 0x000C
struct FBaseballInstrumentSideProperties
{
	SportsScramble_EBaseballShotSpeed                  SpeedCap;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2YM9[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ChargePerBallType;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChargePerStroke;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BaseballInstrumentProperties
// 0x0068 (0x00D0 - 0x0068)
struct FBaseballInstrumentProperties : public FScramInstrumentProperties
{
	SportsScramble_EBaseballInstrumentType             InstrumentType;                                            // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V3LH[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBaseballInstrumentSideProperties           SideProperties[0x6];                                       // 0x006C(0x0048) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KP1B[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 SweetSpotCurve;                                            // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalHealth;                                               // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BreaksOnChargeHit;                                         // 0x00C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S37E[0x3];                                     // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FChance                                     FoulChance;                                                // 0x00C8(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y86J[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.RandomActor
// 0x0020
struct FRandomActor
{
	class UClass*                                      ActorClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B3F2[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 SelectedWeightMultiplier;                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                mSelectionCount;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              mCachedWeight;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct SportsScramble.BaseballInstrumentEntryProperties
// 0x0038 (0x0040 - 0x0008)
struct FBaseballInstrumentEntryProperties : public FTableRowBase
{
	SportsScramble_EBaseballInstrumentType             InstrumentType;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C6HR[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      InstrumentClass;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1Y1L[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 SelectedWeightMultiplier;                                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectionExtraSpacing;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BW96[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  ScrambleIcon;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExcludedFromDebugSelection;                                // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExcludedFromRandomScrambler;                               // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExcludedFromEquipMatchingScrambler;                        // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExcludedFromEquipMatchWarning;                             // 0x003B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2N85[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.RandomActorTable
// 0x0020
struct FRandomActorTable
{
	TArray<struct FRandomActor>                        RandomActors;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FRandomActor>                        mWorkingActors;                                            // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct SportsScramble.BaseballMittSkillVariations
// 0x000C
struct FBaseballMittSkillVariations
{
	bool                                               GrabToCatch;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3X3[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GrabEarlyTime;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrabLateTime;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.MittSpawnInfo
// 0x0010
struct FMittSpawnInfo
{
	class UClass*                                      BallClass;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Imbued;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S10X[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.MittBallRecord
// 0x0010
struct FMittBallRecord
{
	class ABaseballBall*                               mpBall;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1U9O[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.MittBallRecordSet
// 0x0010
struct FMittBallRecordSet
{
	TArray<struct FMittBallRecord>                     mList;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.PitchingPropInstance
// 0x0010
struct FPitchingPropInstance
{
	class AActor*                                      mpObject;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FEPX[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.PitchingProp
// 0x0030
struct FPitchingProp
{
	int                                                SupportedBallTypes;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NCO3[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ActorType;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnLocation;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_81UG[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       SpawnRotation;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BallHit
// 0x0020
struct FSportsScramble_FBallHit
{
	class AScramBall*                                  mpBall;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     mLocation;                                                 // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     mNormal;                                                   // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.RunnerAnimInstanceProxy
// 0x0010 (0x0580 - 0x0570)
struct FRunnerAnimInstanceProxy : public FAnimInstanceProxy
{
	SportsScramble_EBaseballRunnerAnimState            DesiredState;                                              // 0x0570(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	SportsScramble_EBaseballRunnerAnimState            BlueprintDesiredState;                                     // 0x0571(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_54CD[0xE];                                     // 0x0572(0x000E) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingGlobalData
// 0x01C0
struct FBowlingGlobalData
{
	struct FDataTableRowHandle                         ThrowSpeedProperties[0x4];                                 // 0x0000(0x0040) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                         ThrowSpinProperties[0x4];                                  // 0x0040(0x0040) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                         ThrowTypeProperties[0x3];                                  // 0x0080(0x0030) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMinMaxAngle                                HookPitchRange;                                            // 0x00B0(0x0008) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              DownLaneAssistPercent[0x3];                                // 0x00B8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AvoidGuttersAssistPercent[0x3];                            // 0x00C4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SplineAssistPercent[0x3];                                  // 0x00D0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               EnableClientAuthority;                                     // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YOMR[0xE3];                                    // 0x00DD(0x00E3) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.GutterBallRecord
// 0x0010
struct FGutterBallRecord
{
	class ABowlingBall*                                mpBall;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EQSF[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.GutterBallTracker
// 0x0018
struct FGutterBallTracker
{
	TArray<struct FGutterBallRecord>                   mList;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KN3I[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingLaneRegion
// 0x0020
struct FBowlingLaneRegion
{
	struct FBox                                        Region;                                                    // 0x0000(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	SportsScramble_EScramIntersectRadiusMode           RadiusMode;                                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6VQH[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingLanePitRegion
// 0x0004 (0x0024 - 0x0020)
struct FBowlingLanePitRegion : public FBowlingLaneRegion
{
	SportsScramble_EBowlingLanePitCorrection           Correction;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4HNY[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingLaneAIDifficultyData
// 0x0010
struct FBowlingLaneAIDifficultyData
{
	float                                              LeftAccuracy;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MiddleAccuracy;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightAccuracy;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChance                                     ThrowHookChance;                                           // 0x000C(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BowlingLaneAIData
// 0x0060
struct FBowlingLaneAIData
{
	struct FBowlingLaneAIDifficultyData                EasyData;                                                  // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBowlingLaneAIDifficultyData                NormalData;                                                // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBowlingLaneAIDifficultyData                HardData;                                                  // 0x0020(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<SportsScramble_EBowlingBallType>            GreatBalls;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<SportsScramble_EBowlingBallType>            BadBalls;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EOHI[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.InfluenceMapper
// 0x0010
struct FInfluenceMapper
{
	class UCurveFloat*                                 RemapCurve;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MapDistanceInfluence;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MapAngleInfluence;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MapSpeedInfluence;                                         // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_96OP[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingBallCurveInfluenceDatum
// 0x0018
struct FBowlingBallCurveInfluenceDatum
{
	class ABowlingBall*                                mpBall;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BQID[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingRoll
// 0x0008
struct FBowlingRoll
{
	int                                                Pins;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBowlingRollResult                  Result;                                                    // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IN8N[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingScrambleList
// 0x0038
struct FBowlingScrambleList
{
	struct FRandomActorTable                           BallClasses;                                               // 0x0000(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FName>                               LaneList;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               RandomizeLaneOrder;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GDKC[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingScrambleState
// 0x0080
struct FBowlingScrambleState
{
	int                                                Round;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Player1Wins;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Player2Wins;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5TER[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBowlingScrambleList                        Round1List;                                                // 0x0010(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBowlingScrambleList                        Round2List;                                                // 0x0048(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.DodgeballShot
// 0x0003
struct FDodgeballShot
{
	SportsScramble_EDodgeballShotSpeed                 ShotSpeed;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EDodgeballShotSpin                  ShotSpin;                                                  // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EDodgeballShotType                  ShotType;                                                  // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.DodgeballBallProperties
// 0x0010 (0x00D8 - 0x00C8)
struct FDodgeballBallProperties : public FScramBallProperties
{
	SportsScramble_EDodgeballBallType                  BallType;                                                  // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_40F1[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SpeedCapModifier;                                          // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpinCapModifier;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MH4J[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingLaneFrictionRegion
// 0x0018 (0x0038 - 0x0020)
struct FBowlingLaneFrictionRegion : public FBowlingLaneRegion
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RegionDirection;                                           // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9NUK[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingFrame
// 0x0010
struct FBowlingFrame
{
	struct FBowlingRoll                                Roll1;                                                     // 0x0000(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBowlingRoll                                Roll2;                                                     // 0x0008(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BowlingFrameSet
// 0x0020
struct FBowlingFrameSet
{
	TArray<struct FBowlingFrame>                       Frames;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBowlingRoll                                BonusRoll1;                                                // 0x0010(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBowlingRoll                                BonusRoll2;                                                // 0x0018(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.DodgeballGlobalData
// 0x0258
struct FDodgeballGlobalData
{
	struct FDataTableRowHandle                         ShotSpeedProperties[0x4];                                  // 0x0000(0x0040) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                         ShotSpinProperties[0x4];                                   // 0x0040(0x0040) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                         ShotTypeProperties[0x5];                                   // 0x0080(0x0050) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMinMaxFloat                                ForehandSlicePitchRange;                                   // 0x00D0(0x0008) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMinMaxFloat                                BackhandSlicePitchRange;                                   // 0x00D8(0x0008) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ODSZ[0x178];                                   // 0x00E0(0x0178) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.NetworkMotionState
// 0x0018 (0x0050 - 0x0038)
struct FNetworkMotionState : public FMotionState
{
	class AScramPrimitiveActor*                        mpOwner;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                mTickCount;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DAJK[0xC];                                     // 0x0044(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.ManagedNetworkMotionState
// 0x0000 (0x0050 - 0x0050)
struct FManagedNetworkMotionState : public FNetworkMotionState
{

};

// ScriptStruct SportsScramble.TennisInstrumentSideProperties
// 0x000C
struct FTennisInstrumentSideProperties
{
	SportsScramble_ETennisShotSpeed                    SpeedCap;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ETennisShotSpin                     SpinCap;                                                   // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CGIZ[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ChargePerBallType;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChargePerStroke;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BowlingThrowParameters
// 0x0020
struct FBowlingThrowParameters
{
	struct FMinMaxAngle                                PitchRange;                                                // 0x0000(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMinMaxAngle                                YawRange;                                                  // 0x0008(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                SpeedRange;                                                // 0x0010(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChance                                     HookChance;                                                // 0x0018(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAngle                                      MinYawForHook;                                             // 0x001C(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.TennisBallProperties
// 0x0060 (0x0128 - 0x00C8)
struct FTennisBallProperties : public FScramBallProperties
{
	SportsScramble_ETennisBallType                     BallType;                                                  // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C34G[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SpeedCapModifier;                                          // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpinCapModifier;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreApexTimeScale;                                          // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PostApexTimeScale;                                         // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FirstBounceTimeScale;                                      // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedMultiplierPerShotType[0x6];                           // 0x00E0(0x0018) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedMultiplierAfterFirstBouncePerShotType[0x6];           // 0x00F8(0x0018) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 SmallPlayAreaRallyTimeScaleMultiplier;                     // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 LargePlayAreaRallyTimeScaleMultiplier;                     // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChance                                     OutOfPlayChanceModifier;                                   // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_69HM[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.TennisBoxHit
// 0x0010
struct FTennisBoxHit
{
	class AScramBall*                                  mpBall;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JZPI[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.TennisGlobalSkillData
// 0x0010
struct FTennisGlobalSkillData
{
	struct FChance                                     BaseOutOfPlayChance;                                       // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChance                                     ChargeShotOutOfPlayChance;                                 // 0x0004(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DownCourtBiasPercent;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraSwingSpeedPercent;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.TennisInstrumentProperties
// 0x0050 (0x00B8 - 0x0068)
struct FTennisInstrumentProperties : public FScramInstrumentProperties
{
	SportsScramble_ETennisInstrumentType               InstrumentType;                                            // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_75HC[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FChance                                     OutOfPlayChanceModifier;                                   // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FTennisInstrumentSideProperties             SideProperties[0x6];                                       // 0x0070(0x0048) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BaseballStrikeZoneAreaValues
// 0x0014
struct FBaseballStrikeZoneAreaValues
{
	float                                              UL;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UR;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LL;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LR;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ball;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BaseballResultRegionChances
// 0x001C
struct FBaseballResultRegionChances
{
	float                                              Left;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Center;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Right;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PopFly;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SweetSpot;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineDrive;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GroundBall;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.SteeringParameters
// 0x0018
struct FSteeringParameters
{
	float                                              MaxSpeed;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxForce;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ApproachDist;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ApproachStrength;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AvoidDist;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AvoidStrength;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.CoverVignette
// 0x0020
struct FCoverVignette
{
	SportsScramble_ECoverVignetteType                  Type;                                                      // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R33K[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Sound1;                                                    // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound2;                                                    // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UNKN[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.ScramSportPreferences
// 0x0003
struct FScramSportPreferences
{
	bool                                               AllowTennis;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowBaseball;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowBowling;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.AvatarLook
// 0x0020
struct FAvatarLook
{
	struct FName                                       AvatarDefinition;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SkinColor;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HairColor;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TeamColor;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.ScramTrajectoryRegion
// 0x0050
struct FScramTrajectoryRegion
{
	float                                              RightMargin;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LeftMargin;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinSpaceBetweenLeftRightMargins;                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TopMargin;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TopMarginAddForFootball;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BottomMargin;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RightPressure;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LeftPressure;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TopPressure;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BottomPressure;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinBounceScale;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               SingleBounce;                                              // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               AutoSpinY;                                                 // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               FillCourt;                                                 // 0x002E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	SportsScramble_EScramIntersectRadiusMode           RadiusMode;                                                // 0x002F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XNKQ[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.FutureBallHit
// 0x0030
struct FFutureBallHit
{
	class UObject*                                     mpBallHitterObject;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSportsScramble_FBallHit                    mHit;                                                      // 0x0008(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              mTime;                                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HFZA[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.TennisShot
// 0x0003
struct FTennisShot
{
	SportsScramble_ETennisShotSpeed                    ShotSpeed;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ETennisShotSpin                     ShotSpin;                                                  // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ETennisShotType                     ShotType;                                                  // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.TennisBallNetworkUpdate
// 0x0260
struct FTennisBallNetworkUpdate
{
	struct FScramTrajectory                            mTrajectory;                                               // 0x0000(0x01F0) (NativeAccessSpecifierPublic)
	struct FFutureBallHit                              mFutureBallHit;                                            // 0x01F0(0x0030) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         mFutureBallHitPosition;                                    // 0x0220(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FTennisShot                                 mShot;                                                     // 0x022C(0x0003) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JOLY[0x1];                                     // 0x022F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      mpSender;                                                  // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      mpTarget;                                                  // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               mLandIn;                                                   // 0x0240(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               mAvoidCenter;                                              // 0x0241(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               mValidBounce;                                              // 0x0242(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZZOI[0x1];                                     // 0x0243(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              mFirstBounceTime;                                          // 0x0244(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              mSecondBounceTime;                                         // 0x0248(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               mCanDesync;                                                // 0x024C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TTDO[0x3];                                     // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                mDesyncBounce;                                             // 0x0250(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UR4P[0xC];                                     // 0x0254(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.CommonPlayerPreferences
// 0x0002
struct FCommonPlayerPreferences
{
	SportsScramble_EScramGrabMode                      GrabMode;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramHandedness                    Handedness;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.TennisPlayerPreferences
// 0x0003
struct FTennisPlayerPreferences
{
	SportsScramble_EScramSkill                         Skill;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramHandedness                    Handedness;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ETennisServiceStyle                 ServiceStyle;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BaseballPitcherPreferences
// 0x0003
struct FBaseballPitcherPreferences
{
	SportsScramble_EScramSkill                         Skill;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramSkill                         CatchingSkill;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramHandedness                    Handedness;                                                // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BaseballBatterPreferences
// 0x0003
struct FBaseballBatterPreferences
{
	SportsScramble_EScramSkill                         Skill;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramHandedness                    Handedness;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBattingSide                        Side;                                                      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BowlingPlayerPreferences
// 0x0001
struct FBowlingPlayerPreferences
{
	SportsScramble_EScramSkill                         Skill;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.ScramPartialTransform
// 0x0020
struct FScramPartialTransform
{
	struct FVector_NetQuantize                         mPosition;                                                 // 0x0000(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6WS1[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       mRotation;                                                 // 0x0010(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.PlayerTransforms
// 0x00C0
struct FPlayerTransforms
{
	struct FScramPartialTransform                      mBodyTransform;                                            // 0x0000(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FScramPartialTransform                      mHeadTransform;                                            // 0x0020(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FScramPartialTransform                      mLeftHandTransform;                                        // 0x0040(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FScramPartialTransform                      mRightHandTransform;                                       // 0x0060(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FScramPartialTransform                      mLeftGrabbableTransform;                                   // 0x0080(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FScramPartialTransform                      mRightGrabbableTransform;                                  // 0x00A0(0x0020) (NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.PlayerTennisReturn
// 0x0030
struct FPlayerTennisReturn
{
	struct FScramPartialTransform                      mTransform;                                                // 0x0000(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              mTime;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RCUS[0xC];                                     // 0x0024(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.TrophyDefinition
// 0x00B8 (0x00C0 - 0x0008)
struct FTrophyDefinition : public FTableRowBase
{
	struct FName                                       TrophyID;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ETrophyType                         TrophyType;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EXVU[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TrophyTitle;                                               // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       TrophyDescription;                                         // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                TrophyRequirement;                                         // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EScramSport                         Sport;                                                     // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TPN1[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TrophyPropClass[0x28];                                     // 0x004D(0x0028) UNKNOWN PROPERTY: SoftClassProperty SportsScramble.TrophyDefinition.TrophyPropClass
	unsigned char                                      UnknownData_NB6V[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TrophyPropMenuOffsets;                                     // 0x0080(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      TrophyAwardListenerClass;                                  // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZK67[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.SwapCurve
// 0x0070
struct FSwapCurve
{
	class UStaticMesh*                                 Icon;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_40Q6[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  BaseIconTransform;                                         // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 IconYawCurve;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 IconDepthCurve;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 IconScaleCurve;                                            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 GlowLerpCurve;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                GlowColorCurve;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AE89[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballPlayerPreferences
// 0x0006
struct FBaseballPlayerPreferences
{
	struct FBaseballPitcherPreferences                 PitcherPreferences;                                        // 0x0000(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBaseballBatterPreferences                  BatterPreferences;                                         // 0x0003(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.ScramPlayerPreferences
// 0x000C
struct FScramPlayerPreferences
{
	struct FCommonPlayerPreferences                    CommonPreferences;                                         // 0x0000(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTennisPlayerPreferences                    TennisPreferences;                                         // 0x0002(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBaseballPlayerPreferences                  BaseballPreferences;                                       // 0x0005(0x0006) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBowlingPlayerPreferences                   BowlingPreferences;                                        // 0x000B(0x0001) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.ScramUserSettingsAudio
// 0x0001
struct FScramUserSettingsAudio
{
	bool                                               UseVoiceChat;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BaseballBallTrackingHelper
// 0x0050
struct FBaseballBallTrackingHelper
{
	TArray<class ABaseballBall*>                       mMasterBallList;                                           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F1MT[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABaseballBall*>                       mUnclassified;                                             // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ABaseballBall*>                       mPitchedBalls;                                             // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ABaseballBall*>                       mFieldedBalls;                                             // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.InPlayBallTracker
// 0x0018
struct FInPlayBallTracker
{
	class ATennisBall*                                 mpBall;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATennisBall*                                 mpLastBall;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           mBallGeneration;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J9ES[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.ScramTennisAIShotProperties
// 0x0040
struct FScramTennisAIShotProperties
{
	float                                              HitPercentage;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                ShotSpeed;                                                 // 0x0008(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                BounceLengthFraction;                                      // 0x0010(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MissShotVariation;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8C8A[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 HitMoveDistanceModifier;                                   // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 HitBallSpeedModifier;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlicePercentage;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                SliceStrength;                                             // 0x0034(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LobPercentage;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.ScramSettings
// 0x0001
struct FScramSettings
{
	struct FScramUserSettingsAudio                     AudioSettings;                                             // 0x0000(0x0001) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.SwapVisuals
// 0x0100
struct FSwapVisuals
{
	class UStaticMesh*                                 GrabIcon;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ReleaseIcon;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 CollarMesh;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 HandMesh;                                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSwapCurve                                  InitialCurve;                                              // 0x0020(0x0070) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSwapCurve                                  ConfirmCurve;                                              // 0x0090(0x0070) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.TennisPlayerHandicap
// 0x000C
struct FTennisPlayerHandicap
{
	int                                                ScoreThreshold;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChance                                     BaseOutOfPlayChanceModifier;                               // 0x0004(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChance                                     ChargeShotOutOfPlayChanceModifier;                         // 0x0008(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.TennisGlobalData
// 0x03F8
struct FTennisGlobalData
{
	struct FDataTableRowHandle                         ShotSpeedProperties[0x4];                                  // 0x0000(0x0040) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                         ShotSpinProperties[0x4];                                   // 0x0040(0x0040) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                         ShotTypeProperties[0x6];                                   // 0x0080(0x0060) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FAngle                                      MaxSliceSwingPitch;                                        // 0x00E0(0x0004) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMinMaxAngle                                ForehandSliceSpinPitchRange;                               // 0x00E4(0x0008) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMinMaxAngle                                BackhandSliceSpinPitchRange;                               // 0x00EC(0x0008) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              SmallPlayAreaDiagonal;                                     // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LargePlayAreaDiagonal;                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMinMaxFloat                                ReturnHeightRange;                                         // 0x00FC(0x0008) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              MaxAvoidanceZ;                                             // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinimumInDistance;                                         // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinimumOutDistance;                                        // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OutOfPlayEvaluationDistance;                               // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A0RP[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 AvoidCenterChanceCurve;                                    // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AvoidCenterDistance;                                       // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTennisPlayerHandicap                       LeadingHandicap;                                           // 0x0124(0x000C) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTennisPlayerHandicap                       LosingHandicap;                                            // 0x0130(0x000C) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTennisGlobalSkillData                      SkillData[0x3];                                            // 0x013C(0x0030) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EBWI[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInferredContactParameters                  InferredContactParameters;                                 // 0x0170(0x0050) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P5E2[0x238];                                   // 0x01C0(0x0238) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballBatterAIResultTweakTableRow
// 0x0018 (0x0020 - 0x0008)
struct FBaseballBatterAIResultTweakTableRow : public FTableRowBase
{
	SportsScramble_EBaseballBallType                   BallType;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FXRG[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GroundBall;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SweetSpot;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineDrive;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PopFly;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U4XX[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballBatterAITweakTableRow
// 0x0038 (0x0040 - 0x0008)
struct FBaseballBatterAITweakTableRow : public FTableRowBase
{
	SportsScramble_EBaseballBallType                   BallType;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ENLN[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AluminumBat;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseballBat;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CricketBat;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FishRacket;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FoamFinger;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GolfClub;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HockeyStick;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PingPongPaddle;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoolNoodle;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoolCue;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TennisRacket;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GoldenBat;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0COF[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballPitcherAIScrambleProperties
// 0x0028 (0x0030 - 0x0008)
struct FBaseballPitcherAIScrambleProperties : public FTableRowBase
{
	SportsScramble_EBaseballBallType                   Ball;                                                      // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SE2Q[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PitchMinSpeed;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMaxSpeed;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TrajectoryTimeScale;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceUL;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceUR;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceLL;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceLR;                                                  // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceBALL;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KSNR[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballShotTypeProperties
// 0x0010 (0x0018 - 0x0008)
struct FBaseballShotTypeProperties : public FTableRowBase
{
	SportsScramble_EBaseballShotType                   ShotType;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideMaxLinearSpeed;                                    // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_981W[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxLinearSpeedOverride;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxMultiplayerHitSpeed;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AAGK[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballShotSpeedProperties
// 0x0008 (0x0010 - 0x0008)
struct FBaseballShotSpeedProperties : public FTableRowBase
{
	SportsScramble_EBaseballShotSpeed                  Speed;                                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5ZOA[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxLinearSpeed;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BPFriendPresenceInfo
// 0x0018
struct FBPFriendPresenceInfo
{
	bool                                               bIsOnline;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlaying;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlayingThisGame;                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsJoinable;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasVoiceSupport;                                          // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBPOnlinePresenceState              PresenceState;                                             // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9XD8[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StatusString;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BPFriendInfo
// 0x0068
struct FBPFriendInfo
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RealName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EBPOnlinePresenceState              OnlineState;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2BMJ[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBPUniqueNetId                              UniqueNetId;                                               // 0x0028(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsPlayingSameGame;                                        // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_64VH[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBPFriendPresenceInfo                       PresenceInfo;                                              // 0x0050(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BPOnlineUser
// 0x0040
struct FBPOnlineUser
{
	struct FBPUniqueNetId                              UniqueNetId;                                               // 0x0000(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RealName;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BPOnlineRecentPlayer
// 0x0010 (0x0050 - 0x0040)
struct FBPOnlineRecentPlayer : public FBPOnlineUser
{
	struct FString                                     LastSeen;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BPUserOnlineAccount
// 0x0010
struct FBPUserOnlineAccount
{
	unsigned char                                      UnknownData_SNGB[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingThrowTypeProperties
// 0x0018 (0x0020 - 0x0008)
struct FBowlingThrowTypeProperties : public FTableRowBase
{
	float                                              HookStrengthMultiplier;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LaneAlignmentSmoothTimeMultiplier;                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BiasDownlane;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AvoidGutters;                                              // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideMaxLinearSpeed;                                    // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3MT2[0x1];                                     // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxLinearSpeedOverride;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideMaxAngularSpeed;                                   // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8J00[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxAngularSpeedOverride;                                   // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.BowlingThrowSpinProperties
// 0x0008 (0x0010 - 0x0008)
struct FBowlingThrowSpinProperties : public FTableRowBase
{
	float                                              MaxAngularSpeed;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PIB5[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BowlingThrowSpeedProperties
// 0x0008 (0x0010 - 0x0008)
struct FBowlingThrowSpeedProperties : public FTableRowBase
{
	float                                              MaxLinearSpeed;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NUSE[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.DodgeballShotTypeProperties
// 0x0028 (0x0030 - 0x0008)
struct FDodgeballShotTypeProperties : public FTableRowBase
{
	float                                              TopspinMultiplier;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BackspinMultiplier;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SidespinMultiplier;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideMaxLinearSpeed;                                    // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GK9A[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxLinearSpeedOverride;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideMaxAngularSpeed;                                   // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OX5L[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxAngularSpeedOverride;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxMultiplayerHitSpeed;                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxMultiplayerServeSpeed;                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AndroidMultiplayerTimeScale;                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.DodgeballShotSpinProperties
// 0x0008 (0x0010 - 0x0008)
struct FDodgeballShotSpinProperties : public FTableRowBase
{
	float                                              MaxAngularSpeed;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BAQT[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.DodgeballShotSpeedProperties
// 0x0008 (0x0010 - 0x0008)
struct FDodgeballShotSpeedProperties : public FTableRowBase
{
	float                                              MaxLinearSpeed;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FOQG[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.DodgeballInstrumentSideProperties
// 0x000C
struct FDodgeballInstrumentSideProperties
{
	SportsScramble_EDodgeballShotSpeed                 SpeedCap;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_EDodgeballShotSpin                  SpinCap;                                                   // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QIHO[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ChargePerBallType;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChargePerStroke;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.DodgeballInstrumentProperties
// 0x0050 (0x00B8 - 0x0068)
struct FDodgeballInstrumentProperties : public FScramInstrumentProperties
{
	SportsScramble_EDodgeballInstrumentType            InstrumentType;                                            // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2C1Q[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDodgeballInstrumentSideProperties          SideProperties[0x6];                                       // 0x006C(0x0048) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_98IZ[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.MotionSpline
// 0x0060
struct FMotionSpline
{
	unsigned char                                      UnknownData_NHJ2[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.MotionSplineArc
// 0x000C
struct FMotionSplineArc
{
	unsigned char                                      UnknownData_NI6R[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.MotionSplinePoint
// 0x0050
struct FMotionSplinePoint
{
	unsigned char                                      UnknownData_38I5[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.PlayByPlayClipBase
// 0x0048 (0x0050 - 0x0008)
struct FPlayByPlayClipBase : public FTableRowBase
{
	SportsScramble_EPlayByPlayEventInstigator          Instigator;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FS9B[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Clip[0x28];                                                // 0x0009(0x0028) UNKNOWN PROPERTY: SoftObjectProperty SportsScramble.PlayByPlayClipBase.Clip
	float                                              Chance;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMinMaxFloat                                Delay;                                                     // 0x003C(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinTimeBetweenEvents;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Queueable;                                                 // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FN7E[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.PlayByPlayClip
// 0x0008 (0x0058 - 0x0050)
struct FPlayByPlayClip : public FPlayByPlayClipBase
{
	unsigned char                                      UnknownData_RBO4[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.BaseballPlayByPlayClip
// 0x0008 (0x0060 - 0x0058)
struct FBaseballPlayByPlayClip : public FPlayByPlayClip
{
	SportsScramble_EBaseballPlayByPlayEvent            Event;                                                     // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YF7[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.TennisPlayByPlayClip
// 0x0008 (0x0060 - 0x0058)
struct FTennisPlayByPlayClip : public FPlayByPlayClip
{
	SportsScramble_ETennisPlayByPlayEvent              Event;                                                     // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S8NR[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.RefCount
// 0x0004
struct FRefCount
{
	unsigned char                                      UnknownData_MWW5[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.ScramTennisAIScrambleProperties
// 0x0020 (0x0028 - 0x0008)
struct FScramTennisAIScrambleProperties : public FTableRowBase
{
	SportsScramble_ETennisInstrumentType               Instrument;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SportsScramble_ETennisBallType                     Ball;                                                      // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I4MP[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ShotSpeedMod;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShotMissMod;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliceChanceMod;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliceMissMod;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliceStrengthMod;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LobChanceMod;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LobMissMod;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SportsScramble.TennisShotTypeProperties
// 0x0040 (0x0048 - 0x0008)
struct FTennisShotTypeProperties : public FTableRowBase
{
	float                                              TopspinMultiplier;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BackspinMultiplier;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SidespinMultiplier;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmallPlayAreaSpeedMultiplier;                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LargePlayAreaSpeedMultiplier;                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideMaxLinearSpeed;                                    // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BDO1[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxLinearSpeedOverride;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OverrideMaxAngularSpeed;                                   // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K1H4[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxAngularSpeedOverride;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InfluencePercent[0x3];                                     // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SkillSpeedMultipliers[0x3];                                // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VAZI[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.TennisShotSpinProperties
// 0x0008 (0x0010 - 0x0008)
struct FTennisShotSpinProperties : public FTableRowBase
{
	float                                              MaxAngularSpeed;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XNW3[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct SportsScramble.TennisShotSpeedProperties
// 0x0008 (0x0010 - 0x0008)
struct FTennisShotSpeedProperties : public FTableRowBase
{
	float                                              MaxLinearSpeed;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SBSD[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
